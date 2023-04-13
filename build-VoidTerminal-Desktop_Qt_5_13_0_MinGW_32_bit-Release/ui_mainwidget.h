/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "lcddatetime.h"
#include "myTabWidget/mytabwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QGridLayout *gridLayout_2;
    QWidget *mainWidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *mainLayout;
    QWidget *mainDisplayWidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *titleBar;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *tbtn_min;
    QToolButton *tbtn_max;
    QToolButton *tbtn_close;
    QSplitter *splitter_4;
    QSplitter *splitter_1;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_title;
    QPushButton *btn_flightStatus;
    QPushButton *btn_waveAnalysis;
    QPushButton *btn_debugParameter;
    QPushButton *btn_dataCelibration;
    QGridLayout *gridLayout_4;
    QPushButton *btn_checkcalculator;
    QPushButton *pushButton_4;
    QPushButton *btn_openSendAndRec;
    QPushButton *pushButton_8;
    QHBoxLayout *horizontalLayout;
    QToolButton *tbtn_config;
    QToolButton *tbtn_note;
    QToolButton *tbtn_skin;
    QToolButton *tbtn_gauge;
    QToolButton *tbtn_lockModel;
    QPlainTextEdit *tb_serialPortData;
    QSplitter *splitter_3;
    QSplitter *splitter_2;
    QTabWidget *tabBar;
    QFrame *gridFrame;
    QGridLayout *gridLayout;
    QPushButton *btn_start;
    QPushButton *btn_clear;
    QPushButton *btn_stop;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *te_protocolData;
    MyTabWidget *tabSendAndRec;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *tbtn_expend_2;
    QPushButton *btn_openAndCloseSerial;
    QPushButton *btn_refresh;
    QLabel *label;
    QComboBox *cBox_SerialPortNum;
    QLabel *label_2;
    QComboBox *cBox_SerialPortBaud;
    QLabel *label_3;
    QComboBox *cBox_SerialPortDataNum;
    QLabel *label_4;
    QComboBox *cBox_SerialPortCheck;
    QLabel *label_5;
    QComboBox *cBox_SerialPortStopBit;
    QToolButton *toolButton;
    QLabel *lb_alreadyRec;
    QToolButton *toolButton_2;
    QLabel *lb_alreadySend;
    QToolButton *toolButton_3;
    QLabel *lb_error;
    QToolButton *tbtn_clearBuff;
    LcdDateTime *lcdDateTime;
    QToolButton *tbtn_expend;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QString::fromUtf8("MainWidget"));
        MainWidget->resize(1330, 850);
        MainWidget->setMinimumSize(QSize(500, 400));
        MainWidget->setMaximumSize(QSize(16777215, 16777215));
        MainWidget->setStyleSheet(QString::fromUtf8("background-color: #14274E;\n"
""));
        gridLayout_2 = new QGridLayout(MainWidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        mainWidget = new QWidget(MainWidget);
        mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        verticalLayout_5 = new QVBoxLayout(mainWidget);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        mainLayout = new QVBoxLayout();
        mainLayout->setSpacing(0);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainDisplayWidget = new QWidget(mainWidget);
        mainDisplayWidget->setObjectName(QString::fromUtf8("mainDisplayWidget"));
        mainDisplayWidget->setStyleSheet(QString::fromUtf8("background-color:#14274E"));
        verticalLayout_3 = new QVBoxLayout(mainDisplayWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        titleBar = new QWidget(mainDisplayWidget);
        titleBar->setObjectName(QString::fromUtf8("titleBar"));
        titleBar->setMinimumSize(QSize(0, 30));
        titleBar->setMaximumSize(QSize(16777215, 30));
        titleBar->setStyleSheet(QString::fromUtf8("background-color:#8CD0F8;"));
        verticalLayout_8 = new QVBoxLayout(titleBar);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(7, 0, 7, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(7);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 2, -1, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        tbtn_min = new QToolButton(titleBar);
        tbtn_min->setObjectName(QString::fromUtf8("tbtn_min"));
        tbtn_min->setMinimumSize(QSize(25, 25));
        tbtn_min->setMaximumSize(QSize(25, 25));
        tbtn_min->setStyleSheet(QString::fromUtf8("QPushButton{background-color:#c2c2c2;border-radius:9px}\n"
"QPushButton:hover {background-color:#f9bf45;border-radius:9px;}\n"
"QPushButton:pressed {background-color:#ffb11b;border-radius:9px;}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/imgs/titleSmall.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtn_min->setIcon(icon);

        horizontalLayout_3->addWidget(tbtn_min);

        tbtn_max = new QToolButton(titleBar);
        tbtn_max->setObjectName(QString::fromUtf8("tbtn_max"));
        tbtn_max->setMinimumSize(QSize(25, 25));
        tbtn_max->setMaximumSize(QSize(25, 25));
        tbtn_max->setStyleSheet(QString::fromUtf8("QPushButton{background-color:#c2c2c2;border-radius:9px}\n"
"QPushButton:hover {background-color:#227d51;border-radius:9px;}\n"
"QPushButton:pressed {background-color:#2d6d4b;border-radius:9px;}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/imgs/titleBig.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtn_max->setIcon(icon1);

        horizontalLayout_3->addWidget(tbtn_max);

        tbtn_close = new QToolButton(titleBar);
        tbtn_close->setObjectName(QString::fromUtf8("tbtn_close"));
        tbtn_close->setMinimumSize(QSize(25, 25));
        tbtn_close->setMaximumSize(QSize(25, 25));
        tbtn_close->setStyleSheet(QString::fromUtf8("QPushButton{background-color:#c2c2c2;border-radius:9px}\n"
"QPushButton:hover {background-color:#cb4042;border-radius:9px;}\n"
"QPushButton:pressed {background-color:#ab3b3a;border-radius:9px;}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/imgs/titleClose.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtn_close->setIcon(icon2);

        horizontalLayout_3->addWidget(tbtn_close);


        verticalLayout_8->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(titleBar);

        splitter_4 = new QSplitter(mainDisplayWidget);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setStyleSheet(QString::fromUtf8("QSplitter::handle { \n"
"background-color: white;\n"
"width: 2px;\n"
"}"));
        splitter_4->setOrientation(Qt::Horizontal);
        splitter_4->setOpaqueResize(false);
        splitter_1 = new QSplitter(splitter_4);
        splitter_1->setObjectName(QString::fromUtf8("splitter_1"));
        splitter_1->setOrientation(Qt::Vertical);
        verticalFrame = new QFrame(splitter_1);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        verticalFrame->setStyleSheet(QString::fromUtf8("background-color:#14274E"));
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(7, 7, 7, 7);
        btn_title = new QPushButton(verticalFrame);
        btn_title->setObjectName(QString::fromUtf8("btn_title"));
        btn_title->setMinimumSize(QSize(0, 40));
        btn_title->setStyleSheet(QString::fromUtf8("QPushButton{background-color:#14274E;\n"
"font: 75 22pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);}"));

        verticalLayout->addWidget(btn_title);

        btn_flightStatus = new QPushButton(verticalFrame);
        btn_flightStatus->setObjectName(QString::fromUtf8("btn_flightStatus"));
        btn_flightStatus->setMinimumSize(QSize(0, 50));
        btn_flightStatus->setMaximumSize(QSize(9999999, 16777215));
        btn_flightStatus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #9BA4B4;\n"
"font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"}"));

        verticalLayout->addWidget(btn_flightStatus);

        btn_waveAnalysis = new QPushButton(verticalFrame);
        btn_waveAnalysis->setObjectName(QString::fromUtf8("btn_waveAnalysis"));
        btn_waveAnalysis->setMinimumSize(QSize(0, 50));
        btn_waveAnalysis->setMaximumSize(QSize(16777215, 16777215));
        btn_waveAnalysis->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #9BA4B4;\n"
"font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"}"));

        verticalLayout->addWidget(btn_waveAnalysis);

        btn_debugParameter = new QPushButton(verticalFrame);
        btn_debugParameter->setObjectName(QString::fromUtf8("btn_debugParameter"));
        btn_debugParameter->setMinimumSize(QSize(0, 50));
        btn_debugParameter->setMaximumSize(QSize(9999999, 16777215));
        btn_debugParameter->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #9BA4B4;\n"
"font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"}"));

        verticalLayout->addWidget(btn_debugParameter);

        btn_dataCelibration = new QPushButton(verticalFrame);
        btn_dataCelibration->setObjectName(QString::fromUtf8("btn_dataCelibration"));
        btn_dataCelibration->setMinimumSize(QSize(0, 50));
        btn_dataCelibration->setMaximumSize(QSize(16777215, 16777215));
        btn_dataCelibration->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #9BA4B4;\n"
"font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"}"));

        verticalLayout->addWidget(btn_dataCelibration);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        btn_checkcalculator = new QPushButton(verticalFrame);
        btn_checkcalculator->setObjectName(QString::fromUtf8("btn_checkcalculator"));
        btn_checkcalculator->setMinimumSize(QSize(0, 50));
        btn_checkcalculator->setMaximumSize(QSize(16777215, 16777215));
        btn_checkcalculator->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #9BA4B4;\n"
"color: rgb(255,255,255);\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/imgs/calculator.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_checkcalculator->setIcon(icon3);

        gridLayout_4->addWidget(btn_checkcalculator, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(verticalFrame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(0, 50));
        pushButton_4->setMaximumSize(QSize(16777215, 16777215));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #9BA4B4;\n"
"color: rgb(255,255,255);\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/imgs/morefunc.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon4);

        gridLayout_4->addWidget(pushButton_4, 1, 1, 1, 1);

        btn_openSendAndRec = new QPushButton(verticalFrame);
        btn_openSendAndRec->setObjectName(QString::fromUtf8("btn_openSendAndRec"));
        btn_openSendAndRec->setMinimumSize(QSize(0, 50));
        btn_openSendAndRec->setMaximumSize(QSize(16777215, 16777215));
        btn_openSendAndRec->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #9BA4B4;\n"
"color: rgb(255,255,255);\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/imgs/sendAndRec.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_openSendAndRec->setIcon(icon5);
        btn_openSendAndRec->setCheckable(true);

        gridLayout_4->addWidget(btn_openSendAndRec, 0, 0, 1, 1);

        pushButton_8 = new QPushButton(verticalFrame);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(0, 50));
        pushButton_8->setMaximumSize(QSize(16777215, 16777215));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #9BA4B4;\n"
"color: rgb(255,255,255);\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/imgs/protocol.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon6);

        gridLayout_4->addWidget(pushButton_8, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tbtn_config = new QToolButton(verticalFrame);
        tbtn_config->setObjectName(QString::fromUtf8("tbtn_config"));
        tbtn_config->setMinimumSize(QSize(40, 40));
        tbtn_config->setMaximumSize(QSize(9999, 50));
        tbtn_config->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"background-color: #9BA4B4;\n"
"color: rgb(255,255,255);\n"
"}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/imgs/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtn_config->setIcon(icon7);

        horizontalLayout->addWidget(tbtn_config);

        tbtn_note = new QToolButton(verticalFrame);
        tbtn_note->setObjectName(QString::fromUtf8("tbtn_note"));
        tbtn_note->setMinimumSize(QSize(40, 40));
        tbtn_note->setMaximumSize(QSize(9999, 50));
        tbtn_note->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"background-color: #9BA4B4;\n"
"color: rgb(255,255,255);\n"
"}"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/imgs/note.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtn_note->setIcon(icon8);

        horizontalLayout->addWidget(tbtn_note);

        tbtn_skin = new QToolButton(verticalFrame);
        tbtn_skin->setObjectName(QString::fromUtf8("tbtn_skin"));
        tbtn_skin->setMinimumSize(QSize(40, 40));
        tbtn_skin->setMaximumSize(QSize(9999, 50));
        tbtn_skin->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"background-color: #9BA4B4;\n"
"color: rgb(255,255,255);\n"
"}"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/imgs/skin.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtn_skin->setIcon(icon9);

        horizontalLayout->addWidget(tbtn_skin);

        tbtn_gauge = new QToolButton(verticalFrame);
        tbtn_gauge->setObjectName(QString::fromUtf8("tbtn_gauge"));
        tbtn_gauge->setMinimumSize(QSize(40, 40));
        tbtn_gauge->setMaximumSize(QSize(9999, 50));
        tbtn_gauge->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"background-color: #9BA4B4;\n"
"color: rgb(255,255,255);\n"
"}"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/imgs/voltmeger.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtn_gauge->setIcon(icon10);

        horizontalLayout->addWidget(tbtn_gauge);

        tbtn_lockModel = new QToolButton(verticalFrame);
        tbtn_lockModel->setObjectName(QString::fromUtf8("tbtn_lockModel"));
        tbtn_lockModel->setMinimumSize(QSize(40, 40));
        tbtn_lockModel->setMaximumSize(QSize(9999, 50));
        tbtn_lockModel->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"background-color: #9BA4B4;\n"
"color: rgb(255,255,255);\n"
"}"));
        tbtn_lockModel->setCheckable(true);

        horizontalLayout->addWidget(tbtn_lockModel);


        verticalLayout->addLayout(horizontalLayout);

        splitter_1->addWidget(verticalFrame);
        tb_serialPortData = new QPlainTextEdit(splitter_1);
        tb_serialPortData->setObjectName(QString::fromUtf8("tb_serialPortData"));
        tb_serialPortData->setMaximumSize(QSize(16777215, 16777215));
        tb_serialPortData->setStyleSheet(QString::fromUtf8("QPlainTextEdit{background-color:#9BA4B4;}"));
        splitter_1->addWidget(tb_serialPortData);
        splitter_4->addWidget(splitter_1);
        splitter_3 = new QSplitter(splitter_4);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        splitter_3->setOpaqueResize(false);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setStyleSheet(QString::fromUtf8(""));
        splitter_2->setOrientation(Qt::Horizontal);
        splitter_2->setOpaqueResize(false);
        splitter_2->setChildrenCollapsible(true);
        tabBar = new QTabWidget(splitter_2);
        tabBar->setObjectName(QString::fromUtf8("tabBar"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabBar->sizePolicy().hasHeightForWidth());
        tabBar->setSizePolicy(sizePolicy);
        tabBar->setMaximumSize(QSize(16777215, 16777215));
        tabBar->setStyleSheet(QString::fromUtf8("QTabBar::tab{\n"
"background-color:#394867;\n"
"color:white;\n"
"height:35px;\n"
"width:150px;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"margin-left:2px;\n"
"}\n"
"QTabBar::tab:selected{\n"
"background-color: #a5a7a8;\n"
"border-top: 5px solid #F1F6F9;\n"
"color:white;\n"
"height:30px;\n"
"width:150px;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QTabBar::tab:hover:!selected{\n"
"background-color: #9ba6ba;\n"
"border-top: 5px solid #F1F6F9;\n"
"color:white;\n"
"height:30px;\n"
"width:150px;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QTabBar::close-button{\n"
"	image:url(:/img/imgs/close.png);\n"
"	background-color:#14274E;\n"
"}\n"
"QTabBar::close-button:hover{\n"
"	background-color:#e9ebef;\n"
"}\n"
"QTabBar::close-button:pressed{\n"
"	background-color:#F1F6F9;\n"
"}\n"
"\n"
"QTabWidget::pane{\n"
"	none;\n"
"}\n"
""));
        tabBar->setTabPosition(QTabWidget::North);
        splitter_2->addWidget(tabBar);
        gridFrame = new QFrame(splitter_2);
        gridFrame->setObjectName(QString::fromUtf8("gridFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gridFrame->sizePolicy().hasHeightForWidth());
        gridFrame->setSizePolicy(sizePolicy1);
        gridFrame->setMinimumSize(QSize(0, 0));
        gridFrame->setMaximumSize(QSize(16777215, 16777215));
        gridFrame->setStyleSheet(QString::fromUtf8("background-color:#14274E"));
        gridLayout = new QGridLayout(gridFrame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_start = new QPushButton(gridFrame);
        btn_start->setObjectName(QString::fromUtf8("btn_start"));
        btn_start->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #9BA4B4;\n"
"color: rgb(255,255,255);\n"
"}"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/img/imgs/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_start->setIcon(icon11);
        btn_start->setCheckable(true);

        gridLayout->addWidget(btn_start, 0, 1, 1, 1);

        btn_clear = new QPushButton(gridFrame);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));
        btn_clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #9BA4B4;\n"
"color: rgb(255,255,255);\n"
"}"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/img/imgs/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_clear->setIcon(icon12);

        gridLayout->addWidget(btn_clear, 0, 3, 1, 1);

        btn_stop = new QPushButton(gridFrame);
        btn_stop->setObjectName(QString::fromUtf8("btn_stop"));
        btn_stop->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #9BA4B4;\n"
"color: rgb(255,255,255);\n"
"}"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/img/imgs/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_stop->setIcon(icon13);
        btn_stop->setCheckable(true);

        gridLayout->addWidget(btn_stop, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        te_protocolData = new QPlainTextEdit(gridFrame);
        te_protocolData->setObjectName(QString::fromUtf8("te_protocolData"));
        te_protocolData->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(te_protocolData, 1, 0, 1, 5);

        splitter_2->addWidget(gridFrame);
        splitter_3->addWidget(splitter_2);
        tabSendAndRec = new MyTabWidget(splitter_3);
        tabSendAndRec->setObjectName(QString::fromUtf8("tabSendAndRec"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabSendAndRec->sizePolicy().hasHeightForWidth());
        tabSendAndRec->setSizePolicy(sizePolicy2);
        tabSendAndRec->setTabPosition(QTabWidget::South);
        splitter_3->addWidget(tabSendAndRec);
        splitter_4->addWidget(splitter_3);

        verticalLayout_3->addWidget(splitter_4);

        frame = new QFrame(mainDisplayWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(500, 0));
        frame->setMaximumSize(QSize(16777215, 50));
        frame->setStyleSheet(QString::fromUtf8("background-color: #14274E;\n"
""));
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tbtn_expend_2 = new QToolButton(frame);
        tbtn_expend_2->setObjectName(QString::fromUtf8("tbtn_expend_2"));
        tbtn_expend_2->setMaximumSize(QSize(30, 30));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/img/imgs/splitter.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtn_expend_2->setIcon(icon14);
        tbtn_expend_2->setCheckable(true);
        tbtn_expend_2->setChecked(true);

        horizontalLayout_2->addWidget(tbtn_expend_2);

        btn_openAndCloseSerial = new QPushButton(frame);
        btn_openAndCloseSerial->setObjectName(QString::fromUtf8("btn_openAndCloseSerial"));
        btn_openAndCloseSerial->setMinimumSize(QSize(20, 0));
        btn_openAndCloseSerial->setMaximumSize(QSize(80, 30));
        btn_openAndCloseSerial->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #394867;\n"
"color :#F1F6F9;\n"
"border-width: 2px;\n"
"font: 75 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:pressed{   \n"
"color:#F1F6F9;       \n"
"background-color: #9BA4B4;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :#F1F6F9;\n"
"background-color: #606A7D;\n"
"}\n"
"\n"
"\n"
""));

        horizontalLayout_2->addWidget(btn_openAndCloseSerial);

        btn_refresh = new QPushButton(frame);
        btn_refresh->setObjectName(QString::fromUtf8("btn_refresh"));
        btn_refresh->setMinimumSize(QSize(20, 0));
        btn_refresh->setMaximumSize(QSize(40, 16777215));
        btn_refresh->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #394867;\n"
"color :#F1F6F9;\n"
"border-width: 2px;\n"
"font: 75 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:pressed{   \n"
"color:#F1F6F9;       \n"
"background-color: #9BA4B4;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :#F1F6F9;\n"
"background-color: #606A7D;\n"
"}\n"
"\n"
"\n"
""));

        horizontalLayout_2->addWidget(btn_refresh);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(20, 0));
        label->setMaximumSize(QSize(16777215, 30));
        label->setStyleSheet(QString::fromUtf8("background-color:#394867;\n"
"color:rgb(255,255,255);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        cBox_SerialPortNum = new QComboBox(frame);
        cBox_SerialPortNum->setObjectName(QString::fromUtf8("cBox_SerialPortNum"));
        cBox_SerialPortNum->setMinimumSize(QSize(20, 0));
        cBox_SerialPortNum->setMaximumSize(QSize(100, 30));
        cBox_SerialPortNum->setStyleSheet(QString::fromUtf8("background-color: #394867;\n"
"color:rgb(255,255,255);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));

        horizontalLayout_2->addWidget(cBox_SerialPortNum);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(20, 0));
        label_2->setMaximumSize(QSize(16777215, 30));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setStyleSheet(QString::fromUtf8("background-color:#394867;\n"
"color:rgb(255,255,255);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        cBox_SerialPortBaud = new QComboBox(frame);
        cBox_SerialPortBaud->setObjectName(QString::fromUtf8("cBox_SerialPortBaud"));
        cBox_SerialPortBaud->setMinimumSize(QSize(20, 0));
        cBox_SerialPortBaud->setMaximumSize(QSize(16777215, 30));
        cBox_SerialPortBaud->setStyleSheet(QString::fromUtf8("background-color: #394867;\n"
"color:rgb(255,255,255);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));

        horizontalLayout_2->addWidget(cBox_SerialPortBaud);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(20, 0));
        label_3->setMaximumSize(QSize(16777215, 30));
        label_3->setStyleSheet(QString::fromUtf8("background-color:#394867;\n"
"color:rgb(255,255,255);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        cBox_SerialPortDataNum = new QComboBox(frame);
        cBox_SerialPortDataNum->setObjectName(QString::fromUtf8("cBox_SerialPortDataNum"));
        cBox_SerialPortDataNum->setMinimumSize(QSize(20, 0));
        cBox_SerialPortDataNum->setMaximumSize(QSize(16777215, 30));
        cBox_SerialPortDataNum->setStyleSheet(QString::fromUtf8("background-color: #394867;\n"
"color:rgb(255,255,255);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));

        horizontalLayout_2->addWidget(cBox_SerialPortDataNum);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(20, 0));
        label_4->setMaximumSize(QSize(16777215, 30));
        label_4->setStyleSheet(QString::fromUtf8("background-color:#394867;\n"
"color:rgb(255,255,255);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_4);

        cBox_SerialPortCheck = new QComboBox(frame);
        cBox_SerialPortCheck->setObjectName(QString::fromUtf8("cBox_SerialPortCheck"));
        cBox_SerialPortCheck->setMinimumSize(QSize(20, 0));
        cBox_SerialPortCheck->setMaximumSize(QSize(16777215, 30));
        cBox_SerialPortCheck->setStyleSheet(QString::fromUtf8("background-color: #394867;\n"
"color:rgb(255,255,255);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));

        horizontalLayout_2->addWidget(cBox_SerialPortCheck);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(20, 0));
        label_5->setMaximumSize(QSize(16777215, 30));
        label_5->setStyleSheet(QString::fromUtf8("background-color:#394867;\n"
"color:rgb(255,255,255);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_5);

        cBox_SerialPortStopBit = new QComboBox(frame);
        cBox_SerialPortStopBit->setObjectName(QString::fromUtf8("cBox_SerialPortStopBit"));
        cBox_SerialPortStopBit->setMinimumSize(QSize(20, 0));
        cBox_SerialPortStopBit->setMaximumSize(QSize(16777215, 30));
        cBox_SerialPortStopBit->setStyleSheet(QString::fromUtf8("background-color: #394867;\n"
"color:rgb(255,255,255);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));

        horizontalLayout_2->addWidget(cBox_SerialPortStopBit);

        toolButton = new QToolButton(frame);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setMaximumSize(QSize(60, 16777215));
        toolButton->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:#9BA4B4;"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/img/imgs/alRec.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon15);
        toolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(toolButton);

        lb_alreadyRec = new QLabel(frame);
        lb_alreadyRec->setObjectName(QString::fromUtf8("lb_alreadyRec"));
        lb_alreadyRec->setMinimumSize(QSize(20, 0));
        lb_alreadyRec->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"font: 75 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_2->addWidget(lb_alreadyRec);

        toolButton_2 = new QToolButton(frame);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setMaximumSize(QSize(60, 16777215));
        toolButton_2->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:#9BA4B4;"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/img/imgs/alSend.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon16);
        toolButton_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(toolButton_2);

        lb_alreadySend = new QLabel(frame);
        lb_alreadySend->setObjectName(QString::fromUtf8("lb_alreadySend"));
        lb_alreadySend->setMinimumSize(QSize(20, 0));
        lb_alreadySend->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"font: 75 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_2->addWidget(lb_alreadySend);

        toolButton_3 = new QToolButton(frame);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        toolButton_3->setMaximumSize(QSize(90, 16777215));
        toolButton_3->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:#9BA4B4;"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/img/imgs/error.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon17);
        toolButton_3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(toolButton_3);

        lb_error = new QLabel(frame);
        lb_error->setObjectName(QString::fromUtf8("lb_error"));
        lb_error->setMinimumSize(QSize(20, 0));
        lb_error->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"font: 75 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_2->addWidget(lb_error);

        tbtn_clearBuff = new QToolButton(frame);
        tbtn_clearBuff->setObjectName(QString::fromUtf8("tbtn_clearBuff"));
        tbtn_clearBuff->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:#9BA4B4;"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/img/imgs/clearBuff.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtn_clearBuff->setIcon(icon18);

        horizontalLayout_2->addWidget(tbtn_clearBuff);

        lcdDateTime = new LcdDateTime(frame);
        lcdDateTime->setObjectName(QString::fromUtf8("lcdDateTime"));
        lcdDateTime->setMaximumSize(QSize(70, 16777215));
        lcdDateTime->setStyleSheet(QString::fromUtf8("color:white;"));
        lcdDateTime->setDigitCount(8);
        lcdDateTime->setProperty("dotHide", QVariant(false));

        horizontalLayout_2->addWidget(lcdDateTime);

        tbtn_expend = new QToolButton(frame);
        tbtn_expend->setObjectName(QString::fromUtf8("tbtn_expend"));
        tbtn_expend->setMaximumSize(QSize(30, 30));
        tbtn_expend->setIcon(icon14);
        tbtn_expend->setCheckable(true);

        horizontalLayout_2->addWidget(tbtn_expend);


        verticalLayout_3->addWidget(frame);


        mainLayout->addWidget(mainDisplayWidget);


        verticalLayout_5->addLayout(mainLayout);


        gridLayout_2->addWidget(mainWidget, 0, 0, 1, 1);


        retranslateUi(MainWidget);

        tabBar->setCurrentIndex(-1);
        tabSendAndRec->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QCoreApplication::translate("MainWidget", "MainWidget", nullptr));
        tbtn_min->setText(QString());
        tbtn_max->setText(QString());
        tbtn_close->setText(QString());
        btn_title->setText(QCoreApplication::translate("MainWidget", "\350\231\232\347\251\272\347\273\210\347\253\257", nullptr));
        btn_flightStatus->setText(QCoreApplication::translate("MainWidget", "\351\243\236\346\216\247\347\212\266\346\200\201", nullptr));
        btn_waveAnalysis->setText(QCoreApplication::translate("MainWidget", "\346\263\242\345\275\242\345\210\206\346\236\220", nullptr));
        btn_debugParameter->setText(QCoreApplication::translate("MainWidget", "\350\260\203\350\257\225\345\217\202\346\225\260", nullptr));
        btn_dataCelibration->setText(QCoreApplication::translate("MainWidget", "\346\225\260\346\215\256\346\240\241\345\207\206", nullptr));
        btn_checkcalculator->setText(QCoreApplication::translate("MainWidget", "\346\240\241\351\252\214\350\256\241\347\256\227\345\231\250", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWidget", "\346\233\264\345\244\232\345\212\237\350\203\275", nullptr));
        btn_openSendAndRec->setText(QCoreApplication::translate("MainWidget", "\345\237\272\346\234\254\346\224\266\345\217\221", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWidget", "\346\237\245\347\234\213\345\215\217\350\256\256", nullptr));
        tbtn_config->setText(QCoreApplication::translate("MainWidget", "...", nullptr));
        tbtn_note->setText(QCoreApplication::translate("MainWidget", "...", nullptr));
        tbtn_skin->setText(QCoreApplication::translate("MainWidget", "...", nullptr));
        tbtn_gauge->setText(QCoreApplication::translate("MainWidget", "...", nullptr));
        tbtn_lockModel->setText(QCoreApplication::translate("MainWidget", "...", nullptr));
        btn_start->setText(QCoreApplication::translate("MainWidget", "\345\274\200\345\247\213", nullptr));
        btn_clear->setText(QCoreApplication::translate("MainWidget", "\346\270\205\347\251\272", nullptr));
        btn_stop->setText(QCoreApplication::translate("MainWidget", "\346\232\202\345\201\234", nullptr));
        tbtn_expend_2->setText(QCoreApplication::translate("MainWidget", "...", nullptr));
        btn_openAndCloseSerial->setText(QCoreApplication::translate("MainWidget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        btn_refresh->setText(QCoreApplication::translate("MainWidget", "\345\210\267\346\226\260", nullptr));
        label->setText(QCoreApplication::translate("MainWidget", "\344\270\262\345\217\243\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWidget", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWidget", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWidget", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MainWidget", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWidget", "RX\357\274\232", nullptr));
        lb_alreadyRec->setText(QCoreApplication::translate("MainWidget", "0", nullptr));
        toolButton_2->setText(QCoreApplication::translate("MainWidget", "TX\357\274\232", nullptr));
        lb_alreadySend->setText(QCoreApplication::translate("MainWidget", "0", nullptr));
        toolButton_3->setText(QCoreApplication::translate("MainWidget", "\351\224\231\350\257\257\345\270\247\357\274\232", nullptr));
        lb_error->setText(QCoreApplication::translate("MainWidget", "0", nullptr));
        tbtn_clearBuff->setText(QCoreApplication::translate("MainWidget", "...", nullptr));
        lcdDateTime->setProperty("format", QVariant(QCoreApplication::translate("MainWidget", "HH:mm:ss", nullptr)));
        tbtn_expend->setText(QCoreApplication::translate("MainWidget", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
