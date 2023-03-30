#include "sendandrecserialthread.h"
#include <QDebug>
#include "widgets/sendandreceive.h"
#include <QThread>


SendAndRecSerialThread::SendAndRecSerialThread(QObject *parent):QObject (parent)
{

    //初始化MAX_PORT串口
    for(int i=0;i<MAX_PORT;i++)
    {
        m_ports.append(new QSerialPort(this));
        //每当串口读出数据,将数据放入缓存区
        connect(m_ports[i], &QSerialPort::readyRead,this,[=](){
            //广播发送已读信号该信号带id
            QByteArray buff=m_ports[i]->readAll();
           // qDebug()<<i<<" 收到:"<<buff<<endl;
            emit sig_alreadyRead(i,buff);
        });
    }
}
//处理基本收发界面中的已发信号
void SendAndRecSerialThread::slot_handleAlreadySend(int id,QByteArray buff)
{
    //qDebug()<<id<<": write"<<buff.toHex()<<endl;
    m_ports[id]->write(buff);
}

//打开指定串口
void SendAndRecSerialThread::slot_openSendAndRecSerial(int id)
{
    //qDebug()<<"基本收发串口 线程id: "<<QThread::currentThreadId()<<endl;
    //记录参数数量
    int infoSum=1;
    emit sig_sendSerialPortProcessInfo("开始读取"+multiSerialConfigs[id].serialPortNum+"的参数列表...",0);
    m_ports[id]->setPortName(multiSerialConfigs[id].serialPortNum);
    infoSum+=m_ports[id]->setBaudRate(multiSerialConfigs[id].serialPortBaud);

    switch(multiSerialConfigs[id].serialPortCheckBit)//设置数据校验形式
    {
    case 0:
        infoSum+=m_ports[id]->setParity(QSerialPort::NoParity);//无校验
        break;
    case 1:
        infoSum+=m_ports[id]->setParity(QSerialPort::OddParity);//奇校验
        break;
    case 2:
        infoSum+=m_ports[id]->setParity(QSerialPort::EvenParity);//偶校验
        break;
    default:
        infoSum+=m_ports[id]->setParity(QSerialPort::NoParity);//默认无校验
        break;
    }

    switch(multiSerialConfigs[id].serialPortDataBit)//设置数据位
    {
    case 0:
        infoSum+=m_ports[id]->setDataBits(QSerialPort::Data8);
        break;
    case 1:
        infoSum+= m_ports[id]->setDataBits(QSerialPort::Data7);
        break;
    case 2:
        infoSum+=m_ports[id]->setDataBits(QSerialPort::Data6);
        break;
    case 3:
        infoSum+=m_ports[id]->setDataBits(QSerialPort::Data5);
        break;
    default:
        infoSum+=m_ports[id]->setDataBits(QSerialPort::Data8);//默认8位
        break;
    }

    switch(multiSerialConfigs[id].serialPortStopBit)//设置停止位
    {
    case 0:
        infoSum+=m_ports[id]->setStopBits(QSerialPort::OneStop);
        break;
    case 1:
        infoSum+=m_ports[id]->setStopBits(QSerialPort::OneAndHalfStop);
        break;
    case 2:
        infoSum+=m_ports[id]->setStopBits(QSerialPort::TwoStop);
        break;
    default:
        infoSum+=m_ports[id]->setStopBits(QSerialPort::OneStop);
        break;
    }
    m_ports[id]->setFlowControl(QSerialPort::NoFlowControl); //无流控
    m_ports[id]->setReadBufferSize(BufferSizeMax);//数据缓冲区长度65536*2

    emit sig_sendSerialPortProcessInfo("参数列表读取成功!参数数量："+QString::number(infoSum),1);
    emit sig_sendSerialPortProcessInfo("开始连接串口...",0);
    qDebug()<<"1"<<endl;
    bool isSuccess=m_ports[id]->open(QIODevice::ReadWrite);
    qDebug()<<"2"<<endl;
    emit sig_openSuccess(isSuccess,id);
    if(isSuccess) emit sig_sendSerialPortProcessInfo("连接打开成功!自动读取设备信息",2);
    else {emit sig_sendSerialPortProcessInfo("连接打开失败，请检查重试",3);return;}
    emit sig_sendSerialPortProcessInfo("找到设备!"+multiSerialConfigs[id].serialPortDescription,1);
}
//关闭指定串口
void SendAndRecSerialThread::slot_closeSendAndRecSerial(int id)
{
    m_ports[id]->close();
    emit sig_sendSerialPortProcessInfo("串口关闭成功!",4);
}

