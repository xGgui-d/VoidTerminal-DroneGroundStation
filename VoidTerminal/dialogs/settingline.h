#ifndef SETINGLINE_H
#define SETINGLINE_H

#include <QDialog>
#include <QComboBox>
#include <QColorDialog>
#include <QLineEdit>
namespace Ui
{
    class SetingLine;
}

class SettingLine : public QDialog
{
    Q_OBJECT

public:
    explicit SettingLine(QWidget *parent = nullptr);
    ~SettingLine();

private:
    void updateLine();
    void setToolBtnColor(QToolButton *tbtn, QColor color);
signals:
    // 提醒checkbox更改标签
    void sig_setText();
private slots:
    void on_btn_ok_clicked();
    void on_btn_default_clicked();

private:
    Ui::SetingLine *ui;
    QComboBox *m_qComboBox;
    QToolButton *m_setColorButton;
    QLineEdit *m_lineWidthEdit;
    QColorDialog *m_qcolorDialog;
};

#endif // SETINGLINE_H
