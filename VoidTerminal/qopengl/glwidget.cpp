#include "glwidget.h"
#include <QMouseEvent>
#include <QOpenGLShaderProgram>
#include <QCoreApplication>
#include <math.h>
#include <GL/glu.h>

GLWidget::GLWidget(QWidget *parent)
    : QOpenGLWidget(parent),
      m_xRot(0), m_yRot(0), m_zRot(0), m_skinIndex(0)
{
    m_model = new Model();
    m_model->parseObj(QString(":/model/models/drone.obj"));
}

GLWidget::~GLWidget()
{
    // 删除模型
    delete m_model;
}

void GLWidget::initializeGL()
{

    initializeOpenGLFunctions();
    // 加载纹理图片
    m_model->loadTextures(m_skinIndex);
}

void GLWidget::paintGL()
{
    static bool first_paint = true;
    if (first_paint)
    {
        m_xRot = m_zRot = 0;
        m_yRot = 180 * 16.0f;
        // m_yRot = 0;
        first_paint = false;
    }

    glClearColor(0.20, 0.252, 0.38, 1.00); // 改变背景颜色
    glColor3f(1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // 启用深度测试
    glEnable(GL_DEPTH_TEST);
    // 指定环境光强度（RGBA）
    // 0.8f, 0.8f, 0.8f, 0.8f
    // 1.0f, 1.0f, 1.0f, 1.0f
    GLfloat ambientLight[] = {1.0f, 1.0f, 1.0f, 1.0f};
    // 设置光照模型，将ambientLight所指定的RGBA强度值应用到环境光
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientLight);
    // 启用颜色追踪
    glEnable(GL_COLOR_MATERIAL);
    // 设置多边形正面的环境光和散射光材料属性，追踪glColor
    glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
    glEnable(GL_LIGHTING); // 启用光源

    glMatrixMode(GL_PROJECTION);
    glMatrixMode(GL_MODELVIEW);

    if (m_model)
    {
        m_model->set_xyz(m_xRot / 16.0f, m_yRot / 16.0f, m_zRot / 16.0f);
        // qDebug()<<m_xRot/16.0f<<m_yRot/16.0f<<m_zRot/16.0f;
        m_model->render();
    }
}

void GLWidget::resizeGL(int w, int h)
{
    m_proj.setToIdentity();
    m_proj.perspective(45.0f, GLfloat(w) / h, 0.01f, 100.0f);
}

QSize GLWidget::minimumSizeHint() const
{
    return QSize(50, 50);
}

QSize GLWidget::sizeHint() const
{
    return QSize(400, 400);
}

static void qNormalizeAngle(int &angle)
{
    while (angle < 0)
        angle += 360 * 16;
    while (angle > 360 * 16)
        angle -= 360 * 16;
}

void GLWidget::slot_setXRotation(int angle)
{
    qNormalizeAngle(angle);
    if (angle != m_xRot)
    {
        m_xRot = angle;
        // emit sig_xRotationChanged(angle);
        update();
    }
}

void GLWidget::slot_setYRotation(int angle)
{
    qNormalizeAngle(angle);
    if (angle != m_yRot)
    {
        m_yRot = angle;
        // emit sig_yRotationChanged(angle);
        update();
    }
}

void GLWidget::slot_setZRotation(int angle)
{
    qNormalizeAngle(angle);
    if (angle != m_zRot)
    {
        m_zRot = angle;
        // emit sig_zRotationChanged(angle);
        update();
    }
}

void GLWidget::mousePressEvent(QMouseEvent *event)
{
    m_lastPos = event->pos();
}

void GLWidget::mouseMoveEvent(QMouseEvent *event)
{
    int dx = event->x() - m_lastPos.x();
    int dy = event->y() - m_lastPos.y();

    if (event->buttons() & Qt::LeftButton)
    {
        slot_setXRotation(m_xRot + 8 * dy);
        slot_setYRotation(m_yRot + 8 * dx);
    }
    else if (event->buttons() & Qt::RightButton)
    {
        slot_setXRotation(m_xRot + 8 * dy);
        slot_setZRotation(m_zRot + 8 * dx);
    }
    m_lastPos = event->pos();
}

// 换肤
void GLWidget::changeSkin(int index)
{
    m_skinIndex = index;
    // 重新加载纹理
    m_model->loadTextures(m_skinIndex);
}
