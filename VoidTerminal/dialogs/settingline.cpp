#include "settingline.h"
#include "ui_settingline.h"
#include "widgets/waveanalysis.h"
SettingLine::SettingLine(QWidget *parent) : QDialog(parent),
                                            ui(new Ui::SetingLine)
{
    ui->setupUi(this);
    // 设置窗口
    this->setWindowModality(Qt::WindowModality::ApplicationModal);
    this->setWindowTitle("设置曲线");
    m_qcolorDialog = new QColorDialog(this);

    // 初始化qComboBox
    for (int i = 0; i < MAX_CURVE_CH; i++)
    {
        m_qComboBox = findChild<QComboBox *>("cb_line_" + QString::number(i + 1));
        for (int j = 0; j < MAX_DATA_CH; j++)
            m_qComboBox->addItem(qwtCH_value[j].dataName);
        m_qComboBox->setCurrentIndex(42);
    }

    // 连接各个颜色按钮
    for (int i = 0; i < MAX_CURVE_CH; i++)
    {
        m_setColorButton = findChild<QToolButton *>("tbtn_line" + QString::number(i + 1));
        // 初始化各个按钮的颜色
        setToolBtnColor(m_setColorButton, Qt::black);

        connect(m_setColorButton, &QPushButton::clicked, this, [=]()
                {
                    curveColor[i] = m_qcolorDialog->getColor();
                    m_setColorButton = findChild<QToolButton *>("tbtn_line" + QString::number(i + 1));
                    setToolBtnColor(m_setColorButton, curveColor[i]);
                });
    }

    // 初始化各个lineEdit，使其只认识数字
    for (int i = 0; i < MAX_CURVE_CH; i++)
    {
        m_lineWidthEdit = findChild<QLineEdit *>("le_line_" + QString::number(i + 1));
        m_lineWidthEdit->setValidator(new QDoubleValidator(0, 10, 1, this));
        m_lineWidthEdit->setText(QString::number(1.5));
    }
}

SettingLine::~SettingLine()
{
    delete ui;
}

// 更新曲线
void SettingLine::updateLine()
{
    // 获取每一个qcombox的内容赋值到全局变量
    for (int i = 0; i < MAX_CURVE_CH; i++)
    {
        m_qComboBox = findChild<QComboBox *>("cb_line_" + QString::number(i + 1));
        m_lineWidthEdit = findChild<QLineEdit *>("le_line_" + QString::number(i + 1));
        m_setColorButton = findChild<QToolButton *>("tbtn_line" + QString::number(i + 1));
        curveWidth[i] = m_lineWidthEdit->text().toDouble();
        // 获取每个qcombox的内容和名字
        valueIndexes[i] = m_qComboBox->currentIndex();
        curveText[i] = m_qComboBox->currentText();
        // 更新各个曲线的图例
        qwtCH_curve[i]->setTitle(curveText[i]);
        // 更改各个曲线颜色和宽度
        qwtCH_curve[i]->setPen(curveColor[i], curveWidth[i]);
        // 更改各个按钮的颜色
        setToolBtnColor(m_setColorButton, curveColor[i]);
        // 发送更改checkbox标签的信号
        emit sig_setText();
    }
}

// 设置工具按钮颜色函数
void SettingLine::setToolBtnColor(QToolButton *tbtn, QColor color)
{
    QPixmap icon(20, 20);
    QPainter painter(&icon);
    painter.fillRect(icon.rect(), color); // 把正方形填充颜色
    painter.end();
    tbtn->setIcon(QIcon(icon)); // 把上面创建的Pixmap对象作为图标添加到button中
    tbtn->setFixedSize(80, 30);
}

// 设置完毕按钮
void SettingLine::on_btn_ok_clicked()
{
    updateLine();
    this->hide();
}

// 恢复默认按钮
void SettingLine::on_btn_default_clicked()
{
    // 各个曲线的默认颜色
    QVector<QColor> qColors = {QColor("#FF0000"), QColor("#00FF00"), QColor("#0000FF"), QColor("#FFFF00"),
                               QColor("#00FFFF"), QColor("#FF00FF"), QColor("#FFA500"), QColor("#800080"),
                               QColor("#A52A2A"), QColor("#9370DB"), QColor("#A9A9A9"), QColor("#00BFFF"),
                               QColor("#006400"), QColor("#8B0000")};
    for (int i = 0; i < MAX_CURVE_CH; i++)
        curveColor[i] = qColors[i];
    // 各个曲线的默认宽度
    for (int i = 0; i < MAX_CURVE_CH; i++)
        curveWidth[i] = 1.5;
    // 各个曲线的默认数据
    for (int i = 0; i < MAX_CURVE_CH; i++)
    {
        m_qComboBox = findChild<QComboBox *>("cb_line_" + QString::number(i + 1));
        m_qComboBox->setCurrentIndex(i);
    }
    updateLine();
}
