#include "datacalibration.h"
#include "ui_datacalibration.h"

#include <qdatetime.h>

bool enableBtn_CAL=true;
int delay_CAL=200;

DataCalibration::DataCalibration(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DataCalibration)
{
    ui->setupUi(this);

    //初始化延迟spinbox
    ui->sb_delay->setRange(0,30000);
    ui->sb_delay->setValue(delay_CAL);

}

DataCalibration::~DataCalibration()
{
    delete ui;
}

//处理发送命令的过程信息
void DataCalibration::slot_handleCalibrationInfo(QString str, int color)
{
    QString colorStr;
    // 获取当前日期
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString currentDateStr = currentDateTime.toString("[MM.dd hh:mm:ss.zzz] ");
    switch (color)
    {
    case 0:colorStr="#000000";break;
    case 1:colorStr="#0080FF";break;
    case 2:colorStr="#33FF33";break;
    case 3:colorStr="#FF3333";break;
    case 4:colorStr="#330066";break;
    default: colorStr="#FFFFFF";break;
    }
    str= "<font color=\"#394867\">" + currentDateStr + "</font>"+"<font color=\""+colorStr+"\">" + str + "</font>";
    ui->tb_msg->append(str);
}

void DataCalibration::on_tbtn_acc_clicked()
{
    emit sig_cal_acc();
}

void DataCalibration::on_tbtn_gyro_clicked()
{
    emit sig_cal_gyro();
}

void DataCalibration::on_tbtn_baro_clicked()
{
    emit sig_cal_baro();
}

void DataCalibration::on_tbtn_mag_clicked()
{
    emit sig_cal_mag();
}

void DataCalibration::on_tbtn_alt_clicked()
{
    emit sig_cal_alt();
}

void DataCalibration::on_tbtn_inertia_clicked()
{
    emit sig_cal_inertia();
}


void DataCalibration::on_tbtn_face01_clicked()
{
    emit sig_cal_face01();
}

void DataCalibration::on_tbtn_face02_clicked()
{
    emit sig_cal_face02();
}

void DataCalibration::on_tbtn_face03_clicked()
{
    emit sig_cal_face03();
}

void DataCalibration::on_tbtn_face04_clicked()
{
    emit sig_cal_face04();
}

void DataCalibration::on_tbtn_face05_clicked()
{
    emit sig_cal_face05();
}

void DataCalibration::on_tbtn_face06_clicked()
{
    emit sig_cal_face06();
}

void DataCalibration::on_tbtn_faceExit_clicked()
{
    emit sig_cal_faceExit();
}


void DataCalibration::on_tbtn_readFlowSet_clicked()
{
    emit sig_read_flowSet();
}

void DataCalibration::on_tbtn_readDigitSet_clicked()
{
    emit sig_read_digitSet();
}

void DataCalibration::on_tbtn_readPositionSet_clicked()
{
    emit sig_read_positionSet();
}

void DataCalibration::on_tbtn_readVersionSet_clicked()
{
    emit sig_read_version();
}

//清空msg
void DataCalibration::on_tbtn_clear_clicked()
{
    ui->tb_msg->clear();
}

//修改延迟
void DataCalibration::on_sb_delay_editingFinished()
{
    delay_CAL = ui->sb_delay->value();
}
