#include "calculator.h"
#include "ui_calculator.h"
#include <QDebug>
Calculator::Calculator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
    //初始化单选按钮
    ui->rbt_Check_Sum->setChecked(true);
    ui->rbt_HEX->setChecked(true);
}

Calculator::~Calculator()
{
    delete ui;
}

//开始校验
void Calculator::on_btn_start_clicked()
{
    //清空结果框
    ui->te_HEX->clear();
    ui->te_DEC->clear();
    ui->te_OCT->clear();
    ui->te_BIN->clear();
    QString inputData=ui->te_data->toPlainText();
    QByteArray inputDataToHex = QByteArray::fromHex (inputData.toLatin1().data());
    ui->te_HEX->append(m_checkSum(inputDataToHex));
}

//和校验
QString Calculator::m_checkSum(QByteArray inputData)
{
    uint8_t result=0;
    for(int i=0;i<inputData.size();i++)
        result+=inputData.at(i);
    return QString(result);
}

