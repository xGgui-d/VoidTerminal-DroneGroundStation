#include "flightstatus.h"
#include "ui_flightstatus.h"
#include <QPainter>
#include <qthread.h>
#include <qtimer.h>

FlightStatus::FlightStatus(QWidget *parent) : QWidget(parent),
                                              ui(new Ui::FlightStatus), m_isLock(true)
{
    ui->setupUi(this);

    // 设置定时器定时刷新ui
    m_timer = new QTimer(this);
    connect(m_timer, &QTimer::timeout, this, &FlightStatus::slot_unitUpdate);
    m_timer->start(5); // 50-20hz

    // opengl窗口
    connect(this, &FlightStatus::sig_updateRotationX, ui->openGLWidget, &GLWidget::slot_setXRotation);
    connect(this, &FlightStatus::sig_updateRotationY, ui->openGLWidget, &GLWidget::slot_setYRotation);
    connect(this, &FlightStatus::sig_updateRotationZ, ui->openGLWidget, &GLWidget::slot_setZRotation);

    // 模型窗口与航表比例
    ui->splitter->setSizes(QList<int>() << 10000 << 17500);
}

FlightStatus::~FlightStatus()
{
    delete ui;
}

bool FlightStatus::getIsLock()
{
    return m_isLock;
}

void FlightStatus::setIsLock(bool flag)
{
    m_isLock = flag;
}

// 连接组件与变量
void FlightStatus::slot_unitUpdate()
{

    // 发送改变模型rotation信号
    if (m_isLock)
    {
        emit sig_updateRotationX(PIT * 16);
        emit sig_updateRotationY(-(YAW * 16 + 180 * 16.0));
        emit sig_updateRotationZ(ROL * 16);
    }

    //    qDebug()<<"PIT: "<<PIT<<endl;
    //    qDebug()<<"PIT: "<<YAW<<endl;
    //    qDebug()<<"PIT: "<<ROL<<endl;

    ui->lb_PIT->setText(QString::number(static_cast<double>(PIT), 'f', 2));
    ui->lb_ROL->setText(QString::number(static_cast<double>(ROL), 'f', 2));
    ui->lb_YAW->setText(QString::number(static_cast<double>(YAW), 'f', 2));
    ui->lb_ALT_USE->setText(QString::number(static_cast<double>(ALT_USE), 'f', 2));
    ui->lb_FLY_MODEL->setText(QString::number(static_cast<double>(FLY_MODEL), 'f', 2));

    ui->gaugePlane->setRollValue(PIT);
    ui->gaugePlane->setDegValue(ROL);

    ui->rulerScale->setValue(YAW);
    ui->rulerScale->setMinValue(-180);
    ui->rulerScale->setMaxValue(180);
    ui->rulerBar->setValue(PIT);
    ui->rulerBar->setMinValue(-180);
    ui->rulerBar->setMaxValue(180);

    if (ARMED_FLAG == 0)
        ui->lb_ARMED->setText("加锁");
    else
        ui->lb_ARMED->setText("解锁");

    // gpsdata待定

    ui->lb_ACC_X->setText(QString::number(ACC_X));
    ui->lb_ACC_Y->setText(QString::number(ACC_Y));
    ui->lb_ACC_Z->setText(QString::number(ACC_Z));
    ui->lb_GYRO_X->setText(QString::number(GYRO_X));
    ui->lb_GYRO_Y->setText(QString::number(GYRO_Y));
    ui->lb_GYRO_Z->setText(QString::number(GYRO_Z));
    ui->lb_MAG_X->setText(QString::number(MAG_X));
    ui->lb_MAG_Y->setText(QString::number(MAG_Y));
    ui->lb_MAG_Z->setText(QString::number(MAG_Z));
    ui->lb_SPEED_PIT->setText(QString::number(static_cast<double>(SPEED_PIT), 'f', 2));
    ui->lb_SPEED_ROL->setText(QString::number(static_cast<double>(SPEED_ROL), 'f', 2));
    ui->lb_SPEED_Z->setText(QString::number(static_cast<double>(SPEED_Z), 'f', 2));
    ui->lb_ALT_BAR->setText(QString::number(static_cast<double>(ALT_BAR), 'f', 2));
    ui->lb_ALT_CSB->setText(QString::number(static_cast<double>(ALT_CSB), 'f', 2));

    ui->pgb_THR->setValue(CH_THR);
    ui->pgb_THR->setRange(1000, 2000);
    ui->pgb_YAW->setValue(CH_YAW);
    ui->pgb_YAW->setRange(1000, 2000);
    ui->pgb_ROL->setValue(CH_ROL);
    ui->pgb_ROL->setRange(1000, 2000);
    ui->pgb_PIT->setValue(CH_PIT);
    ui->pgb_PIT->setRange(1000, 2000);

    //    ui->pgb_AUX1->setValue(CH_AUX1);
    //    ui->pgb_AUX2->setValue(CH_AUX2);
    //    ui->pgb_AUX3->setValue(CH_AUX3);
    //    ui->pgb_AUX4->setValue(CH_AUX4);
    //    ui->pgb_AUX5->setValue(CH_AUX5);
    //    ui->pgb_AUX6->setValue(CH_AUX6);

    //    ui->lb_AUX1_LOW_MODEL->setText(QString::number(AUX1_LOW_MODEL));
    //    ui->lb_AUX1_MID_MODEL->setText(QString::number(AUX1_MID_MODEL));
    //    ui->lb_AUX1_HIG_MODEL->setText(QString::number(AUX1_HIG_MODEL));
    //    ui->lb_AUX2_LOW_MODEL->setText(QString::number(AUX2_LOW_MODEL));
    //    ui->lb_AUX2_MID_MODEL->setText(QString::number(AUX2_MID_MODEL));
    //    ui->lb_AUX2_HIG_MODEL->setText(QString::number(AUX2_HIG_MODEL));
    //    ui->lb_AUX3_LOW_MODEL->setText(QString::number(AUX3_LOW_MODEL));
    //    ui->lb_AUX3_MID_MODEL->setText(QString::number(AUX3_MID_MODEL));
    //    ui->lb_AUX3_HIG_MODEL->setText(QString::number(AUX3_HIG_MODEL));
}

// 更换皮肤
void FlightStatus::slot_changeSkin(int index)
{
    ui->openGLWidget->changeSkin(index);
    ui->openGLWidget->update();
}
