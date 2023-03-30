/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QRadioButton *rbt_Check_XOR;
    QRadioButton *rbt_Check_LRC;
    QRadioButton *rbt_Check_Sum;
    QToolButton *tbtn_help;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *rbt_HEX;
    QTextEdit *te_data;
    QRadioButton *rbt_ASCII;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QToolButton *tbtn_OCT;
    QPushButton *btn_start;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QToolButton *tbtn_BIN;
    QToolButton *tbtn_HEX;
    QToolButton *tbtn_DEC;
    QLabel *label_3;
    QTextEdit *te_HEX;
    QTextEdit *te_DEC;
    QTextEdit *te_OCT;
    QTextEdit *te_BIN;

    void setupUi(QWidget *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(489, 756);
        Calculator->setStyleSheet(QString::fromUtf8("background-color:#9BA4B4;"));
        gridLayout_4 = new QGridLayout(Calculator);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox_3 = new QGroupBox(Calculator);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        rbt_Check_XOR = new QRadioButton(groupBox_3);
        rbt_Check_XOR->setObjectName(QString::fromUtf8("rbt_Check_XOR"));
        rbt_Check_XOR->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(rbt_Check_XOR, 0, 0, 1, 1);

        rbt_Check_LRC = new QRadioButton(groupBox_3);
        rbt_Check_LRC->setObjectName(QString::fromUtf8("rbt_Check_LRC"));

        gridLayout_2->addWidget(rbt_Check_LRC, 0, 2, 1, 1);

        rbt_Check_Sum = new QRadioButton(groupBox_3);
        rbt_Check_Sum->setObjectName(QString::fromUtf8("rbt_Check_Sum"));

        gridLayout_2->addWidget(rbt_Check_Sum, 0, 3, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 0, 0, 1, 1);

        tbtn_help = new QToolButton(Calculator);
        tbtn_help->setObjectName(QString::fromUtf8("tbtn_help"));
        tbtn_help->setMinimumSize(QSize(30, 30));
        tbtn_help->setMaximumSize(QSize(30, 30));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/imgs/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtn_help->setIcon(icon);

        gridLayout_4->addWidget(tbtn_help, 0, 1, 1, 1);

        groupBox = new QGroupBox(Calculator);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        rbt_HEX = new QRadioButton(groupBox);
        rbt_HEX->setObjectName(QString::fromUtf8("rbt_HEX"));

        gridLayout->addWidget(rbt_HEX, 0, 1, 1, 1);

        te_data = new QTextEdit(groupBox);
        te_data->setObjectName(QString::fromUtf8("te_data"));

        gridLayout->addWidget(te_data, 1, 0, 1, 2);

        rbt_ASCII = new QRadioButton(groupBox);
        rbt_ASCII->setObjectName(QString::fromUtf8("rbt_ASCII"));

        gridLayout->addWidget(rbt_ASCII, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(Calculator);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tbtn_OCT = new QToolButton(groupBox_2);
        tbtn_OCT->setObjectName(QString::fromUtf8("tbtn_OCT"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/imgs/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtn_OCT->setIcon(icon1);

        gridLayout_3->addWidget(tbtn_OCT, 2, 2, 1, 1);

        btn_start = new QPushButton(groupBox_2);
        btn_start->setObjectName(QString::fromUtf8("btn_start"));

        gridLayout_3->addWidget(btn_start, 4, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_3->addWidget(label_4, 3, 0, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_3->addWidget(label_2, 2, 0, 1, 1);

        tbtn_BIN = new QToolButton(groupBox_2);
        tbtn_BIN->setObjectName(QString::fromUtf8("tbtn_BIN"));
        tbtn_BIN->setIcon(icon1);

        gridLayout_3->addWidget(tbtn_BIN, 3, 2, 1, 1);

        tbtn_HEX = new QToolButton(groupBox_2);
        tbtn_HEX->setObjectName(QString::fromUtf8("tbtn_HEX"));
        tbtn_HEX->setIcon(icon1);

        gridLayout_3->addWidget(tbtn_HEX, 0, 2, 1, 1);

        tbtn_DEC = new QToolButton(groupBox_2);
        tbtn_DEC->setObjectName(QString::fromUtf8("tbtn_DEC"));
        tbtn_DEC->setIcon(icon1);

        gridLayout_3->addWidget(tbtn_DEC, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        te_HEX = new QTextEdit(groupBox_2);
        te_HEX->setObjectName(QString::fromUtf8("te_HEX"));

        gridLayout_3->addWidget(te_HEX, 0, 1, 1, 1);

        te_DEC = new QTextEdit(groupBox_2);
        te_DEC->setObjectName(QString::fromUtf8("te_DEC"));

        gridLayout_3->addWidget(te_DEC, 1, 1, 1, 1);

        te_OCT = new QTextEdit(groupBox_2);
        te_OCT->setObjectName(QString::fromUtf8("te_OCT"));

        gridLayout_3->addWidget(te_OCT, 2, 1, 1, 1);

        te_BIN = new QTextEdit(groupBox_2);
        te_BIN->setObjectName(QString::fromUtf8("te_BIN"));

        gridLayout_3->addWidget(te_BIN, 3, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 2, 0, 1, 1);


        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QWidget *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Form", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Calculator", "\346\240\241\351\252\214\346\226\271\345\274\217", nullptr));
        rbt_Check_XOR->setText(QCoreApplication::translate("Calculator", "\345\274\202\346\210\226\346\240\241\351\252\214", nullptr));
        rbt_Check_LRC->setText(QCoreApplication::translate("Calculator", "LRC \346\240\241\351\252\214", nullptr));
        rbt_Check_Sum->setText(QCoreApplication::translate("Calculator", "CheckSum \346\240\241\351\252\214", nullptr));
        tbtn_help->setText(QCoreApplication::translate("Calculator", "...", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Calculator", "\351\234\200\350\246\201\346\240\241\351\252\214\347\232\204\346\225\260\346\215\256", nullptr));
        rbt_HEX->setText(QCoreApplication::translate("Calculator", "HEX", nullptr));
        rbt_ASCII->setText(QCoreApplication::translate("Calculator", "ASCII", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Calculator", "\346\240\241\351\252\214\347\273\223\346\236\234", nullptr));
        tbtn_OCT->setText(QCoreApplication::translate("Calculator", "...", nullptr));
        btn_start->setText(QCoreApplication::translate("Calculator", "\345\274\200\345\247\213\346\240\241\351\252\214", nullptr));
        label_4->setText(QCoreApplication::translate("Calculator", "BIN\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("Calculator", "HEX\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Calculator", "OCT\357\274\232", nullptr));
        tbtn_BIN->setText(QCoreApplication::translate("Calculator", "...", nullptr));
        tbtn_HEX->setText(QCoreApplication::translate("Calculator", "...", nullptr));
        tbtn_DEC->setText(QCoreApplication::translate("Calculator", "...", nullptr));
        label_3->setText(QCoreApplication::translate("Calculator", "DEC\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
