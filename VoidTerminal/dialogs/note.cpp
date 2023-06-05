#include "note.h"
#include "ui_note.h"
#include <QDebug>
Note::Note(QWidget *parent) : QMainWindow(parent),
                              ui(new Ui::Note)
{
    ui->setupUi(this);
    // 设置图标
    this->setWindowIcon(QIcon(":/img/imgs/title.png"));
}

Note::~Note()
{
    delete ui;
}
