#ifndef DEBUGPARAMETER_H
#define DEBUGPARAMETER_H

#include <QWidget>
#include <qserialport.h>
#include <qspinbox.h>
#include "threads/serialthread.h"
#include "waveanalysis.h"
#include "headparameter.h"

//32位转8位
#define BYTE0(dwTemp)       ( *( (char *)(&dwTemp)   )  )
#define BYTE1(dwTemp)       ( *( (char *)(&dwTemp) + 1) )
#define BYTE2(dwTemp)       ( *( (char *)(&dwTemp) + 2) )
#define BYTE3(dwTemp)       ( *( (char *)(&dwTemp) + 3) )

//使能PID按钮
extern bool enableBtn_PID;
//等待延迟
extern int delay_PID;


namespace Ui {
class DebugParameter;
}

class DebugParameter : public QWidget
{
    Q_OBJECT

public:
    explicit DebugParameter(QWidget *parent = nullptr);
    ~DebugParameter();
signals:
    void sig_writePID(QVector<uint16_t>* kp,QVector<uint16_t>* ki,QVector<uint16_t>* kd);
    void sig_readPID();
    void sig_recoverDefaultPID();
    void sig_savePID();
public slots:
    void slot_handleDebugParameterInfo(QString str,int color);
    void slot_updateSpinBoxPID();
private slots:    
    void on_btn_writePID_clicked();
    void on_btn_readPID_clicked();
    void on_btn_recoverDefault_clicked();
    void on_tbtn_clear_clicked();
    void on_btn_savePID_clicked();
    void on_sb_delay_editingFinished();
    void on_btn_clearSpinBox_clicked();

private:
    Ui::DebugParameter *ui;
    QSpinBox *m_spinBox;
};

#endif // DEBUGPARAMETER_H
