#include "sendandreceive.h"
#include "ui_sendandreceive.h"

#include <QSpinBox>
#include <qdatetime.h>
#include <qmessagebox.h>
#include <qserialportinfo.h>

//存储各个串口配置的全局变量
MultiSerialConfig multiSerialConfigs[MAX_PORT];
//使用静态类成员来初始化各个对象的id
int SendAndReceive::ID=0;

SendAndReceive::SendAndReceive(QWidget *parent) :
    MyTabPage(parent),
    ui(new Ui::SendAndReceive)
{
    ui->setupUi(this);

    br=0;
    //初始化对象id
    m_id=ID++;

    //初始化radiobutton
    ui->rbtn_rec_ASCII->setChecked(true);
    ui->rbtn_send_ASCII->setChecked(true);

    //初始化spinbox
    ui->sb_timeSet->setMinimum(1);
    ui->sb_timeSet->setMaximum(100000);
    ui->sb_timeSet->setValue(1000);
    ui->sb_timeSet->setSingleStep(100);

    //初始化checkbox
    ui->cb_autoWrap->setChecked(true);
    ui->cb_showTime->setChecked(true);
    ui->cb_sendTimed->setChecked(false);

    //初始化qcomebox
    ui->cb_encode->addItem("GBK");
    ui->cb_encode->addItem("UTF-8");

    //连接串口配置combobox
    connect(ui->cb_portName,SIGNAL(activated(int)),this,SLOT(slot_serialConfigUpdate(int)));
    connect(ui->cb_portBaud,SIGNAL(activated(int)),this,SLOT(slot_serialConfigUpdate(int)));
    connect(ui->cb_dataBit,SIGNAL(activated(int)),this,SLOT(slot_serialConfigUpdate(int)));
    connect(ui->cb_checkBit,SIGNAL(activated(int)),this,SLOT(slot_serialConfigUpdate(int)));
    connect(ui->cb_stopBit,SIGNAL(activated(int)),this,SLOT(slot_serialConfigUpdate(int)));
    //设置波特率可编辑
    ui->cb_portBaud->setEditable(true);
    //输入框背景
    ui->cb_portBaud->setStyleSheet("background-color: #394867;");

    //获取可用串口列表
    QList<QSerialPortInfo> comList = QSerialPortInfo::availablePorts();
    //若没有可用串口，则发送警告
    if(comList.isEmpty())
    {
        //QMessageBox::warning(this,"串口异常警告","电脑没有可用串口设备, 请检查硬件连接！！！");
    }
    else//将可用串口的名字添加到comboBox上以供选择
    {
        for(int i = 0; i < comList.size(); i ++)
        {
            ui->cb_portName->addItem(comList[i].portName()+"|"+comList[i].description());//添加按钮
        }
    }
    //添加可选其他选项到combobox
    QStringList baudRateList = QStringList() << "1200" << "2400" << "4800"
                                             << "9600" << "14400" << "19200" << "38400" << "43000" << "57600"
                                             << "76800" << "115200" << "128000" << "230400" << "256000" <<"460800"
                                             <<"500000"<< "921600" << "1382400";
    QStringList parityList = QStringList() << "无" << "奇校验" << "偶校验";
    QStringList stopBitsList = QStringList() << "1" << "1.5" << "2";
    QStringList dataNumList = QStringList() << "8" << "7" << "6" << "5";
    ui->cb_portBaud->addItems(baudRateList);
    ui->cb_checkBit->addItems(parityList);
    ui->cb_stopBit->addItems(stopBitsList);
    ui->cb_dataBit->addItems(dataNumList);
    ui->cb_portBaud->setCurrentIndex(10);//设置115200为默认选项  10
    slot_serialConfigUpdate(1);

    //设置最大保留1000行文本
    ui->te_rec->document()->setMaximumBlockCount(1000);
}

SendAndReceive::~SendAndReceive()
{
    delete ui;
}


//处理串口中的已读信号
void SendAndReceive::slot_handleAlreadyRead(int id,QByteArray buff)
{
    //先检查所发的信号是否与本对象id相同
    if(id!=this->m_id) return;
    QString str;
    QString dateStr;
    //如果采用HEX接收
    if(ui->rbtn_rec_HEX->isChecked())
    {
        QString temp = buff.toHex().toUpper();
        for(int i =0;i<temp.length();i+=2)
        {
            str += temp.mid(i,2);
            str +=" ";
        }

    }else//采用ASCII接收(utf-8或者gbk都行)
        str=getCorrectUnicode(buff);

    if(ui->cb_showTime->isChecked())
    {
        // 获取当前日期
        QDateTime currentDateTime = QDateTime::currentDateTime();
        QString currentDateStr = currentDateTime.toString("[MM.dd hh:mm:ss.zzz] ");
        dateStr = "<font color=\"#14274E\">" + currentDateStr + "</font>"+"<font color=\"#F1F6F9\">" + str + "</font>";
    }
    //是否需要换行显示
    if(ui->cb_autoWrap->isChecked()&&ui->cb_showTime->isChecked())
    {
        ui->te_rec->append(dateStr);
    }else if(ui->cb_autoWrap->isChecked())
    {
        ui->te_rec->append(str);
    }else
    {
        ui->te_rec->insertPlainText(str);
        br++;
        if(br==100)
        {
            ui->te_rec->insertPlainText("\n");
            br=0;
        }
    }
}

//打开串口按钮
void SendAndReceive::on_btn_openSport_clicked()
{
    //如果已经打开
    if(m_isOpen)
    {
        emit sig_closeSerialPort(m_id);
        ui->btn_openSport->setText("打开串口");
        ui->btn_flash->setEnabled(true);
        ui->cb_portName->setEnabled(true);
        ui->cb_portBaud->setEnabled(true);
        ui->cb_checkBit->setEnabled(true);
        ui->cb_dataBit->setEnabled(true);
        ui->cb_stopBit->setEnabled(true);

        m_isOpen=false;
    }else emit sig_openSerialPort(m_id);
}
void SendAndReceive::slot_updateOpenBtn(bool flag,int id)
{
    if(id!=this->m_id)
        return;
    if(flag)
    {
        ui->btn_openSport->setText("关闭串口");
        ui->btn_flash->setEnabled(false);
        ui->cb_portName->setEnabled(false);
        ui->cb_portBaud->setEnabled(false);
        ui->cb_checkBit->setEnabled(false);
        ui->cb_dataBit->setEnabled(false);
        ui->cb_stopBit->setEnabled(false);

        m_isOpen=true;
    }else QMessageBox::warning(this,"串口异常警告","电脑没有可用串口设备, 请检查硬件连接！！！");
}



//将串口配置数据更新到全局变量
void SendAndReceive::slot_serialConfigUpdate(int)
{
    multiSerialConfigs[this->m_id].serialPortNum = ui->cb_portName->currentText().split('|').value(0);//获取串口号;
    multiSerialConfigs[this->m_id].serialPortBaud = ui->cb_portBaud->currentText().toInt();//文本转整型;
    multiSerialConfigs[this->m_id].serialPortCheckBit = ui->cb_checkBit->currentIndex();//校验形式(下标);
    multiSerialConfigs[this->m_id].serialPortDataBit = ui->cb_dataBit->currentIndex();//数据位数(下标);
    multiSerialConfigs[this->m_id].serialPortStopBit = ui->cb_stopBit->currentIndex();//停止位数(下标);
    multiSerialConfigs[this->m_id].serialPortDescription = ui->cb_portName->currentText().split('|').value(1);//获取设备名称
}


//点击按钮发送框内信息
void SendAndReceive::on_btn_send_clicked()
{
    QByteArray buff;
    //如果采用HEX发送
    if(ui->rbtn_send_HEX->isChecked())
    {
        buff=QByteArray::fromHex(ui->te_send->toPlainText().toUtf8());

    }else{

        switch(ui->cb_encode->currentIndex())
        {
        case 0:
            //采用ASCII发送(GBK编码)
            buff=ui->te_send->toPlainText().toLocal8Bit();
            break;
        case 1:
            //采用ASCII发送(utf-8编码)
            buff=ui->te_send->toPlainText().toUtf8();
            break;
        default:
            buff=ui->te_send->toPlainText().toLocal8Bit();
            break;
        }
    }
    //将发送信息存储到历史发送
    if(ui->cb_historySend->findText(ui->te_send->toPlainText()) == -1) // 针对addItem方法可避免重复添加
        ui->cb_historySend->addItem(ui->te_send->toPlainText());
    //发送已发信号
    emit sig_alreadySend(m_id,buff);
}
//历史发送
void SendAndReceive::on_cb_historySend_activated(const QString &arg1)
{
    ui->te_send->append(arg1);
}

//发送的编码选择
void SendAndReceive::on_rbtn_rec_ASCII_clicked()
{
    ui->rbtn_rec_ASCII->setChecked(true);
}

void SendAndReceive::on_rbtn_rec_HEX_clicked()
{
    ui->rbtn_rec_HEX->setChecked(true);
}

void SendAndReceive::on_rbtn_send_ASCII_clicked()
{
    ui->rbtn_send_ASCII->setChecked(true);
}

void SendAndReceive::on_rbtn_send_HEX_clicked()
{
    ui->rbtn_send_HEX->setChecked(true);
}

//定时发送
void SendAndReceive::on_cb_sendTimed_stateChanged(int)
{
    if(ui->cb_sendTimed->isChecked())
    {
        m_timer = new QTimer(this);
        connect(m_timer, SIGNAL(timeout()), this, SLOT(on_btn_send_clicked()));
        QString period=ui->sb_timeSet->text();
        int period_cnt=period.toInt();
        m_timer->start(period_cnt);
    }
    else
    {
        m_timer->stop();
        delete m_timer;
    }
}
//点击按钮清空消息
void SendAndReceive::on_btn_clear_clicked()
{
    ui->te_rec->clear();
}
//刷新串口
void SendAndReceive::on_btn_flash_clicked()
{
    //清空列表
    ui->cb_portName->clear();
    //获取可用串口列表
    QList<QSerialPortInfo> comList = QSerialPortInfo::availablePorts();
    //若没有可用串口，则发送警告
    if(comList.isEmpty())
    {
        QMessageBox::warning(this,"串口异常警告","电脑没有可用串口设备, 请检查硬件连接！！！");
    }
    else//将可用串口的名字添加到comboBox上以供选择
    {
        for(int i = 0; i < comList.size(); i ++)
        {
            ui->cb_portName->addItem(comList[i].portName()+"|"+comList[i].description());//添加信息进combox
        }
    }
    slot_serialConfigUpdate(1);
}

//滚动条跟随
void SendAndReceive::on_btn_followRoll_clicked()
{
    ui->te_rec->moveCursor(QTextCursor::End);
}


//QByteArray转gbk或者utf-8
QString SendAndReceive::getCorrectUnicode(const QByteArray &ba)
{
    QTextCodec::ConverterState state;
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QString text = codec->toUnicode(ba.constData(), ba.size(), &state);
    if (state.invalidChars > 0)
    {
        text = QTextCodec::codecForName("GBK")->toUnicode(ba);
    }
    else
    {
        text = ba;
    }
    return text;
}
