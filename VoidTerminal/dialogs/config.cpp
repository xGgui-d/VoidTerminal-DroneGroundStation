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
    //m_settings->setValue("aaa",123);
    //int a=m_settings->value("aaa");
    // 设置图标
    this->setWindowIcon(QIcon(":/img/imgs/title.png"));



}

Config::~Config()
{
    delete ui;
}



