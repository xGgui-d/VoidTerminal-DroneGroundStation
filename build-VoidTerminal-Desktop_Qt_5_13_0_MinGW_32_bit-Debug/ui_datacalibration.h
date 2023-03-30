/********************************************************************************
** Form generated from reading UI file 'datacalibration.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATACALIBRATION_H
#define UI_DATACALIBRATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataCalibration
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QToolButton *tbtn_readVersionSet;
    QToolButton *tbtn_readPositionSet;
    QToolButton *tbtn_readFlowSet;
    QToolButton *tbtn_readDigitSet;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QToolButton *tbtn_help;
    QLabel *label_7;
    QSpinBox *sb_delay;
    QToolButton *tbtn_clear;
    QLabel *label_8;
    QTextBrowser *tb_msg;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_2;
    QToolButton *tbtn_face04;
    QToolButton *tbtn_face01;
    QToolButton *tbtn_face02;
    QToolButton *tbtn_face05;
    QToolButton *tbtn_face03;
    QToolButton *tbtn_face06;
    QToolButton *tbtn_faceExit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QToolButton *tbtn_alt;
    QToolButton *tbtn_inertia;
    QToolButton *tbtn_acc;
    QToolButton *tbtn_mag;
    QToolButton *tbtn_baro;
    QToolButton *tbtn_gyro;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label;
    QComboBox *comboBox_2;
    QToolButton *toolButton_14;
    QToolButton *toolButton_16;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_8;
    QSpinBox *spinBox_2;
    QLabel *label_4;
    QLabel *label_5;
    QSpinBox *spinBox_3;
    QLabel *label_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QComboBox *comboBox_4;

    void setupUi(QWidget *DataCalibration)
    {
        if (DataCalibration->objectName().isEmpty())
            DataCalibration->setObjectName(QString::fromUtf8("DataCalibration"));
        DataCalibration->resize(1178, 770);
        gridLayout = new QGridLayout(DataCalibration);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(DataCalibration);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color:#14274E;"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1154, 746));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("background-color:#394867;"));
        gridLayout_7 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tbtn_readVersionSet = new QToolButton(groupBox_3);
        tbtn_readVersionSet->setObjectName(QString::fromUtf8("tbtn_readVersionSet"));
        tbtn_readVersionSet->setMinimumSize(QSize(250, 0));
        tbtn_readVersionSet->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));

        gridLayout_4->addWidget(tbtn_readVersionSet, 5, 0, 1, 1);

        tbtn_readPositionSet = new QToolButton(groupBox_3);
        tbtn_readPositionSet->setObjectName(QString::fromUtf8("tbtn_readPositionSet"));
        tbtn_readPositionSet->setMinimumSize(QSize(250, 0));
        tbtn_readPositionSet->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));

        gridLayout_4->addWidget(tbtn_readPositionSet, 4, 0, 1, 1);

        tbtn_readFlowSet = new QToolButton(groupBox_3);
        tbtn_readFlowSet->setObjectName(QString::fromUtf8("tbtn_readFlowSet"));
        tbtn_readFlowSet->setMinimumSize(QSize(250, 0));
        tbtn_readFlowSet->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));

        gridLayout_4->addWidget(tbtn_readFlowSet, 0, 0, 1, 1);

        tbtn_readDigitSet = new QToolButton(groupBox_3);
        tbtn_readDigitSet->setObjectName(QString::fromUtf8("tbtn_readDigitSet"));
        tbtn_readDigitSet->setMinimumSize(QSize(250, 0));
        tbtn_readDigitSet->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));

        gridLayout_4->addWidget(tbtn_readDigitSet, 1, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_3, 3, 1, 1, 1);

        groupBox_4 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;"));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        tbtn_help = new QToolButton(groupBox_4);
        tbtn_help->setObjectName(QString::fromUtf8("tbtn_help"));
        tbtn_help->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/imgs/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtn_help->setIcon(icon);

        gridLayout_5->addWidget(tbtn_help, 2, 1, 1, 1);

        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_5->addWidget(label_7, 2, 2, 1, 1);

        sb_delay = new QSpinBox(groupBox_4);
        sb_delay->setObjectName(QString::fromUtf8("sb_delay"));

        gridLayout_5->addWidget(sb_delay, 2, 3, 1, 1);

        tbtn_clear = new QToolButton(groupBox_4);
        tbtn_clear->setObjectName(QString::fromUtf8("tbtn_clear"));
        tbtn_clear->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/imgs/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtn_clear->setIcon(icon1);

        gridLayout_5->addWidget(tbtn_clear, 2, 0, 1, 1);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(30, 16777215));

        gridLayout_5->addWidget(label_8, 2, 4, 1, 1);

        tb_msg = new QTextBrowser(groupBox_4);
        tb_msg->setObjectName(QString::fromUtf8("tb_msg"));
        tb_msg->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;\n"
"font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_5->addWidget(tb_msg, 0, 0, 1, 5);


        gridLayout_7->addWidget(groupBox_4, 0, 3, 4, 1);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;"));
        gridLayout_9 = new QGridLayout(groupBox);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tbtn_face04 = new QToolButton(groupBox);
        tbtn_face04->setObjectName(QString::fromUtf8("tbtn_face04"));
        tbtn_face04->setMinimumSize(QSize(80, 50));
        tbtn_face04->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));

        gridLayout_2->addWidget(tbtn_face04, 1, 0, 1, 1);

        tbtn_face01 = new QToolButton(groupBox);
        tbtn_face01->setObjectName(QString::fromUtf8("tbtn_face01"));
        tbtn_face01->setMinimumSize(QSize(80, 50));
        tbtn_face01->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));

        gridLayout_2->addWidget(tbtn_face01, 0, 0, 1, 1);

        tbtn_face02 = new QToolButton(groupBox);
        tbtn_face02->setObjectName(QString::fromUtf8("tbtn_face02"));
        tbtn_face02->setMinimumSize(QSize(80, 50));
        tbtn_face02->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));

        gridLayout_2->addWidget(tbtn_face02, 0, 1, 1, 1);

        tbtn_face05 = new QToolButton(groupBox);
        tbtn_face05->setObjectName(QString::fromUtf8("tbtn_face05"));
        tbtn_face05->setMinimumSize(QSize(80, 50));
        tbtn_face05->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));

        gridLayout_2->addWidget(tbtn_face05, 1, 1, 1, 1);

        tbtn_face03 = new QToolButton(groupBox);
        tbtn_face03->setObjectName(QString::fromUtf8("tbtn_face03"));
        tbtn_face03->setMinimumSize(QSize(80, 50));
        tbtn_face03->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));

        gridLayout_2->addWidget(tbtn_face03, 0, 2, 1, 1);

        tbtn_face06 = new QToolButton(groupBox);
        tbtn_face06->setObjectName(QString::fromUtf8("tbtn_face06"));
        tbtn_face06->setMinimumSize(QSize(80, 50));
        tbtn_face06->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));

        gridLayout_2->addWidget(tbtn_face06, 1, 2, 1, 1);

        tbtn_faceExit = new QToolButton(groupBox);
        tbtn_faceExit->setObjectName(QString::fromUtf8("tbtn_faceExit"));
        tbtn_faceExit->setMinimumSize(QSize(200, 0));
        tbtn_faceExit->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/imgs/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtn_faceExit->setIcon(icon2);
        tbtn_faceExit->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_2->addWidget(tbtn_faceExit, 2, 0, 1, 3);


        gridLayout_9->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout_7->addWidget(groupBox, 2, 1, 1, 1);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tbtn_alt = new QToolButton(groupBox_2);
        tbtn_alt->setObjectName(QString::fromUtf8("tbtn_alt"));
        tbtn_alt->setMinimumSize(QSize(130, 120));
        tbtn_alt->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/imgs/alt.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtn_alt->setIcon(icon3);
        tbtn_alt->setIconSize(QSize(80, 80));
        tbtn_alt->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_3->addWidget(tbtn_alt, 3, 0, 1, 1);

        tbtn_inertia = new QToolButton(groupBox_2);
        tbtn_inertia->setObjectName(QString::fromUtf8("tbtn_inertia"));
        tbtn_inertia->setMinimumSize(QSize(130, 120));
        tbtn_inertia->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/imgs/inertia.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtn_inertia->setIcon(icon4);
        tbtn_inertia->setIconSize(QSize(80, 80));
        tbtn_inertia->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_3->addWidget(tbtn_inertia, 3, 1, 1, 1);

        tbtn_acc = new QToolButton(groupBox_2);
        tbtn_acc->setObjectName(QString::fromUtf8("tbtn_acc"));
        tbtn_acc->setMinimumSize(QSize(130, 120));
        tbtn_acc->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/imgs/acc.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtn_acc->setIcon(icon5);
        tbtn_acc->setIconSize(QSize(80, 80));
        tbtn_acc->setPopupMode(QToolButton::DelayedPopup);
        tbtn_acc->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_3->addWidget(tbtn_acc, 0, 0, 1, 1);

        tbtn_mag = new QToolButton(groupBox_2);
        tbtn_mag->setObjectName(QString::fromUtf8("tbtn_mag"));
        tbtn_mag->setMinimumSize(QSize(130, 120));
        tbtn_mag->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/imgs/mag.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtn_mag->setIcon(icon6);
        tbtn_mag->setIconSize(QSize(80, 80));
        tbtn_mag->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_3->addWidget(tbtn_mag, 1, 1, 1, 1);

        tbtn_baro = new QToolButton(groupBox_2);
        tbtn_baro->setObjectName(QString::fromUtf8("tbtn_baro"));
        tbtn_baro->setMinimumSize(QSize(130, 120));
        tbtn_baro->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/imgs/baro.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtn_baro->setIcon(icon7);
        tbtn_baro->setIconSize(QSize(80, 80));
        tbtn_baro->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_3->addWidget(tbtn_baro, 1, 0, 1, 1);

        tbtn_gyro = new QToolButton(groupBox_2);
        tbtn_gyro->setObjectName(QString::fromUtf8("tbtn_gyro"));
        tbtn_gyro->setMinimumSize(QSize(130, 120));
        tbtn_gyro->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/imgs/gyro.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtn_gyro->setIcon(icon8);
        tbtn_gyro->setIconSize(QSize(80, 80));
        tbtn_gyro->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_3->addWidget(tbtn_gyro, 0, 1, 1, 1);


        gridLayout_7->addWidget(groupBox_2, 2, 0, 2, 1);

        groupBox_5 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;"));
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(50, 16777215));

        gridLayout_6->addWidget(label_3, 2, 0, 1, 1);

        comboBox_3 = new QComboBox(groupBox_5);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout_6->addWidget(comboBox_3, 2, 1, 1, 1);

        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(50, 16777215));

        gridLayout_6->addWidget(label_2, 1, 0, 1, 1);

        comboBox = new QComboBox(groupBox_5);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_6->addWidget(comboBox, 0, 1, 1, 1);

        label = new QLabel(groupBox_5);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(50, 16777215));

        gridLayout_6->addWidget(label, 0, 0, 1, 1);

        comboBox_2 = new QComboBox(groupBox_5);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout_6->addWidget(comboBox_2, 1, 1, 1, 1);

        toolButton_14 = new QToolButton(groupBox_5);
        toolButton_14->setObjectName(QString::fromUtf8("toolButton_14"));
        toolButton_14->setMinimumSize(QSize(50, 0));
        toolButton_14->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));

        gridLayout_6->addWidget(toolButton_14, 3, 1, 1, 1);

        toolButton_16 = new QToolButton(groupBox_5);
        toolButton_16->setObjectName(QString::fromUtf8("toolButton_16"));
        toolButton_16->setMinimumSize(QSize(50, 0));
        toolButton_16->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));

        gridLayout_6->addWidget(toolButton_16, 3, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_5, 0, 0, 2, 1);

        groupBox_6 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;"));
        gridLayout_8 = new QGridLayout(groupBox_6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        spinBox_2 = new QSpinBox(groupBox_6);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        gridLayout_8->addWidget(spinBox_2, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(80, 16777215));

        gridLayout_8->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(groupBox_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(80, 16777215));

        gridLayout_8->addWidget(label_5, 1, 0, 1, 1);

        spinBox_3 = new QSpinBox(groupBox_6);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));

        gridLayout_8->addWidget(spinBox_3, 2, 1, 1, 1);

        label_6 = new QLabel(groupBox_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(80, 16777215));

        gridLayout_8->addWidget(label_6, 2, 0, 1, 1);

        pushButton = new QPushButton(groupBox_6);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(50, 0));

        gridLayout_8->addWidget(pushButton, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(groupBox_6);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(50, 0));

        gridLayout_8->addWidget(pushButton_2, 3, 1, 1, 1);

        comboBox_4 = new QComboBox(groupBox_6);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        gridLayout_8->addWidget(comboBox_4, 0, 1, 1, 1);


        gridLayout_7->addWidget(groupBox_6, 0, 1, 2, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(DataCalibration);

        QMetaObject::connectSlotsByName(DataCalibration);
    } // setupUi

    void retranslateUi(QWidget *DataCalibration)
    {
        DataCalibration->setWindowTitle(QCoreApplication::translate("DataCalibration", "Form", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("DataCalibration", "\350\257\273\345\217\226\346\250\241\345\235\227\350\256\276\347\275\256", nullptr));
        tbtn_readVersionSet->setText(QCoreApplication::translate("DataCalibration", "\350\257\273\345\217\226\344\270\213\344\275\215\346\234\272\347\211\210\346\234\254\344\277\241\346\201\257", nullptr));
        tbtn_readPositionSet->setText(QCoreApplication::translate("DataCalibration", "\350\257\273\345\217\226\346\227\240\351\231\220\345\256\232\344\275\215\346\250\241\345\235\227\350\256\276\347\275\256", nullptr));
        tbtn_readFlowSet->setText(QCoreApplication::translate("DataCalibration", "\350\257\273\345\217\226\345\205\211\346\265\201\346\250\241\345\235\227\350\256\276\347\275\256", nullptr));
        tbtn_readDigitSet->setText(QCoreApplication::translate("DataCalibration", "\350\257\273\345\217\226\346\225\260\344\274\240\346\250\241\345\235\227\350\256\276\347\275\256", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("DataCalibration", "\346\266\210\346\201\257\346\217\220\347\244\272", nullptr));
        tbtn_help->setText(QCoreApplication::translate("DataCalibration", "...", nullptr));
        label_7->setText(QCoreApplication::translate("DataCalibration", "\347\255\211\345\276\205\346\240\241\351\252\214\345\273\266\350\277\237\357\274\232", nullptr));
        tbtn_clear->setText(QCoreApplication::translate("DataCalibration", "...", nullptr));
        label_8->setText(QCoreApplication::translate("DataCalibration", "MS", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DataCalibration", "\345\205\255\351\235\242\346\240\241\345\207\206", nullptr));
        tbtn_face04->setText(QCoreApplication::translate("DataCalibration", "\347\254\2544\351\235\242", nullptr));
        tbtn_face01->setText(QCoreApplication::translate("DataCalibration", "\347\254\2541\351\235\242", nullptr));
        tbtn_face02->setText(QCoreApplication::translate("DataCalibration", "\347\254\2542\351\235\242", nullptr));
        tbtn_face05->setText(QCoreApplication::translate("DataCalibration", "\347\254\2545\351\235\242", nullptr));
        tbtn_face03->setText(QCoreApplication::translate("DataCalibration", "\347\254\2543\351\235\242", nullptr));
        tbtn_face06->setText(QCoreApplication::translate("DataCalibration", "\347\254\2546\351\235\242", nullptr));
        tbtn_faceExit->setText(QCoreApplication::translate("DataCalibration", "\351\200\200\345\207\272\346\240\241\345\207\206", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DataCalibration", "\345\237\272\346\234\254\346\240\241\345\207\206", nullptr));
        tbtn_alt->setText(QCoreApplication::translate("DataCalibration", "ALT\351\253\230\345\272\246\346\240\241\345\207\206", nullptr));
        tbtn_inertia->setText(QCoreApplication::translate("DataCalibration", "\346\203\257\346\200\247\346\240\241\345\207\206", nullptr));
        tbtn_acc->setText(QCoreApplication::translate("DataCalibration", "ACC\346\240\241\345\207\206", nullptr));
        tbtn_mag->setText(QCoreApplication::translate("DataCalibration", "MAG\346\240\241\345\207\206", nullptr));
        tbtn_baro->setText(QCoreApplication::translate("DataCalibration", "BARO\346\240\241\345\207\206", nullptr));
        tbtn_gyro->setText(QCoreApplication::translate("DataCalibration", "GYRO\346\240\241\345\207\206", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("DataCalibration", "\351\243\236\350\241\214\346\250\241\345\274\217", nullptr));
        label_3->setText(QCoreApplication::translate("DataCalibration", "AUX3", nullptr));
        label_2->setText(QCoreApplication::translate("DataCalibration", "AUX2", nullptr));
        label->setText(QCoreApplication::translate("DataCalibration", "AUX1", nullptr));
        toolButton_14->setText(QCoreApplication::translate("DataCalibration", "\350\257\273\345\217\226\351\243\236\350\241\214\346\250\241\345\274\217\350\256\276\347\275\256\350\257\267\346\261\202", nullptr));
        toolButton_16->setText(QCoreApplication::translate("DataCalibration", "\350\257\273\345\217\226\351\243\236\346\216\247\345\206\205\350\210\252\347\202\271\346\225\260\351\207\217", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("DataCalibration", "\345\205\266\344\273\226\350\256\276\347\275\256", nullptr));
        label_4->setText(QCoreApplication::translate("DataCalibration", "\345\217\202\346\225\260\345\220\215\347\247\260", nullptr));
        label_5->setText(QCoreApplication::translate("DataCalibration", "\345\217\202\346\225\260\345\272\217\345\217\267", nullptr));
        label_6->setText(QCoreApplication::translate("DataCalibration", "\345\217\202\346\225\260\345\200\274", nullptr));
        pushButton->setText(QCoreApplication::translate("DataCalibration", "\350\257\273\345\217\226", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DataCalibration", "\345\206\231\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataCalibration: public Ui_DataCalibration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATACALIBRATION_H
