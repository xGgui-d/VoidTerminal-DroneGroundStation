#ifndef DATACALIBRATION_H
#define DATACALIBRATION_H

#include <QWidget>

// 使能按钮
extern bool enableBtn_CAL;
// 等待延迟
extern int delay_CAL;

namespace Ui
{
    class DataCalibration;
}

class DataCalibration : public QWidget
{
    Q_OBJECT

public:
    explicit DataCalibration(QWidget *parent = nullptr);
    ~DataCalibration();
signals:
    void sig_cal_acc();
    void sig_cal_gyro();
    void sig_cal_baro();
    void sig_cal_mag();
    void sig_cal_alt();
    void sig_cal_inertia();

    void sig_cal_face01();
    void sig_cal_face02();
    void sig_cal_face03();
    void sig_cal_face04();
    void sig_cal_face05();
    void sig_cal_face06();
    void sig_cal_faceExit();

    void sig_read_flowSet();
    void sig_read_digitSet();
    void sig_read_positionSet();
    void sig_read_version();
public slots:
    void slot_handleCalibrationInfo(QString str, int color);
private slots:
    void on_tbtn_acc_clicked();
    void on_tbtn_gyro_clicked();
    void on_tbtn_baro_clicked();
    void on_tbtn_mag_clicked();
    void on_tbtn_alt_clicked();
    void on_tbtn_inertia_clicked();

    void on_tbtn_face01_clicked();
    void on_tbtn_face02_clicked();
    void on_tbtn_face03_clicked();
    void on_tbtn_face04_clicked();
    void on_tbtn_face05_clicked();
    void on_tbtn_face06_clicked();
    void on_tbtn_faceExit_clicked();

    void on_tbtn_readFlowSet_clicked();
    void on_tbtn_readDigitSet_clicked();
    void on_tbtn_readPositionSet_clicked();
    void on_tbtn_readVersionSet_clicked();

    void on_tbtn_clear_clicked();

    void on_sb_delay_editingFinished();

private:
    Ui::DataCalibration *ui;
};

#endif // DATACALIBRATION_H
