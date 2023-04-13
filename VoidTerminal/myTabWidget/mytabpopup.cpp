#include "mytabpopup.h"

#include <QMouseEvent>
#include <QVBoxLayout>
#include <QDebug>
#include <qmessagebox.h>

MyTabPopup::MyTabPopup(QWidget *parent)
    : QWidget(parent)
{

}

void MyTabPopup::setContentWidget(QWidget *page)
{
    if(!page)
        return;
    content=page;
    QVBoxLayout *layout=new QVBoxLayout(this);
    layout->setMargin(0);
    layout->addWidget(page);
}

QWidget* MyTabPopup::getContentWidget()
{
    return content;
}

bool MyTabPopup::event(QEvent *event)
{
    switch(event->type())
    {
    case QEvent::MouseButtonRelease:
    case QEvent::NonClientAreaMouseButtonRelease:
    {
        QMouseEvent *e=static_cast<QMouseEvent*>(event);
        if(e&&e->button()==Qt::LeftButton)
        {
            emit dragRelease(e->globalPos());
        }
    }
        break;
    default:
        break;
    }
    return QWidget::event(event);
}
//重写关闭函数,实现关闭后把窗口放回
void MyTabPopup::closeEvent(QCloseEvent* e)
{
    if(QMessageBox::question(this,tr("关闭窗口"),tr("关闭后串口的连接并不会自主关闭，你确定要关闭窗口吗？"),
                             QMessageBox::Yes, QMessageBox::No )
            == QMessageBox::Yes){
        e->accept();//不会将事件传递给组件的父组件
        emit dragBack();
    }
    else
        e->ignore();
}

