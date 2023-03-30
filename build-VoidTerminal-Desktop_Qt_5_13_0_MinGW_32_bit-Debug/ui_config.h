/********************************************************************************
** Form generated from reading UI file 'config.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_H
#define UI_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Config
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab_main;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *comboBox_2;
    QLabel *label_7;
    QComboBox *comboBox_4;
    QLabel *label_8;
    QComboBox *comboBox_5;
    QLabel *label_9;
    QComboBox *comboBox_3;
    QWidget *tab_sendAndRec;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QRadioButton *radioButton;
    QCheckBox *checkBox_2;
    QRadioButton *radioButton_2;
    QCheckBox *checkBox;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QCheckBox *checkBox_3;
    QComboBox *comboBox_10;
    QLineEdit *lineEdit_2;
    QLabel *label_14;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_3;
    QLabel *label_15;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QComboBox *comboBox_6;
    QLabel *label_11;
    QComboBox *comboBox_7;
    QLabel *label_12;
    QComboBox *comboBox_8;
    QLabel *label_13;
    QComboBox *comboBox_9;
    QWidget *tab_wave;
    QToolButton *toolButton;
    QWidget *tab_parameter;
    QWidget *tab_cal;

    void setupUi(QWidget *Config)
    {
        if (Config->objectName().isEmpty())
            Config->setObjectName(QString::fromUtf8("Config"));
        Config->resize(546, 528);
        verticalLayout = new QVBoxLayout(Config);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Config);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        tabWidget = new QTabWidget(Config);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_main = new QWidget();
        tab_main->setObjectName(QString::fromUtf8("tab_main"));
        verticalLayout_2 = new QVBoxLayout(tab_main);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(tab_main);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_2->addWidget(comboBox);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab_main);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 1, 1, 1);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 2, 1, 1);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 3, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 2, 1);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(tab_main);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 2);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        comboBox_2 = new QComboBox(groupBox_3);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout_3->addWidget(comboBox_2, 1, 1, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        comboBox_4 = new QComboBox(groupBox_3);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        gridLayout_3->addWidget(comboBox_4, 2, 1, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 3, 0, 1, 1);

        comboBox_5 = new QComboBox(groupBox_3);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        gridLayout_3->addWidget(comboBox_5, 3, 1, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 4, 0, 1, 1);

        comboBox_3 = new QComboBox(groupBox_3);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout_3->addWidget(comboBox_3, 4, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_3);

        tabWidget->addTab(tab_main, QString());
        tab_sendAndRec = new QWidget();
        tab_sendAndRec->setObjectName(QString::fromUtf8("tab_sendAndRec"));
        gridLayout_6 = new QGridLayout(tab_sendAndRec);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        groupBox_4 = new QGroupBox(tab_sendAndRec);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        radioButton = new QRadioButton(groupBox_4);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout_4->addWidget(radioButton, 0, 0, 1, 1);

        checkBox_2 = new QCheckBox(groupBox_4);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        gridLayout_4->addWidget(checkBox_2, 2, 0, 1, 1);

        radioButton_2 = new QRadioButton(groupBox_4);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout_4->addWidget(radioButton_2, 0, 1, 1, 1);

        checkBox = new QCheckBox(groupBox_4);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout_4->addWidget(checkBox, 2, 1, 1, 1);


        gridLayout_6->addWidget(groupBox_4, 2, 0, 1, 1);

        groupBox_5 = new QGroupBox(tab_sendAndRec);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        checkBox_3 = new QCheckBox(groupBox_5);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        gridLayout_5->addWidget(checkBox_3, 2, 1, 1, 1);

        comboBox_10 = new QComboBox(groupBox_5);
        comboBox_10->setObjectName(QString::fromUtf8("comboBox_10"));

        gridLayout_5->addWidget(comboBox_10, 4, 1, 1, 2);

        lineEdit_2 = new QLineEdit(groupBox_5);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout_5->addWidget(lineEdit_2, 3, 1, 1, 1);

        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_5->addWidget(label_14, 3, 0, 1, 1);

        radioButton_4 = new QRadioButton(groupBox_5);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        gridLayout_5->addWidget(radioButton_4, 0, 0, 1, 1);

        radioButton_3 = new QRadioButton(groupBox_5);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        gridLayout_5->addWidget(radioButton_3, 0, 1, 1, 1);

        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_5->addWidget(label_15, 4, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_5, 2, 1, 1, 1);

        groupBox_6 = new QGroupBox(tab_sendAndRec);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_2 = new QGridLayout(groupBox_6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_10 = new QLabel(groupBox_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        comboBox_6 = new QComboBox(groupBox_6);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));

        gridLayout_2->addWidget(comboBox_6, 0, 1, 1, 1);

        label_11 = new QLabel(groupBox_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 1, 0, 1, 1);

        comboBox_7 = new QComboBox(groupBox_6);
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));

        gridLayout_2->addWidget(comboBox_7, 1, 1, 1, 1);

        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 2, 0, 1, 1);

        comboBox_8 = new QComboBox(groupBox_6);
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));

        gridLayout_2->addWidget(comboBox_8, 2, 1, 1, 1);

        label_13 = new QLabel(groupBox_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 3, 0, 1, 1);

        comboBox_9 = new QComboBox(groupBox_6);
        comboBox_9->setObjectName(QString::fromUtf8("comboBox_9"));

        gridLayout_2->addWidget(comboBox_9, 3, 1, 1, 1);


        gridLayout_6->addWidget(groupBox_6, 1, 0, 1, 2);

        tabWidget->addTab(tab_sendAndRec, QString());
        tab_wave = new QWidget();
        tab_wave->setObjectName(QString::fromUtf8("tab_wave"));
        toolButton = new QToolButton(tab_wave);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(180, 180, 48, 41));
        tabWidget->addTab(tab_wave, QString());
        tab_parameter = new QWidget();
        tab_parameter->setObjectName(QString::fromUtf8("tab_parameter"));
        tabWidget->addTab(tab_parameter, QString());
        tab_cal = new QWidget();
        tab_cal->setObjectName(QString::fromUtf8("tab_cal"));
        tabWidget->addTab(tab_cal, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(Config);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Config);
    } // setupUi

    void retranslateUi(QWidget *Config)
    {
        Config->setWindowTitle(QCoreApplication::translate("Config", "Form", nullptr));
        label->setText(QCoreApplication::translate("Config", "\350\256\276\347\275\256", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Config", "\346\250\241\345\236\213", nullptr));
        label_2->setText(QCoreApplication::translate("Config", "\346\250\241\345\236\213\351\273\230\350\256\244\347\232\256\350\202\244", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Config", "\345\215\217\350\256\256\346\226\207\344\273\266", nullptr));
        label_4->setText(QCoreApplication::translate("Config", "\351\200\211\346\213\251\345\255\230\346\224\276\345\215\217\350\256\256\346\226\207\344\273\266\347\232\204\346\234\254\345\234\260\350\267\257\345\276\204", nullptr));
        pushButton->setText(QCoreApplication::translate("Config", "\346\233\264\346\224\271\347\233\256\345\275\225", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Config", "\346\211\223\345\274\200\346\226\207\344\273\266\345\244\271", nullptr));
        label_3->setText(QCoreApplication::translate("Config", "\345\215\217\350\256\256\346\226\207\344\273\266\350\267\257\345\276\204", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Config", "\344\270\273\344\270\262\345\217\243\351\205\215\347\275\256", nullptr));
        label_5->setText(QCoreApplication::translate("Config", "\344\270\262\345\217\243\351\273\230\350\256\244\351\205\215\347\275\256", nullptr));
        label_6->setText(QCoreApplication::translate("Config", "\346\263\242\347\211\271\347\216\207", nullptr));
        label_7->setText(QCoreApplication::translate("Config", "\346\225\260\346\215\256\344\275\215", nullptr));
        label_8->setText(QCoreApplication::translate("Config", "\346\240\241\351\252\214\344\275\215", nullptr));
        label_9->setText(QCoreApplication::translate("Config", "\345\201\234\346\255\242\344\275\215", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_main), QCoreApplication::translate("Config", "\344\270\273\347\225\214\351\235\242", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Config", "\346\216\245\346\224\266\350\256\276\347\275\256", nullptr));
        radioButton->setText(QCoreApplication::translate("Config", "HEX", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Config", "\350\207\252\345\212\250\346\215\242\350\241\214", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Config", "ASCII", nullptr));
        checkBox->setText(QCoreApplication::translate("Config", "\346\230\276\347\244\272\346\227\266\351\227\264", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Config", "\345\217\221\351\200\201\350\256\276\347\275\256", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Config", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
        label_14->setText(QCoreApplication::translate("Config", "\345\256\232\346\227\266\345\217\221\351\200\201\345\273\266\350\277\237", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Config", "HEX", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Config", "ASCII", nullptr));
        label_15->setText(QCoreApplication::translate("Config", "\345\217\221\351\200\201\347\274\226\347\240\201", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("Config", "\346\224\266\345\217\221\344\270\262\345\217\243\351\205\215\347\275\256", nullptr));
        label_10->setText(QCoreApplication::translate("Config", "\346\263\242\347\211\271\347\216\207", nullptr));
        label_11->setText(QCoreApplication::translate("Config", "\346\225\260\346\215\256\344\275\215", nullptr));
        label_12->setText(QCoreApplication::translate("Config", "\346\240\241\351\252\214\344\275\215", nullptr));
        label_13->setText(QCoreApplication::translate("Config", "\345\201\234\346\255\242\344\275\215", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_sendAndRec), QCoreApplication::translate("Config", "\345\237\272\346\234\254\346\224\266\345\217\221", nullptr));
        toolButton->setText(QCoreApplication::translate("Config", "...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_wave), QCoreApplication::translate("Config", "\346\263\242\345\275\242\345\210\206\346\236\220", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_parameter), QCoreApplication::translate("Config", "\350\260\203\350\257\225\345\217\202\346\225\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_cal), QCoreApplication::translate("Config", "\346\225\260\346\215\256\346\240\241\345\207\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Config: public Ui_Config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_H
