#ifndef MAINWINDOW_ETD8A12_H
#define MAINWINDOW_ETD8A12_H

#include "qcheckbox.h"
#include "qlabel.h"
#include <QMainWindow>
#include <QModbusDataUnit>

QT_BEGIN_NAMESPACE
class QModbusClient;
namespace Ui { class MainWindow_ETD8A12; }
QT_END_NAMESPACE

class MainWindow_ETD8A12 : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow_ETD8A12(QWidget *parent = nullptr);
    ~MainWindow_ETD8A12();

private:
    void modBusWriteRegister(int nStartAddr, int nValue, int numberOfEntries=1);
    void readModbus(QModbusDataUnit::RegisterType reqType, int nStartAddr, int numberOfEntries);
    void setChannelInfo(int nStartAddr, bool fOn);
    void setInputInfo(int nStartAddr, bool fOn);
private slots:
    // modbus
    void onModbusStateChanged(int state);
    void onModbusReadReady();

    // checkboxs
    void on_checkBoxCh1_clicked(bool checked);
    void on_checkBoxCh2_clicked(bool checked);
    void on_checkBoxCh3_clicked(bool checked);
    void on_checkBoxCh4_clicked(bool checked);
    void on_checkBoxCh5_clicked(bool checked);
    void on_checkBoxCh6_clicked(bool checked);
    void on_checkBoxCh7_clicked(bool checked);
    void on_checkBoxCh8_clicked(bool checked);
    void on_checkBoxCh9_clicked(bool checked);
    void on_checkBoxCh10_clicked(bool checked);
    void on_checkBoxCh11_clicked(bool checked);
    void on_checkBoxCh12_clicked(bool checked);

    void on_pushButtonOpen_clicked();
    void on_pushButtonReadOutput_clicked();
//    void on_pushButtonReadInput_clicked();

private:
    Ui::MainWindow_ETD8A12 *ui;
    QModbusClient *modbusDevice = nullptr;
    QLabel* pLabelCh[12];
//    QLabel* pInputCh[12];
    QCheckBox* pCheckBox[12];

};
#endif // MAINWINDOW_ETD8A12_H
