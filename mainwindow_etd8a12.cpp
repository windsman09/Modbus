#include "mainwindow_etd8a12.h"
#include "ui_mainwindow_etd8a12.h"
#include <QGridLayout>
//#include "switchbutton.h"
#include <QModbusTcpClient>

#define ETD8A12_OUTPUT_ON  0x100
#define ETD8A12_OUTPUT_OFF 0x200

MainWindow_ETD8A12::MainWindow_ETD8A12(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow_ETD8A12)
{
    ui->setupUi(this);
//    QGridLayout* layout = new QGridLayout();
//    QLabel* labelCh1 = new QLabel("Channel 1");
//    SwitchButton* switchCh1 = new SwitchButton(QColor(255, 20, 20));
//    layout->addWidget(labelCh1, 0, 0);
//    layout->addWidget(switchCh1, 0, 1);

//    ui->groupBoxDeviceOutputControl->setLayout(layout);

    pLabelCh[0] = ui->labelCh1;
    pLabelCh[1] = ui->labelCh2;
    pLabelCh[2] = ui->labelCh3;
    pLabelCh[3] = ui->labelCh4;
    pLabelCh[4] = ui->labelCh5;
    pLabelCh[5] = ui->labelCh6;
    pLabelCh[6] = ui->labelCh7;
    pLabelCh[7] = ui->labelCh8;
    pLabelCh[8] = ui->labelCh9;
    pLabelCh[9] = ui->labelCh10;
    pLabelCh[10] = ui->labelCh11;
    pLabelCh[11] = ui->labelCh12;

    pCheckBox[0] = ui->checkBoxCh1;
    pCheckBox[1] = ui->checkBoxCh2;
    pCheckBox[2] = ui->checkBoxCh3;
    pCheckBox[3] = ui->checkBoxCh4;
    pCheckBox[4] = ui->checkBoxCh5;
    pCheckBox[5] = ui->checkBoxCh6;
    pCheckBox[6] = ui->checkBoxCh7;
    pCheckBox[7] = ui->checkBoxCh8;
    pCheckBox[8] = ui->checkBoxCh9;
    pCheckBox[9] = ui->checkBoxCh10;
    pCheckBox[10] = ui->checkBoxCh11;
    pCheckBox[11] = ui->checkBoxCh12;

    ui->groupBoxDeviceOutputControl->setEnabled(false);
    ui->groupBoxInputStatus->hide();
    adjustSize();
    modbusDevice = new QModbusTcpClient(this);
    const QUrl currentUrl = QUrl::fromUserInput(ui->lineEditIPAddress->text());
    // Check if we already have <ip address>:<port>
    if (currentUrl.port() <= 0)
        ui->lineEditIPAddress->setText(QLatin1String("10.21.240.2:5000"));

    connect(modbusDevice, &QModbusClient::errorOccurred, [this](QModbusDevice::Error) {
        statusBar()->showMessage(modbusDevice->errorString(), 5000);
    });

    if (!modbusDevice) {
        ui->pushButtonOpen->setDisabled(true);
        statusBar()->showMessage(tr("Could not create Modbus client."), 5000);
    } else {
        connect(modbusDevice, &QModbusClient::stateChanged,
                this, &MainWindow_ETD8A12::onModbusStateChanged);
    }

}

void MainWindow_ETD8A12::onModbusStateChanged(int state)
{
    const char arModbusState[4][20] = {
         "UnconnectedState",
         "ConnectingState",
         "ConnectedState",
         "ClosingState"
    };
    qDebug("Modbus state: %d: %s", state, arModbusState[state]);
    if (state==QModbusDevice::ConnectedState)
    {
        ui->pushButtonOpen->setText("Disconnect");
        ui->groupBoxDeviceOutputControl->setEnabled(true);
        statusBar()->showMessage("Device connected");
        readModbus(QModbusDataUnit::HoldingRegisters, 0, 12);
//        readModbus(QModbusDataUnit::InputRegisters, 0, 12);
    }

    if (state==QModbusDevice::UnconnectedState)
    {
        ui->pushButtonOpen->setText("Connect");
        ui->groupBoxDeviceOutputControl->setEnabled(false);
        statusBar()->showMessage("Device disconnected");
    }
}

void MainWindow_ETD8A12::onModbusReadReady()
{
    auto reply = qobject_cast<QModbusReply *>(sender());
    if (!reply)
        return;

    if (reply->error() == QModbusDevice::NoError) {
        const QModbusDataUnit unit = reply->result();
        for (qsizetype i = 0, total = unit.valueCount(); i < total; ++i) {
            const QString entry = tr("Address: %1, Value: %2").arg(unit.startAddress() + i)
                                      .arg(QString::number(unit.value(i),
                                                           unit.registerType() <= QModbusDataUnit::Coils ? 10 : 16));
//            qDebug() << entry;
            if (unit.registerType()==QModbusDataUnit::HoldingRegisters)
            {
                setChannelInfo(unit.startAddress() + i, unit.value(i));
                pCheckBox[unit.startAddress() + i]->setChecked(unit.value(i));
            }
//            else
//            if (unit.registerType()==QModbusDataUnit::InputRegisters)
//            {
//                setInputInfo(unit.startAddress() + i, unit.value(i));
//            }
        }
    } else if (reply->error() == QModbusDevice::ProtocolError) {
        statusBar()->showMessage(tr("Read response error: %1 (Modbus exception: 0x%2)").
                                 arg(reply->errorString()).
                                 arg(reply->rawResult().exceptionCode(), -1, 16), 5000);
    } else {
        statusBar()->showMessage(tr("Read response error: %1 (code: 0x%2)").
                                 arg(reply->errorString()).
                                 arg(reply->error(), -1, 16), 5000);
    }

    reply->deleteLater();
}

void MainWindow_ETD8A12::on_pushButtonOpen_clicked()
{
    if (!modbusDevice)
        return;

    statusBar()->clearMessage();
    if (modbusDevice->state() != QModbusDevice::ConnectedState) {
        const QUrl url = QUrl::fromUserInput(ui->lineEditIPAddress->text());
        modbusDevice->setConnectionParameter(QModbusDevice::NetworkPortParameter, url.port());
        modbusDevice->setConnectionParameter(QModbusDevice::NetworkAddressParameter, url.host());
        modbusDevice->setTimeout(1000);
        modbusDevice->setNumberOfRetries(3);

        if (!modbusDevice->connectDevice())
            statusBar()->showMessage(tr("Connect failed: %1").arg(modbusDevice->errorString()), 5000);
    }
    else
    {
        modbusDevice->disconnectDevice();
        ui->pushButtonOpen->setText("Connect");
    }
}

MainWindow_ETD8A12::~MainWindow_ETD8A12()
{
    if (modbusDevice)
        modbusDevice->disconnectDevice();
    delete modbusDevice;
    delete ui;
}

void MainWindow_ETD8A12::modBusWriteRegister(int nStartAddr, int nValue, int numberOfEntries)
{
//    qDebug("modBusWriteRegister: %d 0x%X", nStartAddr, nValue);
    QModbusDataUnit writeUnit = QModbusDataUnit(QModbusDataUnit::HoldingRegisters, nStartAddr, numberOfEntries);
    writeUnit.setValue(0, nValue);

    if (auto *reply = modbusDevice->sendWriteRequest(writeUnit, ui->spinBoxModbusID->value())) {
        if (!reply->isFinished()) {
            connect(reply, &QModbusReply::finished, this, [this, reply, nStartAddr, nValue]() {
                const auto error = reply->error();

                if (error == QModbusDevice::ProtocolError) {
                    statusBar()->showMessage(tr("Write response error: %1 (Modbus exception: 0x%2)")
                                                 .arg(reply->errorString()).arg(reply->rawResult().exceptionCode(), -1, 16),
                                             5000);
                } else if (error != QModbusDevice::NoError) {
                    statusBar()->showMessage(tr("Write response error: %1 (code: 0x%2)").
                                             arg(reply->errorString()).arg(error, -1, 16), 5000);
                }
                else {
                    bool fOn = nValue == 0x100;
                    setChannelInfo(nStartAddr, fOn);
                }
                reply->deleteLater();
            });
        } else {
            // broadcast replies return immediately
            reply->deleteLater();
        }
    } else {
        statusBar()->showMessage(tr("Write error: %1").arg(modbusDevice->errorString()), 5000);
    }
}

void MainWindow_ETD8A12::readModbus(QModbusDataUnit::RegisterType reqType, int nStartAddr, int numberOfEntries)
{
    statusBar()->clearMessage();
    QModbusDataUnit readUnit(reqType, nStartAddr, numberOfEntries);
    if (auto *reply = modbusDevice->sendReadRequest(readUnit, ui->spinBoxModbusID->value())) {
        if (!reply->isFinished())
            connect(reply, &QModbusReply::finished, this, &MainWindow_ETD8A12::onModbusReadReady);
        else
            delete reply; // broadcast replies return immediately
    } else {
        statusBar()->showMessage(tr("Read error: %1").arg(modbusDevice->errorString()), 5000);
    }
}

void MainWindow_ETD8A12::setChannelInfo(int nStartAddr, bool fOn)
{
    pLabelCh[nStartAddr]->setText(fOn?"ON": "OFF");
    pLabelCh[nStartAddr]->setStyleSheet(fOn?"color: rgb(255, 255, 255);background-color: rgb(0, 170, 0);":
                                            "color: rgb(255, 255, 255);background-color: rgb(79, 79, 79);");
}

//void MainWindow_ETD8A12::setInputInfo(int nStartAddr, bool fOn)
//{
//    pInputCh[nStartAddr]->setText(fOn?"ON": "OFF");
//    pInputCh[nStartAddr]->setStyleSheet(fOn?"color: rgb(255, 255, 255);background-color: rgb(0, 170, 0);":
//                                            "color: rgb(255, 255, 255);background-color: rgb(79, 79, 79);");
//}

void MainWindow_ETD8A12::on_checkBoxCh1_clicked(bool checked)
{
    modBusWriteRegister(0, checked?ETD8A12_OUTPUT_ON:ETD8A12_OUTPUT_OFF);
}

void MainWindow_ETD8A12::on_checkBoxCh2_clicked(bool checked)
{
    modBusWriteRegister(1, checked?ETD8A12_OUTPUT_ON:ETD8A12_OUTPUT_OFF);
}

void MainWindow_ETD8A12::on_checkBoxCh3_clicked(bool checked)
{
    modBusWriteRegister(2, checked?ETD8A12_OUTPUT_ON:ETD8A12_OUTPUT_OFF);
}

void MainWindow_ETD8A12::on_checkBoxCh4_clicked(bool checked)
{
    modBusWriteRegister(3, checked?ETD8A12_OUTPUT_ON:ETD8A12_OUTPUT_OFF);
}

void MainWindow_ETD8A12::on_checkBoxCh5_clicked(bool checked)
{
    modBusWriteRegister(4, checked?ETD8A12_OUTPUT_ON:ETD8A12_OUTPUT_OFF);
}

void MainWindow_ETD8A12::on_checkBoxCh6_clicked(bool checked)
{
    modBusWriteRegister(5, checked?ETD8A12_OUTPUT_ON:ETD8A12_OUTPUT_OFF);
}

void MainWindow_ETD8A12::on_checkBoxCh7_clicked(bool checked)
{
    modBusWriteRegister(6, checked?ETD8A12_OUTPUT_ON:ETD8A12_OUTPUT_OFF);
}

void MainWindow_ETD8A12::on_checkBoxCh8_clicked(bool checked)
{
    modBusWriteRegister(7, checked?ETD8A12_OUTPUT_ON:ETD8A12_OUTPUT_OFF);
}

void MainWindow_ETD8A12::on_checkBoxCh9_clicked(bool checked)
{
    modBusWriteRegister(8, checked?ETD8A12_OUTPUT_ON:ETD8A12_OUTPUT_OFF);
}

void MainWindow_ETD8A12::on_checkBoxCh10_clicked(bool checked)
{
    modBusWriteRegister(9, checked?ETD8A12_OUTPUT_ON:ETD8A12_OUTPUT_OFF);
}

void MainWindow_ETD8A12::on_checkBoxCh11_clicked(bool checked)
{
    modBusWriteRegister(10, checked?ETD8A12_OUTPUT_ON:ETD8A12_OUTPUT_OFF);
}

void MainWindow_ETD8A12::on_checkBoxCh12_clicked(bool checked)
{
    modBusWriteRegister(11, checked?ETD8A12_OUTPUT_ON:ETD8A12_OUTPUT_OFF);
}

void MainWindow_ETD8A12::on_pushButtonReadOutput_clicked()
{
    readModbus(QModbusDataUnit::HoldingRegisters, 0, 12);
}

//void MainWindow_ETD8A12::on_pushButtonReadInput_clicked()
//{
//    readModbus(QModbusDataUnit::InputRegisters, 0, 12);
//}

