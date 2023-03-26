#include "config.h"
#include "ui_config.h"
#include <QDebug>
#include <qpainter.h>
Config::Config(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Config)
{
    ui->setupUi(this);

    //设置为模态窗口
    this->setWindowModality(Qt::WindowModality::ApplicationModal);
    this->setWindowTitle("系统设置");
    //创建设置对象,存储路径，以ini文件格式来存储
    m_settings = new QSettings("./UAV_Config_v1.0.ini",QSettings::IniFormat,this);
    QPixmap icon(20, 20);
    QPainter painter(&icon);
    painter.fillRect(icon.rect(),Qt::yellow); // 把正方形填充为红色
    painter.end();

    ui->toolButton->setIcon(QIcon(icon)); // 把上面创建的Pixmap对象作为图标添加到button中
    ui->toolButton->setFixedSize(30, 30);

}

Config::~Config()
{
    delete ui;
}



