#ifndef SKIN_H
#define SKIN_H

#include <QDialog>
#include <qradiobutton.h>

namespace Ui
{
    class Skin;
}

class Skin : public QDialog
{
    Q_OBJECT

public:
    explicit Skin(QWidget *parent = nullptr);
    ~Skin();
signals:
    void sig_changeSkin(int index);
private slots:
    void on_btn_ok_clicked();
    void on_btn_cancel_clicked();

private:
    Ui::Skin *ui;
    QRadioButton *m_rbtn;
};

#endif // SKIN_H
