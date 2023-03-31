#include "threads\datasortthread.h"
#include "serialthread.h"
#include "widgets/waveanalysis.h"

DataSortThread::DataSortThread(QObject *parent):QObject(parent)
{

}

//数据分类槽函数
void DataSortThread::slot_dataSort(uint8_t *rxBuffer)
{
    //qDebug()<<"初始化数据分类线程id"<<QThread::currentThreadId()<<endl;

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
    //将数据放入曲线
    putDataToWave();
}

//将数据放入波形显示通道，如果点击了开始显示
void DataSortThread::putDataToWave()
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

