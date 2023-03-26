#ifndef WAVEANALYSIS_H
#define WAVEANALYSIS_H

#include <QWidget>
#include <qwt_plot_curve.h>
#include <QCheckBox>
#include <QTimer>
#include "dialogs/settingline.h"
#include "threads/serialthread.h"
//最大数据类型数(有43种类型数据可以显示)
#define MAX_DATA_CH 43

//最大曲线数14(最多显示14条曲线)
#define MAX_CURVE_CH 14

//一个曲线中最大数据点数
#define MAX_DATA_POINT 10000

//每一帧数据的最大值
#define BufferSizeMax 65536*2


//声明曲线数据
typedef struct
{
    QString dataName;
    QVector<double> xData,yData;//x,y轴的数据
    uint64_t cnt;//数据个数，也可以当作下标

}qwtData;
extern qwtData qwtCH_value[MAX_DATA_CH];
//声明曲线对象
extern QwtPlotCurve *qwtCH_curve[MAX_CURVE_CH];
//声明是否开启显示波形的标志
extern bool waveShowFlag;


//声明曲线对象中的qwt_value的下标数组
extern int valueIndexes[MAX_CURVE_CH];
//记录曲线的名字
extern QString curveText[MAX_CURVE_CH];
//记录曲线颜色
extern QColor curveColor[MAX_CURVE_CH];
//记录曲线宽度
extern double curveWidth[MAX_CURVE_CH];


//是否正在绘制图像
extern bool isPainting;


namespace Ui {
class WaveAnalysis;
}

class WaveAnalysis : public QWidget
{
    Q_OBJECT

public:
    explicit WaveAnalysis(QWidget *parent = nullptr);
    QString converRGB16HexStr(QColor _color);
    ~WaveAnalysis();
private slots:
    void slot_lineUpdate();
    void on_btn_settingLine_clicked();
    void slot_updateCheckBox();

    void on_btn_startOrStopShow_clicked();
    void on_btn_exportToExcel_clicked();

    void on_btn_showBrush_toggled(bool checked);

private:
    Ui::WaveAnalysis *ui;
    //更新曲线ui定时器
    QTimer *m_timer;
    QCheckBox* m_checkBox;
    //设置曲线配置的窗口(Dialog)
    SettingLine* m_settingLine;
};

#endif // WAVEANALYSIS_H
