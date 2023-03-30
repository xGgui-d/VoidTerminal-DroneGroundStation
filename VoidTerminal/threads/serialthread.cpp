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
        m_port->clear();
        m_port->close();

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
        //  qDebug()<<"校验和"<<endl;
        //  qDebug()<<"传送至数据分类"<<endl;
        dataSort(RxBuffer,_data_cnt+4);//将检验完的数据发送到分类函数根据功能号分类
        state = 0;
    }
    else
    {
        state = 0;
        //  qDebug()<<"default1"<<endl;
    }
}

//将数据根据功能区分类
void SerialThread::dataSort(uint8_t *rxBuffer,uint8_t lastIndex)
{
    //计算校验和
    uint8_t sum = 0;
    for(uint8_t index = 0;index<lastIndex;index++)
        //求和,取低8位
        sum+=(*(rxBuffer+index));
    //如果检验和不通过，退出
    if(!(sum==*(rxBuffer+lastIndex)))
    {
        //统计错误数据帧个数
        ++errorNum;
        //qDebug()<<"校验失败"<<endl;
        return;

    }

    //帧头校验
    //如果帧头检验不通过,退出
    if(!(*(rxBuffer)==ANO_HEAD1 && *(rxBuffer+1)==ANO_HEAD2))//帧头校验
        return;
    //根据功能字判断什么类别的信息
    if(*(rxBuffer+2)==0X01)//基本姿态数据功能号 0x01
    {

        ROL=0.01f*(static_cast<int16_t>(*(rxBuffer+4)<<8)|*(rxBuffer+5));
        PIT=0.01f*(static_cast<int16_t>(*(rxBuffer+6)<<8)|*(rxBuffer+7));
        YAW=0.01f*(static_cast<int16_t>(*(rxBuffer+8)<<8)|*(rxBuffer+9));

        ALT_USE=0.01f*(static_cast<int32_t>(*(rxBuffer+10)<<24)|(*(rxBuffer+11)<<16)|(*(rxBuffer+12)<<8)|*(rxBuffer+13));
        FLY_MODEL=*(rxBuffer+14);
        ARMED_FLAG=*(rxBuffer+15);

    }else if(*(rxBuffer+2)==0X02)
    {

        ACC_X=static_cast<int16_t>(*(rxBuffer+4)<<8)|*(rxBuffer+5);
        ACC_Y=static_cast<int16_t>(*(rxBuffer+6)<<8)|*(rxBuffer+7);
        ACC_Z=static_cast<int16_t>(*(rxBuffer+8)<<8)|*(rxBuffer+9);
        GYRO_X=static_cast<int16_t>(*(rxBuffer+10)<<8)|*(rxBuffer+11);
        GYRO_Y=static_cast<int16_t>(*(rxBuffer+12)<<8)|*(rxBuffer+13);
        GYRO_Z=static_cast<int16_t>(*(rxBuffer+14)<<8)|*(rxBuffer+15);
        MAG_X=static_cast<int16_t>(*(rxBuffer+16)<<8)|*(rxBuffer+17);
        MAG_Y=static_cast<int16_t>(*(rxBuffer+18)<<8)|*(rxBuffer+19);
        MAG_Z=static_cast<int16_t>(*(rxBuffer+20)<<8)|*(rxBuffer+21);

    }else if(*(rxBuffer+2)==0X03)
    {
        CH_THR=static_cast<uint16_t>(*(rxBuffer+4)<<8)|*(rxBuffer+5);
        CH_YAW=static_cast<uint16_t>(*(rxBuffer+6)<<8)|*(rxBuffer+7);
        CH_ROL=static_cast<uint16_t>(*(rxBuffer+8)<<8)|*(rxBuffer+9);
        CH_PIT=static_cast<uint16_t>(*(rxBuffer+10)<<8)|*(rxBuffer+11);
        CH_AUX1=static_cast<uint16_t>(*(rxBuffer+12)<<8)|*(rxBuffer+13);
        CH_AUX2=static_cast<uint16_t>(*(rxBuffer+14)<<8)|*(rxBuffer+15);
        CH_AUX3=static_cast<uint16_t>(*(rxBuffer+16)<<8)|*(rxBuffer+17);
        CH_AUX4=static_cast<uint16_t>(*(rxBuffer+18)<<8)|*(rxBuffer+19);
        CH_AUX5=static_cast<uint16_t>(*(rxBuffer+20)<<8)|*(rxBuffer+21);
        CH_AUX6=static_cast<uint16_t>(*(rxBuffer+22)<<8)|*(rxBuffer+23);

    }else if(*(rxBuffer+2)==0X04)
    {
        //根据当前位置信息
        // qDebug()<<"解析gps定位数据帧 ，线程为:"<<QThread::currentThreadId()<<endl;
    }else if(*(rxBuffer+2)==0X05)
    {
        VOTAGE=static_cast<uint16_t>(*(rxBuffer+4)<<8)|*(rxBuffer+5);
        CURRENT=static_cast<uint16_t>(*(rxBuffer+6)<<8)|*(rxBuffer+7);
        // qDebug()<<"解析电池的电压的电流数据帧 ，线程为:"<<QThread::currentThreadId()<<endl;
    }else if(*(rxBuffer+2)==0X06)
    {
        //暂定
        // qDebug()<<"解析马达数据帧 ，线程为:"<<QThread::currentThreadId()<<endl;
    }else if(*(rxBuffer+2)==0X07)
    {
        ALT_BAR=0.01f*(static_cast<uint32_t>((*(rxBuffer+4)<<24)|(*(rxBuffer+5)<<16)|(*(rxBuffer+6)<<8)|*(rxBuffer+7)));
        ALT_CSB=0.01f*(static_cast<uint16_t>(*(rxBuffer+8)<<8)|*(rxBuffer+9));
        //   qDebug()<<"解析超声波数据帧 ，线程为:"<<QThread::currentThreadId()<<endl;
    }else if(*(rxBuffer+2)==0X09)
    {
        PARAMETER=static_cast<uint16_t>(*(rxBuffer+4)<<8)|*(rxBuffer+5);
        VALUE=0.01f*(static_cast<int32_t>(*(rxBuffer+10)<<24)|(*(rxBuffer+11)<<16)|(*(rxBuffer+12)<<8)|*(rxBuffer+13));
        // qDebug()<<"解析参数飞机定高帧 ，线程为:"<<QThread::currentThreadId()<<endl;
    }else if(*(rxBuffer+2)==0X0A)
    {
        AUX1_LOW_MODEL=*(rxBuffer+4);
        AUX1_MID_MODEL=*(rxBuffer+5);
        AUX1_HIG_MODEL=*(rxBuffer+6);
        AUX2_LOW_MODEL=*(rxBuffer+7);
        AUX2_MID_MODEL=*(rxBuffer+8);
        AUX2_HIG_MODEL=*(rxBuffer+9);
        AUX3_LOW_MODEL=*(rxBuffer+10);
        AUX3_MID_MODEL=*(rxBuffer+11);
        AUX3_HIG_MODEL=*(rxBuffer+12);
        // qDebug()<<"解析飞行模式帧 ，线程为:"<<QThread::currentThreadId()<<endl;
    }else if(*(rxBuffer+2)==0X0B)
    {
        SPEED_ROL=0.01f*(static_cast<int16_t>(*(rxBuffer+4)<<8)|*(rxBuffer+5));
        SPEED_PIT=0.01f*(static_cast<int16_t>(*(rxBuffer+6)<<8)|*(rxBuffer+7));
        SPEED_Z=0.01f*(static_cast<int16_t>(*(rxBuffer+8)<<8)|*(rxBuffer+9));

    }else if(*(rxBuffer+2)==0X10)
    {
        KP[0]=static_cast<uint16_t>((*(rxBuffer+4)<<8)|*(rxBuffer+5));
        KI[0]=static_cast<uint16_t>((*(rxBuffer+6)<<8)|*(rxBuffer+7));
        KD[0]=static_cast<uint16_t>((*(rxBuffer+8)<<8)|*(rxBuffer+9));

        KP[1]=static_cast<uint16_t>((*(rxBuffer+10)<<8)|*(rxBuffer+11));
        KI[1]=static_cast<uint16_t>((*(rxBuffer+12)<<8)|*(rxBuffer+13));
        KD[1]=static_cast<uint16_t>((*(rxBuffer+14)<<8)|*(rxBuffer+15));

        KP[2]=static_cast<uint16_t>((*(rxBuffer+16)<<8)|*(rxBuffer+17));
        KI[2]=static_cast<uint16_t>((*(rxBuffer+18)<<8)|*(rxBuffer+19));
        KD[2]=static_cast<uint16_t>((*(rxBuffer+20)<<8)|*(rxBuffer+21));
        //  qDebug()<<"解析PID1-3帧 ，线程为:"<<QThread::currentThreadId()<<endl;
        //发送更新spinbox信号
        emit sig_updateSpinBoxPID();
    }else if(*(rxBuffer+2)==0X11)
    {
        KP[3]=static_cast<uint16_t>((*(rxBuffer+4)<<8)|*(rxBuffer+5));
        KI[3]=static_cast<uint16_t>((*(rxBuffer+6)<<8)|*(rxBuffer+7));
        KD[3]=static_cast<uint16_t>((*(rxBuffer+8)<<8)|*(rxBuffer+9));

        KP[4]=static_cast<uint16_t>((*(rxBuffer+10)<<8)|*(rxBuffer+11));
        KI[4]=static_cast<uint16_t>((*(rxBuffer+12)<<8)|*(rxBuffer+13));
        KD[4]=static_cast<uint16_t>((*(rxBuffer+14)<<8)|*(rxBuffer+15));

        KP[5]=static_cast<uint16_t>((*(rxBuffer+16)<<8)|*(rxBuffer+17));
        KI[5]=static_cast<uint16_t>((*(rxBuffer+18)<<8)|*(rxBuffer+19));
        KD[5]=static_cast<uint16_t>((*(rxBuffer+20)<<8)|*(rxBuffer+21));
        // qDebug()<<"解析PID4-6帧 ，线程为:"<<QThread::currentThreadId()<<endl;
        //发送更新spinbox信号
        emit sig_updateSpinBoxPID();
    }else if(*(rxBuffer+2)==0X12)
    {
        KP[6]=static_cast<uint16_t>((*(rxBuffer+4)<<8)|*(rxBuffer+5));
        KI[6]=static_cast<uint16_t>((*(rxBuffer+6)<<8)|*(rxBuffer+7));
        KD[6]=static_cast<uint16_t>((*(rxBuffer+8)<<8)|*(rxBuffer+9));

        KP[7]=static_cast<uint16_t>((*(rxBuffer+10)<<8)|*(rxBuffer+11));
        KI[7]=static_cast<uint16_t>((*(rxBuffer+12)<<8)|*(rxBuffer+13));
        KD[7]=static_cast<uint16_t>((*(rxBuffer+14)<<8)|*(rxBuffer+15));

        KP[8]=static_cast<uint16_t>((*(rxBuffer+16)<<8)|*(rxBuffer+17));
        KI[8]=static_cast<uint16_t>((*(rxBuffer+18)<<8)|*(rxBuffer+19));
        KD[8]=static_cast<uint16_t>((*(rxBuffer+20)<<8)|*(rxBuffer+21));
        //  qDebug()<<"解析PID7-9帧 ，线程为:"<<QThread::currentThreadId()<<endl;
        //发送更新spinbox信号
        emit sig_updateSpinBoxPID();
    }else if(*(rxBuffer+2)==0X13)
    {
        KP[9]=static_cast<uint16_t>((*(rxBuffer+4)<<8)|*(rxBuffer+5));
        KI[9]=static_cast<uint16_t>((*(rxBuffer+6)<<8)|*(rxBuffer+7));
        KD[9]=static_cast<uint16_t>((*(rxBuffer+8)<<8)|*(rxBuffer+9));

        KP[10]=static_cast<uint16_t>((*(rxBuffer+10)<<8)|*(rxBuffer+11));
        KI[10]=static_cast<uint16_t>((*(rxBuffer+12)<<8)|*(rxBuffer+13));
        KD[10]=static_cast<uint16_t>((*(rxBuffer+14)<<8)|*(rxBuffer+15));

        KP[11]=static_cast<uint16_t>((*(rxBuffer+16)<<8)|*(rxBuffer+17));
        KI[11]=static_cast<uint16_t>((*(rxBuffer+18)<<8)|*(rxBuffer+19));
        KD[11]=static_cast<uint16_t>((*(rxBuffer+20)<<8)|*(rxBuffer+21));
        //        qDebug()<<"解析PID10-12帧 ，线程为:"<<QThread::currentThreadId()<<endl;
        //发送更新spinbox信号
        emit sig_updateSpinBoxPID();
    }else if(*(rxBuffer+2)==0X14)
    {
        KP[12]=static_cast<uint16_t>((*(rxBuffer+4)<<8)|*(rxBuffer+5));
        KI[12]=static_cast<uint16_t>((*(rxBuffer+6)<<8)|*(rxBuffer+7));
        KD[12]=static_cast<uint16_t>((*(rxBuffer+8)<<8)|*(rxBuffer+9));

        KP[13]=static_cast<uint16_t>((*(rxBuffer+10)<<8)|*(rxBuffer+11));
        KI[13]=static_cast<uint16_t>((*(rxBuffer+12)<<8)|*(rxBuffer+13));
        KD[13]=static_cast<uint16_t>((*(rxBuffer+14)<<8)|*(rxBuffer+15));

        KP[14]=static_cast<uint16_t>((*(rxBuffer+16)<<8)|*(rxBuffer+17));
        KI[14]=static_cast<uint16_t>((*(rxBuffer+18)<<8)|*(rxBuffer+19));
        KD[14]=static_cast<uint16_t>((*(rxBuffer+20)<<8)|*(rxBuffer+21));
        // qDebug()<<"解析PID13-15帧 ，线程为:"<<QThread::currentThreadId()<<endl;
        //发送更新spinbox信号
        emit sig_updateSpinBoxPID();
    }else if(*(rxBuffer+2)==0X15)
    {
        KP[15]=static_cast<uint16_t>((*(rxBuffer+4)<<8)|*(rxBuffer+5));
        KI[15]=static_cast<uint16_t>((*(rxBuffer+6)<<8)|*(rxBuffer+7));
        KD[15]=static_cast<uint16_t>((*(rxBuffer+8)<<8)|*(rxBuffer+9));

        KP[16]=static_cast<uint16_t>((*(rxBuffer+10)<<8)|*(rxBuffer+11));
        KI[16]=static_cast<uint16_t>((*(rxBuffer+12)<<8)|*(rxBuffer+13));
        KD[16]=static_cast<uint16_t>((*(rxBuffer+14)<<8)|*(rxBuffer+15));

        KP[17]=static_cast<uint16_t>((*(rxBuffer+16)<<8)|*(rxBuffer+17));
        KI[17]=static_cast<uint16_t>((*(rxBuffer+18)<<8)|*(rxBuffer+19));
        KD[17]=static_cast<uint16_t>((*(rxBuffer+20)<<8)|*(rxBuffer+21));
        // qDebug()<<"解析PID16-18帧 ，线程为:"<<QThread::currentThreadId()<<endl;
        //发送更新spinbox信号
        emit sig_updateSpinBoxPID();

    }else if(*(rxBuffer+2)==0XEF)
    {
        FREAM_HEAD=*(rxBuffer+4);
        CHECK_SUM=*(rxBuffer+5);

    }else if(*(rxBuffer+2)==0X20)
    {
        FP_NUM=static_cast<uint16_t>((*(rxBuffer+20)<<4)|*(rxBuffer+5));

    }else if(*(rxBuffer+2)==0X21)
    {
        //航点信息
    }else if(*(rxBuffer+2)==0X30)
    {
        GROUP=*(rxBuffer+4);
        DIST_FL=static_cast<uint16_t>((*(rxBuffer+5)<<8)|*(rxBuffer+6));
        DIST_FR=static_cast<uint16_t>((*(rxBuffer+7)<<8)|*(rxBuffer+8));
        DIST_BL=static_cast<uint16_t>((*(rxBuffer+9)<<8)|*(rxBuffer+10));
        DIST_BR=static_cast<uint16_t>((*(rxBuffer+11)<<8)|*(rxBuffer+12));
        ALT_L_1=static_cast<uint16_t>((*(rxBuffer+13)<<8)|*(rxBuffer+14));
        ALT_L_2=static_cast<uint16_t>((*(rxBuffer+15)<<8)|*(rxBuffer+16));

    }else if(*(rxBuffer+2)==0X32)
    {
        TAG_NUM=*(rxBuffer+4);
        LOC_X=static_cast<uint16_t>((*(rxBuffer+5)<<8)|*(rxBuffer+6));
        LOC_Y=static_cast<uint16_t>((*(rxBuffer+7)<<8)|*(rxBuffer+8));
        LOC_Z=static_cast<uint16_t>((*(rxBuffer+9)<<8)|*(rxBuffer+10));

    }else if(*(rxBuffer+2)==0X3A)
    {
        MODE=*(rxBuffer+4);
        ANCHOR_NUM=*(rxBuffer+5);
        ANCHOR_CNT=*(rxBuffer+6);
        TAG_NUM=*(rxBuffer+7);
        TAG_CNT=*(rxBuffer+8);
        RF_MODE=*(rxBuffer+9);
        WIDTH=0.01f*(static_cast<int16_t>(*(rxBuffer+10)<<8)|*(rxBuffer+11));
        LENGTH=0.01f*(static_cast<int16_t>(*(rxBuffer+12)<<8)|*(rxBuffer+13));
        HEIGHT=0.01f*(static_cast<int16_t>(*(rxBuffer+14)<<8)|*(rxBuffer+15));
        FILTER_SET=*(rxBuffer+16);
        A_DELAY=0.01f*(static_cast<int16_t>(*(rxBuffer+17)<<8)|*(rxBuffer+18));
        UART_BAUD=static_cast<uint32_t>((*(rxBuffer+19)<<24)|(*(rxBuffer+20)<<16)|(*(rxBuffer+21)<<8)|*(rxBuffer+22));
        ENABLE_INS=*(rxBuffer+23);
        OUT_SELECT=*(rxBuffer+24);

    }else if(*(rxBuffer+2)==0X3B)
    {
        CAL_ANC1=0.01f*(static_cast<int16_t>(*(rxBuffer+4)<<8)|*(rxBuffer+5));
        CAL_ANC2=0.01f*(static_cast<int16_t>(*(rxBuffer+6)<<8)|*(rxBuffer+7));
        CAL_ANC3=0.01f*(static_cast<int16_t>(*(rxBuffer+8)<<8)|*(rxBuffer+9));
        CAL_ANC4=0.01f*(static_cast<int16_t>(*(rxBuffer+10)<<8)|*(rxBuffer+11));
        CAL_ANC5=0.01f*(static_cast<int16_t>(*(rxBuffer+12)<<8)|*(rxBuffer+13));
        CAL_ANC6=0.01f*(static_cast<int16_t>(*(rxBuffer+14)<<8)|*(rxBuffer+15));

    }else if(*(rxBuffer+2)==0X40)
    {
        RL_RUN_MODE=*(rxBuffer+4);
        RL_ENABLE_UART=*(rxBuffer+5);
        RL_UART_BAUD=static_cast<uint32_t>((*(rxBuffer+6)<<24)|(*(rxBuffer+7)<<16)|(*(rxBuffer+8)<<8)|*(rxBuffer+9));
        RL_AIR_SPEED=*(rxBuffer+10);
        RL_LOCAL_ADDR_0=*(rxBuffer+11);
        RL_LOCAL_ADDR_1=*(rxBuffer+12);
        RL_LOCAL_ADDR_2=*(rxBuffer+13);
        RL_REMOTE_ADDR_0=*(rxBuffer+14);
        RL_REMOTE_ADDR_1=*(rxBuffer+15);
        RL_REMOTE_ADDR_2=*(rxBuffer+16);
        RL_CH=*(rxBuffer+17);
        RL_ARC=*(rxBuffer+18);

    }else if(*(rxBuffer+2)==0X50)
    {
        OF_UART_BAUD=static_cast<uint32_t>((*(rxBuffer+4)<<24)|(*(rxBuffer+5)<<16)|(*(rxBuffer+6)<<8)|*(rxBuffer+7));
        OF_DATA_FSET=*(rxBuffer+8);
        OF_DATA_MODE=*(rxBuffer+9);
        ALT_DATA_FSET=*(rxBuffer+10);
        ALT_DATA_MODE=*(rxBuffer+11);
        MPU_DATA_MODE=*(rxBuffer+12);
        MPU_DATA_FSET=*(rxBuffer+13);
        MPU_DATA_RATE=100.00f*(*(rxBuffer+14));
        ATT_DATA_FSET=*(rxBuffer+15);
        ATT_DATA_MODE=*(rxBuffer+16);
        ATT_DATA_RATE=100.00f*(*(rxBuffer+17));
        CTL_DATA_MODE=*(rxBuffer+18);
        CTL_DATA_RATE=100.00f*(*(rxBuffer+19));
        DEVIATION_X=static_cast<int8_t>(*(rxBuffer+20));
        DEVIATION_Y=static_cast<int8_t>(*(rxBuffer+21));
        DEVIATION_Z=static_cast<int8_t>(*(rxBuffer+22));

    }else if (*(rxBuffer+2)==0X51)
    {
        OF_OF_MODE=*(rxBuffer+4);
        if(!OF_OF_MODE)
        {
            OF_OF_QUALITY=*(rxBuffer+5);
            OF_OF_DX=static_cast<int8_t>(*(rxBuffer+6));
            OF_OF_DY=static_cast<int8_t>(*(rxBuffer+7));
            OF_OF_Lightness=*(rxBuffer+8);

        }else
        {
            OF_OF_QUALITY=*(rxBuffer+5);
            OF_OF_DX2=static_cast<int16_t>(*(rxBuffer+6)<<8)|*(rxBuffer+7);
            OF_OF_DY2=static_cast<int16_t>(*(rxBuffer+8)<<8)|*(rxBuffer+9);
            OF_OF_DX2FIX=static_cast<int16_t>(*(rxBuffer+10)<<8)|*(rxBuffer+11);
            OF_OF_DY2FIX=static_cast<int16_t>(*(rxBuffer+12)<<8)|*(rxBuffer+13);
            OF_OF_Lightness=*(rxBuffer+14);
        }
    }else if(*(rxBuffer+2)==0X52)
    {
        OF_GD_MODE=*(rxBuffer+4);
        OF_GD_ALT=0.01f*(static_cast<int16_t>(*(rxBuffer+5)<<8)|*(rxBuffer+6));

    }else if(*(rxBuffer+2)==0X53)
    {
        OF_GX_MODE=*(rxBuffer+4);
        OF_GX_GYR_X=static_cast<int16_t>(*(rxBuffer+5)<<8)|*(rxBuffer+6);
        OF_GX_GYR_Y=static_cast<int16_t>(*(rxBuffer+7)<<8)|*(rxBuffer+8);
        OF_GX_GYR_Z=static_cast<int16_t>(*(rxBuffer+9)<<8)|*(rxBuffer+10);
        OF_GX_ACC_X=static_cast<int16_t>(*(rxBuffer+11)<<8)|*(rxBuffer+12);
        OF_GX_ACC_Y=static_cast<int16_t>(*(rxBuffer+13)<<8)|*(rxBuffer+14);
        OF_GX_ACC_Z=static_cast<int16_t>(*(rxBuffer+15)<<8)|*(rxBuffer+16);

    }else if(*(rxBuffer+2)==0X54)
    {
        OF_ZT_MODE=*(rxBuffer+4);
        if(!OF_ZT_MODE)
        {
            OF_ZT_ROL=0.01f*(static_cast<uint16_t>(*(rxBuffer+5)<<8)|*(rxBuffer+6));
            OF_ZT_PIT=0.01f*(static_cast<uint16_t>(*(rxBuffer+7)<<8)|*(rxBuffer+8));
            OF_ZT_YAW=0.01f*(static_cast<uint16_t>(*(rxBuffer+9)<<8)|*(rxBuffer+10));

        }else{
            OF_ZT_S1=0.0001f*(static_cast<int16_t>(*(rxBuffer+5)<<8)|*(rxBuffer+6));
            OF_ZT_S2=0.0001f*(static_cast<int16_t>(*(rxBuffer+7)<<8)|*(rxBuffer+8));
            OF_ZT_S3=0.0001f*(static_cast<int16_t>(*(rxBuffer+9)<<8)|*(rxBuffer+10));
            OF_ZT_S4=0.0001f*(static_cast<int16_t>(*(rxBuffer+11)<<8)|*(rxBuffer+12));

        }

    }else if(*(rxBuffer+2)==0X55)
    {
        PWM1=*(rxBuffer+4);
        PWM2=*(rxBuffer+5);
        PWM3=*(rxBuffer+6);
        PWM4=*(rxBuffer+7);

    }else if(*(rxBuffer+2)==0XEE)
    {
        MSG_ID=*(rxBuffer+4);
        MSG_DATA=*(rxBuffer+5);

    }

    putDataToWave();
}

//将数据放入波形显示通道，如果点击了开始显示
void SerialThread::putDataToWave()
{
    if(!waveShowFlag)
        return;

    if(isPainting)
        return;

    isAppending=true;

    qwtCH_value[0].yData.append(static_cast<double>(ACC_X));
    qwtCH_value[1].yData.append(static_cast<double>(ACC_Y));
    qwtCH_value[2].yData.append(static_cast<double>(ACC_Z));
    qwtCH_value[3].yData.append(static_cast<double>(GYRO_X));
    qwtCH_value[4].yData.append(static_cast<double>(GYRO_Y));
    qwtCH_value[5].yData.append(static_cast<double>(GYRO_Z));
    qwtCH_value[6].yData.append(static_cast<double>(MAG_X));
    qwtCH_value[7].yData.append(static_cast<double>(MAG_Y));
    qwtCH_value[8].yData.append(static_cast<double>(MAG_Z));
    qwtCH_value[9].yData.append(static_cast<double>(PIT));
    qwtCH_value[10].yData.append(static_cast<double>(YAW));
    qwtCH_value[11].yData.append(static_cast<double>(ROL));
    qwtCH_value[12].yData.append(static_cast<double>(ALT_BAR));
    qwtCH_value[13].yData.append(static_cast<double>(ALT_CSB));
    qwtCH_value[14].yData.append(static_cast<double>(PWM1));
    qwtCH_value[15].yData.append(static_cast<double>(PWM2));
    qwtCH_value[16].yData.append(static_cast<double>(PWM3));
    qwtCH_value[17].yData.append(static_cast<double>(PWM4));
    qwtCH_value[18].yData.append(static_cast<double>(CH_THR));
    qwtCH_value[19].yData.append(static_cast<double>(CH_YAW));
    qwtCH_value[20].yData.append(static_cast<double>(CH_ROL));
    qwtCH_value[21].yData.append(static_cast<double>(CH_PIT));
    qwtCH_value[22].yData.append(static_cast<double>(CH_AUX1));
    qwtCH_value[23].yData.append(static_cast<double>(CH_AUX2));
    qwtCH_value[24].yData.append(static_cast<double>(CH_AUX3));
    qwtCH_value[25].yData.append(static_cast<double>(CH_AUX4));
    qwtCH_value[26].yData.append(static_cast<double>(DIST_FL));
    qwtCH_value[27].yData.append(static_cast<double>(DIST_FR));
    qwtCH_value[28].yData.append(static_cast<double>(DIST_BL));
    qwtCH_value[29].yData.append(static_cast<double>(DIST_BR));
    qwtCH_value[30].yData.append(static_cast<double>(LOC_X));
    qwtCH_value[31].yData.append(static_cast<double>(LOC_Y));
    qwtCH_value[32].yData.append(static_cast<double>(LOC_Z));
    qwtCH_value[33].yData.append(static_cast<double>(OF_OF_QUALITY));
    qwtCH_value[34].yData.append(static_cast<double>(OF_OF_Lightness));
    qwtCH_value[35].yData.append(static_cast<double>(OF_OF_DX));
    qwtCH_value[36].yData.append(static_cast<double>(OF_OF_DY));
    qwtCH_value[37].yData.append(static_cast<double>(OF_OF_DX2));
    qwtCH_value[38].yData.append(static_cast<double>(OF_OF_DY2));
    qwtCH_value[39].yData.append(static_cast<double>(OF_OF_DX2FIX));
    qwtCH_value[40].yData.append(static_cast<double>(OF_OF_DY2FIX));
    qwtCH_value[41].yData.append(static_cast<double>(OF_GD_ALT));
    qwtCH_value[42].yData.append(0.0);
    for(int i=0;i<MAX_DATA_CH;i++)
    {
        qwtCH_value[i].xData.append(qwtCH_value[i].cnt);
        qwtCH_value[i].cnt++;
    }

    isAppending=false;
}

//发送pid数据
void SerialThread::slot_writePID(QVector<uint16_t> *kp,QVector<uint16_t> *ki,QVector<uint16_t> *kd)
{
    //共发送6组pid数据帧
    for(int n=0;n<6;n++)
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

        //从串口写入pid数据
        if(m_port->isOpen())
        {
            serialPortWrite((char *)(data_to_send),cnt);
            emit sig_sendDebugParameterInfo("PID数据帧 "+QString::number(n+1)+" 已经发送，等待返回校验...",0);
            bool sendSuccess=false;
            Delay_MSec(delay_PID);
            for(int i=0;i<5;i++)
            {
                //检查返回的check
                if((FREAM_HEAD==0x10+n)&&(CHECK_SUM==sum))
                {
                    emit sig_sendDebugParameterInfo("成功收到返回校验，PID数据帧发送成功!",2);
                    //清空Fream和check
                    FREAM_HEAD=0x00;;
                    CHECK_SUM=0x00;
                    sendSuccess=true;
                    break;
                }else {
                    //超时重发
                    Delay_MSec(delay_PID);
                    emit sig_sendDebugParameterInfo("未收到返回校验帧，重发 "+QString::number(i+1)+" 次",1);
                    serialPortWrite((char *)(data_to_send),cnt);
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
            emit sig_sendDebugParameterInfo("发送读取PID命令成功!",2);
        else
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
            emit sig_sendDebugParameterInfo("发送恢复默认PID命令成功!",2);
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
            emit sig_sendDebugParameterInfo("发送保存PID命令成功!",2);
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
            emit sig_sendCalibrationInfo("发送"+name+"命令成功!",2);
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
    QEventLoop loop;//定义一个新的事件循环
    QTimer::singleShot(msec, &loop, SLOT(quit()));//创建单次定时器，槽函数为事件循环的退出函数
    loop.exec();//事件循环开始执行，程序会卡在这里，直到定时时间到，本循环被退出
}
