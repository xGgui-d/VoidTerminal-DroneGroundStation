#ifndef GAUGE_H
#define GAUGE_H

#include <QWidget>
#include <QIcon>
namespace Ui
{
    class Gauge;
}

class Gauge : public QWidget
{
    Q_OBJECT

public:
    explicit Gauge(QWidget *parent = nullptr);
    ~Gauge();
private slots:
    void slot_unitUpdate();

private:
    Ui::Gauge *ui;
    QTimer *m_timer;
};

#endif // GAUGE_H
