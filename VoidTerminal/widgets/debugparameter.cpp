#include "debugparameter.h"
#include "ui_debugparameter.h"
#include <QDateTime>

bool enableBtn_PID = true;
int delay_PID = 5000;
DebugParameter::DebugParameter(QWidget *parent) : QWidget(parent),
                                                  ui(new Ui::DebugParameter)
{
    ui->setupUi(this);

    // 初始化延迟spinbox
    ui->sb_delay->setRange(10, 10000);
    ui->sb_delay->setValue(delay_PID);

    // 初始化spinbox范围
    for (int i = 0; i < 18; i++)
    {
        m_spinBox = findChild<QSpinBox *>("sb_p" + QString::number(i + 1));
        m_spinBox->setRange(0, 100000);
        m_spinBox->setStyleSheet("color:#14274E;font: 10pt \"微软雅黑\";\
                                 background-color:#F1F6F9;");
        m_spinBox = findChild<QSpinBox *>("sb_i" + QString::number(i + 1));
        m_spinBox->setRange(0, 100000);
        m_spinBox->setStyleSheet("color:#14274E;font: 10pt \"微软雅黑\";\
                                 background-color:#F1F6F9;");
        m_spinBox = findChild<QSpinBox *>("sb_d" + QString::number(i + 1));
        m_spinBox->setRange(0, 100000);
        m_spinBox->setStyleSheet("color:#14274E;font: 10pt \"微软雅黑\";\
                                 background-color:#F1F6F9;");
    }
    ui->lineEdit_1->setText("ROL速率");
    ui->lineEdit_2->setText("PIT速率");
    ui->lineEdit_3->setText("YAW速率");
    ui->lineEdit_4->setText("自稳ROL");
    ui->lineEdit_5->setText("自稳PIT");
    ui->lineEdit_6->setText("自稳YAW");
    ui->lineEdit_7->setText("高度速率");
    ui->lineEdit_8->setText("高度保持");
    ui->lineEdit_9->setText("位置速率");
    ui->lineEdit_10->setText("位置保持");
}

DebugParameter::~DebugParameter()
{
    delete ui;
}

// 处理pid发送过程信息
void DebugParameter::slot_handleDebugParameterInfo(QString str, int color)
{
    QString colorStr;
    // 获取当前日期
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString currentDateStr = currentDateTime.toString("[MM.dd hh:mm:ss.zzz] ");
    switch (color)
    {
    case 0:
        colorStr = "#000000";
        break;
    case 1:
        colorStr = "#0080FF";
        break;
    case 2:
        colorStr = "#33FF33";
        break;
    case 3:
        colorStr = "#FF3333";
        break;
    case 4:
        colorStr = "#330066";
        break;
    default:
        colorStr = "#FFFFFF";
        break;
    }
    str = "<font color=\"#394867\">" + currentDateStr + "</font>" + "<font color=\"" + colorStr + "\">" + str + "</font>";
    ui->tb_showMsg->append(str);
}

// 写入pid数据帧
void DebugParameter::on_btn_writePID_clicked()
{
    if (!enableBtn_PID)
        return;
    QVector<uint16_t> *kp = new QVector<uint16_t>();
    QVector<uint16_t> *ki = new QVector<uint16_t>();
    QVector<uint16_t> *kd = new QVector<uint16_t>();

    for (int i = 0; i < 18; i++)
    {
        m_spinBox = findChild<QSpinBox *>("sb_p" + QString::number(i + 1));
        kp->push_back(m_spinBox->text().toUInt());
        m_spinBox = findChild<QSpinBox *>("sb_i" + QString::number(i + 1));
        ki->push_back(m_spinBox->text().toUInt());
        m_spinBox = findChild<QSpinBox *>("sb_d" + QString::number(i + 1));
        kd->push_back(m_spinBox->text().toUInt());
    }
    emit sig_writePID(kp, ki, kd);
    enableBtn_PID = false;
}

// 发送读取pid命令
void DebugParameter::on_btn_readPID_clicked()
{
    if (!enableBtn_PID)
        return;
    emit sig_readPID();
    enableBtn_PID = false;
}

// 发送恢复默认pid命令
void DebugParameter::on_btn_recoverDefault_clicked()
{
    if (!enableBtn_PID)
        return;
    emit sig_recoverDefaultPID();
    enableBtn_PID = false;
}

// 发送保存pid命令
void DebugParameter::on_btn_savePID_clicked()
{
    if (!enableBtn_PID)
        return;
    emit sig_savePID();
    enableBtn_PID = false;
}

// 清空消息
void DebugParameter::on_tbtn_clear_clicked()
{
    ui->tb_showMsg->clear();
}

// 修改延迟
void DebugParameter::on_sb_delay_editingFinished()
{
    delay_PID = ui->sb_delay->value();
}

// 更新组件的值
void DebugParameter::slot_updateSpinBoxPID()
{
    // 更新组件的值
    for (int i = 0; i < 18; i++)
    {
        m_spinBox = findChild<QSpinBox *>("sb_p" + QString::number(i + 1));
        m_spinBox->setValue(KP[i]);
        m_spinBox = findChild<QSpinBox *>("sb_i" + QString::number(i + 1));
        m_spinBox->setValue(KI[i]);
        m_spinBox = findChild<QSpinBox *>("sb_d" + QString::number(i + 1));
        m_spinBox->setValue(KD[i]);
    }
}

// 置零spinBox
void DebugParameter::on_btn_clearSpinBox_clicked()
{
    for (int i = 0; i < 18; i++)
    {
        m_spinBox = findChild<QSpinBox *>("sb_p" + QString::number(i + 1));
        m_spinBox->setValue(0);
        m_spinBox = findChild<QSpinBox *>("sb_i" + QString::number(i + 1));
        m_spinBox->setValue(0);
        m_spinBox = findChild<QSpinBox *>("sb_d" + QString::number(i + 1));
        m_spinBox->setValue(0);
    }
}
