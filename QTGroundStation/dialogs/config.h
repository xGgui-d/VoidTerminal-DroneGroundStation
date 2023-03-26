#ifndef CONFIG_H
#define CONFIG_H

#include <QSettings>
#include <QWidget>
#include <qdialog.h>

namespace Ui {
class Config;
}

class Config : public QDialog
{
    Q_OBJECT

public:
    explicit Config(QWidget *parent = nullptr);
    ~Config();

private slots:


private:
    Ui::Config *ui;
    QSettings *m_settings;
};

#endif // CONFIG_H
