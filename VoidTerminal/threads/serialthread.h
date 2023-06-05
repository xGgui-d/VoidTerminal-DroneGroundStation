#ifndef SERIALTHREAD_H
#define SERIALTHREAD_H

#include <QObject>
#include <QSerialPort>
#include <QDebug>
#include <QThread>
#include <QMessageBox>
#include "headparameter.h"

// 地面站接受数据的协议: 帧头1
#define ANO_HEAD1 0xAA
// 地面站接受数据的协议: 帧头2
#define ANO_HEAD2 0xAA

// 地面站发送数据的协议: 帧头1
#define ANO_HEAD3 0xAA
// 地面站发送数据的协议: 帧头2
#define ANO_HEAD4 0xAF
// 统计发送和接收的字节数
extern long alSendNum;
extern long alRecNum;
extern long errorNum;

extern bool isAppending;
/*
 * 这个是单独的线程类，里面含有串口成员，
 * 主要负责串口的收发和数据处理，
 */

class SerialThread : public QObject
{
    Q_OBJECT
public:
    explicit SerialThread(QObject *parent = nullptr);

private:
    // 封装读串口函数
    QByteArray serialPortRead();
    // 封装写串口函数
    void serialPortWrite(const char *data, qint64 len);
    // 封装发送校准命令函数
    void serialPortWrite_CAL(QString name, uint8_t data_to_send[], int len);

    // 将数据通过协议解析
    void dataParse(uint8_t data);
    // 将数据放入波形容器
    void putDataToWave();
    // 延时
    void Delay_MSec(int msec);

signals:
    // 发送是否成功打开串口信号
    void sig_openPortSuccess(bool flag);
    // 发送串口打开过程信息
    void sig_sendSerialPortProcessInfo(QString str, int color);
    // 发送参数调试过程信息
    void sig_sendDebugParameterInfo(QString str, int color);
    // 发送校准过程信息
    void sig_sendCalibrationInfo(QString str, int color);

    // 发送数据分类信号
    void sig_dataSort(uint8_t *rxBuffer);

    void sig_sendPortWriteDataInfo(QByteArray data);
    void sig_sendPortReadDataInfo(QByteArray data);

public slots:
    // 从串口接受信号
    void solt_doDataReceiveWork();
    // 从串口发送PID配置
    void slot_writePID(QVector<uint16_t> *kp, QVector<uint16_t> *ki, QVector<uint16_t> *kd);
    // 从串口发送读取PID命令
    void slot_readPID();
    // 从串口发送恢复默认PID命令
    void slot_recoverDefault();
    void slot_savePID();

    // 从串口发送校准命令
    void slot_cal_acc();
    void slot_cal_gyro();
    void slot_cal_baro();
    void slot_cal_mag();
    void slot_cal_alt();
    void slot_cal_inertia();

    void slot_cal_face01();
    void slot_cal_face02();
    void slot_cal_face03();
    void slot_cal_face04();
    void slot_cal_face05();
    void slot_cal_face06();
    void slot_cal_faceExit();

    // 从串口发送读取设置命令
    void slot_read_flowSet();
    void slot_read_digitSet();
    void slot_read_positionSet();
    void slot_read_version();

    void slot_openSerial();
    void slot_close_serial();

private:
    QSerialPort *m_port;
};

#endif // SERIALTHREAD_H
