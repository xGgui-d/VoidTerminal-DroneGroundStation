#include "model.h"
#include <QFile>
#include <QTextStream>
#include <QVarLengthArray>
#include <QtOpenGL>

/*装载纹理*/
void Model::loadTextures(int index)
{
    //qDebug()<<"加载纹理"<<endl;
    QString str;
    str = ":/modelSkin/modelSkins/droneTex"+QString::number(index+1)+".png";

    QImage tex, buf;
    if(!buf.load(str))
    {
        qWarning("Cannot open the image...");
        QImage dummy(128, 128, QImage::Format_RGB32);//当没找到所需打开的图片时，创建一副128*128大小，深度为32位的位图
        dummy.fill(Qt::yellow);
        buf = dummy;
    }
    tex = QGLWidget::convertToGLFormat(buf);//将Qt图片的格式buf转换成opengl的图片格式tex
    glGenTextures(1, &m_texture);//开辟一个纹理内存，内存指向texture
    glBindTexture(GL_TEXTURE_2D, m_texture);//将创建的纹理内存指向的内容绑定到纹理对象GL_TEXTURE_2D上
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, tex.width(), tex.height(), 0, GL_RGBA, GL_UNSIGNED_BYTE, tex.bits());//开始真正创建纹理数据
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);//当所显示的纹理比加载进来的纹理小时，采用GL_LINEAR的方法来处理
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);//当所显示的纹理比加载进来的纹理大时，采用GL_LINEAR的方法来处理
}

Model::Model()
{

}

//解析obj模型数据
void Model::parseObj(const QString filePath)
{
    //qDebug()<<"解析模型"<<endl;
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly))
        return;

    Point3d boundsMin( 1e9, 1e9, 1e9);
    Point3d boundsMax(-1e9,-1e9,-1e9);

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString input = in.readLine();
        if (input.isEmpty() || input[0] == '#')
            continue;

        QTextStream ts(&input);
        QString id;
        ts >> id;

        if (id == "v") {
            Point3d p;
            for (int i = 0; i < 3; ++i) {
                ts >> p[i];
                //将点的坐标值从小到大排序
                boundsMin[i] = qMin(boundsMin[i], p[i]);
                //将点的坐标值从大到小排序
                boundsMax[i] = qMax(boundsMax[i], p[i]);
            }
            m_points << p;

        }else if (id == "vt")
        {
            Point2d p;
            for (int i = 0; i < 2; ++i)
                ts >> p[i];
            m_coords << p;

        }else if(id=="vn")
        {
            Point3d p;
            for(int i=0;i<3;i++)
                ts>>p[i];
            m_normals<<p;
        }else if (id == "f" || id == "fo") {
            QVarLengthArray<int, 30000> p;
            QVarLengthArray<int, 30000> c;
            QVarLengthArray<int, 30000> n;
            while (!ts.atEnd()) {
                QString vertex;
                ts >> vertex;
                const int vertexIndex = vertex.split('/').value(0).toInt();
                const int coordsIndex = vertex.split('/').value(1).toInt();
                const int normalsIndex = vertex.split('/').value(2).toInt();
                //将点坐标索引和纹理坐标索引放入p和q数组
                if(vertexIndex)
                    p.append(vertexIndex > 0 ? vertexIndex - 1 : m_points.size() + vertexIndex);
                if(coordsIndex)
                    c.append(coordsIndex> 0 ? coordsIndex - 1 : m_coords.size() + coordsIndex);
                if(normalsIndex)
                    n.append(normalsIndex> 0 ? normalsIndex - 1 : m_normals.size() + normalsIndex);
            }

            //将点索引放入数组
            for(int i=0; i<3;++i)
                m_pointIndices << p[i];
            for(int i=0;i<3;i++)
                m_coordIndices << c[i];
            for(int i=0;i<3;i++)
                m_normalIndices << n[i];
        }
    }

    //将坐标点x,y,z进行归一标准化
    const Point3d bounds = boundsMax - boundsMin;
    const qreal scale = 1 / qMax(bounds.x, qMax(bounds.y, bounds.z));
    for (int i = 0; i < m_points.size(); ++i)
        m_points[i] = (m_points[i] - (boundsMin + bounds * 0.5)) * scale;
}

void Model::render() const
{
    //qDebug()<<"model线程id:"<<QThread::currentThreadId()<<endl;
    //qDebug()<<"渲染模型"<<endl;
    glPushMatrix();
    glLoadIdentity();
    //模型大小缩放
    glScaled(2,2,2);
    glRotatef(m_x, 1, 0, 0);
    glRotatef(m_y, 0, 1, 0);
    glRotatef(m_z, 0, 0, 1);
    glEnable(GL_DEPTH_TEST);

    //glColorMaterial(GL_FRONT,GL_DIFFUSE);
    //glEnable(GL_COLOR_MATERIAL);

    //允许加载点
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_COLOR_MATERIAL);
    glShadeModel(GL_SMOOTH);
    glEnableClientState(GL_VERTEX_ARRAY);
    //允许加载法线  
    glEnableClientState(GL_NORMAL_ARRAY);
    //允许加载纹理
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,m_texture);
    glEnableClientState(GL_TEXTURE_COORD_ARRAY);

    QVector<Point3d> m_points2;
    QVector<Point2d> m_coords2;
    QVector<Point3d> m_normals2;
    QVector<int> m_index;

    for(int i=0;i<m_pointIndices.size();i++)
    {
        m_points2.append(m_points.at(m_pointIndices.at(i)));
        m_index.append(i);
    }
    for(int i=0;i<m_coordIndices.size();i++)
        m_coords2.append(m_coords.at(m_coordIndices.at(i)));
    for(int i=0;i<m_normalIndices.size();i++)
        m_normals2.append(m_normals.at(m_normalIndices.at(i)));

    glVertexPointer(3, GL_FLOAT, 0, m_points2.data());
    glTexCoordPointer(2,GL_FLOAT,0,m_coords2.data());
    glNormalPointer(GL_FLOAT, 0, m_normals2.data());
    glDrawElements(GL_TRIANGLES, m_index.size() , GL_UNSIGNED_INT, m_index.data());

    //关闭加载法线
    glDisableClientState(GL_NORMAL_ARRAY);
    glDisable(GL_COLOR_MATERIAL);
    glDisable(GL_LIGHT0);
    glDisable(GL_LIGHTING);
    //关闭加载点
    glDisableClientState(GL_VERTEX_ARRAY);
    glDisable(GL_DEPTH_TEST);
    //关闭加载纹理
    glDisableClientState(GL_TEXTURE_COORD_ARRAY);
    glPopMatrix();

    //glDisable(GL_COLOR_MATERIAL);
}
