#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QDebug>
#include <QWidget>
#include <QTabWidget>
#include <QComboBox>
#include <QSerialPortInfo>
#include <QMessageBox>
#include "flightstatus.h"
#include "waveanalysis.h"
#include "debugparameter.h"
#include "datacalibration.h"
#include <QThread>
#include "threads/serialthread.h"
#include "sendandreceive.h"
#include "threads/sendandrecserialthread.h"
#include "dialogs/calculator.h"
#include "dialogs/gauge.h"
#include "dialogs/note.h"
#include "dialogs/skin.h"
#include "qopengl/glwidget.h"
#include "dialogs/config.h"

// 声明存储串口配置信息的结构体
typedef struct
{
    QString serialPortNum;
    int serialPortBaud;
    int serialPortCheckBit;
    int serialPortStopBit;
    int serialPortDataBit;
    QString serialPortDescription;
} SerialConfig;
extern SerialConfig serialConfig;

extern bool showProtocolFlag;

namespace Ui
{
    class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = nullptr);

    void serialInitUI();
    void threadInit01();
    void threadInit02();
    void threadInit03();

    ~MainWidget();
signals:
    void sig_openSerial();
    void sig_closeSerial();
private slots:
    void slot_serialConfigUpdate(int);
    void slot_updateOpenPortBtn(bool flag);
    void slot_updateUI();
    void slot_handlePortReadDataInfo(QByteArray data);
    void slot_handlePortWriteDataInfo(QByteArray data);
    void slot_handlePortProcessInfo(QString str, int color);

    void on_btn_openAndCloseSerial_clicked();
    void on_tabBar_tabCloseRequested(int index);
    void on_btn_flightStatus_clicked();
    void on_btn_waveAnalysis_clicked();
    void on_btn_debugParameter_clicked();
    void on_btn_dataCelibration_clicked();
    void on_btn_refresh_clicked();
    void on_btn_moreFunction_clicked();

    void on_btn_checkcalculator_clicked();
    void on_tbtn_expend_toggled(bool checked);
    void on_tbtn_expend_2_toggled(bool checked);
    void on_tbtn_lockModel_toggled(bool checked);
    void on_tbtn_gauge_clicked();
    void on_tbtn_note_clicked();
    void on_btn_clear_clicked();
    void on_btn_start_toggled(bool checked);
    void on_btn_stop_toggled(bool checked);
    void on_pushButton_8_clicked();
    void on_tbtn_skin_clicked();
    void on_tbtn_clearBuff_clicked();
    void on_tbtn_config_clicked();

    void on_btn_openSendAndRec_toggled(bool checked);

    void on_btn_title_clicked();

    void on_tbtn_tophit_toggled(bool checked);

    void on_tbtn_more_clicked();

private:
    Ui::MainWidget *ui;
    FlightStatus *m_flightStatus;
    WaveAnalysis *m_waveAnalysis;
    DebugParameter *m_debugParameter;
    DataCalibration *m_dataCalibration;
    Calculator *m_calculator;
    Gauge *m_gauge;
    Note *m_note;
    QTimer *m_timer;
    Skin *m_skin;

    Config *m_config;

    // 存储收发界面的容器
    QVector<SendAndReceive *> m_sendAndReceives;

    // 子线程_1
    QThread *m_thread_1;
    // 子线程_2
    QThread *m_thread_2;
    // 子线程-3
    QThread *m_thread_3;

    QPoint lastPos;
    bool isOnTitleBar = false;
    bool mousePressed = false;
    enum
    {
        AT_LEFT = 1,
        AT_TOP = 2,
        AT_RIGHT = 4,
        AT_BOTTOM = 8,
        AT_TOP_LEFT = 3,
        AT_TOP_RIGHT = 6,
        AT_BOTTOM_LEFT = 9,
        AT_BOTTOM_RIGHT = 12
    };
    int mouseState = 0;
    bool maximized = false;

    // 重写鼠标事件
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseDoubleClickEvent(QMouseEvent *event);
    // 使用过滤器来重写press 和 move 因为使用原来的重写方法会导致子窗口无法使用鼠标追踪
    bool eventFilter(QObject *watched, QEvent *event);
    void myMousePressEvent(QMouseEvent *event);
    void myMouseMoveEvent(QMouseEvent *event);
    // 控制窗口的最大化和最小化
    void controlWindowScale();

    // 窗口靠边半屏
    enum
    {
        LEFT_SIDE = 1,
        RIGHT_SIDE = 2
    };
    void halfSizeOfWindows(int side);
};

#endif // MAINWIDGET_H
