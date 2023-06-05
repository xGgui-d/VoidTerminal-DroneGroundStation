#include "skin.h"
#include "ui_skin.h"
#include <QDebug>

Skin::Skin(QWidget *parent) : QDialog(parent),
                              ui(new Ui::Skin)
{
    ui->setupUi(this);
    m_rbtn = nullptr;

    // 设置窗口
    this->setWindowModality(Qt::WindowModality::ApplicationModal);
    this->setWindowTitle("模型换肤");
    // 默认皮肤
    ui->rbtn_sec_skin1->setChecked(true);
}

Skin::~Skin()
{
    delete ui;
}

// 更换完毕
void Skin::on_btn_ok_clicked()
{
    // 发送带有皮肤下标的信号
    int i = 0;
    for (; i < 8; i++)
    {
        m_rbtn = findChild<QRadioButton *>("rbtn_sec_skin" + QString::number(i + 1));
        if (m_rbtn->isChecked())
            break;
    }
    emit sig_changeSkin(i);
    this->hide();
}

// 取消更换
void Skin::on_btn_cancel_clicked()
{
    this->hide();
}
