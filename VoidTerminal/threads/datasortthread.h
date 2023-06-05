#ifndef THREADSDATASORTTHREAD_H
#define THREADSDATASORTTHREAD_H

#include <QObject>
#include "headparameter.h"

class DataSortThread : public QObject
{
    Q_OBJECT
public:
    explicit DataSortThread(QObject *parent = nullptr);

    void slot_dataSort(uint8_t *rxBuffer);

private:
    void putDataToWave();
signals:
    // 发送更新pid的spinbox信号
    void sig_updateSpinBoxPID();
};

#endif // THREADSDATASORTTHREAD_H
