#include "headparameter.h"
#include <QString>
// 该cpp文件主要用于定义头文件声明的变量

float ROL, PIT, YAW;
float ALT_USE;
uint8_t FLY_MODEL, ARMED_FLAG;
int16_t ACC_X, ACC_Y, ACC_Z, GYRO_X, GYRO_Y, GYRO_Z, MAG_X, MAG_Y, MAG_Z;

uint16_t CH_THR, CH_YAW, CH_ROL, CH_PIT, CH_AUX1, CH_AUX2, CH_AUX3, CH_AUX4, CH_AUX5, CH_AUX6;
// gps定位数据
//...

float VOTAGE, CURRENT;

uint16_t PWM_MOTO[8];

float ALT_BAR, ALT_CSB;

uint16_t PARAMETER;
float VALUE;

uint8_t AUX1_LOW_MODEL, AUX1_MID_MODEL, AUX1_HIG_MODEL,
    AUX2_LOW_MODEL, AUX2_MID_MODEL, AUX2_HIG_MODEL,
    AUX3_LOW_MODEL, AUX3_MID_MODEL, AUX3_HIG_MODEL;

float SPEED_ROL, SPEED_PIT, SPEED_Z;

uint16_t KP[18];
uint16_t KI[18];
uint16_t KD[18];

uint16_t FP_NUM;

uint8_t GROUP;
uint16_t DIST_FL;
uint16_t DIST_FR;
uint16_t DIST_BL;
uint16_t DIST_BR;
uint16_t ALT_L_1;
uint16_t ALT_L_2;

uint16_t LOC_Y;
uint16_t LOC_X;
uint16_t LOC_Z;

uint8_t MODE;
uint8_t ANCHOR_NUM;
uint8_t ANCHOR_CNT;
uint8_t TAG_NUM;
uint8_t TAG_CNT;
uint8_t RF_MODE;
float WIDTH;
float LENGTH;
float HEIGHT;
uint8_t FILTER_SET;
float A_DELAY;
uint32_t UART_BAUD;
uint8_t ENABLE_INS;
uint8_t OUT_SELECT;

float CAL_ANC1;
float CAL_ANC2;
float CAL_ANC3;
float CAL_ANC4;
float CAL_ANC5;
float CAL_ANC6;

uint8_t RL_RUN_MODE;
uint8_t RL_ENABLE_UART;
uint32_t RL_UART_BAUD;
uint8_t RL_AIR_SPEED;
uint8_t RL_LOCAL_ADDR_0;
uint8_t RL_LOCAL_ADDR_1;
uint8_t RL_LOCAL_ADDR_2;
uint8_t RL_REMOTE_ADDR_0;
uint8_t RL_REMOTE_ADDR_1;
uint8_t RL_REMOTE_ADDR_2;
uint8_t RL_CH;
uint8_t RL_ARC;

uint32_t OF_UART_BAUD;
uint8_t OF_DATA_MODE;
uint8_t OF_DATA_FSET;
uint8_t ALT_DATA_MODE;
uint8_t ALT_DATA_FSET;
uint8_t MPU_DATA_MODE;
uint8_t MPU_DATA_FSET;
float MPU_DATA_RATE;
uint8_t ATT_DATA_MODE;
uint8_t ATT_DATA_FSET;
float ATT_DATA_RATE;
uint8_t CTL_DATA_MODE;
float CTL_DATA_RATE;
int8_t DEVIATION_X;
int8_t DEVIATION_Y;
int8_t DEVIATION_Z;

uint8_t OF_OF_MODE;
uint8_t OF_OF_QUALITY;
int8_t OF_OF_DX;
int8_t OF_OF_DY;
uint8_t OF_OF_Lightness;

int16_t OF_OF_DX2;
int16_t OF_OF_DY2;
int16_t OF_OF_DX2FIX;
int16_t OF_OF_DY2FIX;

uint8_t OF_GD_MODE;
float OF_GD_ALT;

uint8_t OF_GX_MODE;
int16_t OF_GX_GYR_X;
int16_t OF_GX_GYR_Y;
int16_t OF_GX_GYR_Z;
int16_t OF_GX_ACC_X;
int16_t OF_GX_ACC_Y;
int16_t OF_GX_ACC_Z;

uint8_t OF_ZT_MODE;
float OF_ZT_ROL;
float OF_ZT_PIT;
float OF_ZT_YAW;
float OF_ZT_S1;
float OF_ZT_S2;
float OF_ZT_S3;
float OF_ZT_S4;

uint8_t PWM1;
uint8_t PWM2;
uint8_t PWM3;
uint8_t PWM4;

uint8_t MSG_ID;
uint8_t MSG_DATA;

uint8_t FREAM_HEAD;
uint8_t CHECK_SUM;
