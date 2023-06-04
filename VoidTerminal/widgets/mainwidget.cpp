#include "mainwidget.h"
#include "ui_mainwidget.h"
#include <QDateTime>
#include <QFileInfo>
#include <QThread>
#include <qdesktopservices.h>
#include <qfile.h>
#include "threads/serialthread.h"
#include "headparameter.h"
#include "threads/sendandrecserialthread.h"
#include "sendandreceive.h"
#include <threads/datasortthread.h>


/*
 * 主窗口界面，里面含有一个TabBarWidget主要用于把其他widget添加作为元素
 */

// 定义串口配置信息
SerialConfig serialConfig;
// 是否展示右边消息
bool showProtocolFlag = false;
// 三个子线程类
static SerialThread *serialThread;
static DataSortThread *dataSortThread;
static SendAndRecSerialThread *sendAndRecSerialThread;

MainWidget::MainWidget(QWidget *parent) : QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);

    // 采用鼠标事件屏蔽的方式重写鼠标事件
    this->setAttribute(Qt::WA_Hover, true);
    this->installEventFilter(this);

    // qDebug()<<"主线程id: "<<QThread::currentThreadId()<<endl;

    connect(ui->tbtn_max, &QToolButton::clicked, this, [=]() // 点击最大化按钮
    { controlWindowScale(); });
    connect(ui->tbtn_min, &QToolButton::clicked, this, [=]() // 点击最小化按钮
    { this->showMinimized(); });
    connect(ui->tbtn_close, &QToolButton::clicked, this, [=]() // 点击关闭按钮
    { this->close(); });

    // 设置图标
    this->setWindowIcon(QIcon(":/img/imgs/title.png"));
    ui->tbtn_lockModel->setIcon(QIcon(":/img/imgs/unlock.png"));

    // 设置标题
    this->setWindowTitle("虚空终端");

    // 设置背景颜色
    QPalette pal(this->palette());
    QColor color;
    color.setRgb(20, 39, 78);
    pal.setColor(QPalette::Background, color);
    this->setAutoFillBackground(true);
    this->setPalette(pal);

    // 欢迎信息
    slot_handlePortProcessInfo("『Hi，亲爱的无人机爱好者！感谢您下载xGgui的软件o(*￣▽￣*)ブ。"
                               "xGgui将努力开发出最新最好的功能。"
                               "如果您有任何问题或建议，请随时联系QQ:1723172785。』",
                               2);

    // 实例化子窗口
    m_flightStatus = new FlightStatus(this);
    m_waveAnalysis = new WaveAnalysis(this);
    m_debugParameter = new DebugParameter(this);
    m_dataCalibration = new DataCalibration(this);

    m_gauge = new Gauge();
    m_skin = new Skin(this);
    m_config = new Config(this);

    // tab中添加的子窗口
    ui->tabBar->addTab(m_flightStatus, "飞控状态");
    ui->tabBar->addTab(m_waveAnalysis, "波形分析");
    ui->tabBar->addTab(m_debugParameter, "调试参数");
    ui->tabBar->addTab(m_dataCalibration, "数据校准");
    ui->tabBar->setCurrentIndex(0);

    ui->tabBar->setMovable(true);
    // 初始化收发tab样式
    ui->tabSendAndRec->setStyleSheet("QTabBar::tab{color:#14274E;width:100px;font: 75 10pt \"微软雅黑\";}"
                                     "QTabWidget::pane{border:4px solid #14274E;}");
    ui->tabSendAndRec->setTabShape(QTabWidget::Rounded);
    for (int i = 0; i < MAX_PORT; i++)
    {
        m_sendAndReceives.append(new SendAndReceive(this));
        m_sendAndReceives[i]->setWindowTitle("串口" + QString::number(i + 1));
        ui->tabSendAndRec->appendNormalPage(m_sendAndReceives[i]);
    }
    ui->tabSendAndRec->setCurrentIndex(0);

    // 设置图标
    ui->btn_flightStatus->setIcon(QIcon(":/img/imgs/flightStatus_1.png"));
    ui->btn_flightStatus->setLayoutDirection(Qt::LeftToRight);
    ui->btn_waveAnalysis->setIcon(QIcon(":/img/imgs/flightStatus_4.png"));
    ui->btn_waveAnalysis->setLayoutDirection(Qt::LeftToRight);
    ui->btn_debugParameter->setIcon(QIcon(":/img/imgs/flightStatus_3.png"));
    ui->btn_debugParameter->setLayoutDirection(Qt::LeftToRight);
    ui->btn_dataCelibration->setIcon(QIcon(":/img/imgs/flightStatus_2.png"));
    ui->btn_dataCelibration->setLayoutDirection(Qt::LeftToRight);

    // 设置分割器的分割线宽度
    ui->splitter_1->setHandleWidth(3);
    ui->splitter_2->setHandleWidth(3);
    ui->splitter_3->setHandleWidth(3);
    ui->splitter_4->setHandleWidth(3);
    // 初始化分割器的比例 3是收发上下,2是主与右,4是主与左,1是左的上下
    ui->splitter_1->setSizes(QList<int>() << 200 << 500);
    ui->splitter_2->setSizes(QList<int>() << 1 << 0);
    ui->splitter_3->setSizes(QList<int>() << 1 << 0);
    ui->gridFrame->setVisible(false);
    ui->splitter_4->setSizes(QList<int>() << 10 << 30000);

    // 隐藏右边显示框
    ui->te_protocolData->hide();
    // 设置右边显示框的最大行数
    ui->te_protocolData->document()->setMaximumBlockCount(50000);
    // 隐藏基本收发
    ui->tabSendAndRec->hide();

    // 初始化timer
    m_timer = new QTimer(this);
    connect(m_timer, &QTimer::timeout, this, &MainWidget::slot_updateUI);
    m_timer->start(5);

    // 连接换肤
    connect(m_skin, &Skin::sig_changeSkin, m_flightStatus, &FlightStatus::slot_changeSkin);

    // 初始化串口ui
    serialInitUI();

    // 初始化线程
    threadInit01();
    threadInit02();
    threadInit03();
}

MainWidget::~MainWidget()
{
    // 退出串口子线程1
    m_thread_1->quit();
    m_thread_1->wait();
    // 退出串口2子线程2
    m_thread_2->quit();
    m_thread_2->wait();
    // 退出串口2子线程2
    m_thread_3->quit();
    m_thread_3->wait();

    delete m_gauge;
    delete ui;
}

// 窗口靠边半屏
void MainWidget::halfSizeOfWindows(int side)
{
    int nWidth = GetSystemMetrics(SM_CXSCREEN);
    int nHeight = GetSystemMetrics(SM_CYSCREEN);
    if(side == LEFT_SIDE)
    {
        this->move(0,0);
        this->resize(nWidth/2,nHeight);
    }
    else if(side == RIGHT_SIDE)
    {
        this->move(nWidth/2,0);
        this->resize(nWidth/2,nHeight);
    }

}


// 重写鼠标双击事件
void MainWidget::mouseDoubleClickEvent(QMouseEvent *event)
{
    if (event->y() < 60)
        controlWindowScale();
}

// 重写鼠标释放事件
void MainWidget::mouseReleaseEvent(QMouseEvent *event)
{
    mousePressed = false;
    isOnTitleBar = false;
    setCursor(Qt::ArrowCursor);

    if (event->globalPos().y() < 2)
        controlWindowScale();
    // 靠边半屏
    if((event->globalPos().x()<2) && (mouseState == 0))
        halfSizeOfWindows(LEFT_SIDE);
    if((event->globalPos().x()>GetSystemMetrics(SM_CXSCREEN)-2) && (mouseState == 0))
        halfSizeOfWindows(RIGHT_SIDE);
    mouseState = 0;
}

// 鼠标按下事件(记录拉伸窗口或移动窗口时的起始坐标（左上角）)
void MainWidget::myMousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        mousePressed = true;
        lastPos = event->globalPos() - this->frameGeometry().topLeft();
    }
}

// 鼠标移动事件
void MainWidget::myMouseMoveEvent(QMouseEvent *event)
{

    if (event->buttons() == Qt::NoButton)
    {
        mousePressed = false;
        isOnTitleBar = false;
    }

    if (!mousePressed)
    { // 鼠标没按下移动，更新鼠标位置状态

        mouseState = 0;
        if (!maximized && abs(event->pos().x() - ui->mainWidget->pos().x()) < 7)
            mouseState |= AT_LEFT;
        if (!maximized && abs(event->pos().y() - ui->mainWidget->pos().y()) < 7)
            mouseState |= AT_TOP;
        if (!maximized && abs(event->pos().x() - ui->mainWidget->pos().x() - ui->mainWidget->width()) < 7)
            mouseState |= AT_RIGHT;
        if (!maximized && abs(event->pos().y() - ui->mainWidget->pos().y() - ui->mainWidget->height()) < 7)
            mouseState |= AT_BOTTOM;

        // 光标设置斜的‘\’
        if (mouseState == AT_TOP_LEFT || mouseState == AT_BOTTOM_RIGHT)
            setCursor(Qt::SizeFDiagCursor);
        // 光标设置斜的‘/’
        else if (mouseState == AT_TOP_RIGHT || mouseState == AT_BOTTOM_LEFT)
            setCursor(Qt::SizeBDiagCursor);
        // 光标设置左右
        else if (mouseState & (AT_LEFT | AT_RIGHT))
            setCursor(Qt::SizeHorCursor);
        // 光标设置上下
        else if (mouseState & (AT_TOP | AT_BOTTOM))
            setCursor(Qt::SizeVerCursor);
        else
            unsetCursor();
    }
    else
    { // 鼠标按下移动
        // qDebug()<<"press move"<<event->globalPos().y()<<this->frameGeometry().y()<<endl;
        if ((mouseState == 0) && (isOnTitleBar == true))
        {
            if (maximized)
            {
                qreal wRatio = (double)event->pos().x() / (double)ui->mainWidget->width();
                controlWindowScale();
                this->move(QPoint(event->globalPos().x() - ui->mainWidget->width() * wRatio, -30));

                lastPos = QPoint(ui->mainWidget->width() * wRatio, event->pos().y());
            }
            else
            {
                this->move(event->globalPos() - lastPos);
            }
        }
        else
        {

            /* 移动的距离差 */

            // 右或者下的移动距离差
            QPoint d_right_bottom = event->globalPos() - frameGeometry().topLeft() - lastPos;

            // 左或者上的移动距离差
            QPoint tmp_last_Pos;
            QPoint d_left_top = event->globalPos() - frameGeometry().topLeft() - tmp_last_Pos;

            if (mouseState & AT_LEFT)
            {
                if (this->width() - d_left_top.x() > this->minimumWidth())
                {
                    // 向左移动
                    this->move(this->frameGeometry().x() + d_left_top.x(), this->frameGeometry().y());
                    // 窗口减小
                    this->resize(this->width() - d_left_top.x(), this->height());
                    tmp_last_Pos = lastPos;
                }
                else
                {
                    int max_d_x = this->width() - minimumWidth();
                    // 向左移动
                    this->move(this->frameGeometry().x() + max_d_x, this->frameGeometry().y());
                    // 窗口减小
                    this->resize(this->width() - max_d_x, this->height());
                }
            }
            if (mouseState & AT_TOP)
            {
                if (this->height() - d_left_top.y() > this->minimumHeight())
                {
                    this->move(this->frameGeometry().x(), this->frameGeometry().y() + d_left_top.y());
                    this->resize(this->width(), this->height() - d_left_top.y());
                    tmp_last_Pos = lastPos;
                }
                else
                {
                    int max_d_y = this->height() - minimumHeight();
                    this->move(this->frameGeometry().x(), this->frameGeometry().y() + max_d_y);
                    this->resize(this->width(), this->height() - max_d_y);
                }
            }
            if (mouseState & AT_RIGHT)
            {
                if (!(event->globalPos().x() < this->frameGeometry().x() + this->width() && d_right_bottom.x() > 0))
                    this->resize(this->width() + d_right_bottom.x(), this->height());
            }
            if (mouseState & AT_BOTTOM)
            {
                if (!(event->globalPos().y() < this->frameGeometry().y() + this->height() && d_right_bottom.y() > 0))
                    this->resize(this->width(), this->height() + d_right_bottom.y());
            }
            lastPos = event->globalPos() - this->frameGeometry().topLeft();
        }
    }
}

// 点击最大化按钮事件
void MainWidget::controlWindowScale()
{
    if (!maximized)
    {
        this->showMaximized();
        maximized = true;
    }
    else
    {
        this->showNormal();
        maximized = false;
    }
}

// 鼠标事件屏蔽之后的路由
bool MainWidget::eventFilter(QObject *watched, QEvent *event)
{
    QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);

    // 鼠标拖动事件
    if (mouseEvent->type() == QEvent::MouseMove)
    {
        // 判断按下的位置是否在 titlebar
        if (ui->titleBar->geometry().contains(this->mapFromGlobal(QCursor::pos()) - QPoint(15, 15))) // 这里还要减去鼠标图案的大小
        {
            isOnTitleBar = true;
        }
    }

    // 鼠标移动事件
    if (mouseEvent->type() == QEvent::HoverEnter || mouseEvent->type() == QEvent::HoverLeave ||
            mouseEvent->type() == QEvent::HoverMove)
    {
        myMouseMoveEvent(mouseEvent);
    }

    // 鼠标点击事件
    if (mouseEvent->type() == QEvent::MouseButtonPress)
    {
        QMouseEvent *ev = static_cast<QMouseEvent *>(mouseEvent);
        if (ev->button() == Qt::LeftButton)
        {
            myMousePressEvent(mouseEvent);
        }
    }

    return QWidget::eventFilter(watched, mouseEvent);
}

// 串口列表ui的初始化
void MainWidget::serialInitUI()
{
    // 连接串口的combox 选中选项框后实时更新串口数据到变量中
    connect(ui->cBox_SerialPortNum, SIGNAL(activated(int)), this, SLOT(slot_serialConfigUpdate(int)));
    connect(ui->cBox_SerialPortBaud, SIGNAL(activated(int)), this, SLOT(slot_serialConfigUpdate(int)));
    connect(ui->cBox_SerialPortDataNum, SIGNAL(activated(int)), this, SLOT(slot_serialConfigUpdate(int)));
    connect(ui->cBox_SerialPortCheck, SIGNAL(activated(int)), this, SLOT(slot_serialConfigUpdate(int)));
    connect(ui->cBox_SerialPortStopBit, SIGNAL(activated(int)), this, SLOT(slot_serialConfigUpdate(int)));
    ui->cBox_SerialPortBaud->setEditable(false);
    QIntValidator *aIntValidator = new QIntValidator;
    aIntValidator->setRange(0, 5000000);
    ui->cBox_SerialPortBaud->setValidator(aIntValidator);

    QList<QSerialPortInfo> comList = QSerialPortInfo::availablePorts(); // 获取可用串口列表
    if (comList.isEmpty())                                              // 若没有可用串口，则发送警告
    {
        QMessageBox::warning(this, "串口异常警告", "电脑没有可用串口设备, 请检查硬件连接！！！");
    }
    else // 将可用串口显示到comboBox上以供选择
    {
        for (int i = 0; i < comList.size(); i++)
        {
            ui->cBox_SerialPortNum->addItem(comList[i].portName() + "|" + comList[i].description()); // 添加按钮
        }
    }
    // 编辑可选其他选项
    QStringList baudRateList = QStringList() << "1200"
                                             << "2400"
                                             << "4800"
                                             << "9600"
                                             << "14400"
                                             << "19200"
                                             << "38400"
                                             << "43000"
                                             << "57600"
                                             << "76800"
                                             << "115200"
                                             << "128000"
                                             << "230400"
                                             << "256000"
                                             << "460800"
                                             << "500000"
                                             << "921600"
                                             << "1382400";
    QStringList parityList = QStringList() << "无"
                                           << "奇校验"
                                           << "偶校验";
    QStringList stopBitsList = QStringList() << "1"
                                             << "1.5"
                                             << "2";
    QStringList dataNumList = QStringList() << "8"
                                            << "7"
                                            << "6"
                                            << "5";

    ui->cBox_SerialPortBaud->addItems(baudRateList);
    ui->cBox_SerialPortCheck->addItems(parityList);
    ui->cBox_SerialPortStopBit->addItems(stopBitsList);
    ui->cBox_SerialPortDataNum->addItems(dataNumList);
    ui->cBox_SerialPortBaud->setCurrentIndex(15); // 设置500000为默认选项  10

    slot_serialConfigUpdate(1);
}

// 将串口配置数据更新到变量
void MainWidget::slot_serialConfigUpdate(int)
{
    serialConfig.serialPortNum = ui->cBox_SerialPortNum->currentText().split('|').value(0);         // 获取串口号;
    QString strBaudRate = ui->cBox_SerialPortBaud->currentText();                                   // 获取波特率
    serialConfig.serialPortBaud = strBaudRate.toInt();                                              // 文本转整型;
    serialConfig.serialPortCheckBit = ui->cBox_SerialPortCheck->currentIndex();                     // 校验形式(下标);
    serialConfig.serialPortDataBit = ui->cBox_SerialPortDataNum->currentIndex();                    // 数据位数(下标);
    serialConfig.serialPortStopBit = ui->cBox_SerialPortStopBit->currentIndex();                    // 停止位数(下标);
    serialConfig.serialPortDescription = ui->cBox_SerialPortNum->currentText().split('|').value(1); // 获取设备信息
}

// 更新主窗口ui
void MainWidget::slot_updateUI()
{
    ui->lb_alreadyRec->setText(QString::number(alRecNum));
    ui->lb_alreadySend->setText(QString::number(alSendNum));
    ui->lb_error->setText(QString::number((errorNum)));
}

/// 初始化子线程01
void MainWidget::threadInit01()
{
    m_thread_1 = new QThread();
    serialThread = new SerialThread();
    // 连接串口连接过程信息
    connect(serialThread, &SerialThread::sig_sendSerialPortProcessInfo, this, &MainWidget::slot_handlePortProcessInfo);

    // 连接参数调试PID
    connect(m_debugParameter, &DebugParameter::sig_writePID, serialThread, &SerialThread::slot_writePID);
    // 连接参数调试PID过程信息
    connect(serialThread, &SerialThread::sig_sendDebugParameterInfo, m_debugParameter, &DebugParameter::slot_handleDebugParameterInfo);
    // 连接读取PID命令
    connect(m_debugParameter, &DebugParameter::sig_readPID, serialThread, &SerialThread::slot_readPID);
    // 连接恢复默认PID命令
    connect(m_debugParameter, &DebugParameter::sig_recoverDefaultPID, serialThread, &SerialThread::slot_recoverDefault);
    // 连接保存PID命令
    connect(m_debugParameter, &DebugParameter::sig_savePID, serialThread, &SerialThread::slot_savePID);

    // 连接校准过程信息
    connect(serialThread, &SerialThread::sig_sendCalibrationInfo, m_dataCalibration, &DataCalibration::slot_handleCalibrationInfo);
    // 连接校准命令
    connect(m_dataCalibration, &DataCalibration::sig_cal_acc, serialThread, &SerialThread::slot_cal_acc);
    connect(m_dataCalibration, &DataCalibration::sig_cal_gyro, serialThread, &SerialThread::slot_cal_gyro);
    connect(m_dataCalibration, &DataCalibration::sig_cal_alt, serialThread, &SerialThread::slot_cal_alt);
    connect(m_dataCalibration, &DataCalibration::sig_cal_mag, serialThread, &SerialThread::slot_cal_mag);
    connect(m_dataCalibration, &DataCalibration::sig_cal_inertia, serialThread, &SerialThread::slot_cal_inertia);
    connect(m_dataCalibration, &DataCalibration::sig_cal_baro, serialThread, &SerialThread::slot_cal_baro);

    connect(m_dataCalibration, &DataCalibration::sig_cal_faceExit, serialThread, &SerialThread::slot_cal_faceExit);
    connect(m_dataCalibration, &DataCalibration::sig_cal_face01, serialThread, &SerialThread::slot_cal_face01);
    connect(m_dataCalibration, &DataCalibration::sig_cal_face02, serialThread, &SerialThread::slot_cal_face02);
    connect(m_dataCalibration, &DataCalibration::sig_cal_face03, serialThread, &SerialThread::slot_cal_face03);
    connect(m_dataCalibration, &DataCalibration::sig_cal_face04, serialThread, &SerialThread::slot_cal_face04);
    connect(m_dataCalibration, &DataCalibration::sig_cal_face05, serialThread, &SerialThread::slot_cal_face05);
    connect(m_dataCalibration, &DataCalibration::sig_cal_face06, serialThread, &SerialThread::slot_cal_face06);

    connect(m_dataCalibration, &DataCalibration::sig_read_positionSet, serialThread, &SerialThread::slot_read_positionSet);
    connect(m_dataCalibration, &DataCalibration::sig_read_digitSet, serialThread, &SerialThread::slot_read_digitSet);
    connect(m_dataCalibration, &DataCalibration::sig_read_flowSet, serialThread, &SerialThread::slot_read_flowSet);
    connect(m_dataCalibration, &DataCalibration::sig_read_version, serialThread, &SerialThread::slot_read_version);

    // 连接串口收发信息显示
    connect(serialThread, &SerialThread::sig_sendPortReadDataInfo, this, &MainWidget::slot_handlePortReadDataInfo);
    connect(serialThread, &SerialThread::sig_sendPortWriteDataInfo, this, &MainWidget::slot_handlePortWriteDataInfo);
    // 连接串口是否打开
    connect(serialThread, &SerialThread::sig_openPortSuccess, this, &MainWidget::slot_updateOpenPortBtn);
    // 连接串口的打开和关闭
    connect(this, &MainWidget::sig_openSerial, serialThread, &SerialThread::slot_openSerial);
    connect(this, &MainWidget::sig_closeSerial, serialThread, &SerialThread::slot_close_serial);

    // 将串口线程移入子线程
    serialThread->moveToThread(m_thread_1);
    // 线程结束，自动删除对象
    connect(m_thread_1, &QThread::finished, serialThread, &QObject::deleteLater);
    // 开始运行子线程
    m_thread_1->start();
}

/// 初始化子线程02
void MainWidget::threadInit02()
{
    m_thread_2 = new QThread();
    sendAndRecSerialThread = new SendAndRecSerialThread();
    // 连接串口连接过程信息
    connect(sendAndRecSerialThread, &SendAndRecSerialThread::sig_sendSerialPortProcessInfo, this, &MainWidget::slot_handlePortProcessInfo);
    // 连接特定串口的打开与关闭
    for (int i = 0; i < MAX_PORT; i++)
    {
        connect(m_sendAndReceives[i], &SendAndReceive::sig_openSerialPort, sendAndRecSerialThread, &SendAndRecSerialThread::slot_openSendAndRecSerial);
        connect(m_sendAndReceives[i], &SendAndReceive::sig_closeSerialPort, sendAndRecSerialThread, &SendAndRecSerialThread::slot_closeSendAndRecSerial);
        connect(sendAndRecSerialThread, &SendAndRecSerialThread::sig_alreadyRead, m_sendAndReceives[i], &SendAndReceive::slot_handleAlreadyRead);
        connect(m_sendAndReceives[i], &SendAndReceive::sig_alreadySend, sendAndRecSerialThread, &SendAndRecSerialThread::slot_handleAlreadySend);
    }
    // 连接打开串口是否成功打开
    for (int i = 0; i < m_sendAndReceives.size(); i++)
        connect(sendAndRecSerialThread, &SendAndRecSerialThread::sig_openSuccess, m_sendAndReceives[i], &SendAndReceive::slot_updateOpenBtn);

    // 将串口线程移入子线程
    sendAndRecSerialThread->moveToThread(m_thread_2);
    // 线程结束，自动删除对象
    connect(m_thread_2, &QThread::finished, sendAndRecSerialThread, &QObject::deleteLater);
    // 开始运行子线程
    m_thread_2->start();
}

/// 初始化子线程03
void MainWidget::threadInit03()
{
    m_thread_3 = new QThread();
    dataSortThread = new DataSortThread();

    qRegisterMetaType<uint8_t>("uint8_t");
    connect(serialThread, &SerialThread::sig_dataSort, dataSortThread, &DataSortThread::slot_dataSort);
    // 连接更新PIDSpinBox
    connect(dataSortThread, &DataSortThread::sig_updateSpinBoxPID, m_debugParameter, &DebugParameter::slot_updateSpinBoxPID);
    // 将串口线程移入子线程
    dataSortThread->moveToThread(m_thread_3);
    // 线程结束，自动删除对象
    connect(m_thread_3, &QThread::finished, dataSortThread, &QObject::deleteLater);
    // 开始运行子线程
    m_thread_3->start();
}

// 定义串口是否打开标志
static bool serialIsOpen = false;
// 打开和关闭串口按钮
void MainWidget::on_btn_openAndCloseSerial_clicked()
{
    // 如果已经打开
    if (serialIsOpen)
    {
        // 发送关闭信号
        emit sig_closeSerial();
        ui->cBox_SerialPortNum->setEnabled(true);
        ui->cBox_SerialPortBaud->setEnabled(true);
        ui->cBox_SerialPortCheck->setEnabled(true);
        ui->cBox_SerialPortStopBit->setEnabled(true);
        ui->cBox_SerialPortDataNum->setEnabled(true);
        ui->btn_refresh->setEnabled(true);
        ui->btn_openAndCloseSerial->setText("打开串口");
        serialIsOpen = false;
    }
    else
    {
        // 发送打开信号
        emit sig_openSerial();
    }
}

void MainWidget::slot_updateOpenPortBtn(bool flag)
{
    if (flag)
    {
        serialIsOpen = true;
        ui->cBox_SerialPortNum->setEnabled(false);
        ui->cBox_SerialPortBaud->setEnabled(false);
        ui->cBox_SerialPortCheck->setEnabled(false);
        ui->cBox_SerialPortStopBit->setEnabled(false);
        ui->cBox_SerialPortDataNum->setEnabled(false);
        ui->btn_refresh->setEnabled(false);
        ui->btn_openAndCloseSerial->setText("关闭串口");
    }
    else
        QMessageBox::warning(this, "串口异常警告", "电脑没有可用串口设备, 请检查硬件连接！！！");
}

// 隐藏tabBar
void MainWidget::on_tabBar_tabCloseRequested(int index)
{
    ui->tabBar->removeTab(index);
}
// 打开tabBar
void MainWidget::on_btn_flightStatus_clicked()
{

    ui->tabBar->insertTab(0, m_flightStatus, "飞控状态");
    ui->tabBar->setCurrentIndex(0);
}

void MainWidget::on_btn_waveAnalysis_clicked()
{
    ui->tabBar->insertTab(1, m_waveAnalysis, "波形分析");
    ui->tabBar->setCurrentIndex(1);
}

void MainWidget::on_btn_debugParameter_clicked()
{
    ui->tabBar->insertTab(2, m_debugParameter, "调试参数");
    ui->tabBar->setCurrentIndex(2);
}

void MainWidget::on_btn_dataCelibration_clicked()
{
    ui->tabBar->insertTab(3, m_dataCalibration, "数据校准");
    ui->tabBar->setCurrentIndex(3);
}

// 刷新串口
void MainWidget::on_btn_refresh_clicked()
{
    // 先清空原来的item
    ui->cBox_SerialPortNum->clear();
    QList<QSerialPortInfo> comList = QSerialPortInfo::availablePorts(); // 获取可用串口列表
    if (comList.isEmpty())                                              // 若没有可用串口，则发送警告
    {
        QMessageBox::warning(this, "串口异常警告", "电脑没有可用串口设备, 请检查硬件连接！！！");
    }
    else // 将可用串口显示到comboBox上以供选择
    {
        for (int i = 0; i < comList.size(); i++)
        {
            ui->cBox_SerialPortNum->addItem(comList[i].portName() + "|" + comList[i].description()); // 添加按钮
            //+" "+comList[i].description()设备信息
        }
    }
    slot_serialConfigUpdate(1);
}

// 处理显示串口打开的过程信息
void MainWidget::slot_handlePortProcessInfo(QString str, int color)
{
    QString colorStr;
    // 获取当前日期
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString currentDateStr = currentDateTime.toString("[MM.dd hh:mm:ss.zzz] ");
    switch (color)
    {
    case 0:
        colorStr = "#000000";
        break;
    case 1:
        colorStr = "#0080FF";
        break;
    case 2:
        colorStr = "#33FF33";
        break;
    case 3:
        colorStr = "#FF3333";
        break;
    case 4:
        colorStr = "#330066";
        break;
    default:
        colorStr = "#FFFFFF";
        break;
    }
    str = "<font color=\"#394867\">" + currentDateStr + "</font>" + "<font color=\"" + colorStr + "\">" + str + "</font>";
    ui->tb_serialPortData->appendHtml(str);
}

// 处理显示串口读的数据信息
void MainWidget::slot_handlePortReadDataInfo(QByteArray data)
{
    QString str;
    QString temp = data.toHex().toUpper();
    for (int i = 0; i < temp.length(); i += 2)
    {
        str += temp.mid(i, 2);
        str += " ";
    }
    // 获取当前日期
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString currentDateStr = currentDateTime.toString("[MM.dd hh:mm:ss.zzz:RX:] ");
    str = "<font color=\"#A66F46\">" + currentDateStr + "</font>" + "<font color=\"#000000\">" + str + "</font>";

    ui->te_protocolData->appendHtml(str);
}

// 处理显示串口写的数据信息
void MainWidget::slot_handlePortWriteDataInfo(QByteArray data)
{
    QString str;
    QString temp = data.toHex().toUpper();
    for (int i = 0; i < temp.length(); i += 2)
    {
        str += temp.mid(i, 2);
        str += " ";
    }
    // 获取当前日期
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString currentDateStr = currentDateTime.toString("[MM.dd hh:mm:ss.zzz:TX:] ");
    str = "<font color=\"#324A75\">" + currentDateStr + "</font>" + "<font color=\"#000000\">" + str + "</font>";

    ui->te_protocolData->appendHtml(str);
}

// 打开解锁模型鼠标事件
void MainWidget::on_tbtn_lockModel_toggled(bool checked)
{
    if (checked)
    {
        // 解锁模型
        ui->tbtn_lockModel->setIcon(QIcon(":/img/imgs/lock.png"));
        m_flightStatus->setIsLock(false);
    }
    else
    {
        ui->tbtn_lockModel->setIcon(QIcon(":/img/imgs/unlock.png"));
        m_flightStatus->setIsLock(true);
    }
}

// 打开仪表
void MainWidget::on_tbtn_gauge_clicked()
{
    m_gauge->show();
}

// 打开记事本
void MainWidget::on_tbtn_note_clicked()
{
    m_note = new Note();
    // 关闭窗口时候自动释放
    m_note->setAttribute(Qt::WA_DeleteOnClose);

    m_note->setWindowTitle("记事本");
    m_note->hide();
    m_note->show();
}

// 打开校验计算器
void MainWidget::on_btn_checkcalculator_clicked()
{
    // 没有指定父类，作为工具窗口使用
    m_calculator = new Calculator();
    m_calculator->setWindowTitle("校验计算器");
    // 关闭窗口时候自动释放
    m_calculator->setAttribute(Qt::WA_DeleteOnClose);
    m_calculator->hide();
    m_calculator->show();
}

// 打开基本收发
void MainWidget::on_btn_openSendAndRec_toggled(bool checked)
{
    if (checked)
    {
        ui->tabSendAndRec->show();
        ui->splitter_3->setSizes(QList<int>() << 0 << 1); // 展开
    }
    else
    {
        ui->splitter_3->setSizes(QList<int>() << 1 << 0); // 隐藏
        ui->tabSendAndRec->hide();
    }
}

// 打开更多功能按钮
void MainWidget::on_btn_moreFunction_clicked()
{

}

// 展开右边的协议数据显示
void MainWidget::on_tbtn_expend_toggled(bool checked)
{
    if (checked)
    {
        // ui->splitter_2->setChildrenCollapsible(false);
        ui->splitter_2->setSizes(QList<int>() << 3000 << 500); // 展开
        ui->gridFrame->setVisible(true);
        ui->te_protocolData->show();
    }
    else
    {
        // ui->splitter_2->setChildrenCollapsible(true);
        ui->te_protocolData->hide();
        ui->splitter_2->setSizes(QList<int>() << 1 << 0); // 隐藏
        ui->gridFrame->setVisible(false);
    }
}

// 展开左边的logo和功能信息
void MainWidget::on_tbtn_expend_2_toggled(bool checked)
{

    if (checked)
    {
        ui->splitter_1->setVisible(true);
        ui->splitter_4->setSizes(QList<int>() << 10 << 30000); // 展开
    }
    else
    {
        ui->splitter_4->setSizes(QList<int>() << 0 << 1); // 隐藏
        ui->splitter_1->setVisible(false);
    }
}

// 清空显示串口收发数据
void MainWidget::on_btn_clear_clicked()
{
    ui->te_protocolData->clear();
}

// 开始显示串口收发数据
void MainWidget::on_btn_start_toggled(bool checked)
{
    if (checked)
    {
        showProtocolFlag = true;
        ui->btn_stop->setChecked(false);
        ui->btn_start->setEnabled(false);
        ui->btn_stop->setEnabled(true);
    }
}

// 暂停显示串口收发数据
void MainWidget::on_btn_stop_toggled(bool checked)
{
    if (checked)
    {
        showProtocolFlag = false;
        ui->btn_start->setChecked(false);
        ui->btn_stop->setEnabled(false);
        ui->btn_start->setEnabled(true);
    }
}

// 查看协议
void MainWidget::on_pushButton_8_clicked()
{
    QUrl url = QUrl::fromLocalFile("C:\\Users\\xGgui\\Desktop\\protocol.xlsx");
    QDesktopServices::openUrl(url);
}

// 换肤
void MainWidget::on_tbtn_skin_clicked()
{
    m_skin->show();
}

// 打开设置面板
void MainWidget::on_tbtn_config_clicked()
{
    m_config->show();
}

// 清理缓存
void MainWidget::on_tbtn_clearBuff_clicked()
{
    alSendNum = 0;
    alRecNum = 0;
    errorNum = 0;
}

// 点击标题打开我的github
void MainWidget::on_btn_title_clicked()
{
    QDesktopServices::openUrl(QUrl(QString("https://github.com/xGgui-d/VoidTerminal-DroneGroundStation")));
}

// 窗口置顶按钮
void MainWidget::on_tbtn_tophit_toggled(bool checked)
{
    // 设置窗口置顶，防止闪屏的方法
    if(checked){
        QWindow* pWin = this->windowHandle();
        pWin->setFlags(this->windowFlags()|Qt::WindowStaysOnTopHint);
    }
    else {
        QWindow* pWin = this->windowHandle();
        pWin->setFlags(this->windowFlags()&~Qt::WindowStaysOnTopHint);

    }
}
