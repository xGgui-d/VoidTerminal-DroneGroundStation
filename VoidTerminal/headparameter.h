#ifndef HEADPARAMETER_H
#define HEADPARAMETER_H
//该头文件主要用于声明各种变量，并extern出去
#include <QString>
#include <QVector>

//传感器数据
extern float ROL,PIT,YAW;
extern float ALT_USE;
extern uint8_t FLY_MODEL,ARMED_FLAG;
extern int16_t ACC_X,ACC_Y,ACC_Z,GYRO_X,GYRO_Y,GYRO_Z,MAG_X,MAG_Y,MAG_Z;
//遥控器数据
extern uint16_t CH_THR,CH_YAW,CH_ROL,CH_PIT,CH_AUX1,CH_AUX2,CH_AUX3,CH_AUX4,CH_AUX5,CH_AUX6;
//gps定位数据
//...

//电压和电流数据
extern float VOTAGE,CURRENT;
//马达数据
extern uint16_t PWM_MOTO[8];
//超声波数据
extern float ALT_BAR,ALT_CSB;
//参数序号，飞机自动定高
extern uint16_t PARAMETER;
extern float VALUE;
//飞行模式
extern uint8_t AUX1_LOW_MODEL,AUX1_MID_MODEL,AUX1_HIG_MODEL,
               AUX2_LOW_MODEL,AUX2_MID_MODEL,AUX2_HIG_MODEL,
               AUX3_LOW_MODEL,AUX3_MID_MODEL,AUX3_HIG_MODEL;
//SPEED_ROL,PIT,Z
extern float SPEED_ROL,SPEED_PIT,SPEED_Z;
//PID1-18
extern uint16_t KP[18];
extern uint16_t KI[18];
extern uint16_t KD[18];
//飞控已经有的航点数量
extern uint16_t FP_NUM;
//测距数据
extern uint8_t GROUP;
extern uint16_t DIST_FL;
extern uint16_t DIST_FR;
extern uint16_t DIST_BL;
extern uint16_t DIST_BR;
extern uint16_t ALT_L_1;
extern uint16_t ALT_L_2;
//位置数据
extern uint16_t LOC_Y;
extern uint16_t LOC_X;
extern uint16_t LOC_Z;
//location set;
extern uint8_t MODE;
extern uint8_t ANCHOR_NUM;
extern uint8_t ANCHOR_CNT;
extern uint8_t TAG_NUM;
extern uint8_t TAG_CNT;
extern uint8_t RF_MODE;
extern float WIDTH;
extern float LENGTH;
extern float HEIGHT;
extern uint8_t FILTER_SET;
extern float A_DELAY;
extern uint32_t UART_BAUD;
extern uint8_t ENABLE_INS;
extern uint8_t OUT_SELECT;
//location set2
extern float CAL_ANC1;
extern float CAL_ANC2;
extern float CAL_ANC3;
extern float CAL_ANC4;
extern float CAL_ANC5;
extern float CAL_ANC6;
//RadioLink set
extern uint8_t RL_RUN_MODE;
extern uint8_t RL_ENABLE_UART;
extern uint32_t RL_UART_BAUD;
extern uint8_t RL_AIR_SPEED;
extern uint8_t RL_LOCAL_ADDR_0;
extern uint8_t RL_LOCAL_ADDR_1;
extern uint8_t RL_LOCAL_ADDR_2;
extern uint8_t RL_REMOTE_ADDR_0;
extern uint8_t RL_REMOTE_ADDR_1;
extern uint8_t RL_REMOTE_ADDR_2;
extern uint8_t RL_CH;
extern uint8_t RL_ARC;
//optical flow set;
extern uint32_t OF_UART_BAUD;
extern uint8_t OF_DATA_MODE;
extern uint8_t OF_DATA_FSET;
extern uint8_t ALT_DATA_MODE;
extern uint8_t ALT_DATA_FSET;
extern uint8_t MPU_DATA_MODE;
extern uint8_t MPU_DATA_FSET;
extern float MPU_DATA_RATE;
extern uint8_t ATT_DATA_MODE;
extern uint8_t ATT_DATA_FSET;
extern float ATT_DATA_RATE;
extern uint8_t CTL_DATA_MODE;
extern float CTL_DATA_RATE;
extern int8_t DEVIATION_X;
extern int8_t DEVIATION_Y;
extern int8_t DEVIATION_Z;
//匿名光流光流数据
extern uint8_t OF_OF_MODE;
extern uint8_t OF_OF_QUALITY;
extern int8_t OF_OF_DX;
extern int8_t OF_OF_DY;
extern uint8_t OF_OF_Lightness;
//or
extern int16_t OF_OF_DX2;
extern int16_t OF_OF_DY2;
extern int16_t OF_OF_DX2FIX;
extern int16_t OF_OF_DY2FIX;
//匿名光流高度数据
extern uint8_t OF_GD_MODE;
extern float OF_GD_ALT;
//匿名光流惯性数据
extern uint8_t OF_GX_MODE;
extern int16_t OF_GX_GYR_X;
extern int16_t OF_GX_GYR_Y;
extern int16_t OF_GX_GYR_Z;
extern int16_t OF_GX_ACC_X;
extern int16_t OF_GX_ACC_Y;
extern int16_t OF_GX_ACC_Z;
//匿名光流姿态数据
extern uint8_t OF_ZT_MODE;
extern float OF_ZT_ROL;
extern float OF_ZT_PIT;
extern float OF_ZT_YAW;
//or
extern float OF_ZT_S1;
extern float OF_ZT_S2;
extern float OF_ZT_S3;
extern float OF_ZT_S4;
//匿名光流控制数据
extern uint8_t PWM1;
extern uint8_t PWM2;
extern uint8_t PWM3;
extern uint8_t PWM4;
//MSG数据
extern uint8_t MSG_ID;
extern uint8_t MSG_DATA;
//CHECK
extern uint8_t FREAM_HEAD;
extern uint8_t CHECK_SUM;

#endif // HEADPARAMETER_H
