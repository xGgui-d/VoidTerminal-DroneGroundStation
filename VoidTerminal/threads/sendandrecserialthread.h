#ifndef SENDANDRECSERIALTHREAD_H
#define SENDANDRECSERIALTHREAD_H

#include <QObject>
#include <qserialport.h>
#include <QVector>
#include "widgets/waveanalysis.h"
#include <QByteArray>
/*
 * 这个是单独的线程类，里面含有多个串口成员，
 * 主要负责多个串口的收发，
 */

// 最大串口数量
#define MAX_PORT 10
// 一帧的最大数据量
#define MAX_Buffer 65535 * 2

class SendAndRecSerialThread : public QObject
{
    Q_OBJECT
public:
    explicit SendAndRecSerialThread(QObject *parent = nullptr);
signals:
    void sig_alreadyRead(int id, QByteArray buff);
    void sig_openSuccess(bool, int);
    void sig_sendSerialPortProcessInfo(QString str, int color);
public slots:
    void slot_openSendAndRecSerial(int);
    void slot_closeSendAndRecSerial(int);
    void slot_handleAlreadySend(int id, QByteArray buff);

private:
    QVector<QSerialPort *> m_ports;
};

#endif // SENDANDRECSERIALTHREAD_H
