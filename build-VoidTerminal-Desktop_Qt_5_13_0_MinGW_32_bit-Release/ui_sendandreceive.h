/********************************************************************************
** Form generated from reading UI file 'sendandreceive.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDANDRECEIVE_H
#define UI_SENDANDRECEIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SendAndReceive
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QComboBox *cb_stopBit;
    QLabel *label;
    QComboBox *cb_dataBit;
    QLabel *label_2;
    QComboBox *cb_checkBit;
    QComboBox *cb_portBaud;
    QLabel *label_4;
    QLabel *label_3;
    QComboBox *cb_portName;
    QLabel *label_5;
    QPushButton *btn_openSport;
    QPushButton *btn_flash;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QTextEdit *te_rec;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QComboBox *cb_historySend;
    QPushButton *btn_send;
    QTextEdit *te_send;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QPushButton *btn_clear;
    QCheckBox *cb_autoWrap;
    QRadioButton *rbtn_rec_HEX;
    QRadioButton *rbtn_rec_ASCII;
    QCheckBox *cb_showTime;
    QPushButton *btn_followRoll;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_6;
    QLabel *label_6;
    QRadioButton *rbtn_send_HEX;
    QCheckBox *cb_sendTimed;
    QSpinBox *sb_timeSet;
    QRadioButton *rbtn_send_ASCII;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QComboBox *cb_encode;

    void setupUi(QWidget *SendAndReceive)
    {
        if (SendAndReceive->objectName().isEmpty())
            SendAndReceive->setObjectName(QString::fromUtf8("SendAndReceive"));
        SendAndReceive->resize(1049, 658);
        gridLayout = new QGridLayout(SendAndReceive);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(SendAndReceive);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color:#14274E;"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1025, 634));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("background-color:#394867"));
        gridLayout_7 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMaximumSize(QSize(280, 16777215));
        groupBox_3->setStyleSheet(QString::fromUtf8("font: 75 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:#F1F6F9;"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        cb_stopBit = new QComboBox(groupBox_3);
        cb_stopBit->setObjectName(QString::fromUtf8("cb_stopBit"));
        cb_stopBit->setMinimumSize(QSize(0, 30));
        cb_stopBit->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color:white;\n"
"}"));

        gridLayout_4->addWidget(cb_stopBit, 4, 1, 1, 1);

        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        cb_dataBit = new QComboBox(groupBox_3);
        cb_dataBit->setObjectName(QString::fromUtf8("cb_dataBit"));
        cb_dataBit->setMinimumSize(QSize(0, 30));
        cb_dataBit->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color:white;\n"
"}"));

        gridLayout_4->addWidget(cb_dataBit, 2, 1, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_2, 1, 0, 1, 1);

        cb_checkBit = new QComboBox(groupBox_3);
        cb_checkBit->setObjectName(QString::fromUtf8("cb_checkBit"));
        cb_checkBit->setMinimumSize(QSize(0, 30));
        cb_checkBit->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color:white;\n"
"}"));

        gridLayout_4->addWidget(cb_checkBit, 3, 1, 1, 1);

        cb_portBaud = new QComboBox(groupBox_3);
        cb_portBaud->setObjectName(QString::fromUtf8("cb_portBaud"));
        cb_portBaud->setMinimumSize(QSize(0, 30));
        cb_portBaud->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color:white;\n"
"}"));

        gridLayout_4->addWidget(cb_portBaud, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;\n"
"}"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_4, 3, 0, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;\n"
"}"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_3, 2, 0, 1, 1);

        cb_portName = new QComboBox(groupBox_3);
        cb_portName->setObjectName(QString::fromUtf8("cb_portName"));
        cb_portName->setMinimumSize(QSize(0, 30));
        cb_portName->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color:white;\n"
"}"));

        gridLayout_4->addWidget(cb_portName, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;\n"
"}"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_5, 4, 0, 1, 1);

        btn_openSport = new QPushButton(groupBox_3);
        btn_openSport->setObjectName(QString::fromUtf8("btn_openSport"));

        gridLayout_4->addWidget(btn_openSport, 5, 0, 1, 1);

        btn_flash = new QPushButton(groupBox_3);
        btn_flash->setObjectName(QString::fromUtf8("btn_flash"));

        gridLayout_4->addWidget(btn_flash, 5, 1, 1, 1);


        gridLayout_7->addWidget(groupBox_3, 0, 0, 1, 1);

        splitter = new QSplitter(scrollAreaWidgetContents);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("font: 75 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:#F1F6F9;"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        te_rec = new QTextEdit(groupBox);
        te_rec->setObjectName(QString::fromUtf8("te_rec"));
        te_rec->setStyleSheet(QString::fromUtf8("color:white;"));

        gridLayout_2->addWidget(te_rec, 0, 0, 1, 1);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 75 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:#F1F6F9;"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        cb_historySend = new QComboBox(groupBox_2);
        cb_historySend->setObjectName(QString::fromUtf8("cb_historySend"));
        cb_historySend->setStyleSheet(QString::fromUtf8("background-color: #9BA4B4;"));

        gridLayout_3->addWidget(cb_historySend, 1, 0, 1, 1);

        btn_send = new QPushButton(groupBox_2);
        btn_send->setObjectName(QString::fromUtf8("btn_send"));
        btn_send->setMaximumSize(QSize(100, 16777215));
        btn_send->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;\n"
""));

        gridLayout_3->addWidget(btn_send, 1, 1, 1, 1);

        te_send = new QTextEdit(groupBox_2);
        te_send->setObjectName(QString::fromUtf8("te_send"));

        gridLayout_3->addWidget(te_send, 0, 0, 1, 2);

        splitter->addWidget(groupBox_2);

        gridLayout_7->addWidget(splitter, 0, 1, 3, 1);

        groupBox_5 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setStyleSheet(QString::fromUtf8("font: 75 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:#F1F6F9;"));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        btn_clear = new QPushButton(groupBox_5);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));

        gridLayout_5->addWidget(btn_clear, 1, 1, 1, 1);

        cb_autoWrap = new QCheckBox(groupBox_5);
        cb_autoWrap->setObjectName(QString::fromUtf8("cb_autoWrap"));

        gridLayout_5->addWidget(cb_autoWrap, 1, 0, 1, 1);

        rbtn_rec_HEX = new QRadioButton(groupBox_5);
        rbtn_rec_HEX->setObjectName(QString::fromUtf8("rbtn_rec_HEX"));

        gridLayout_5->addWidget(rbtn_rec_HEX, 0, 1, 1, 1);

        rbtn_rec_ASCII = new QRadioButton(groupBox_5);
        rbtn_rec_ASCII->setObjectName(QString::fromUtf8("rbtn_rec_ASCII"));

        gridLayout_5->addWidget(rbtn_rec_ASCII, 0, 0, 1, 1);

        cb_showTime = new QCheckBox(groupBox_5);
        cb_showTime->setObjectName(QString::fromUtf8("cb_showTime"));

        gridLayout_5->addWidget(cb_showTime, 2, 0, 1, 1);

        btn_followRoll = new QPushButton(groupBox_5);
        btn_followRoll->setObjectName(QString::fromUtf8("btn_followRoll"));
        btn_followRoll->setCheckable(false);

        gridLayout_5->addWidget(btn_followRoll, 2, 1, 1, 1);


        gridLayout_7->addWidget(groupBox_5, 1, 0, 1, 1);

        groupBox_4 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setStyleSheet(QString::fromUtf8("font: 75 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:#F1F6F9;"));
        gridLayout_6 = new QGridLayout(groupBox_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_6->addWidget(label_6, 3, 3, 1, 1);

        rbtn_send_HEX = new QRadioButton(groupBox_4);
        rbtn_send_HEX->setObjectName(QString::fromUtf8("rbtn_send_HEX"));

        gridLayout_6->addWidget(rbtn_send_HEX, 2, 0, 1, 1);

        cb_sendTimed = new QCheckBox(groupBox_4);
        cb_sendTimed->setObjectName(QString::fromUtf8("cb_sendTimed"));

        gridLayout_6->addWidget(cb_sendTimed, 2, 2, 1, 1);

        sb_timeSet = new QSpinBox(groupBox_4);
        sb_timeSet->setObjectName(QString::fromUtf8("sb_timeSet"));

        gridLayout_6->addWidget(sb_timeSet, 3, 0, 1, 3);

        rbtn_send_ASCII = new QRadioButton(groupBox_4);
        rbtn_send_ASCII->setObjectName(QString::fromUtf8("rbtn_send_ASCII"));

        gridLayout_6->addWidget(rbtn_send_ASCII, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        cb_encode = new QComboBox(groupBox_4);
        cb_encode->setObjectName(QString::fromUtf8("cb_encode"));

        horizontalLayout->addWidget(cb_encode);


        gridLayout_6->addLayout(horizontalLayout, 0, 2, 1, 1);


        gridLayout_7->addWidget(groupBox_4, 2, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(SendAndReceive);

        QMetaObject::connectSlotsByName(SendAndReceive);
    } // setupUi

    void retranslateUi(QWidget *SendAndReceive)
    {
        SendAndReceive->setWindowTitle(QCoreApplication::translate("SendAndReceive", "Form", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("SendAndReceive", "\344\270\262\345\217\243\350\256\276\347\275\256", nullptr));
        label->setText(QCoreApplication::translate("SendAndReceive", "\344\270\262\345\217\243", nullptr));
        label_2->setText(QCoreApplication::translate("SendAndReceive", "\346\263\242\347\211\271\347\216\207", nullptr));
        label_4->setText(QCoreApplication::translate("SendAndReceive", "\346\240\241\351\252\214\344\275\215", nullptr));
        label_3->setText(QCoreApplication::translate("SendAndReceive", "\346\225\260\346\215\256\344\275\215", nullptr));
        label_5->setText(QCoreApplication::translate("SendAndReceive", "\345\201\234\346\255\242\344\275\215", nullptr));
        btn_openSport->setText(QCoreApplication::translate("SendAndReceive", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        btn_flash->setText(QCoreApplication::translate("SendAndReceive", "\345\210\267\346\226\260", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SendAndReceive", "\346\216\245\346\224\266\346\241\206", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SendAndReceive", "\345\217\221\351\200\201\346\241\206", nullptr));
        btn_send->setText(QCoreApplication::translate("SendAndReceive", "\345\217\221\351\200\201", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("SendAndReceive", "\346\216\245\346\224\266\350\256\276\347\275\256", nullptr));
        btn_clear->setText(QCoreApplication::translate("SendAndReceive", "\346\270\205\347\251\272\346\266\210\346\201\257", nullptr));
        cb_autoWrap->setText(QCoreApplication::translate("SendAndReceive", "\350\207\252\345\212\250\346\215\242\350\241\214", nullptr));
        rbtn_rec_HEX->setText(QCoreApplication::translate("SendAndReceive", "HEX", nullptr));
        rbtn_rec_ASCII->setText(QCoreApplication::translate("SendAndReceive", "ASCII", nullptr));
        cb_showTime->setText(QCoreApplication::translate("SendAndReceive", "\346\230\276\347\244\272\346\227\266\351\227\264", nullptr));
        btn_followRoll->setText(QCoreApplication::translate("SendAndReceive", "\350\267\263\350\207\263\345\272\225\351\203\250", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("SendAndReceive", "\345\217\221\351\200\201\350\256\276\347\275\256", nullptr));
        label_6->setText(QCoreApplication::translate("SendAndReceive", "ms", nullptr));
        rbtn_send_HEX->setText(QCoreApplication::translate("SendAndReceive", "HEX", nullptr));
        cb_sendTimed->setText(QCoreApplication::translate("SendAndReceive", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
        rbtn_send_ASCII->setText(QCoreApplication::translate("SendAndReceive", "ASCII", nullptr));
        label_7->setText(QCoreApplication::translate("SendAndReceive", "\345\217\221\351\200\201\347\274\226\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SendAndReceive: public Ui_SendAndReceive {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDANDRECEIVE_H
