#ifndef MODEL_H
#define MODEL_H
#include "math.h"
#include <QString>
#include <QVector>
#include <math.h>
#include <QFile>
#include <QTextStream>
#include <QVarLengthArray>
#include <QtOpenGL>
#include <qglobal.h>

struct Point2d
{
    float u,v;

    Point2d()
        : u(0) , v(0)
    {
    }

    Point2d(float u_, float v_)
        : u(u_) , v(v_)
    {
    }

    Point2d operator+(const Point2d &p) const
    {
        return Point2d(*this) += p;
    }

    Point2d operator-(const Point2d &p) const
    {
        return Point2d(*this) -= p;
    }

    Point2d operator*(float f) const
    {
        return Point2d(*this) *= f;
    }
    Point2d &operator+=(const Point2d &p)
    {
        u += p.u;
        v += p.v;
        return *this;
    }

    Point2d &operator-=(const Point2d &p)
    {
        u -= p.u;
        v -= p.v;
        return *this;
    }

    bool operator==(const Point2d &p)
    {
        if((u==p.u)&&(v==p.v))
            return true;
        return false;
    }

    Point2d &operator*=(float f)
    {
        u *= f;
        v *= f;
        return *this;
    }

    Point2d normalize() const
    {
        float r = 1. / sqrt(u * u + v * v);
        return Point2d(u * r, v * r);
    }
    float &operator[](unsigned int index) {
        Q_ASSERT(index < 2);
        return (&u)[index];
    }

    const float &operator[](unsigned int index) const {
        Q_ASSERT(index < 2);
        return (&u)[index];
    }
};




struct Point3d
{
    float x, y, z;

    Point3d()
        : x(0) , y(0) , z(0)
    {
    }

    Point3d(float x_, float y_, float z_)
        : x(x_) , y(y_)  , z(z_)
    {
    }

    Point3d operator+(const Point3d &p) const
    {
        return Point3d(*this) += p;
    }

    Point3d operator-(const Point3d &p) const
    {
        return Point3d(*this) -= p;
    }

    Point3d operator*(float f) const
    {
        return Point3d(*this) *= f;
    }
    Point3d &operator+=(const Point3d &p)
    {
        x += p.x;
        y += p.y;
        z += p.z;
        return *this;
    }

    Point3d &operator-=(const Point3d &p)
    {
        x -= p.x;
        y -= p.y;
        z -= p.z;
        return *this;
    }

    bool operator==(const Point3d &p)
    {
        if((x==p.x)&&(y==p.y)&&(z==p.z))
            return true;
        return false;
    }

    Point3d &operator*=(float f)
    {
        x *= f;
        y *= f;
        z *= f;
        return *this;
    }

    Point3d normalize() const
    {
        float r = 1. / sqrt(x * x + y * y + z * z);
        return Point3d(x * r, y * r, z * r);
    }
    float &operator[](unsigned int index) {
        Q_ASSERT(index < 3);
        return (&x)[index];
    }

    const float &operator[](unsigned int index) const {
        Q_ASSERT(index < 3);
        return (&x)[index];
    }
};

class Model :public QObject
{
public:
    Model();
    void render() const;
    void set_xyz(float x, float y, float z) {     m_x=x; m_y=y; m_z=z; }
    void loadTextures(int index);
    void parseObj(const QString filePath);

private:
    QVector<Point3d> m_points;//顶点信息
    QVector<Point3d> m_normals;//向量信息
    QVector<Point2d> m_coords;//纹理信息


    QVector<int> m_normalIndices;//法索引
    QVector<int> m_pointIndices;//点索引
    QVector<int> m_coordIndices;//纹理索引

    float m_x, m_y, m_z;
    float m_pitch, m_roll, m_yaw;
    GLuint m_texture;//注册纹理
};

#endif // MODEL_H

