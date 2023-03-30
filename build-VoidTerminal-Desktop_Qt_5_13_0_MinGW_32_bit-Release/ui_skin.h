/********************************************************************************
** Form generated from reading UI file 'skin.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKIN_H
#define UI_SKIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Skin
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *rbtn_sec_skin3;
    QRadioButton *rbtn_sec_skin1;
    QRadioButton *rbtn_sec_skin2;
    QRadioButton *rbtn_sec_skin4;
    QRadioButton *rbtn_sec_skin5;
    QRadioButton *rbtn_sec_skin6;
    QRadioButton *rbtn_sec_skin7;
    QRadioButton *rbtn_sec_skin8;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;

    void setupUi(QDialog *Skin)
    {
        if (Skin->objectName().isEmpty())
            Skin->setObjectName(QString::fromUtf8("Skin"));
        Skin->resize(400, 300);
        Skin->setStyleSheet(QString::fromUtf8("background-color:#394867;"));
        gridLayout_2 = new QGridLayout(Skin);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(Skin);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        rbtn_sec_skin3 = new QRadioButton(groupBox);
        rbtn_sec_skin3->setObjectName(QString::fromUtf8("rbtn_sec_skin3"));
        rbtn_sec_skin3->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(rbtn_sec_skin3, 2, 0, 1, 1);

        rbtn_sec_skin1 = new QRadioButton(groupBox);
        rbtn_sec_skin1->setObjectName(QString::fromUtf8("rbtn_sec_skin1"));
        rbtn_sec_skin1->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(rbtn_sec_skin1, 0, 0, 1, 1);

        rbtn_sec_skin2 = new QRadioButton(groupBox);
        rbtn_sec_skin2->setObjectName(QString::fromUtf8("rbtn_sec_skin2"));
        rbtn_sec_skin2->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(rbtn_sec_skin2, 1, 0, 1, 1);

        rbtn_sec_skin4 = new QRadioButton(groupBox);
        rbtn_sec_skin4->setObjectName(QString::fromUtf8("rbtn_sec_skin4"));
        rbtn_sec_skin4->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(rbtn_sec_skin4, 3, 0, 1, 1);

        rbtn_sec_skin5 = new QRadioButton(groupBox);
        rbtn_sec_skin5->setObjectName(QString::fromUtf8("rbtn_sec_skin5"));
        rbtn_sec_skin5->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(rbtn_sec_skin5, 0, 1, 1, 1);

        rbtn_sec_skin6 = new QRadioButton(groupBox);
        rbtn_sec_skin6->setObjectName(QString::fromUtf8("rbtn_sec_skin6"));
        rbtn_sec_skin6->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(rbtn_sec_skin6, 1, 1, 1, 1);

        rbtn_sec_skin7 = new QRadioButton(groupBox);
        rbtn_sec_skin7->setObjectName(QString::fromUtf8("rbtn_sec_skin7"));
        rbtn_sec_skin7->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(rbtn_sec_skin7, 2, 1, 1, 1);

        rbtn_sec_skin8 = new QRadioButton(groupBox);
        rbtn_sec_skin8->setObjectName(QString::fromUtf8("rbtn_sec_skin8"));
        rbtn_sec_skin8->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(rbtn_sec_skin8, 3, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 2);

        btn_ok = new QPushButton(Skin);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        btn_ok->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;"));

        gridLayout_2->addWidget(btn_ok, 1, 0, 1, 1);

        btn_cancel = new QPushButton(Skin);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;"));

        gridLayout_2->addWidget(btn_cancel, 1, 1, 1, 1);


        retranslateUi(Skin);

        QMetaObject::connectSlotsByName(Skin);
    } // setupUi

    void retranslateUi(QDialog *Skin)
    {
        Skin->setWindowTitle(QCoreApplication::translate("Skin", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Skin", "\351\200\211\346\213\251\347\232\256\350\202\244", nullptr));
        rbtn_sec_skin3->setText(QCoreApplication::translate("Skin", "\345\244\251\347\213\274\346\230\237", nullptr));
        rbtn_sec_skin1->setText(QCoreApplication::translate("Skin", "\346\265\267\346\264\213\344\271\213\345\277\203", nullptr));
        rbtn_sec_skin2->setText(QCoreApplication::translate("Skin", "\347\262\211\347\277\274\346\201\213\344\272\272", nullptr));
        rbtn_sec_skin4->setText(QCoreApplication::translate("Skin", "\346\243\256\347\275\227\347\201\265\347\216\213", nullptr));
        rbtn_sec_skin5->setText(QCoreApplication::translate("Skin", "\351\255\205\345\275\261", nullptr));
        rbtn_sec_skin6->setText(QCoreApplication::translate("Skin", "\347\202\275\347\204\260\346\210\230\350\242\215", nullptr));
        rbtn_sec_skin7->setText(QCoreApplication::translate("Skin", "\346\257\222\350\233\233", nullptr));
        rbtn_sec_skin8->setText(QCoreApplication::translate("Skin", "\347\231\275\351\271\255\345\275\222\345\272\255", nullptr));
        btn_ok->setText(QCoreApplication::translate("Skin", "OK", nullptr));
        btn_cancel->setText(QCoreApplication::translate("Skin", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Skin: public Ui_Skin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKIN_H
