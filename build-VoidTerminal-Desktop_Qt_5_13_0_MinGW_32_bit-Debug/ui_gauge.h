/********************************************************************************
** Form generated from reading UI file 'gauge.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAUGE_H
#define UI_GAUGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "gaugecompasspan.h"
#include "gaugepanel.h"
#include "gaugespeed.h"
#include "rulertemp.h"

QT_BEGIN_NAMESPACE

class Ui_Gauge
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QLabel *lb_current;
    GaugePanel *gauge_voltage;
    QLabel *label;
    QLabel *label_2;
    QLabel *lb_voltage;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    GaugeCompassPan *gaugeCompassPan;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    GaugeSpeed *gaugeSpeed;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    RulerTemp *rulerTemp;

    void setupUi(QWidget *Gauge)
    {
        if (Gauge->objectName().isEmpty())
            Gauge->setObjectName(QString::fromUtf8("Gauge"));
        Gauge->resize(660, 571);
        Gauge->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));
        gridLayout = new QGridLayout(Gauge);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_4 = new QGroupBox(Gauge);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        lb_current = new QLabel(groupBox_4);
        lb_current->setObjectName(QString::fromUtf8("lb_current"));

        gridLayout_5->addWidget(lb_current, 2, 1, 1, 1);

        gauge_voltage = new GaugePanel(groupBox_4);
        gauge_voltage->setObjectName(QString::fromUtf8("gauge_voltage"));
        gauge_voltage->setRingColor(QColor(254, 254, 254));
        gauge_voltage->setScaleColor(QColor(255, 255, 255));
        gauge_voltage->setPointerColor(QColor(169, 1, 1));
        gauge_voltage->setTextColor(QColor(255, 255, 255));

        gridLayout_5->addWidget(gauge_voltage, 0, 0, 1, 2);

        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_5->addWidget(label, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_5->addWidget(label_2, 1, 0, 1, 1);

        lb_voltage = new QLabel(groupBox_4);
        lb_voltage->setObjectName(QString::fromUtf8("lb_voltage"));

        gridLayout_5->addWidget(lb_voltage, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox_4, 1, 1, 1, 1);

        groupBox_3 = new QGroupBox(Gauge);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gaugeCompassPan = new GaugeCompassPan(groupBox_3);
        gaugeCompassPan->setObjectName(QString::fromUtf8("gaugeCompassPan"));
        gaugeCompassPan->setBgColor(QColor(20, 39, 78));
        gaugeCompassPan->setBorderColor(QColor(225, 225, 225));
        gaugeCompassPan->setNorthDotColor(QColor(167, 192, 214));
        gaugeCompassPan->setOtherDotColor(QColor(20, 39, 78));
        gaugeCompassPan->setPointerColor(QColor(90, 202, 214));

        gridLayout_4->addWidget(gaugeCompassPan, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(Gauge);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gaugeSpeed = new GaugeSpeed(groupBox_2);
        gaugeSpeed->setObjectName(QString::fromUtf8("gaugeSpeed"));
        gaugeSpeed->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        gaugeSpeed->setRingColorStart(QColor(198, 199, 204));
        gaugeSpeed->setRingColorEnd(QColor(57, 72, 103));
        gaugeSpeed->setPointerColor(QColor(208, 41, 47));
        gaugeSpeed->setTextColor(QColor(229, 229, 229));

        gridLayout_3->addWidget(gaugeSpeed, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 2, 1, 1, 1);

        groupBox = new QGroupBox(Gauge);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        rulerTemp = new RulerTemp(groupBox);
        rulerTemp->setObjectName(QString::fromUtf8("rulerTemp"));
        rulerTemp->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        rulerTemp->setLongStep(50);
        rulerTemp->setShortStep(10);
        rulerTemp->setSpace(0);
        rulerTemp->setBgColorStart(QColor(155, 164, 180));
        rulerTemp->setBgColorEnd(QColor(155, 164, 180));
        rulerTemp->setLineColor(QColor(236, 236, 236));
        rulerTemp->setBarColor(QColor(89, 189, 255));

        gridLayout_2->addWidget(rulerTemp, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 2, 0, 1, 1);


        retranslateUi(Gauge);

        QMetaObject::connectSlotsByName(Gauge);
    } // setupUi

    void retranslateUi(QWidget *Gauge)
    {
        Gauge->setWindowTitle(QCoreApplication::translate("Gauge", "Form", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Gauge", "\347\224\265\345\216\213\350\241\250", nullptr));
        lb_current->setText(QCoreApplication::translate("Gauge", "0.0", nullptr));
        gauge_voltage->setUnit(QCoreApplication::translate("Gauge", "V", nullptr));
        label->setText(QCoreApplication::translate("Gauge", "\347\224\265\346\265\201\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Gauge", "\347\224\265\345\216\213\357\274\232", nullptr));
        lb_voltage->setText(QCoreApplication::translate("Gauge", "0.0", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Gauge", "\346\214\207\345\215\227\351\222\210", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Gauge", "\351\200\237\345\272\246\347\240\201\350\241\250", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Gauge", "\346\270\251\345\272\246\350\256\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gauge: public Ui_Gauge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAUGE_H
