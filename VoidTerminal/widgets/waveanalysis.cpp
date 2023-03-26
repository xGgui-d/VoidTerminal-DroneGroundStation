#include "waveanalysis.h"
#include "ui_waveanalysis.h"
#include <QFileDialog>
#include <QSignalMapper>
#include <QStandardItemModel>
#include <qwt_legend.h>
#include <qwt_plot_magnifier.h>
#include <qwt_plot_panner.h>
#include "headparameter.h"
#include <QCheckBox>
#include <QtQwt/qwt_picker_machine.h>
#include <QtQwt/qwt_plot_grid.h>
#include <QtQwt/qwt_plot_picker.h>
#include <QtQwt/qwt_plot_zoomer.h>
#include <QtXlsx/xlsx/xlsxdocument.h>

//定义显示n条类型的通道数据
qwtData qwtCH_value[MAX_DATA_CH]={};
//定义是否显示波形的标志
bool waveShowFlag=false;


//定义n个曲线对象
QwtPlotCurve *qwtCH_curve[MAX_CURVE_CH];
//定义曲线对象中的qwt_value的下标数组
int valueIndexes[MAX_CURVE_CH];
QString curveText[MAX_CURVE_CH];
QColor curveColor[MAX_CURVE_CH];
double curveWidth[MAX_CURVE_CH];
//是否正在绘制图像
bool isPainting = false;

WaveAnalysis::WaveAnalysis(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WaveAnalysis)
{
    ui->setupUi(this);

    //初始化波形对象
    for(int i=0;i<MAX_CURVE_CH;i++)
        qwtCH_curve[i]  = new QwtPlotCurve("Line");

    //先给容器初始化大小
    for (uint16_t i=0;i<MAX_DATA_CH;i++)
    {
        qwtCH_value[i].xData.resize(MAX_DATA_POINT);
        qwtCH_value[i].yData.resize(MAX_DATA_POINT);
        qwtCH_value[i].xData.resize(0);
        qwtCH_value[i].yData.resize(0);
        qwtCH_value[i].cnt=0;
    }
    //初始化容器名字
    qwtCH_value[0].dataName="ACC_X";
    qwtCH_value[1].dataName="ACC_Y";
    qwtCH_value[2].dataName="ACC_Z";
    qwtCH_value[3].dataName="GYR_X";
    qwtCH_value[4].dataName="GYR_Y";
    qwtCH_value[5].dataName="GYR_Z";
    qwtCH_value[6].dataName="MAG_X";
    qwtCH_value[7].dataName="MAG_Y";
    qwtCH_value[8].dataName="MAG_Z";
    qwtCH_value[9].dataName="PIT";
    qwtCH_value[10].dataName="YAW";
    qwtCH_value[11].dataName="ROL";
    qwtCH_value[12].dataName="ALT_BAR";
    qwtCH_value[13].dataName="ALT_CSB";
    qwtCH_value[14].dataName="PWM1";
    qwtCH_value[15].dataName="PWM2";
    qwtCH_value[16].dataName="PWM3";
    qwtCH_value[17].dataName="PWM4";
    qwtCH_value[18].dataName="CH_THR";
    qwtCH_value[19].dataName="CH_YAW";
    qwtCH_value[20].dataName="CH_ROL";
    qwtCH_value[21].dataName="CH_PIT";
    qwtCH_value[22].dataName="CH_AUX1";
    qwtCH_value[23].dataName="CH_AUX2";
    qwtCH_value[24].dataName="CH_AUX3";
    qwtCH_value[25].dataName="CH_AUX4";
    qwtCH_value[26].dataName="DIST_FL";
    qwtCH_value[27].dataName="DIST_FR";
    qwtCH_value[28].dataName="DIST_BL";
    qwtCH_value[29].dataName="DIST_BR";
    qwtCH_value[30].dataName="LOC_X";
    qwtCH_value[31].dataName="LOC_Y";
    qwtCH_value[32].dataName="LOC_Z";
    qwtCH_value[33].dataName="OF_QUA";
    qwtCH_value[34].dataName="OF_LIGHT";
    qwtCH_value[35].dataName="OF_DX";
    qwtCH_value[36].dataName="OF_DY";
    qwtCH_value[37].dataName="OF_DX2";
    qwtCH_value[38].dataName="OF_DY2";
    qwtCH_value[39].dataName="OF_DX2FIX";
    qwtCH_value[40].dataName="OF_DY2FIX";
    qwtCH_value[41].dataName="OF_ALT";
    qwtCH_value[42].dataName="DATA";



    //初始化设置界面
    m_settingLine = new SettingLine(this);

    //连接checkBox
    for(int i=0;i<MAX_CURVE_CH;i++)
    {
        m_checkBox = findChild<QCheckBox*>("cb_DATA_"+QString::number(i+1));
        m_checkBox->setCheckState(Qt::CheckState::Checked);
        m_checkBox->setText("DATA");
        connect(m_checkBox,static_cast<void(QCheckBox::*)(int)>(&QCheckBox::stateChanged),this,[=](int state){
            //设置是否可见
            qwtCH_curve[i]->setVisible(state);
        });
    }
    //连接设置完毕按钮与更新checkbox信号
    connect(m_settingLine,&SettingLine::sig_setText,this,&WaveAnalysis::slot_updateCheckBox);

    //设置曲线图的样式
    ui->qwtPlot->setAxisTitle(QwtPlot::xBottom,"时间");
    ui->qwtPlot->setAxisTitle(QwtPlot::yLeft,"各项数据的值");
    ui->qwtPlot->insertLegend(nullptr, QwtPlot::RightLegend);

    //使用滚轮放大/缩小
    (void) new QwtPlotMagnifier( ui->qwtPlot->canvas() );
    //使用鼠标左键平移
    (void) new QwtPlotPanner( ui->qwtPlot->canvas() );
    //设置标题
    ui->qwtPlot->setTitle("各项数据随时间变化曲线");
    //设置示波器背景网格
    QwtPlotGrid *grid = new QwtPlotGrid();
    grid->setMajorPen(QPen(Qt::gray,0,Qt::DotLine));
    grid->attach(ui->qwtPlot);

    //一个选择器，十字线，以xBottom和yLeft坐标
    QwtPlotPicker *picker= new QwtPlotPicker(QwtPlot::xBottom,
                                             QwtPlot::yLeft,
                                             QwtPlotPicker::CrossRubberBand,
                                             QwtPicker::AlwaysOn,
                                             ui->qwtPlot->canvas());
    picker->setStateMachine(new QwtPickerDragPointMachine());//拖拽点起作用
    picker->setRubberBandPen(QPen(QColor(Qt::blue)));
    picker->setTrackerMode( QwtPicker::AlwaysOn );         //跟踪模式
    picker->setTrackerPen(QColor(Qt::red));                //跟踪显示字体颜色

    QwtPlotPanner *panner=new QwtPlotPanner(ui->qwtPlot->canvas());
    panner->setMouseButton(Qt::MidButton);//鼠标中键按下平移拖动

    QwtPlotMagnifier *magnifier = new QwtPlotMagnifier(ui->qwtPlot->canvas());//默认的滑轮及右键缩放功能  图形的整体缩放
    magnifier->setMouseButton(Qt::NoButton);//设置无按钮缩放，只有滑轮为缩放画布

    QwtPlotZoomer *zoomer = new QwtPlotZoomer(ui->qwtPlot->canvas());                            //选择图形局部放大
    zoomer->setRubberBandPen(QColor( Qt::blue ) );//勾选扩大区域边界颜色
    zoomer->setMousePattern(QwtEventPattern::MouseSelect1, Qt::LeftButton, Qt::ControlModifier);//crtl+左键 放大	 右键恢复原样
    zoomer->setMousePattern(QwtEventPattern::MouseSelect2, Qt::RightButton,Qt::AltModifier);    //ctrl+右键==回复到原始状态
    zoomer->setMousePattern(QwtEventPattern::MouseSelect3, Qt::LeftButton,Qt::AltModifier);     //右键==恢复到上一次扩大之前的状态
    ui->qwtPlot->setAutoReplot(true);

    //定时器实时刷新曲线数据
    m_timer = new QTimer(this);
    connect(m_timer,&QTimer::timeout,this,&WaveAnalysis::slot_lineUpdate);
    m_timer->start(5);//5ms刷新一次




}

WaveAnalysis::~WaveAnalysis()
{
    delete ui;
    delete m_settingLine;
}

void WaveAnalysis::slot_lineUpdate()
{

    if(isAppending)
        return;
    isPainting=true;

    for(uint16_t i=0;i<MAX_DATA_CH;i++)
    {
        //判断点数是否溢出
        if(qwtCH_value[i].cnt>=MAX_DATA_POINT-1)
        {
            //数据点溢出，重置容器
            qwtCH_value[i].xData.resize(0);
            qwtCH_value[i].yData.resize(0);
            qwtCH_value[i].cnt=0;
        }
    }

    for(uint16_t i=0;i<MAX_CURVE_CH;i++)
    {
        qwtCH_curve[i]->setSamples(qwtCH_value[valueIndexes[i]].xData,qwtCH_value[valueIndexes[i]].yData);//更新每个通道数据
        qwtCH_curve[i]->attach(ui->qwtPlot);//将通道数据写入qwtPlot

    }
    ui->qwtPlot->replot();//更新曲线组件
    isPainting=false;
}

//打开设置曲线dialog
void WaveAnalysis::on_btn_settingLine_clicked()
{
    m_settingLine->show();
}

//经过settingline的设置只后更新chekbox
void WaveAnalysis::slot_updateCheckBox()
{
    for(int i=0;i<MAX_CURVE_CH;i++)
    {
        m_checkBox = findChild<QCheckBox*>("cb_DATA_"+QString::number(i+1));
        m_checkBox->setText(curveText[i]);
        QString colorStr = converRGB16HexStr(curveColor[i]);
        m_checkBox->setStyleSheet("QCheckBox {background-color:#394867;\
                                  color: white;\
                font: 10pt \"微软雅黑\";}\
            QCheckBox::indicator::checked {\
                background-color:"+colorStr+";}");
}
}

void WaveAnalysis::on_btn_startOrStopShow_clicked()
{
    if(waveShowFlag)
    {
        waveShowFlag=false;
        ui->btn_startOrStopShow->setText("开启显示");
    }else
    {
        waveShowFlag=true;
        ui->btn_startOrStopShow->setText("暂停显示");
    }
}

//QColor转HEX_rgb
QString WaveAnalysis::converRGB16HexStr(QColor _color)
{
    //r的rgb转化为16进制
    QString redStr = QString("%1").arg(_color.red(),2,16,QChar('0'));
    //g的rgb转化为16进制
    QString greenStr = QString("%1").arg(_color.green(),2,16,QChar('0'));
    //b的rgb转化为16进制
    QString blueStr = QString("%1").arg(_color.blue(),2,16,QChar('0'));
    //将各rgb的拼接在一起形成#000000
    QString hexStr = "#"+redStr+greenStr+blueStr;
    //返回hexStr
    return hexStr;
}

//导出数据到excel
void WaveAnalysis::on_btn_exportToExcel_clicked()
{
    QXlsx::Document xlsx;

    //设置横向表头 第一行
    for(int i=0;i<MAX_DATA_CH;i++)
        xlsx.write(1,i+1,qwtCH_value[i].dataName);
    //存放数据
    for(int i=0;i<MAX_DATA_CH;i++)
    {
        //每一类数据是一列
        for(uint64_t j=0;j<qwtCH_value[i].cnt;j++)
        {
            xlsx.write(j+2,i+1,qwtCH_value[i].yData.at(j));
            //qDebug()<<qwtCH_value[i].yData.at(j)<<endl;
            // qDebug()<<qwtCH_value[i].cnt<<endl;
        }
    }

    QString path = QFileDialog::getSaveFileName(this, "保存为", QDir::currentPath(), tr("Excel文件 (*.xlsx)"));
    QFile file(path);
    file.open(QIODevice::WriteOnly);
    xlsx.saveAs(&file);
    file.close();
    //qDebug()<<"path"<<path<<endl;
}

//显示填充
void WaveAnalysis::on_btn_showBrush_toggled(bool checked)
{
    if(checked)
        for(int i=0;i<MAX_CURVE_CH;i++)
            //更改曲线的填充色
            qwtCH_curve[i]->setBrush(QBrush(curveColor[i]));
    else
        for(int i=0;i<MAX_CURVE_CH;i++)
            //更改曲线的填充色
            qwtCH_curve[i]->setBrush(QBrush(QColor(0,0,0,0)));
}
