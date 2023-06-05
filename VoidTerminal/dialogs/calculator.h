#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>

namespace Ui
{
    class Calculator;
}

class Calculator : public QWidget
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:
    void on_btn_start_clicked();

private:
    Ui::Calculator *ui;
    // 各种校验方法
    QString m_checkSum(QByteArray inputData);
    QString m_checkROX(QByteArray inputData);
    QString m_checkLRC(QByteArray inputData);
};

#endif // CALCULATOR_H
