#include "serialthread.h"
#include "widgets/mainwidget.h"
#include "headparameter.h"
#include "widgets/waveanalysis.h"
#include <QEventLoop>

long alSendNum = 0;
long alRecNum = 0;
long errorNum=0;

bool isAppending=false;
SerialThread::SerialThread(QObject *parent):QObject (parent)
{

    m_port = new QSerialPort(this);
    //连接串口与数据流，当有readyRead数据时立刻读取
    connect(m_port, &QSerialPort::readyRead,this,&SerialThread::solt_doDataReceiveWork);
}

//串口读函数
QByteArray SerialThread::serialPortRead()
{
    QByteArray buffer;
    buffer = m_port->readAll();
    alRecNum+=buffer.size();
    //将数据发送到主界面右边的显示框
    if(showProtocolFlag)
        emit sig_sendPortReadDataInfo(buffer);
    return buffer;
}

//串口写函数
void SerialThread::serialPortWrite(const char *data, qint64 len)
{
    QByteArray buffer;
    buffer.append(data,len);
    alSendNum+=m_port->write(data,len);
    //将数据发送到主界面右边的显示框
    emit sig_sendPortWriteDataInfo(buffer);
}

//打开串口槽函数
void SerialThread::slot_openSerial()
{
    //qDebug()<<"串口 线程id: "<<QThread::currentThreadId()<<endl;

    //记录参数数量
    int infoSum=1;
    emit sig_sendSerialPortProcessInfo("开始读取"+serialConfig.serialPortNum+"的参数列表...",0);
    if(m_port->isOpen())//如果串口已打开，立刻关闭
    {
        m_port->clear();
        m_port->close();
    }

    m_port->setPortName(serialConfig.serialPortNum);
    infoSum+=m_port->setBaudRate(serialConfig.serialPortBaud);

    switch(serialConfig.serialPortCheckBit)//设置数据校验形式
    {
    case 0:
        infoSum+=m_port->setParity(QSerialPort::NoParity);//无校验
        break;
    case 1:
        infoSum+=m_port->setParity(QSerialPort::OddParity);//奇校验
        break;
    case 2:
        infoSum+=m_port->setParity(QSerialPort::EvenParity);//偶校验
        break;
    default:
        infoSum+=m_port->setParity(QSerialPort::NoParity);//默认无校验
        break;
    }

    switch(serialConfig.serialPortDataBit)//设置数据位
    {
    case 0:
        infoSum+=m_port->setDataBits(QSerialPort::Data8);
        break;
    case 1:
        infoSum+=m_port->setDataBits(QSerialPort::Data7);
        break;
    case 2:
        infoSum+=m_port->setDataBits(QSerialPort::Data6);
        break;
    case 3:
        infoSum+=m_port->setDataBits(QSerialPort::Data5);
        break;
    default:
        infoSum+=m_port->setDataBits(QSerialPort::Data8);//默认8位
        break;
    }

    switch(serialConfig.serialPortStopBit)//设置停止位
    {
    case 0:
        infoSum+=m_port->setStopBits(QSerialPort::OneStop);
        break;
    case 1:
        infoSum+=m_port->setStopBits(QSerialPort::OneAndHalfStop);
        break;
    case 2:
        infoSum+=m_port->setStopBits(QSerialPort::TwoStop);
        break;
    default:
        infoSum+=m_port->setStopBits(QSerialPort::OneStop);
        break;
    }
    m_port->setFlowControl(QSerialPort::NoFlowControl); //无流控
    m_port->setReadBufferSize(BufferSizeMax);//数据缓冲区长度65536*2

    emit sig_sendSerialPortProcessInfo("参数列表读取成功!参数数量："+QString::number(infoSum),1);
    emit sig_sendSerialPortProcessInfo("开始连接串口...",0);
    bool isSuccess=m_port->open(QIODevice::ReadWrite);//打开串口
    emit sig_openPortSuccess(isSuccess);
    if(isSuccess) emit sig_sendSerialPortProcessInfo("连接打开成功!自动读取设备信息",2);
    else {emit sig_sendSerialPortProcessInfo("连接打开失败，请检查重试",3);return;}
    emit sig_sendSerialPortProcessInfo("找到设备!"+serialConfig.serialPortDescription,1);

}
//关闭串口槽函数
void SerialThread::slot_close_serial()
{
    emit sig_sendSerialPortProcessInfo("串口关闭成功!",4);
    m_port->close();
}

//子线程从串口接受数据
void SerialThread::solt_doDataReceiveWork()
{
    //接收16进制的数据，存在字节数组中
    QByteArray buffer;
    buffer = serialPortRead();
    //解析数据
    for(int i=0;i<buffer.size();i++)
        dataParse(static_cast<uint8_t>(buffer.at(i)));
}

//数据解析函数,每次接受8位数据，进行通信协议的解析
void SerialThread::dataParse(uint8_t data)
{

    static uint8_t RxBuffer[BufferSizeMax];//用于暂存每一帧数据
    static uint8_t _data_len = 0,_data_cnt = 0;//用于记录数据长度
    static uint8_t state = 0;//状态机
    if(state==0&&data==ANO_HEAD1)//帧头1
    {
        state=1;
        RxBuffer[0]=data;
        //   qDebug()<<"帧头1"<<endl;
    }
    else if(state==1&&data==ANO_HEAD2)//帧头2
    {
        state=2;
        RxBuffer[1]=data;
        //  qDebug()<<"帧头2"<<endl;
    }
    else if(state==2&&data<0XFA)//功能字
    {
        state=3;
        RxBuffer[2]=data;
        //     qDebug()<<"功能字"<<endl;
    }
    else if(state==3&&data<0x64)//数据长度<64字节
    {
        state = 4;
        RxBuffer[3]=data;
        //记录数据长度
        _data_len = data;
        _data_cnt = 0;
        //  qDebug()<<"总数据长度"<<_data_len<<endl;
    }
    else if(state==4&&_data_len>0)//数据区
    {
        //长度-1，直到0把数据全部放到RxBuffer
        _data_len--;
        // qDebug()<<"剩余数据长度"<<_data_len<<"data为"<<data<<"data_cnt为"<<_data_cnt<<endl;
        RxBuffer[4+_data_cnt++]=data;
        if(_data_len==0)
            state = 5;
    }
    else if(state==5)//校验和
    {
        RxBuffer[4+_data_cnt]=data;

        //计算校验和
        uint8_t sum = 0;
        for(uint8_t index = 0;index<_data_cnt+4;index++)
            //求和,取低8位
            sum+=(*(RxBuffer+index));
        // qDebug()<<"sum is "<<sum<<"other is"<<*(rxBuffer+lastIndex)<<endl;
        //如果检验和不通过，退出
        if(!(sum==*(RxBuffer+_data_cnt+4)))
        {
            //统计错误数据帧个数
            ++errorNum;
            return;
        }

        //帧头校验
        //如果帧头检验不通过,退出
        if(!(*(RxBuffer)==ANO_HEAD1 && *(RxBuffer+1)==ANO_HEAD2))//帧头校验
            return;
        emit sig_dataSort(RxBuffer);//将检验完的数据发送到分类函数根据功能号分类
        state = 0;
    }
    else
    {
        state = 0;
        qDebug()<<"default"<<endl;
    }
}


//发送pid数据
void SerialThread::slot_writePID(QVector<uint16_t> *kp,QVector<uint16_t> *ki,QVector<uint16_t> *kd)
{
    uint8_t firstSum=0;
    //共发送6组pid数据帧
    for(uint8_t n=0;n<6;n++)
    {
        uint8_t data_to_send[50];
        uint8_t sum=0,i=0,cnt=0;
        uint16_t _temp;
        data_to_send[cnt++]=ANO_HEAD3;
        data_to_send[cnt++]=ANO_HEAD4;
        data_to_send[cnt++]=0x10+n;
        data_to_send[cnt++]=0;

        _temp = kp->at(3*n);
        data_to_send[cnt++]=BYTE1(_temp);
        data_to_send[cnt++]=BYTE0(_temp);
        _temp = ki->at(3*n);
        data_to_send[cnt++]=BYTE1(_temp);
        data_to_send[cnt++]=BYTE0(_temp);
        _temp = kd->at(3*n);
        data_to_send[cnt++]=BYTE1(_temp);
        data_to_send[cnt++]=BYTE0(_temp);

        _temp = kp->at(3*n+1);
        data_to_send[cnt++]=BYTE1(_temp);
        data_to_send[cnt++]=BYTE0(_temp);
        _temp = ki->at(3*n+1);
        data_to_send[cnt++]=BYTE1(_temp);
        data_to_send[cnt++]=BYTE0(_temp);
        _temp = kd->at(3*n+1);
        data_to_send[cnt++]=BYTE1(_temp);
        data_to_send[cnt++]=BYTE0(_temp);

        _temp = kp->at(3*n+2);
        data_to_send[cnt++]=BYTE1(_temp);
        data_to_send[cnt++]=BYTE0(_temp);
        _temp = ki->at(3*n+2);
        data_to_send[cnt++]=BYTE1(_temp);
        data_to_send[cnt++]=BYTE0(_temp);
        _temp = kd->at(3*n+2);
        data_to_send[cnt++]=BYTE1(_temp);
        data_to_send[cnt++]=BYTE0(_temp);

        data_to_send[3] = cnt-4;

        for(i=0;i<cnt;i++) sum += data_to_send[i];
        data_to_send[cnt++]=sum;
        //保存第一帧的sum
        if(n==0)
            firstSum=sum;

        //从串口写入pid数据
        if(m_port->isOpen())
        {
            bool sendSuccess=false;
            serialPortWrite((char *)(data_to_send),cnt);
            emit sig_sendDebugParameterInfo("PID数据帧 "+QString::number(n+1)+" 已经发送，等待返回校验...",0);
            //延迟一段时间
            Delay_MSec(delay_PID);
            for(uint8_t i=0;i<5;i++)
            {
                //检查返回的check
                if(((FREAM_HEAD==0x10+n)||(FREAM_HEAD==0x10))&&((CHECK_SUM==sum)||(CHECK_SUM==firstSum)))
                {
                    emit sig_sendDebugParameterInfo("成功收到返回校验，PID数据帧发送成功!",2);
                    //清空Fream和check
                    FREAM_HEAD=0x00;;
                    CHECK_SUM=0x00;
                    sendSuccess=true;
                    break;
                }else {
                    emit sig_sendDebugParameterInfo("未收到返回校验帧，重发 "+QString::number(i+1)+" 次",1);
                    serialPortWrite((char *)(data_to_send),cnt);
                    //超时重发
                    Delay_MSec(delay_PID);
                }
            }

            if(!sendSuccess)
            {
                emit sig_sendDebugParameterInfo("接收不到校验帧，发送失败",3);
                break;
            }

        }else{
            emit sig_sendDebugParameterInfo("数据帧发送失败，请检查串口的连接",3);
            break;
        }
    }
    //释放
    delete kp;
    delete ki;
    delete kd;
    //按钮enable
    enableBtn_PID=true;

}

//发送读取pid命令
void SerialThread::slot_readPID()
{
    if(m_port->isOpen())
    {
        uint8_t data_to_send[] = {0xAA,0xAF,0x02,0x01,0x01,0x5D};
        serialPortWrite((char*)data_to_send,6);
        emit sig_sendDebugParameterInfo("已发送读取PID命令，等待返回校验...",0);
        Delay_MSec(delay_PID);
        if((FREAM_HEAD==0x02)&&(CHECK_SUM==0x5D))
        {
            emit sig_sendDebugParameterInfo("发送读取PID命令成功!",2);
            FREAM_HEAD=0x00;
            CHECK_SUM=0x00;
        }else
            emit sig_sendDebugParameterInfo("没有收到返回校验，发送读取PID命令失败",3);
    }else
        emit sig_sendDebugParameterInfo("发送命令失败，请先打开串口",3);
    //按钮enable
    enableBtn_PID=true;
}

//发送恢复默认PID命令
void SerialThread::slot_recoverDefault()
{
    if(m_port->isOpen())
    {
        uint8_t data_to_send[] = {0xAA,0xAF,0x02,0x01,0xA1,0xFD};
        serialPortWrite((char*)data_to_send,6);
        emit sig_sendDebugParameterInfo("已发送恢复默认PID命令，等待返回校验...",0);
        Delay_MSec(delay_PID);
        if((FREAM_HEAD==0x02)&&(CHECK_SUM==0xFD))
        {
            emit sig_sendDebugParameterInfo("发送恢复默认PID命令成功!",2);
            FREAM_HEAD=0x00;
            CHECK_SUM=0x00;
        }

        else
            emit sig_sendDebugParameterInfo("没有收到返回校验，发送恢复默认PID命令失败",3);
    }else
        emit sig_sendDebugParameterInfo("发送命令失败，请先打开串口",3);
    //按钮enable
    enableBtn_PID=true;
}

//发送保存PID命令
void SerialThread::slot_savePID()
{
    if(m_port->isOpen())
    {
        uint8_t data_to_send[] = {0xAA,0xAF,0x0B,0x01,0x01,0x66};
        serialPortWrite((char*)data_to_send,6);
        emit sig_sendDebugParameterInfo("已发送保存PID命令，等待返回校验...",0);
        Delay_MSec(delay_PID);
        if((FREAM_HEAD==0x0B)&&(CHECK_SUM==0x66))
        {
            emit sig_sendDebugParameterInfo("发送保存PID命令成功!",2);
            FREAM_HEAD=0x00;
            CHECK_SUM=0x00;
        }
        else
            emit sig_sendDebugParameterInfo("没有收到返回校验，发送保存PID命令失败",3);
    }else
        emit sig_sendDebugParameterInfo("发送命令失败，请先打开串口",3);
    //按钮enable
    enableBtn_PID=true;

}

//封装发送校准命令函数
void SerialThread::serialPortWrite_CAL(QString name,uint8_t data_to_send[],int len)
{

    if(m_port->isOpen())
    {
        serialPortWrite((char*)data_to_send,len);
        emit sig_sendCalibrationInfo("已发送"+name+"命令，等待返回校验...",0);
        Delay_MSec(delay_CAL);
        if((FREAM_HEAD==data_to_send[2])&&(CHECK_SUM==data_to_send[len-1]))
        {
            emit sig_sendCalibrationInfo("发送"+name+"命令成功!",2);
            FREAM_HEAD=0x00;
            CHECK_SUM=0x00;
        }
        else
            emit sig_sendCalibrationInfo("没有收到返回校验，发送"+name+"命令失败",3);
    }else
        emit sig_sendCalibrationInfo("发送命令失败，请先打开串口",3);
    //按钮enable
    enableBtn_CAL=true;
}

//发送校准命令
void SerialThread::slot_cal_acc()
{
    uint8_t cmd[] = {0xAA,0xAF,0x01,0x01,0x01,0x5C};
    serialPortWrite_CAL("ACC校准",cmd,6);
}

void SerialThread::slot_cal_gyro()
{
    uint8_t cmd[] = {0xAA,0xAF,0x01,0x01,0x02,0x5D};
    serialPortWrite_CAL("GYRO校准",cmd,6);
}

void SerialThread::slot_cal_alt()
{
    uint8_t cmd[] = {0xAA,0xAF,0x01,0x01,0x03,0x5E};
    serialPortWrite_CAL("ALT高度校准",cmd,6);
}

void SerialThread::slot_cal_mag()
{
    uint8_t cmd[] = {0xAA,0xAF,0x01,0x01,0x04,0x5F};
    serialPortWrite_CAL("MAG校准",cmd,6);
}

void SerialThread::slot_cal_baro()
{
    uint8_t cmd[] = {0xAA,0xAF,0x01,0x01,0x05,0x60};
    serialPortWrite_CAL("BARO校准",cmd,6);
}

void SerialThread::slot_cal_inertia()
{
    uint8_t cmd[] = {0xAA,0xAF,0x01,0x01,0x10,0x6B};
    serialPortWrite_CAL("惯性校准(用于光流模块)",cmd,6);
}

void SerialThread::slot_cal_faceExit()
{
    uint8_t cmd[] = {0xAA,0xAF,0x01,0x01,0x20,0x7B};
    serialPortWrite_CAL("退出六面校准",cmd,6);
}

void SerialThread::slot_cal_face01()
{
    uint8_t cmd[] = {0xAA,0xAF,0x01,0x01,0x21,0x7C};
    serialPortWrite_CAL("第一面校准",cmd,6);
}

void SerialThread::slot_cal_face02()
{
    uint8_t cmd[] = {0xAA,0xAF,0x01,0x01,0x22,0x7D};
    serialPortWrite_CAL("第二面校准",cmd,6);
}

void SerialThread::slot_cal_face03()
{
    uint8_t cmd[] = {0xAA,0xAF,0x01,0x01,0x23,0x7E};
    serialPortWrite_CAL("第三面校准",cmd,6);
}

void SerialThread::slot_cal_face04()
{
    uint8_t cmd[] = {0xAA,0xAF,0x01,0x01,0x24,0x7F};
    serialPortWrite_CAL("第四面校准",cmd,6);
}

void SerialThread::slot_cal_face05()
{
    uint8_t cmd[] = {0xAA,0xAF,0x01,0x01,0x25,0x80};
    serialPortWrite_CAL("第五面校准",cmd,6);
}

void SerialThread::slot_cal_face06()
{
    uint8_t cmd[] = {0xAA,0xAF,0x01,0x01,0x26,0x81};
    serialPortWrite_CAL("第六面校准",cmd,6);
}

//发送读取设置命令
void SerialThread::slot_read_positionSet()
{
    uint8_t cmd[] = {0xAA,0xAF,0x02,0x01,0x30,0x8C};
    serialPortWrite_CAL("读取无线定位模块设置",cmd,6);
}

void SerialThread::slot_read_digitSet()
{
    uint8_t cmd[] = {0xAA,0xAF,0x02,0x01,0x40,0x9C};
    serialPortWrite_CAL("读取数传模块设置",cmd,6);
}

void SerialThread::slot_read_flowSet()
{
    uint8_t cmd[] = {0xAA,0xAF,0x02,0x01,0x50,0xAC};
    serialPortWrite_CAL("读取光流模块设置",cmd,6);
}

void SerialThread::slot_read_version()
{
    uint8_t cmd[] = {0xAA,0xAF,0x02,0x01,0xA0,0xFC};
    serialPortWrite_CAL("读取下位机版本信息",cmd,6);
}

//延时函数
void SerialThread::Delay_MSec(int msec)
{
    //qDebug()<<"进入延迟函数"<<endl;
    QEventLoop loop;//定义一个新的事件循环
    QTimer::singleShot(msec, &loop, SLOT(quit()));//创建单次定时器，槽函数为事件循环的退出函数
    loop.exec();//事件循环开始执行，程序会卡在这里，直到定时时间到，本循环被退出
    //qDebug()<<"退出延迟函数"<<endl;
}
