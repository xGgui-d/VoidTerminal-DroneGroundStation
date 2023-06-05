#include "gauge.h"
#include "ui_gauge.h"
#include <QDebug>
#include <qtimer.h>
#include "headparameter.h"
Gauge::Gauge(QWidget *parent) : QWidget(parent),
                                ui(new Ui::Gauge)
{
    ui->setupUi(this);
    m_timer = new QTimer(this);
    connect(m_timer, &QTimer::timeout, this, &Gauge::slot_unitUpdate);
    m_timer->start(5); // 50-20hz

    ui->gauge_voltage->setRange(0, 5);
    this->setWindowTitle("仪表盘");
    // 设置图标
    this->setWindowIcon(QIcon(":/img/imgs/title.png"));
}

Gauge::~Gauge()
{
    delete ui;
}

void Gauge::slot_unitUpdate()
{
    ui->gauge_voltage->setValue(VOTAGE / 100);
    // qDebug()<<VOTAGE<<endl;
    ui->lb_current->setText(QString::number(CURRENT / 100));
    ui->lb_voltage->setText(QString::number(VOTAGE / 100));
}
