/********************************************************************************
** Form generated from reading UI file 'waveanalysis.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAVEANALYSIS_H
#define UI_WAVEANALYSIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_WaveAnalysis
{
public:
    QGridLayout *gridLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QFrame *gridFrame;
    QGridLayout *gridLayout;
    QwtPlot *qwtPlot;
    QPushButton *btn_settingLine;
    QPushButton *btn_exportToExcel;
    QFrame *gridFrame1;
    QGridLayout *gridLayout_2;
    QCheckBox *cb_DATA_6;
    QCheckBox *cb_DATA_1;
    QCheckBox *cb_DATA_4;
    QCheckBox *cb_DATA_5;
    QCheckBox *cb_DATA_3;
    QCheckBox *cb_DATA_2;
    QCheckBox *cb_DATA_7;
    QCheckBox *cb_DATA_14;
    QCheckBox *cb_DATA_13;
    QCheckBox *cb_DATA_12;
    QCheckBox *cb_DATA_11;
    QCheckBox *cb_DATA_10;
    QCheckBox *cb_DATA_9;
    QCheckBox *cb_DATA_8;
    QLabel *label_2;
    QPushButton *btn_startOrStopShow;
    QPushButton *btn_showBrush;

    void setupUi(QWidget *WaveAnalysis)
    {
        if (WaveAnalysis->objectName().isEmpty())
            WaveAnalysis->setObjectName(QString::fromUtf8("WaveAnalysis"));
        WaveAnalysis->resize(1178, 892);
        gridLayout_4 = new QGridLayout(WaveAnalysis);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        scrollArea = new QScrollArea(WaveAnalysis);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color:#14274E;"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1154, 868));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridFrame = new QFrame(scrollAreaWidgetContents);
        gridFrame->setObjectName(QString::fromUtf8("gridFrame"));
        gridFrame->setStyleSheet(QString::fromUtf8("background-color:#394867;\n"
""));
        gridLayout = new QGridLayout(gridFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qwtPlot = new QwtPlot(gridFrame);
        qwtPlot->setObjectName(QString::fromUtf8("qwtPlot"));
        qwtPlot->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(qwtPlot, 0, 0, 1, 1);


        gridLayout_3->addWidget(gridFrame, 0, 0, 1, 2);

        btn_settingLine = new QPushButton(scrollAreaWidgetContents);
        btn_settingLine->setObjectName(QString::fromUtf8("btn_settingLine"));
        btn_settingLine->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #9BA4B4;\n"
"border-width: 3px;\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
"}\n"
"QPushButton:pressed{          \n"
"background-color: #F1F6F9;\n"
"border-style: inset;\n"
"color:black;\n"
"}\n"
""));

        gridLayout_3->addWidget(btn_settingLine, 3, 1, 1, 1);

        btn_exportToExcel = new QPushButton(scrollAreaWidgetContents);
        btn_exportToExcel->setObjectName(QString::fromUtf8("btn_exportToExcel"));
        btn_exportToExcel->setMaximumSize(QSize(100, 16777215));
        btn_exportToExcel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #9BA4B4;\n"
"border-width: 3px;\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
"}\n"
"QPushButton:pressed{          \n"
"background-color: #F1F6F9;\n"
"border-style: inset;\n"
"color:black;\n"
"}\n"
""));

        gridLayout_3->addWidget(btn_exportToExcel, 4, 1, 1, 1);

        gridFrame1 = new QFrame(scrollAreaWidgetContents);
        gridFrame1->setObjectName(QString::fromUtf8("gridFrame1"));
        gridFrame1->setMaximumSize(QSize(16777215, 200));
        gridFrame1->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background-color:#394867;\n"
"}"));
        gridLayout_2 = new QGridLayout(gridFrame1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        cb_DATA_6 = new QCheckBox(gridFrame1);
        cb_DATA_6->setObjectName(QString::fromUtf8("cb_DATA_6"));
        cb_DATA_6->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"color: white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color:#394867;\n"
"}\n"
"QCheckBox::indicator::checked {\n"
"   background-color:black;   /*\350\256\276\347\275\256\351\200\211\344\270\255\347\212\266\346\200\201*/\n"
"}"));

        gridLayout_2->addWidget(cb_DATA_6, 0, 6, 1, 1);

        cb_DATA_1 = new QCheckBox(gridFrame1);
        cb_DATA_1->setObjectName(QString::fromUtf8("cb_DATA_1"));
        cb_DATA_1->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"color: white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color:#394867;\n"
"}\n"
"QCheckBox::indicator::checked {\n"
"   background-color:black;   /*\350\256\276\347\275\256\351\200\211\344\270\255\347\212\266\346\200\201*/\n"
"}"));

        gridLayout_2->addWidget(cb_DATA_1, 0, 1, 1, 1);

        cb_DATA_4 = new QCheckBox(gridFrame1);
        cb_DATA_4->setObjectName(QString::fromUtf8("cb_DATA_4"));
        cb_DATA_4->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"color: white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color:#394867;\n"
"}\n"
"QCheckBox::indicator::checked {\n"
"   background-color:black;   /*\350\256\276\347\275\256\351\200\211\344\270\255\347\212\266\346\200\201*/\n"
"}"));

        gridLayout_2->addWidget(cb_DATA_4, 0, 4, 1, 1);

        cb_DATA_5 = new QCheckBox(gridFrame1);
        cb_DATA_5->setObjectName(QString::fromUtf8("cb_DATA_5"));
        cb_DATA_5->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"color: white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color:#394867;\n"
"}\n"
"QCheckBox::indicator::checked {\n"
"   background-color:black;   /*\350\256\276\347\275\256\351\200\211\344\270\255\347\212\266\346\200\201*/\n"
"}"));

        gridLayout_2->addWidget(cb_DATA_5, 0, 5, 1, 1);

        cb_DATA_3 = new QCheckBox(gridFrame1);
        cb_DATA_3->setObjectName(QString::fromUtf8("cb_DATA_3"));
        cb_DATA_3->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"color: white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color:#394867;\n"
"}\n"
"QCheckBox::indicator::checked {\n"
"   background-color:black;   /*\350\256\276\347\275\256\351\200\211\344\270\255\347\212\266\346\200\201*/\n"
"}"));

        gridLayout_2->addWidget(cb_DATA_3, 0, 3, 1, 1);

        cb_DATA_2 = new QCheckBox(gridFrame1);
        cb_DATA_2->setObjectName(QString::fromUtf8("cb_DATA_2"));
        cb_DATA_2->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"color: white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color:#394867;\n"
"}\n"
"QCheckBox::indicator::checked {\n"
"   background-color:black;   /*\350\256\276\347\275\256\351\200\211\344\270\255\347\212\266\346\200\201*/\n"
"}"));

        gridLayout_2->addWidget(cb_DATA_2, 0, 2, 1, 1);

        cb_DATA_7 = new QCheckBox(gridFrame1);
        cb_DATA_7->setObjectName(QString::fromUtf8("cb_DATA_7"));
        cb_DATA_7->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"color: white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color:#394867;\n"
"}\n"
"QCheckBox::indicator::checked {\n"
"   background-color:black;   /*\350\256\276\347\275\256\351\200\211\344\270\255\347\212\266\346\200\201*/\n"
"}"));

        gridLayout_2->addWidget(cb_DATA_7, 0, 7, 1, 1);

        cb_DATA_14 = new QCheckBox(gridFrame1);
        cb_DATA_14->setObjectName(QString::fromUtf8("cb_DATA_14"));
        cb_DATA_14->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"color: white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color:#394867;\n"
"}\n"
"QCheckBox::indicator::checked {\n"
"   background-color:black;   /*\350\256\276\347\275\256\351\200\211\344\270\255\347\212\266\346\200\201*/\n"
"}"));

        gridLayout_2->addWidget(cb_DATA_14, 1, 7, 1, 1);

        cb_DATA_13 = new QCheckBox(gridFrame1);
        cb_DATA_13->setObjectName(QString::fromUtf8("cb_DATA_13"));
        cb_DATA_13->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"color: white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color:#394867;\n"
"}\n"
"QCheckBox::indicator::checked {\n"
"   background-color:black;   /*\350\256\276\347\275\256\351\200\211\344\270\255\347\212\266\346\200\201*/\n"
"}"));

        gridLayout_2->addWidget(cb_DATA_13, 1, 6, 1, 1);

        cb_DATA_12 = new QCheckBox(gridFrame1);
        cb_DATA_12->setObjectName(QString::fromUtf8("cb_DATA_12"));
        cb_DATA_12->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"color: white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color:#394867;\n"
"}\n"
"QCheckBox::indicator::checked {\n"
"   background-color:black;   /*\350\256\276\347\275\256\351\200\211\344\270\255\347\212\266\346\200\201*/\n"
"}"));

        gridLayout_2->addWidget(cb_DATA_12, 1, 5, 1, 1);

        cb_DATA_11 = new QCheckBox(gridFrame1);
        cb_DATA_11->setObjectName(QString::fromUtf8("cb_DATA_11"));
        cb_DATA_11->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"color: white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color:#394867;\n"
"}\n"
"QCheckBox::indicator::checked {\n"
"   background-color:black;   /*\350\256\276\347\275\256\351\200\211\344\270\255\347\212\266\346\200\201*/\n"
"}"));

        gridLayout_2->addWidget(cb_DATA_11, 1, 4, 1, 1);

        cb_DATA_10 = new QCheckBox(gridFrame1);
        cb_DATA_10->setObjectName(QString::fromUtf8("cb_DATA_10"));
        cb_DATA_10->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"color: white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color:#394867;\n"
"}\n"
"QCheckBox::indicator::checked {\n"
"   background-color:black;   /*\350\256\276\347\275\256\351\200\211\344\270\255\347\212\266\346\200\201*/\n"
"}"));

        gridLayout_2->addWidget(cb_DATA_10, 1, 3, 1, 1);

        cb_DATA_9 = new QCheckBox(gridFrame1);
        cb_DATA_9->setObjectName(QString::fromUtf8("cb_DATA_9"));
        cb_DATA_9->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"color: white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color:#394867;\n"
"}\n"
"QCheckBox::indicator::checked {\n"
"   background-color:black;   /*\350\256\276\347\275\256\351\200\211\344\270\255\347\212\266\346\200\201*/\n"
"}"));

        gridLayout_2->addWidget(cb_DATA_9, 1, 2, 1, 1);

        cb_DATA_8 = new QCheckBox(gridFrame1);
        cb_DATA_8->setObjectName(QString::fromUtf8("cb_DATA_8"));
        cb_DATA_8->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"color: white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color:#394867;\n"
"}\n"
"QCheckBox::indicator::checked {\n"
"   background-color:black;   /*\350\256\276\347\275\256\351\200\211\344\270\255\347\212\266\346\200\201*/\n"
"}"));

        gridLayout_2->addWidget(cb_DATA_8, 1, 1, 1, 1);

        label_2 = new QLabel(gridFrame1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"border-left: 5px solid #9BA4B4;\n"
"background-color: #394867;\n"
"}\n"
""));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 2, 1);


        gridLayout_3->addWidget(gridFrame1, 2, 0, 4, 1);

        btn_startOrStopShow = new QPushButton(scrollAreaWidgetContents);
        btn_startOrStopShow->setObjectName(QString::fromUtf8("btn_startOrStopShow"));
        btn_startOrStopShow->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #9BA4B4;\n"
"border-width: 3px;\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
"}\n"
"QPushButton:pressed{          \n"
"background-color: #F1F6F9;\n"
"border-style: inset;\n"
"color:black;\n"
"}\n"
""));

        gridLayout_3->addWidget(btn_startOrStopShow, 5, 1, 1, 1);

        btn_showBrush = new QPushButton(scrollAreaWidgetContents);
        btn_showBrush->setObjectName(QString::fromUtf8("btn_showBrush"));
        btn_showBrush->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #9BA4B4;\n"
"border-width: 3px;\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
"}\n"
"QPushButton:pressed{          \n"
"background-color: #F1F6F9;\n"
"border-style: inset;\n"
"color:black;\n"
"}\n"
""));
        btn_showBrush->setCheckable(true);

        gridLayout_3->addWidget(btn_showBrush, 2, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_4->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(WaveAnalysis);

        QMetaObject::connectSlotsByName(WaveAnalysis);
    } // setupUi

    void retranslateUi(QWidget *WaveAnalysis)
    {
        WaveAnalysis->setWindowTitle(QCoreApplication::translate("WaveAnalysis", "Form", nullptr));
        btn_settingLine->setText(QCoreApplication::translate("WaveAnalysis", "\350\256\276\347\275\256\346\233\262\347\272\277", nullptr));
        btn_exportToExcel->setText(QCoreApplication::translate("WaveAnalysis", "\345\257\274\345\207\272\345\210\260excel", nullptr));
        cb_DATA_6->setText(QCoreApplication::translate("WaveAnalysis", "DATA_6", nullptr));
        cb_DATA_1->setText(QCoreApplication::translate("WaveAnalysis", "DATA_1", nullptr));
        cb_DATA_4->setText(QCoreApplication::translate("WaveAnalysis", "DATA_4", nullptr));
        cb_DATA_5->setText(QCoreApplication::translate("WaveAnalysis", "DATA_5", nullptr));
        cb_DATA_3->setText(QCoreApplication::translate("WaveAnalysis", "DATA_3", nullptr));
        cb_DATA_2->setText(QCoreApplication::translate("WaveAnalysis", "DATA_2", nullptr));
        cb_DATA_7->setText(QCoreApplication::translate("WaveAnalysis", "DATA_7", nullptr));
        cb_DATA_14->setText(QCoreApplication::translate("WaveAnalysis", "DATA_14", nullptr));
        cb_DATA_13->setText(QCoreApplication::translate("WaveAnalysis", "DATA_13", nullptr));
        cb_DATA_12->setText(QCoreApplication::translate("WaveAnalysis", "DATA_12", nullptr));
        cb_DATA_11->setText(QCoreApplication::translate("WaveAnalysis", "DATA_11", nullptr));
        cb_DATA_10->setText(QCoreApplication::translate("WaveAnalysis", "DATA_10", nullptr));
        cb_DATA_9->setText(QCoreApplication::translate("WaveAnalysis", "DATA_9", nullptr));
        cb_DATA_8->setText(QCoreApplication::translate("WaveAnalysis", "DATA_8", nullptr));
        label_2->setText(QCoreApplication::translate("WaveAnalysis", "\351\200\211\346\213\251\346\233\262\347\272\277", nullptr));
        btn_startOrStopShow->setText(QCoreApplication::translate("WaveAnalysis", "\345\274\200\345\247\213\346\230\276\347\244\272", nullptr));
        btn_showBrush->setText(QCoreApplication::translate("WaveAnalysis", "\346\230\276\347\244\272\345\241\253\345\205\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WaveAnalysis: public Ui_WaveAnalysis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAVEANALYSIS_H
