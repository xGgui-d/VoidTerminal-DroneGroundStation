/********************************************************************************
** Form generated from reading UI file 'debugparameter.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGPARAMETER_H
#define UI_DEBUGPARAMETER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DebugParameter
{
public:
    QGridLayout *gridLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QTextBrowser *tb_showMsg;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_5;
    QSpinBox *sb_i2;
    QSpinBox *sb_i6;
    QSpinBox *sb_p6;
    QLineEdit *lineEdit_6;
    QSpinBox *sb_d3;
    QSpinBox *sb_p3;
    QSpinBox *sb_i1;
    QSpinBox *sb_i5;
    QSpinBox *sb_d4;
    QSpinBox *sb_d2;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QSpinBox *sb_d5;
    QSpinBox *sb_p2;
    QSpinBox *sb_p1;
    QSpinBox *sb_i3;
    QLineEdit *lineEdit_4;
    QSpinBox *sb_i4;
    QSpinBox *sb_d1;
    QSpinBox *sb_p5;
    QLineEdit *lineEdit_3;
    QSpinBox *sb_p4;
    QSpinBox *sb_d6;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QSpinBox *sb_p11;
    QLineEdit *lineEdit_10;
    QSpinBox *sb_d11;
    QSpinBox *sb_p10;
    QSpinBox *sb_p7;
    QLineEdit *lineEdit_7;
    QSpinBox *sb_i8;
    QLineEdit *lineEdit_12;
    QSpinBox *sb_d9;
    QLineEdit *lineEdit_8;
    QSpinBox *sb_p9;
    QSpinBox *sb_i11;
    QSpinBox *sb_d8;
    QSpinBox *sb_i7;
    QSpinBox *sb_d7;
    QSpinBox *sb_d12;
    QSpinBox *sb_p8;
    QSpinBox *sb_i9;
    QSpinBox *sb_p12;
    QSpinBox *sb_i12;
    QSpinBox *sb_i10;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_11;
    QSpinBox *sb_d10;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_6;
    QLineEdit *lineEdit_13;
    QSpinBox *sb_i15;
    QSpinBox *sb_p15;
    QSpinBox *sb_i14;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_15;
    QSpinBox *sb_p14;
    QSpinBox *sb_p13;
    QSpinBox *sb_d14;
    QSpinBox *sb_i13;
    QLineEdit *lineEdit_14;
    QSpinBox *sb_d15;
    QSpinBox *sb_d13;
    QLineEdit *lineEdit_16;
    QLineEdit *lineEdit_18;
    QSpinBox *sb_p16;
    QSpinBox *sb_i16;
    QSpinBox *sb_d16;
    QSpinBox *sb_p17;
    QSpinBox *sb_i17;
    QSpinBox *sb_d17;
    QSpinBox *sb_p18;
    QSpinBox *sb_i18;
    QSpinBox *sb_d18;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *tbtn_clear;
    QPushButton *btn_clearSpinBox;
    QLabel *label_2;
    QSpinBox *sb_delay;
    QLabel *label_3;
    QPushButton *btn_writePID;
    QPushButton *btn_readPID;
    QPushButton *btn_recoverDefault;
    QPushButton *btn_savePID;

    void setupUi(QWidget *DebugParameter)
    {
        if (DebugParameter->objectName().isEmpty())
            DebugParameter->setObjectName(QString::fromUtf8("DebugParameter"));
        DebugParameter->resize(1000, 710);
        gridLayout_4 = new QGridLayout(DebugParameter);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        scrollArea = new QScrollArea(DebugParameter);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMinimumSize(QSize(0, 45));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color:#14274E;"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 976, 686));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("background-color:#394867;"));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tb_showMsg = new QTextBrowser(scrollAreaWidgetContents);
        tb_showMsg->setObjectName(QString::fromUtf8("tb_showMsg"));
        tb_showMsg->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));

        gridLayout_2->addWidget(tb_showMsg, 2, 0, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 20));
        label->setMaximumSize(QSize(16777215, 20));
        label->setStyleSheet(QString::fromUtf8("QLabel{font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"border-left: 5px solid #9BA4B4;\n"
"}\n"
""));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 45));
        groupBox->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(0, 20));
        lineEdit_5->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(lineEdit_5, 4, 0, 1, 1);

        sb_i2 = new QSpinBox(groupBox);
        sb_i2->setObjectName(QString::fromUtf8("sb_i2"));
        sb_i2->setMinimumSize(QSize(50, 20));
        sb_i2->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout->addWidget(sb_i2, 1, 2, 1, 1);

        sb_i6 = new QSpinBox(groupBox);
        sb_i6->setObjectName(QString::fromUtf8("sb_i6"));
        sb_i6->setMinimumSize(QSize(50, 20));
        sb_i6->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout->addWidget(sb_i6, 5, 2, 1, 1);

        sb_p6 = new QSpinBox(groupBox);
        sb_p6->setObjectName(QString::fromUtf8("sb_p6"));
        sb_p6->setMinimumSize(QSize(50, 20));
        sb_p6->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout->addWidget(sb_p6, 5, 1, 1, 1);

        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setMinimumSize(QSize(0, 20));
        lineEdit_6->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(lineEdit_6, 5, 0, 1, 1);

        sb_d3 = new QSpinBox(groupBox);
        sb_d3->setObjectName(QString::fromUtf8("sb_d3"));
        sb_d3->setMinimumSize(QSize(50, 20));
        sb_d3->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout->addWidget(sb_d3, 2, 3, 1, 1);

        sb_p3 = new QSpinBox(groupBox);
        sb_p3->setObjectName(QString::fromUtf8("sb_p3"));
        sb_p3->setMinimumSize(QSize(50, 20));
        sb_p3->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout->addWidget(sb_p3, 2, 1, 1, 1);

        sb_i1 = new QSpinBox(groupBox);
        sb_i1->setObjectName(QString::fromUtf8("sb_i1"));
        sb_i1->setMinimumSize(QSize(50, 20));
        sb_i1->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout->addWidget(sb_i1, 0, 2, 1, 1);

        sb_i5 = new QSpinBox(groupBox);
        sb_i5->setObjectName(QString::fromUtf8("sb_i5"));
        sb_i5->setMinimumSize(QSize(50, 20));
        sb_i5->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout->addWidget(sb_i5, 4, 2, 1, 1);

        sb_d4 = new QSpinBox(groupBox);
        sb_d4->setObjectName(QString::fromUtf8("sb_d4"));
        sb_d4->setMinimumSize(QSize(50, 20));
        sb_d4->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout->addWidget(sb_d4, 3, 3, 1, 1);

        sb_d2 = new QSpinBox(groupBox);
        sb_d2->setObjectName(QString::fromUtf8("sb_d2"));
        sb_d2->setMinimumSize(QSize(50, 20));
        sb_d2->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout->addWidget(sb_d2, 1, 3, 1, 1);

        lineEdit_1 = new QLineEdit(groupBox);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setMinimumSize(QSize(0, 20));
        lineEdit_1->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(lineEdit_1, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 20));
        lineEdit_2->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(lineEdit_2, 1, 0, 1, 1);

        sb_d5 = new QSpinBox(groupBox);
        sb_d5->setObjectName(QString::fromUtf8("sb_d5"));
        sb_d5->setMinimumSize(QSize(50, 20));
        sb_d5->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout->addWidget(sb_d5, 4, 3, 1, 1);

        sb_p2 = new QSpinBox(groupBox);
        sb_p2->setObjectName(QString::fromUtf8("sb_p2"));
        sb_p2->setMinimumSize(QSize(50, 20));
        sb_p2->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout->addWidget(sb_p2, 1, 1, 1, 1);

        sb_p1 = new QSpinBox(groupBox);
        sb_p1->setObjectName(QString::fromUtf8("sb_p1"));
        sb_p1->setMinimumSize(QSize(50, 20));
        sb_p1->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout->addWidget(sb_p1, 0, 1, 1, 1);

        sb_i3 = new QSpinBox(groupBox);
        sb_i3->setObjectName(QString::fromUtf8("sb_i3"));
        sb_i3->setMinimumSize(QSize(50, 20));
        sb_i3->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout->addWidget(sb_i3, 2, 2, 1, 1);

        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(0, 20));
        lineEdit_4->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(lineEdit_4, 3, 0, 1, 1);

        sb_i4 = new QSpinBox(groupBox);
        sb_i4->setObjectName(QString::fromUtf8("sb_i4"));
        sb_i4->setMinimumSize(QSize(50, 20));
        sb_i4->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout->addWidget(sb_i4, 3, 2, 1, 1);

        sb_d1 = new QSpinBox(groupBox);
        sb_d1->setObjectName(QString::fromUtf8("sb_d1"));
        sb_d1->setMinimumSize(QSize(50, 20));
        sb_d1->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout->addWidget(sb_d1, 0, 3, 1, 1);

        sb_p5 = new QSpinBox(groupBox);
        sb_p5->setObjectName(QString::fromUtf8("sb_p5"));
        sb_p5->setMinimumSize(QSize(50, 20));
        sb_p5->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout->addWidget(sb_p5, 4, 1, 1, 1);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(0, 20));
        lineEdit_3->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(lineEdit_3, 2, 0, 1, 1);

        sb_p4 = new QSpinBox(groupBox);
        sb_p4->setObjectName(QString::fromUtf8("sb_p4"));
        sb_p4->setMinimumSize(QSize(50, 20));
        sb_p4->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout->addWidget(sb_p4, 3, 1, 1, 1);

        sb_d6 = new QSpinBox(groupBox);
        sb_d6->setObjectName(QString::fromUtf8("sb_d6"));
        sb_d6->setMinimumSize(QSize(50, 20));
        sb_d6->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout->addWidget(sb_d6, 5, 3, 1, 1);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 45));
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        sb_p11 = new QSpinBox(groupBox_2);
        sb_p11->setObjectName(QString::fromUtf8("sb_p11"));
        sb_p11->setMinimumSize(QSize(50, 20));
        sb_p11->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_5->addWidget(sb_p11, 4, 1, 1, 1);

        lineEdit_10 = new QLineEdit(groupBox_2);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setMinimumSize(QSize(0, 20));
        lineEdit_10->setMaximumSize(QSize(100, 16777215));

        gridLayout_5->addWidget(lineEdit_10, 3, 0, 1, 1);

        sb_d11 = new QSpinBox(groupBox_2);
        sb_d11->setObjectName(QString::fromUtf8("sb_d11"));
        sb_d11->setMinimumSize(QSize(50, 20));
        sb_d11->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_5->addWidget(sb_d11, 4, 3, 1, 1);

        sb_p10 = new QSpinBox(groupBox_2);
        sb_p10->setObjectName(QString::fromUtf8("sb_p10"));
        sb_p10->setMinimumSize(QSize(50, 20));
        sb_p10->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_5->addWidget(sb_p10, 3, 1, 1, 1);

        sb_p7 = new QSpinBox(groupBox_2);
        sb_p7->setObjectName(QString::fromUtf8("sb_p7"));
        sb_p7->setMinimumSize(QSize(50, 20));
        sb_p7->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"}\n"
""));

        gridLayout_5->addWidget(sb_p7, 0, 1, 1, 1);

        lineEdit_7 = new QLineEdit(groupBox_2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setMinimumSize(QSize(0, 20));
        lineEdit_7->setMaximumSize(QSize(100, 16777215));

        gridLayout_5->addWidget(lineEdit_7, 0, 0, 1, 1);

        sb_i8 = new QSpinBox(groupBox_2);
        sb_i8->setObjectName(QString::fromUtf8("sb_i8"));
        sb_i8->setMinimumSize(QSize(50, 20));
        sb_i8->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_5->addWidget(sb_i8, 1, 2, 1, 1);

        lineEdit_12 = new QLineEdit(groupBox_2);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setMinimumSize(QSize(0, 20));
        lineEdit_12->setMaximumSize(QSize(100, 16777215));

        gridLayout_5->addWidget(lineEdit_12, 5, 0, 1, 1);

        sb_d9 = new QSpinBox(groupBox_2);
        sb_d9->setObjectName(QString::fromUtf8("sb_d9"));
        sb_d9->setMinimumSize(QSize(50, 20));
        sb_d9->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_5->addWidget(sb_d9, 2, 3, 1, 1);

        lineEdit_8 = new QLineEdit(groupBox_2);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setMinimumSize(QSize(0, 20));
        lineEdit_8->setMaximumSize(QSize(100, 16777215));

        gridLayout_5->addWidget(lineEdit_8, 1, 0, 1, 1);

        sb_p9 = new QSpinBox(groupBox_2);
        sb_p9->setObjectName(QString::fromUtf8("sb_p9"));
        sb_p9->setMinimumSize(QSize(50, 20));
        sb_p9->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_5->addWidget(sb_p9, 2, 1, 1, 1);

        sb_i11 = new QSpinBox(groupBox_2);
        sb_i11->setObjectName(QString::fromUtf8("sb_i11"));
        sb_i11->setMinimumSize(QSize(50, 20));
        sb_i11->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_5->addWidget(sb_i11, 4, 2, 1, 1);

        sb_d8 = new QSpinBox(groupBox_2);
        sb_d8->setObjectName(QString::fromUtf8("sb_d8"));
        sb_d8->setMinimumSize(QSize(50, 20));
        sb_d8->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_5->addWidget(sb_d8, 1, 3, 1, 1);

        sb_i7 = new QSpinBox(groupBox_2);
        sb_i7->setObjectName(QString::fromUtf8("sb_i7"));
        sb_i7->setMinimumSize(QSize(50, 20));
        sb_i7->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_5->addWidget(sb_i7, 0, 2, 1, 1);

        sb_d7 = new QSpinBox(groupBox_2);
        sb_d7->setObjectName(QString::fromUtf8("sb_d7"));
        sb_d7->setMinimumSize(QSize(50, 20));
        sb_d7->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_5->addWidget(sb_d7, 0, 3, 1, 1);

        sb_d12 = new QSpinBox(groupBox_2);
        sb_d12->setObjectName(QString::fromUtf8("sb_d12"));
        sb_d12->setMinimumSize(QSize(50, 20));
        sb_d12->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_5->addWidget(sb_d12, 5, 3, 1, 1);

        sb_p8 = new QSpinBox(groupBox_2);
        sb_p8->setObjectName(QString::fromUtf8("sb_p8"));
        sb_p8->setMinimumSize(QSize(50, 20));
        sb_p8->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_5->addWidget(sb_p8, 1, 1, 1, 1);

        sb_i9 = new QSpinBox(groupBox_2);
        sb_i9->setObjectName(QString::fromUtf8("sb_i9"));
        sb_i9->setMinimumSize(QSize(50, 20));
        sb_i9->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_5->addWidget(sb_i9, 2, 2, 1, 1);

        sb_p12 = new QSpinBox(groupBox_2);
        sb_p12->setObjectName(QString::fromUtf8("sb_p12"));
        sb_p12->setMinimumSize(QSize(50, 20));
        sb_p12->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_5->addWidget(sb_p12, 5, 1, 1, 1);

        sb_i12 = new QSpinBox(groupBox_2);
        sb_i12->setObjectName(QString::fromUtf8("sb_i12"));
        sb_i12->setMinimumSize(QSize(50, 20));
        sb_i12->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_5->addWidget(sb_i12, 5, 2, 1, 1);

        sb_i10 = new QSpinBox(groupBox_2);
        sb_i10->setObjectName(QString::fromUtf8("sb_i10"));
        sb_i10->setMinimumSize(QSize(50, 20));
        sb_i10->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_5->addWidget(sb_i10, 3, 2, 1, 1);

        lineEdit_9 = new QLineEdit(groupBox_2);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setMinimumSize(QSize(0, 20));
        lineEdit_9->setMaximumSize(QSize(100, 16777215));

        gridLayout_5->addWidget(lineEdit_9, 2, 0, 1, 1);

        lineEdit_11 = new QLineEdit(groupBox_2);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setMinimumSize(QSize(0, 20));
        lineEdit_11->setMaximumSize(QSize(100, 16777215));

        gridLayout_5->addWidget(lineEdit_11, 4, 0, 1, 1);

        sb_d10 = new QSpinBox(groupBox_2);
        sb_d10->setObjectName(QString::fromUtf8("sb_d10"));
        sb_d10->setMinimumSize(QSize(50, 20));
        sb_d10->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_5->addWidget(sb_d10, 3, 3, 1, 1);


        horizontalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 45));
        groupBox_3->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;"));
        gridLayout_6 = new QGridLayout(groupBox_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        lineEdit_13 = new QLineEdit(groupBox_3);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setMinimumSize(QSize(0, 20));
        lineEdit_13->setMaximumSize(QSize(100, 16777215));

        gridLayout_6->addWidget(lineEdit_13, 0, 0, 1, 1);

        sb_i15 = new QSpinBox(groupBox_3);
        sb_i15->setObjectName(QString::fromUtf8("sb_i15"));
        sb_i15->setMinimumSize(QSize(50, 20));
        sb_i15->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_6->addWidget(sb_i15, 2, 2, 1, 1);

        sb_p15 = new QSpinBox(groupBox_3);
        sb_p15->setObjectName(QString::fromUtf8("sb_p15"));
        sb_p15->setMinimumSize(QSize(50, 20));
        sb_p15->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_6->addWidget(sb_p15, 2, 1, 1, 1);

        sb_i14 = new QSpinBox(groupBox_3);
        sb_i14->setObjectName(QString::fromUtf8("sb_i14"));
        sb_i14->setMinimumSize(QSize(50, 20));
        sb_i14->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_6->addWidget(sb_i14, 1, 2, 1, 1);

        lineEdit_17 = new QLineEdit(groupBox_3);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));
        lineEdit_17->setMinimumSize(QSize(0, 20));
        lineEdit_17->setMaximumSize(QSize(100, 16777215));

        gridLayout_6->addWidget(lineEdit_17, 4, 0, 1, 1);

        lineEdit_15 = new QLineEdit(groupBox_3);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setMinimumSize(QSize(0, 20));
        lineEdit_15->setMaximumSize(QSize(100, 16777215));

        gridLayout_6->addWidget(lineEdit_15, 2, 0, 1, 1);

        sb_p14 = new QSpinBox(groupBox_3);
        sb_p14->setObjectName(QString::fromUtf8("sb_p14"));
        sb_p14->setMinimumSize(QSize(50, 20));
        sb_p14->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_6->addWidget(sb_p14, 1, 1, 1, 1);

        sb_p13 = new QSpinBox(groupBox_3);
        sb_p13->setObjectName(QString::fromUtf8("sb_p13"));
        sb_p13->setMinimumSize(QSize(50, 20));
        sb_p13->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_6->addWidget(sb_p13, 0, 1, 1, 1);

        sb_d14 = new QSpinBox(groupBox_3);
        sb_d14->setObjectName(QString::fromUtf8("sb_d14"));
        sb_d14->setMinimumSize(QSize(50, 20));
        sb_d14->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_6->addWidget(sb_d14, 1, 3, 1, 1);

        sb_i13 = new QSpinBox(groupBox_3);
        sb_i13->setObjectName(QString::fromUtf8("sb_i13"));
        sb_i13->setMinimumSize(QSize(50, 20));
        sb_i13->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_6->addWidget(sb_i13, 0, 2, 1, 1);

        lineEdit_14 = new QLineEdit(groupBox_3);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
        lineEdit_14->setMinimumSize(QSize(0, 20));
        lineEdit_14->setMaximumSize(QSize(100, 16777215));

        gridLayout_6->addWidget(lineEdit_14, 1, 0, 1, 1);

        sb_d15 = new QSpinBox(groupBox_3);
        sb_d15->setObjectName(QString::fromUtf8("sb_d15"));
        sb_d15->setMinimumSize(QSize(50, 20));
        sb_d15->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_6->addWidget(sb_d15, 2, 3, 1, 1);

        sb_d13 = new QSpinBox(groupBox_3);
        sb_d13->setObjectName(QString::fromUtf8("sb_d13"));
        sb_d13->setMinimumSize(QSize(50, 20));
        sb_d13->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_6->addWidget(sb_d13, 0, 3, 1, 1);

        lineEdit_16 = new QLineEdit(groupBox_3);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        lineEdit_16->setMinimumSize(QSize(0, 20));
        lineEdit_16->setMaximumSize(QSize(100, 16777215));

        gridLayout_6->addWidget(lineEdit_16, 3, 0, 1, 1);

        lineEdit_18 = new QLineEdit(groupBox_3);
        lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));
        lineEdit_18->setMinimumSize(QSize(0, 20));
        lineEdit_18->setMaximumSize(QSize(100, 16777215));

        gridLayout_6->addWidget(lineEdit_18, 5, 0, 1, 1);

        sb_p16 = new QSpinBox(groupBox_3);
        sb_p16->setObjectName(QString::fromUtf8("sb_p16"));
        sb_p16->setMinimumSize(QSize(50, 20));
        sb_p16->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_6->addWidget(sb_p16, 3, 1, 1, 1);

        sb_i16 = new QSpinBox(groupBox_3);
        sb_i16->setObjectName(QString::fromUtf8("sb_i16"));
        sb_i16->setMinimumSize(QSize(50, 20));
        sb_i16->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_6->addWidget(sb_i16, 3, 2, 1, 1);

        sb_d16 = new QSpinBox(groupBox_3);
        sb_d16->setObjectName(QString::fromUtf8("sb_d16"));
        sb_d16->setMinimumSize(QSize(50, 20));
        sb_d16->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_6->addWidget(sb_d16, 3, 3, 1, 1);

        sb_p17 = new QSpinBox(groupBox_3);
        sb_p17->setObjectName(QString::fromUtf8("sb_p17"));
        sb_p17->setMinimumSize(QSize(50, 20));
        sb_p17->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_6->addWidget(sb_p17, 4, 1, 1, 1);

        sb_i17 = new QSpinBox(groupBox_3);
        sb_i17->setObjectName(QString::fromUtf8("sb_i17"));
        sb_i17->setMinimumSize(QSize(50, 20));
        sb_i17->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_6->addWidget(sb_i17, 4, 2, 1, 1);

        sb_d17 = new QSpinBox(groupBox_3);
        sb_d17->setObjectName(QString::fromUtf8("sb_d17"));
        sb_d17->setMinimumSize(QSize(50, 20));
        sb_d17->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_6->addWidget(sb_d17, 4, 3, 1, 1);

        sb_p18 = new QSpinBox(groupBox_3);
        sb_p18->setObjectName(QString::fromUtf8("sb_p18"));
        sb_p18->setMinimumSize(QSize(50, 20));
        sb_p18->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_6->addWidget(sb_p18, 5, 1, 1, 1);

        sb_i18 = new QSpinBox(groupBox_3);
        sb_i18->setObjectName(QString::fromUtf8("sb_i18"));
        sb_i18->setMinimumSize(QSize(50, 20));
        sb_i18->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_6->addWidget(sb_i18, 5, 2, 1, 1);

        sb_d18 = new QSpinBox(groupBox_3);
        sb_d18->setObjectName(QString::fromUtf8("sb_d18"));
        sb_d18->setMinimumSize(QSize(50, 20));
        sb_d18->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	color:#14274E;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:#F1F6F9;\n"
"    selection-background-color: #F1F6F9;\n"
"	selection-color:#14274E;\n"
"}\n"
""));

        gridLayout_6->addWidget(sb_d18, 5, 3, 1, 1);


        horizontalLayout->addWidget(groupBox_3);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tbtn_clear = new QToolButton(scrollAreaWidgetContents);
        tbtn_clear->setObjectName(QString::fromUtf8("tbtn_clear"));
        tbtn_clear->setMinimumSize(QSize(60, 45));
        tbtn_clear->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/imgs/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtn_clear->setIcon(icon);

        horizontalLayout_2->addWidget(tbtn_clear);

        btn_clearSpinBox = new QPushButton(scrollAreaWidgetContents);
        btn_clearSpinBox->setObjectName(QString::fromUtf8("btn_clearSpinBox"));
        btn_clearSpinBox->setMinimumSize(QSize(0, 45));
        btn_clearSpinBox->setMaximumSize(QSize(60, 16777215));
        btn_clearSpinBox->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;\n"
"color:#394867;\n"
"font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));

        horizontalLayout_2->addWidget(btn_clearSpinBox);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(130, 16777215));
        label_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;"));

        horizontalLayout_2->addWidget(label_2);

        sb_delay = new QSpinBox(scrollAreaWidgetContents);
        sb_delay->setObjectName(QString::fromUtf8("sb_delay"));
        sb_delay->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;"));

        horizontalLayout_2->addWidget(sb_delay);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(30, 16777215));
        label_3->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;"));

        horizontalLayout_2->addWidget(label_3);

        btn_writePID = new QPushButton(scrollAreaWidgetContents);
        btn_writePID->setObjectName(QString::fromUtf8("btn_writePID"));
        btn_writePID->setMinimumSize(QSize(0, 45));
        btn_writePID->setStyleSheet(QString::fromUtf8("background-color:#14274E;\n"
"color:#F1F6F9;\n"
"font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        btn_writePID->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(btn_writePID);

        btn_readPID = new QPushButton(scrollAreaWidgetContents);
        btn_readPID->setObjectName(QString::fromUtf8("btn_readPID"));
        btn_readPID->setMinimumSize(QSize(0, 45));
        btn_readPID->setStyleSheet(QString::fromUtf8("background-color:#14274E;\n"
"color:#F1F6F9;\n"
"font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));

        horizontalLayout_2->addWidget(btn_readPID);

        btn_recoverDefault = new QPushButton(scrollAreaWidgetContents);
        btn_recoverDefault->setObjectName(QString::fromUtf8("btn_recoverDefault"));
        btn_recoverDefault->setMinimumSize(QSize(0, 45));
        btn_recoverDefault->setStyleSheet(QString::fromUtf8("background-color:#14274E;\n"
"color:#F1F6F9;\n"
"font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));

        horizontalLayout_2->addWidget(btn_recoverDefault);

        btn_savePID = new QPushButton(scrollAreaWidgetContents);
        btn_savePID->setObjectName(QString::fromUtf8("btn_savePID"));
        btn_savePID->setMinimumSize(QSize(0, 45));
        btn_savePID->setStyleSheet(QString::fromUtf8("background-color:#14274E;\n"
"color:#F1F6F9;\n"
"font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));

        horizontalLayout_2->addWidget(btn_savePID);


        gridLayout_2->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_4->addWidget(scrollArea, 1, 0, 1, 1);


        retranslateUi(DebugParameter);

        QMetaObject::connectSlotsByName(DebugParameter);
    } // setupUi

    void retranslateUi(QWidget *DebugParameter)
    {
        DebugParameter->setWindowTitle(QCoreApplication::translate("DebugParameter", "Form", nullptr));
        label->setText(QCoreApplication::translate("DebugParameter", "   PID\350\256\276\347\275\256", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DebugParameter", "PID1-6", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("DebugParameter", "PID5", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("DebugParameter", "PID6", nullptr));
        lineEdit_1->setText(QCoreApplication::translate("DebugParameter", "PID1", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("DebugParameter", "PID2", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("DebugParameter", "PID4", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("DebugParameter", "PID3", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DebugParameter", "PID7-12", nullptr));
        lineEdit_10->setText(QCoreApplication::translate("DebugParameter", "PID10", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("DebugParameter", "PID7", nullptr));
        lineEdit_12->setText(QCoreApplication::translate("DebugParameter", "PID12", nullptr));
        lineEdit_8->setText(QCoreApplication::translate("DebugParameter", "PID8", nullptr));
        lineEdit_9->setText(QCoreApplication::translate("DebugParameter", "PID9", nullptr));
        lineEdit_11->setText(QCoreApplication::translate("DebugParameter", "PID11", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("DebugParameter", "PID13-18", nullptr));
        lineEdit_13->setText(QCoreApplication::translate("DebugParameter", "PID13", nullptr));
        lineEdit_17->setText(QCoreApplication::translate("DebugParameter", "PID17", nullptr));
        lineEdit_15->setText(QCoreApplication::translate("DebugParameter", "PID15", nullptr));
        lineEdit_14->setText(QCoreApplication::translate("DebugParameter", "PID14", nullptr));
        lineEdit_16->setText(QCoreApplication::translate("DebugParameter", "PID16", nullptr));
        lineEdit_18->setText(QCoreApplication::translate("DebugParameter", "PID18", nullptr));
        tbtn_clear->setText(QCoreApplication::translate("DebugParameter", "...", nullptr));
        btn_clearSpinBox->setText(QCoreApplication::translate("DebugParameter", "\347\275\256\351\233\266", nullptr));
        label_2->setText(QCoreApplication::translate("DebugParameter", "\347\255\211\345\276\205\346\240\241\351\252\214\345\273\266\350\277\237\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("DebugParameter", "MS", nullptr));
        btn_writePID->setText(QCoreApplication::translate("DebugParameter", "\345\206\231\345\205\245PID", nullptr));
        btn_readPID->setText(QCoreApplication::translate("DebugParameter", "\350\257\273\345\217\226PID", nullptr));
        btn_recoverDefault->setText(QCoreApplication::translate("DebugParameter", "\346\201\242\345\244\215\351\273\230\350\256\244", nullptr));
        btn_savePID->setText(QCoreApplication::translate("DebugParameter", "\344\277\235\345\255\230PID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DebugParameter: public Ui_DebugParameter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGPARAMETER_H
