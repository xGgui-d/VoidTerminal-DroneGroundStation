#ifndef MYTABPOPUP_H
#define MYTABPOPUP_H

#include <QDialog>

/**
 * @brief 一个容纳tab弹出页的窗口
 */
class MyTabPopup : public QWidget
{
    Q_OBJECT
public:
    explicit MyTabPopup(QWidget *parent = nullptr);

    void setContentWidget(QWidget *page);
    QWidget *getContentWidget();
    void closeEvent(QCloseEvent *e) override;

protected:
    bool event(QEvent *event) override;

signals:
    void dragRelease(const QPoint &globalPos);
    void dragBack();

private:
    QWidget *content = nullptr;
};

#endif // MYTABPOPUP_H
