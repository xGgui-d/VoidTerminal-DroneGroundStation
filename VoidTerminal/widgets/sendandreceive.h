#ifndef SENDANDRECEIVE_H
#define SENDANDRECEIVE_H

#include <QWidget>
#include "threads/sendandrecserialthread.h"
#include <QTimer>
#include <QTextCodec>
#include <myTabWidget/mytabpage.h>

typedef struct{
    QString serialPortNum;
    int serialPortBaud;
    int serialPortCheckBit;
    int serialPortStopBit;
    int serialPortDataBit;
    QString serialPortDescription;//设备信息
    int id;//用于鉴别是哪一个tab的串口
}MultiSerialConfig;

extern MultiSerialConfig multiSerialConfigs[MAX_PORT];


namespace Ui {
class SendAndReceive;
}

class SendAndReceive : public MyTabPage
{
    Q_OBJECT

public:
    explicit SendAndReceive(QWidget *parent = nullptr);
    ~SendAndReceive();
    static int s_ID;
private:
    QString getCorrectUnicode(const QByteArray &ba);
signals:
    void sig_closeSerialPort(int m_id);
    void sig_openSerialPort(int m_id);
    void sig_alreadySend(int m_id,QByteArray buff);
public slots:
    void slot_handleAlreadyRead(int m_id,QByteArray buff);
    void slot_updateOpenBtn(bool flag,int m_id);
private slots:
    void slot_serialConfigUpdate(int);

    void on_btn_openSport_clicked();
    void on_btn_send_clicked();
    void on_rbtn_rec_ASCII_clicked();
    void on_rbtn_rec_HEX_clicked();
    void on_rbtn_send_ASCII_clicked();
    void on_rbtn_send_HEX_clicked();
    void on_cb_sendTimed_stateChanged(int arg1);
    void on_btn_clear_clicked();
    void on_btn_flash_clicked();
    void on_cb_historySend_activated(const QString &arg1);
    void on_btn_followRoll_clicked();
    void on_sb_timeSet_valueChanged(int arg1);

private:
    Ui::SendAndReceive *ui;
    int m_id;
    bool m_isOpen=false;
    QTimer *m_timer;
    int m_timeSendDelay;
    int br;
};

#endif // SENDANDRECEIVE_H
