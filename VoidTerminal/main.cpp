#include "widgets/mainwidget.h"
#include <QApplication>


//主函数，程序的入口
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.processEvents();

    QPixmap pixmap(":/img/imgs/loading.png");
    QSplashScreen splash(pixmap);
    QProgressBar progressBar(&splash);

    progressBar.setParent(&splash);
    progressBar.setStyleSheet("QProgressBar::chunk{background-color: #9BA4B4;}");
    progressBar.setBackgroundRole(QPalette::ColorRole());
    //x,y length width
    progressBar.setGeometry(130, splash.height() - 30, 400, 8);
    progressBar.setRange(0, 10); // 设置进度条的最小值和最大值
    progressBar.setValue(0); // 设置进度条的当前值
    progressBar.setTextVisible(false);
    splash.show();

    MainWidget w;
    w.setWindowFlag(Qt::FramelessWindowHint);


    //w.showMaximized();
    for(int i =0;i<11;i++)
    {
        Sleep(90);
        progressBar.setValue(i);
    }
    splash.finish(&w);
    w.show();

    return a.exec();

}
