/********************************************************************************
** Form generated from reading UI file 'flightstatus.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLIGHTSTATUS_H
#define UI_FLIGHTSTATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>
#include "gaugeplane.h"
#include "qopengl/glwidget.h"
#include "rulerbar.h"
#include "rulerscale.h"

QT_BEGIN_NAMESPACE

class Ui_FlightStatus
{
public:
    QGridLayout *gridLayout_9;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_7;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    GLWidget *openGLWidget;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_8;
    QFrame *frame10;
    QGridLayout *gridLayout_2;
    GaugePlane *gaugePlane;
    RulerBar *rulerBar;
    RulerScale *rulerScale;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QFrame *frame5;
    QGridLayout *gridLayout_5;
    QLabel *label_13;
    QProgressBar *pgb_ROL;
    QProgressBar *pgb_PIT;
    QLabel *label_84;
    QProgressBar *pgb_THR;
    QLabel *label_14;
    QLabel *label_15;
    QProgressBar *pgb_YAW;
    QLabel *label_63;
    QFrame *frame9;
    QGridLayout *gridLayout_3;
    QLabel *label_12;
    QLabel *label_67;
    QLabel *lb_MAG_Y;
    QLabel *lb_SPEED_PIT;
    QLabel *lb_MAG_X;
    QLabel *lb_MAG_Z;
    QLabel *label_5;
    QLabel *lb_ALT_BAR;
    QLabel *label_35;
    QLabel *lb_ACC_Z;
    QLabel *label_44;
    QLabel *label_3;
    QLabel *lb_SPEED_ROL;
    QLabel *label_43;
    QLabel *label_41;
    QLabel *lb_SPEED_Z;
    QLabel *lb_GYRO_X;
    QLabel *label_40;
    QLabel *label_2;
    QLabel *label_36;
    QLabel *label;
    QLabel *lb_GYRO_Y;
    QLabel *lb_GYRO_Z;
    QLabel *lb_ALT_CSB;
    QLabel *lb_ACC_X;
    QLabel *label_37;
    QLabel *lb_ACC_Y;
    QLabel *label_4;
    QLabel *label_34;
    QFrame *frame6;
    QGridLayout *gridLayout_4;
    QLabel *lb_FLY_MODEL;
    QLabel *label_50;
    QLabel *label_54;
    QLabel *lb_ALT_USE;
    QLabel *label_62;
    QLabel *label_57;
    QLabel *label_59;
    QLabel *label_60;
    QLabel *lb_YAW;
    QLabel *label_55;
    QLabel *lb_PIT;
    QLabel *lb_ARMED;
    QLabel *lb_ROL;
    QFrame *frame7;
    QGridLayout *gridLayout_6;
    QLabel *lb_GPS_SPEEDE;
    QLabel *lb_GPS_HEIGH;
    QLabel *label_17;
    QLabel *label_19;
    QLabel *label_31;
    QLabel *label_23;
    QLabel *label_26;
    QLabel *lb_GPS_SPEEDN;
    QLabel *label_25;
    QLabel *lb_GPS_LONGITUDE;
    QLabel *lb_GPS_FPNUM;
    QLabel *lb_GPS_LATITUDE;
    QLabel *label_18;
    QLabel *label_27;
    QLabel *lb_GPS_Deg;

    void setupUi(QWidget *FlightStatus)
    {
        if (FlightStatus->objectName().isEmpty())
            FlightStatus->setObjectName(QString::fromUtf8("FlightStatus"));
        FlightStatus->resize(1000, 983);
        FlightStatus->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_9 = new QGridLayout(FlightStatus);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        scrollArea = new QScrollArea(FlightStatus);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color:#14274E;"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 976, 959));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("#scrollAreaWidgetContents{background-color:#14274E;}"));
        gridLayout_7 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        splitter_2 = new QSplitter(scrollAreaWidgetContents);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setStyleSheet(QString::fromUtf8("background-color:#14274E;"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setStyleSheet(QString::fromUtf8("background-color:#14274E;"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        openGLWidget = new GLWidget(groupBox);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(openGLWidget, 0, 0, 1, 1);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;"));
        gridLayout_8 = new QGridLayout(groupBox_2);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        frame10 = new QFrame(groupBox_2);
        frame10->setObjectName(QString::fromUtf8("frame10"));
        frame10->setMinimumSize(QSize(0, 0));
        frame10->setMaximumSize(QSize(16777215, 9999));
        frame10->setStyleSheet(QString::fromUtf8("QFrame{background-color:#394867;}"));
        gridLayout_2 = new QGridLayout(frame10);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gaugePlane = new GaugePlane(frame10);
        gaugePlane->setObjectName(QString::fromUtf8("gaugePlane"));
        gaugePlane->setProperty("bgColor", QVariant(QColor(241, 246, 249, 150)));
        gaugePlane->setProperty("planeColor", QVariant(QColor(155, 164, 180)));
        gaugePlane->setProperty("scaleColor", QVariant(QColor(20, 39, 78)));
        gaugePlane->setProperty("lineColor", QVariant(QColor(20, 39, 78)));
        gaugePlane->setProperty("textColor", QVariant(QColor(57, 72, 103)));
        gaugePlane->setProperty("handleColor", QVariant(QColor(57, 72, 103)));
        gaugePlane->setProperty("degValue", QVariant(0));
        gaugePlane->setProperty("rollValue", QVariant(0));

        gridLayout_2->addWidget(gaugePlane, 1, 3, 3, 2);

        rulerBar = new RulerBar(frame10);
        rulerBar->setObjectName(QString::fromUtf8("rulerBar"));
        rulerBar->setMaximumSize(QSize(100, 16777215));
        rulerBar->setProperty("longStep", QVariant(50));
        rulerBar->setProperty("shortStep", QVariant(10));
        rulerBar->setProperty("bgColorStart", QVariant(QColor(57, 72, 103)));
        rulerBar->setProperty("bgColorEnd", QVariant(QColor(20, 39, 78)));
        rulerBar->setProperty("barBgColor", QVariant(QColor(241, 246, 249)));
        rulerBar->setProperty("barColor", QVariant(QColor(140, 208, 248)));

        gridLayout_2->addWidget(rulerBar, 0, 2, 4, 1);

        rulerScale = new RulerScale(frame10);
        rulerScale->setObjectName(QString::fromUtf8("rulerScale"));
        rulerScale->setMinimumSize(QSize(0, 0));
        rulerScale->setProperty("minValue", QVariant(0));
        rulerScale->setProperty("scaleColor", QVariant(QColor(255, 255, 255)));
        rulerScale->setProperty("scaleNumColor", QVariant(QColor(255, 255, 255)));
        rulerScale->setProperty("pointerColor", QVariant(QColor(255, 34, 37)));
        rulerScale->setProperty("borderColor", QVariant(QColor(20, 39, 78)));
        rulerScale->setProperty("coverColor", QVariant(QColor(20, 39, 78)));

        gridLayout_2->addWidget(rulerScale, 0, 3, 1, 2);


        gridLayout_8->addWidget(frame10, 0, 0, 1, 1);

        splitter->addWidget(groupBox_2);
        splitter_2->addWidget(splitter);
        groupBox_3 = new QGroupBox(splitter_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;"));
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame5 = new QFrame(groupBox_3);
        frame5->setObjectName(QString::fromUtf8("frame5"));
        frame5->setMinimumSize(QSize(200, 0));
        frame5->setMaximumSize(QSize(200, 9999));
        frame5->setStyleSheet(QString::fromUtf8("QFrame{background-color:#394867;}"));
        frame5->setLineWidth(1);
        gridLayout_5 = new QGridLayout(frame5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_13 = new QLabel(frame5);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setStyleSheet(QString::fromUtf8("QLabel{font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"background-color:#394867;}"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_13, 5, 0, 1, 1);

        pgb_ROL = new QProgressBar(frame5);
        pgb_ROL->setObjectName(QString::fromUtf8("pgb_ROL"));
        pgb_ROL->setMinimumSize(QSize(0, 0));
        pgb_ROL->setMaximumSize(QSize(999999, 16777215));
        pgb_ROL->setStyleSheet(QString::fromUtf8("QProgressBar{background-color: #8CD0F8;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-width: 12px;\n"
"border-radius: 4px;\n"
"color: white;\n"
"text-align:right;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"}\n"
"QProgressBar::chunk {\n"
"background-color: #14274E;\n"
"width: 10px;               /* \350\256\276\347\275\256\350\277\233\345\272\246\345\235\227\345\256\275\345\272\246*/\n"
"margin: 0.5px;             /* \350\256\276\347\275\256\350\277\233\345\272\246\345\235\227\345\244\226\350\276\271\350\267\235*/\n"
"	\n"
"}\n"
""));
        pgb_ROL->setValue(24);

        gridLayout_5->addWidget(pgb_ROL, 5, 2, 1, 1);

        pgb_PIT = new QProgressBar(frame5);
        pgb_PIT->setObjectName(QString::fromUtf8("pgb_PIT"));
        pgb_PIT->setMinimumSize(QSize(0, 0));
        pgb_PIT->setMaximumSize(QSize(999999, 16777215));
        pgb_PIT->setStyleSheet(QString::fromUtf8("QProgressBar{background-color: #8CD0F8;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-width: 12px;\n"
"border-radius: 4px;\n"
"color: white;\n"
"text-align:right;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"}\n"
"QProgressBar::chunk {\n"
"background-color: #14274E;\n"
"width: 10px;               /* \350\256\276\347\275\256\350\277\233\345\272\246\345\235\227\345\256\275\345\272\246*/\n"
"margin: 0.5px;             /* \350\256\276\347\275\256\350\277\233\345\272\246\345\235\227\345\244\226\350\276\271\350\267\235*/\n"
"	\n"
"}\n"
""));
        pgb_PIT->setValue(24);

        gridLayout_5->addWidget(pgb_PIT, 6, 2, 1, 1);

        label_84 = new QLabel(frame5);
        label_84->setObjectName(QString::fromUtf8("label_84"));
        label_84->setStyleSheet(QString::fromUtf8("QLabel{font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"background-color:#394867;}"));
        label_84->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_84, 6, 0, 1, 1);

        pgb_THR = new QProgressBar(frame5);
        pgb_THR->setObjectName(QString::fromUtf8("pgb_THR"));
        pgb_THR->setMinimumSize(QSize(0, 0));
        pgb_THR->setMaximumSize(QSize(999999, 16777215));
        pgb_THR->setStyleSheet(QString::fromUtf8("QProgressBar{background-color: #8CD0F8;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-width: 12px;\n"
"border-radius: 4px;\n"
"color: white;\n"
"text-align:right;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"}\n"
"QProgressBar::chunk {\n"
"background-color: #14274E;\n"
"width: 10px;               /* \350\256\276\347\275\256\350\277\233\345\272\246\345\235\227\345\256\275\345\272\246*/\n"
"margin: 0.5px;             /* \350\256\276\347\275\256\350\277\233\345\272\246\345\235\227\345\244\226\350\276\271\350\267\235*/\n"
"	\n"
"}\n"
""));
        pgb_THR->setValue(24);

        gridLayout_5->addWidget(pgb_THR, 3, 2, 1, 1);

        label_14 = new QLabel(frame5);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setStyleSheet(QString::fromUtf8("QLabel{font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"background-color:#394867;}"));
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_14, 3, 0, 1, 1);

        label_15 = new QLabel(frame5);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setStyleSheet(QString::fromUtf8("QLabel{font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"background-color:#394867;}"));
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_15, 4, 0, 1, 1);

        pgb_YAW = new QProgressBar(frame5);
        pgb_YAW->setObjectName(QString::fromUtf8("pgb_YAW"));
        pgb_YAW->setMinimumSize(QSize(0, 0));
        pgb_YAW->setMaximumSize(QSize(999999, 16777215));
        pgb_YAW->setStyleSheet(QString::fromUtf8("QProgressBar{background-color: #8CD0F8;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-width: 12px;\n"
"border-radius: 4px;\n"
"color: white;\n"
"text-align:right;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"}\n"
"QProgressBar::chunk {\n"
"background-color: #14274E;\n"
"width: 10px;               /* \350\256\276\347\275\256\350\277\233\345\272\246\345\235\227\345\256\275\345\272\246*/\n"
"margin: 0.5px;             /* \350\256\276\347\275\256\350\277\233\345\272\246\345\235\227\345\244\226\350\276\271\350\267\235*/\n"
"	\n"
"}\n"
""));
        pgb_YAW->setValue(24);

        gridLayout_5->addWidget(pgb_YAW, 4, 2, 1, 1);

        label_63 = new QLabel(frame5);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        label_63->setMaximumSize(QSize(16777215, 29));
        label_63->setStyleSheet(QString::fromUtf8("#label_63{\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"border-left: 5px solid #9BA4B4;\n"
"background-color: #394867;\n"
"}\n"
""));
        label_63->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_63, 0, 0, 1, 3);


        horizontalLayout->addWidget(frame5);

        frame9 = new QFrame(groupBox_3);
        frame9->setObjectName(QString::fromUtf8("frame9"));
        frame9->setMinimumSize(QSize(250, 0));
        frame9->setMaximumSize(QSize(16777215, 9999));
        frame9->setStyleSheet(QString::fromUtf8("QFrame{background-color:#394867;}"));
        gridLayout_3 = new QGridLayout(frame9);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_12 = new QLabel(frame9);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(label_12, 8, 2, 1, 1);

        label_67 = new QLabel(frame9);
        label_67->setObjectName(QString::fromUtf8("label_67"));
        label_67->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(label_67, 10, 0, 1, 1);

        lb_MAG_Y = new QLabel(frame9);
        lb_MAG_Y->setObjectName(QString::fromUtf8("lb_MAG_Y"));
        lb_MAG_Y->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(lb_MAG_Y, 2, 3, 1, 1);

        lb_SPEED_PIT = new QLabel(frame9);
        lb_SPEED_PIT->setObjectName(QString::fromUtf8("lb_SPEED_PIT"));
        lb_SPEED_PIT->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(lb_SPEED_PIT, 6, 3, 1, 1);

        lb_MAG_X = new QLabel(frame9);
        lb_MAG_X->setObjectName(QString::fromUtf8("lb_MAG_X"));
        lb_MAG_X->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(lb_MAG_X, 1, 3, 1, 1);

        lb_MAG_Z = new QLabel(frame9);
        lb_MAG_Z->setObjectName(QString::fromUtf8("lb_MAG_Z"));
        lb_MAG_Z->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(lb_MAG_Z, 4, 3, 1, 1);

        label_5 = new QLabel(frame9);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(label_5, 7, 2, 1, 1);

        lb_ALT_BAR = new QLabel(frame9);
        lb_ALT_BAR->setObjectName(QString::fromUtf8("lb_ALT_BAR"));
        lb_ALT_BAR->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(lb_ALT_BAR, 10, 3, 1, 1);

        label_35 = new QLabel(frame9);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setMaximumSize(QSize(16777215, 29));
        label_35->setStyleSheet(QString::fromUtf8("#label_35{\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"border-left: 5px solid #9BA4B4;\n"
"background-color: #394867;\n"
"}\n"
""));
        label_35->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_35, 0, 0, 1, 4);

        lb_ACC_Z = new QLabel(frame9);
        lb_ACC_Z->setObjectName(QString::fromUtf8("lb_ACC_Z"));
        lb_ACC_Z->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(lb_ACC_Z, 4, 1, 1, 1);

        label_44 = new QLabel(frame9);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(label_44, 8, 0, 1, 1);

        label_3 = new QLabel(frame9);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(label_3, 4, 2, 1, 1);

        lb_SPEED_ROL = new QLabel(frame9);
        lb_SPEED_ROL->setObjectName(QString::fromUtf8("lb_SPEED_ROL"));
        lb_SPEED_ROL->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(lb_SPEED_ROL, 8, 3, 1, 1);

        label_43 = new QLabel(frame9);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(label_43, 7, 0, 1, 1);

        label_41 = new QLabel(frame9);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(label_41, 6, 0, 1, 1);

        lb_SPEED_Z = new QLabel(frame9);
        lb_SPEED_Z->setObjectName(QString::fromUtf8("lb_SPEED_Z"));
        lb_SPEED_Z->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(lb_SPEED_Z, 7, 3, 1, 1);

        lb_GYRO_X = new QLabel(frame9);
        lb_GYRO_X->setObjectName(QString::fromUtf8("lb_GYRO_X"));
        lb_GYRO_X->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(lb_GYRO_X, 6, 1, 1, 1);

        label_40 = new QLabel(frame9);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(label_40, 1, 0, 1, 1);

        label_2 = new QLabel(frame9);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(label_2, 2, 2, 1, 1);

        label_36 = new QLabel(frame9);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(label_36, 2, 0, 1, 1);

        label = new QLabel(frame9);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(label, 1, 2, 1, 1);

        lb_GYRO_Y = new QLabel(frame9);
        lb_GYRO_Y->setObjectName(QString::fromUtf8("lb_GYRO_Y"));
        lb_GYRO_Y->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(lb_GYRO_Y, 7, 1, 1, 1);

        lb_GYRO_Z = new QLabel(frame9);
        lb_GYRO_Z->setObjectName(QString::fromUtf8("lb_GYRO_Z"));
        lb_GYRO_Z->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(lb_GYRO_Z, 8, 1, 1, 1);

        lb_ALT_CSB = new QLabel(frame9);
        lb_ALT_CSB->setObjectName(QString::fromUtf8("lb_ALT_CSB"));
        lb_ALT_CSB->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(lb_ALT_CSB, 10, 1, 1, 1);

        lb_ACC_X = new QLabel(frame9);
        lb_ACC_X->setObjectName(QString::fromUtf8("lb_ACC_X"));
        lb_ACC_X->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(lb_ACC_X, 1, 1, 1, 1);

        label_37 = new QLabel(frame9);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(label_37, 10, 2, 1, 1);

        lb_ACC_Y = new QLabel(frame9);
        lb_ACC_Y->setObjectName(QString::fromUtf8("lb_ACC_Y"));
        lb_ACC_Y->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(lb_ACC_Y, 2, 1, 1, 1);

        label_4 = new QLabel(frame9);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(label_4, 6, 2, 1, 1);

        label_34 = new QLabel(frame9);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_3->addWidget(label_34, 4, 0, 1, 1);


        horizontalLayout->addWidget(frame9);

        frame6 = new QFrame(groupBox_3);
        frame6->setObjectName(QString::fromUtf8("frame6"));
        frame6->setMaximumSize(QSize(16777215, 9999));
        frame6->setStyleSheet(QString::fromUtf8("QFrame{background-color:#394867;}"));
        gridLayout_4 = new QGridLayout(frame6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        lb_FLY_MODEL = new QLabel(frame6);
        lb_FLY_MODEL->setObjectName(QString::fromUtf8("lb_FLY_MODEL"));
        lb_FLY_MODEL->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));
        lb_FLY_MODEL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(lb_FLY_MODEL, 5, 1, 1, 1);

        label_50 = new QLabel(frame6);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setStyleSheet(QString::fromUtf8("QLabel{font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"}"));
        label_50->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_50, 5, 0, 1, 1);

        label_54 = new QLabel(frame6);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setStyleSheet(QString::fromUtf8("QLabel{font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"}"));
        label_54->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_54, 2, 0, 1, 1);

        lb_ALT_USE = new QLabel(frame6);
        lb_ALT_USE->setObjectName(QString::fromUtf8("lb_ALT_USE"));
        lb_ALT_USE->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));
        lb_ALT_USE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(lb_ALT_USE, 4, 1, 1, 1);

        label_62 = new QLabel(frame6);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        label_62->setMaximumSize(QSize(16777215, 29));
        label_62->setStyleSheet(QString::fromUtf8("#label_62{\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"border-left: 5px solid #9BA4B4;\n"
"background-color: #394867;\n"
"}\n"
""));
        label_62->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_62, 0, 0, 1, 2);

        label_57 = new QLabel(frame6);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setStyleSheet(QString::fromUtf8("QLabel{font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"}"));
        label_57->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_57, 4, 0, 1, 1);

        label_59 = new QLabel(frame6);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setStyleSheet(QString::fromUtf8("QLabel{font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"}"));

        gridLayout_4->addWidget(label_59, 6, 0, 1, 1);

        label_60 = new QLabel(frame6);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setStyleSheet(QString::fromUtf8("QLabel{font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"}"));
        label_60->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_60, 3, 0, 1, 1);

        lb_YAW = new QLabel(frame6);
        lb_YAW->setObjectName(QString::fromUtf8("lb_YAW"));
        lb_YAW->setStyleSheet(QString::fromUtf8("QLabel{font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"}"));
        lb_YAW->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(lb_YAW, 3, 1, 1, 1);

        label_55 = new QLabel(frame6);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setStyleSheet(QString::fromUtf8("QLabel{font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"}"));
        label_55->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_55, 1, 0, 1, 1);

        lb_PIT = new QLabel(frame6);
        lb_PIT->setObjectName(QString::fromUtf8("lb_PIT"));
        lb_PIT->setStyleSheet(QString::fromUtf8("QLabel{font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"}"));
        lb_PIT->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(lb_PIT, 1, 1, 1, 1);

        lb_ARMED = new QLabel(frame6);
        lb_ARMED->setObjectName(QString::fromUtf8("lb_ARMED"));
        lb_ARMED->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));

        gridLayout_4->addWidget(lb_ARMED, 6, 1, 1, 1);

        lb_ROL = new QLabel(frame6);
        lb_ROL->setObjectName(QString::fromUtf8("lb_ROL"));
        lb_ROL->setStyleSheet(QString::fromUtf8("QLabel{font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"}"));
        lb_ROL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(lb_ROL, 2, 1, 1, 1);


        horizontalLayout->addWidget(frame6);

        frame7 = new QFrame(groupBox_3);
        frame7->setObjectName(QString::fromUtf8("frame7"));
        frame7->setMaximumSize(QSize(16777215, 9999));
        frame7->setStyleSheet(QString::fromUtf8("QFrame{background-color:#394867;}"));
        gridLayout_6 = new QGridLayout(frame7);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        lb_GPS_SPEEDE = new QLabel(frame7);
        lb_GPS_SPEEDE->setObjectName(QString::fromUtf8("lb_GPS_SPEEDE"));
        lb_GPS_SPEEDE->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));
        lb_GPS_SPEEDE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(lb_GPS_SPEEDE, 6, 1, 1, 1);

        lb_GPS_HEIGH = new QLabel(frame7);
        lb_GPS_HEIGH->setObjectName(QString::fromUtf8("lb_GPS_HEIGH"));
        lb_GPS_HEIGH->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));
        lb_GPS_HEIGH->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(lb_GPS_HEIGH, 4, 1, 1, 1);

        label_17 = new QLabel(frame7);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));
        label_17->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_17, 3, 0, 1, 1);

        label_19 = new QLabel(frame7);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));
        label_19->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_19, 4, 0, 1, 1);

        label_31 = new QLabel(frame7);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setMinimumSize(QSize(0, 29));
        label_31->setMaximumSize(QSize(16777215, 29));
        label_31->setStyleSheet(QString::fromUtf8("#label_31{\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"border-left: 5px solid #9BA4B4;\n"
"background-color: #394867;\n"
"}\n"
""));
        label_31->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_31, 1, 0, 1, 2);

        label_23 = new QLabel(frame7);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));
        label_23->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_23, 5, 0, 1, 1);

        label_26 = new QLabel(frame7);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));
        label_26->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_26, 7, 0, 1, 1);

        lb_GPS_SPEEDN = new QLabel(frame7);
        lb_GPS_SPEEDN->setObjectName(QString::fromUtf8("lb_GPS_SPEEDN"));
        lb_GPS_SPEEDN->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));
        lb_GPS_SPEEDN->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(lb_GPS_SPEEDN, 5, 1, 1, 1);

        label_25 = new QLabel(frame7);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));
        label_25->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_25, 6, 0, 1, 1);

        lb_GPS_LONGITUDE = new QLabel(frame7);
        lb_GPS_LONGITUDE->setObjectName(QString::fromUtf8("lb_GPS_LONGITUDE"));
        lb_GPS_LONGITUDE->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));
        lb_GPS_LONGITUDE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(lb_GPS_LONGITUDE, 3, 1, 1, 1);

        lb_GPS_FPNUM = new QLabel(frame7);
        lb_GPS_FPNUM->setObjectName(QString::fromUtf8("lb_GPS_FPNUM"));
        lb_GPS_FPNUM->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));
        lb_GPS_FPNUM->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(lb_GPS_FPNUM, 7, 1, 1, 1);

        lb_GPS_LATITUDE = new QLabel(frame7);
        lb_GPS_LATITUDE->setObjectName(QString::fromUtf8("lb_GPS_LATITUDE"));
        lb_GPS_LATITUDE->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));
        lb_GPS_LATITUDE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(lb_GPS_LATITUDE, 2, 1, 1, 1);

        label_18 = new QLabel(frame7);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));
        label_18->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_18, 2, 0, 1, 1);

        label_27 = new QLabel(frame7);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));
        label_27->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_27, 8, 0, 1, 1);

        lb_GPS_Deg = new QLabel(frame7);
        lb_GPS_Deg->setObjectName(QString::fromUtf8("lb_GPS_Deg"));
        lb_GPS_Deg->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);"));
        lb_GPS_Deg->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(lb_GPS_Deg, 8, 1, 1, 1);


        horizontalLayout->addWidget(frame7);

        splitter_2->addWidget(groupBox_3);

        gridLayout_7->addWidget(splitter_2, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_9->addWidget(scrollArea, 0, 1, 1, 1);


        retranslateUi(FlightStatus);

        QMetaObject::connectSlotsByName(FlightStatus);
    } // setupUi

    void retranslateUi(QWidget *FlightStatus)
    {
        FlightStatus->setWindowTitle(QCoreApplication::translate("FlightStatus", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FlightStatus", "\346\250\241\345\236\213\345\247\277\346\200\201", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("FlightStatus", "\351\243\236\346\234\272\350\210\252\350\241\250", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("FlightStatus", "\347\212\266\346\200\201\346\225\260\346\215\256", nullptr));
        label_13->setText(QCoreApplication::translate("FlightStatus", "ROL", nullptr));
        label_84->setText(QCoreApplication::translate("FlightStatus", "PIT", nullptr));
        label_14->setText(QCoreApplication::translate("FlightStatus", "THR", nullptr));
        label_15->setText(QCoreApplication::translate("FlightStatus", "YAW", nullptr));
        label_63->setText(QCoreApplication::translate("FlightStatus", "RCDATA", nullptr));
        label_12->setText(QCoreApplication::translate("FlightStatus", "SPEED_ROL", nullptr));
        label_67->setText(QCoreApplication::translate("FlightStatus", "ALT_CSB", nullptr));
        lb_MAG_Y->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        lb_SPEED_PIT->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        lb_MAG_X->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        lb_MAG_Z->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        label_5->setText(QCoreApplication::translate("FlightStatus", "SPEED_Z", nullptr));
        lb_ALT_BAR->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        label_35->setText(QCoreApplication::translate("FlightStatus", "SENSER", nullptr));
        lb_ACC_Z->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        label_44->setText(QCoreApplication::translate("FlightStatus", "GYRO_Z", nullptr));
        label_3->setText(QCoreApplication::translate("FlightStatus", "MAG_Z", nullptr));
        lb_SPEED_ROL->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        label_43->setText(QCoreApplication::translate("FlightStatus", "GYRO_Y", nullptr));
        label_41->setText(QCoreApplication::translate("FlightStatus", "GYRO_X", nullptr));
        lb_SPEED_Z->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        lb_GYRO_X->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        label_40->setText(QCoreApplication::translate("FlightStatus", "ACC_X", nullptr));
        label_2->setText(QCoreApplication::translate("FlightStatus", "MAG_Y", nullptr));
        label_36->setText(QCoreApplication::translate("FlightStatus", "ACC_Y", nullptr));
        label->setText(QCoreApplication::translate("FlightStatus", "MAG_X", nullptr));
        lb_GYRO_Y->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        lb_GYRO_Z->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        lb_ALT_CSB->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        lb_ACC_X->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        label_37->setText(QCoreApplication::translate("FlightStatus", "ALT_BAR", nullptr));
        lb_ACC_Y->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        label_4->setText(QCoreApplication::translate("FlightStatus", "SPEED_PIT", nullptr));
        label_34->setText(QCoreApplication::translate("FlightStatus", "ACC_Z", nullptr));
        lb_FLY_MODEL->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        label_50->setText(QCoreApplication::translate("FlightStatus", "\351\243\236\350\241\214\346\250\241\345\274\217 FLY_MODEL", nullptr));
        label_54->setText(QCoreApplication::translate("FlightStatus", "\346\250\252\346\273\232\350\247\222 ROL", nullptr));
        lb_ALT_USE->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        label_62->setText(QCoreApplication::translate("FlightStatus", "STATUS", nullptr));
        label_57->setText(QCoreApplication::translate("FlightStatus", "\347\246\273\345\234\260\351\253\230\345\272\246 ALT_USE", nullptr));
        label_59->setText(QCoreApplication::translate("FlightStatus", "ARMED", nullptr));
        label_60->setText(QCoreApplication::translate("FlightStatus", "\345\201\217\350\210\252\350\247\222 YAW", nullptr));
        lb_YAW->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        label_55->setText(QCoreApplication::translate("FlightStatus", "\344\277\257\344\273\260\350\247\222 PIT", nullptr));
        lb_PIT->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        lb_ARMED->setText(QCoreApplication::translate("FlightStatus", "1", nullptr));
        lb_ROL->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        lb_GPS_SPEEDE->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        lb_GPS_HEIGH->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        label_17->setText(QCoreApplication::translate("FlightStatus", "GPS \347\272\254\345\272\246\357\274\210\302\260\357\274\211", nullptr));
        label_19->setText(QCoreApplication::translate("FlightStatus", "GPS \346\265\267\346\213\224\351\253\230\345\272\246\357\274\210m\357\274\211", nullptr));
        label_31->setText(QCoreApplication::translate("FlightStatus", "GPSDATA", nullptr));
        label_23->setText(QCoreApplication::translate("FlightStatus", "GPS \351\200\237\345\272\246 N \357\274\210cm/s\357\274\211", nullptr));
        label_26->setText(QCoreApplication::translate("FlightStatus", "\345\215\253\346\230\237\346\225\260\351\207\217", nullptr));
        lb_GPS_SPEEDN->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        label_25->setText(QCoreApplication::translate("FlightStatus", "GPS \351\200\237\345\272\246 E \357\274\210cm/s\357\274\211", nullptr));
        lb_GPS_LONGITUDE->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        lb_GPS_FPNUM->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        lb_GPS_LATITUDE->setText(QCoreApplication::translate("FlightStatus", "0", nullptr));
        label_18->setText(QCoreApplication::translate("FlightStatus", "GPS \347\273\217\345\272\246\357\274\210\302\260\357\274\211", nullptr));
        label_27->setText(QCoreApplication::translate("FlightStatus", "\345\233\236\350\210\252\350\247\222", nullptr));
        lb_GPS_Deg->setText(QCoreApplication::translate("FlightStatus", "0.00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FlightStatus: public Ui_FlightStatus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLIGHTSTATUS_H
