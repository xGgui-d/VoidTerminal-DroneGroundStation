#ifndef FLIGHTSTATUS_H
#define FLIGHTSTATUS_H

#include <QWidget>
#include <QFile>
#include <QDebug>
#include <QTableWidget>
#include "headparameter.h"
namespace Ui
{
    class FlightStatus;
}

class FlightStatus : public QWidget
{
    Q_OBJECT

public:
    explicit FlightStatus(QWidget *parent = nullptr);
    ~FlightStatus();
    bool getIsLock();
    void setIsLock(bool flag);

signals:
    void sig_updateRotationX(int value);
    void sig_updateRotationY(int value);
    void sig_updateRotationZ(int value);
public slots:
    void slot_changeSkin(int index);
private slots:
    // 更新显示组件
    void slot_unitUpdate();

private:
    Ui::FlightStatus *ui;
    QTimer *m_timer;
    bool m_isLock;
};

#endif // FLIGHTSTATUS_H
