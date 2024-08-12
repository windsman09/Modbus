/********************************************************************************
** Form generated from reading UI file 'mainwindow_etd8a12.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_ETD8A12_H
#define UI_MAINWINDOW_ETD8A12_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow_ETD8A12
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QPushButton *pushButtonOpen;
    QGroupBox *groupBoxDeviceOutputControl;
    QGridLayout *gridLayout;
    QCheckBox *checkBoxCh1;
    QLabel *labelCh1;
    QCheckBox *checkBoxCh7;
    QLabel *labelCh7;
    QCheckBox *checkBoxCh2;
    QLabel *labelCh2;
    QCheckBox *checkBoxCh8;
    QLabel *labelCh8;
    QCheckBox *checkBoxCh3;
    QLabel *labelCh3;
    QCheckBox *checkBoxCh9;
    QLabel *labelCh9;
    QCheckBox *checkBoxCh4;
    QLabel *labelCh4;
    QCheckBox *checkBoxCh10;
    QLabel *labelCh10;
    QCheckBox *checkBoxCh5;
    QLabel *labelCh5;
    QCheckBox *checkBoxCh11;
    QLabel *labelCh11;
    QCheckBox *checkBoxCh6;
    QLabel *labelCh6;
    QCheckBox *checkBoxCh12;
    QLabel *labelCh12;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBoxInputStatus;
    QGridLayout *gridLayout_2;
    QLabel *labeln1;
    QLabel *labeln2;
    QLabel *labeln3;
    QLabel *labeln4;
    QLabel *labeln5;
    QLabel *labeln6;
    QLabel *labeln7;
    QLabel *labeln8;
    QLabel *labeln9;
    QLabel *labeln10;
    QLabel *labeln11;
    QLabel *labeln12;
    QPushButton *pushButtonReadOutput;
    QLineEdit *lineEditIPAddress;
    QSpinBox *spinBoxModbusID;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow_ETD8A12)
    {
        if (MainWindow_ETD8A12->objectName().isEmpty())
            MainWindow_ETD8A12->setObjectName("MainWindow_ETD8A12");
        MainWindow_ETD8A12->resize(334, 451);
        centralwidget = new QWidget(MainWindow_ETD8A12);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        pushButtonOpen = new QPushButton(centralwidget);
        pushButtonOpen->setObjectName("pushButtonOpen");
        pushButtonOpen->setMinimumSize(QSize(0, 24));

        gridLayout_3->addWidget(pushButtonOpen, 1, 3, 1, 1);

        groupBoxDeviceOutputControl = new QGroupBox(centralwidget);
        groupBoxDeviceOutputControl->setObjectName("groupBoxDeviceOutputControl");
        gridLayout = new QGridLayout(groupBoxDeviceOutputControl);
        gridLayout->setObjectName("gridLayout");
        checkBoxCh1 = new QCheckBox(groupBoxDeviceOutputControl);
        checkBoxCh1->setObjectName("checkBoxCh1");

        gridLayout->addWidget(checkBoxCh1, 0, 0, 1, 1);

        labelCh1 = new QLabel(groupBoxDeviceOutputControl);
        labelCh1->setObjectName("labelCh1");
        labelCh1->setMinimumSize(QSize(51, 21));
        labelCh1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);background-color: rgb(79, 79, 79);"));
        labelCh1->setFrameShape(QFrame::Shape::WinPanel);
        labelCh1->setFrameShadow(QFrame::Shadow::Sunken);
        labelCh1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(labelCh1, 0, 1, 1, 1);

        checkBoxCh7 = new QCheckBox(groupBoxDeviceOutputControl);
        checkBoxCh7->setObjectName("checkBoxCh7");

        gridLayout->addWidget(checkBoxCh7, 0, 2, 1, 1);

        labelCh7 = new QLabel(groupBoxDeviceOutputControl);
        labelCh7->setObjectName("labelCh7");
        labelCh7->setMinimumSize(QSize(51, 21));
        labelCh7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);background-color: rgb(79, 79, 79);"));
        labelCh7->setFrameShape(QFrame::Shape::WinPanel);
        labelCh7->setFrameShadow(QFrame::Shadow::Sunken);
        labelCh7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(labelCh7, 0, 3, 1, 1);

        checkBoxCh2 = new QCheckBox(groupBoxDeviceOutputControl);
        checkBoxCh2->setObjectName("checkBoxCh2");

        gridLayout->addWidget(checkBoxCh2, 1, 0, 1, 1);

        labelCh2 = new QLabel(groupBoxDeviceOutputControl);
        labelCh2->setObjectName("labelCh2");
        labelCh2->setMinimumSize(QSize(51, 21));
        labelCh2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);background-color: rgb(79, 79, 79);"));
        labelCh2->setFrameShape(QFrame::Shape::WinPanel);
        labelCh2->setFrameShadow(QFrame::Shadow::Sunken);
        labelCh2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(labelCh2, 1, 1, 1, 1);

        checkBoxCh8 = new QCheckBox(groupBoxDeviceOutputControl);
        checkBoxCh8->setObjectName("checkBoxCh8");

        gridLayout->addWidget(checkBoxCh8, 1, 2, 1, 1);

        labelCh8 = new QLabel(groupBoxDeviceOutputControl);
        labelCh8->setObjectName("labelCh8");
        labelCh8->setMinimumSize(QSize(51, 21));
        labelCh8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);background-color: rgb(79, 79, 79);"));
        labelCh8->setFrameShape(QFrame::Shape::WinPanel);
        labelCh8->setFrameShadow(QFrame::Shadow::Sunken);
        labelCh8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(labelCh8, 1, 3, 1, 1);

        checkBoxCh3 = new QCheckBox(groupBoxDeviceOutputControl);
        checkBoxCh3->setObjectName("checkBoxCh3");

        gridLayout->addWidget(checkBoxCh3, 2, 0, 1, 1);

        labelCh3 = new QLabel(groupBoxDeviceOutputControl);
        labelCh3->setObjectName("labelCh3");
        labelCh3->setMinimumSize(QSize(51, 21));
        labelCh3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);background-color: rgb(79, 79, 79);"));
        labelCh3->setFrameShape(QFrame::Shape::WinPanel);
        labelCh3->setFrameShadow(QFrame::Shadow::Sunken);
        labelCh3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(labelCh3, 2, 1, 1, 1);

        checkBoxCh9 = new QCheckBox(groupBoxDeviceOutputControl);
        checkBoxCh9->setObjectName("checkBoxCh9");

        gridLayout->addWidget(checkBoxCh9, 2, 2, 1, 1);

        labelCh9 = new QLabel(groupBoxDeviceOutputControl);
        labelCh9->setObjectName("labelCh9");
        labelCh9->setMinimumSize(QSize(51, 21));
        labelCh9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);background-color: rgb(79, 79, 79);"));
        labelCh9->setFrameShape(QFrame::Shape::WinPanel);
        labelCh9->setFrameShadow(QFrame::Shadow::Sunken);
        labelCh9->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(labelCh9, 2, 3, 1, 1);

        checkBoxCh4 = new QCheckBox(groupBoxDeviceOutputControl);
        checkBoxCh4->setObjectName("checkBoxCh4");

        gridLayout->addWidget(checkBoxCh4, 3, 0, 1, 1);

        labelCh4 = new QLabel(groupBoxDeviceOutputControl);
        labelCh4->setObjectName("labelCh4");
        labelCh4->setMinimumSize(QSize(51, 21));
        labelCh4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);background-color: rgb(79, 79, 79);"));
        labelCh4->setFrameShape(QFrame::Shape::WinPanel);
        labelCh4->setFrameShadow(QFrame::Shadow::Sunken);
        labelCh4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(labelCh4, 3, 1, 1, 1);

        checkBoxCh10 = new QCheckBox(groupBoxDeviceOutputControl);
        checkBoxCh10->setObjectName("checkBoxCh10");

        gridLayout->addWidget(checkBoxCh10, 3, 2, 1, 1);

        labelCh10 = new QLabel(groupBoxDeviceOutputControl);
        labelCh10->setObjectName("labelCh10");
        labelCh10->setMinimumSize(QSize(51, 21));
        labelCh10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);background-color: rgb(79, 79, 79);"));
        labelCh10->setFrameShape(QFrame::Shape::WinPanel);
        labelCh10->setFrameShadow(QFrame::Shadow::Sunken);
        labelCh10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(labelCh10, 3, 3, 1, 1);

        checkBoxCh5 = new QCheckBox(groupBoxDeviceOutputControl);
        checkBoxCh5->setObjectName("checkBoxCh5");

        gridLayout->addWidget(checkBoxCh5, 4, 0, 1, 1);

        labelCh5 = new QLabel(groupBoxDeviceOutputControl);
        labelCh5->setObjectName("labelCh5");
        labelCh5->setMinimumSize(QSize(51, 21));
        labelCh5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);background-color: rgb(79, 79, 79);"));
        labelCh5->setFrameShape(QFrame::Shape::WinPanel);
        labelCh5->setFrameShadow(QFrame::Shadow::Sunken);
        labelCh5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(labelCh5, 4, 1, 1, 1);

        checkBoxCh11 = new QCheckBox(groupBoxDeviceOutputControl);
        checkBoxCh11->setObjectName("checkBoxCh11");

        gridLayout->addWidget(checkBoxCh11, 4, 2, 1, 1);

        labelCh11 = new QLabel(groupBoxDeviceOutputControl);
        labelCh11->setObjectName("labelCh11");
        labelCh11->setMinimumSize(QSize(51, 21));
        labelCh11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);background-color: rgb(79, 79, 79);"));
        labelCh11->setFrameShape(QFrame::Shape::WinPanel);
        labelCh11->setFrameShadow(QFrame::Shadow::Sunken);
        labelCh11->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(labelCh11, 4, 3, 1, 1);

        checkBoxCh6 = new QCheckBox(groupBoxDeviceOutputControl);
        checkBoxCh6->setObjectName("checkBoxCh6");

        gridLayout->addWidget(checkBoxCh6, 5, 0, 1, 1);

        labelCh6 = new QLabel(groupBoxDeviceOutputControl);
        labelCh6->setObjectName("labelCh6");
        labelCh6->setMinimumSize(QSize(51, 21));
        labelCh6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);background-color: rgb(79, 79, 79);"));
        labelCh6->setFrameShape(QFrame::Shape::WinPanel);
        labelCh6->setFrameShadow(QFrame::Shadow::Sunken);
        labelCh6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(labelCh6, 5, 1, 1, 1);

        checkBoxCh12 = new QCheckBox(groupBoxDeviceOutputControl);
        checkBoxCh12->setObjectName("checkBoxCh12");

        gridLayout->addWidget(checkBoxCh12, 5, 2, 1, 1);

        labelCh12 = new QLabel(groupBoxDeviceOutputControl);
        labelCh12->setObjectName("labelCh12");
        labelCh12->setMinimumSize(QSize(51, 21));
        labelCh12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);background-color: rgb(79, 79, 79);"));
        labelCh12->setFrameShape(QFrame::Shape::WinPanel);
        labelCh12->setFrameShadow(QFrame::Shadow::Sunken);
        labelCh12->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(labelCh12, 5, 3, 1, 1);


        gridLayout_3->addWidget(groupBoxDeviceOutputControl, 3, 0, 1, 4);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        gridLayout_3->addWidget(label_2, 2, 0, 1, 1);

        groupBoxInputStatus = new QGroupBox(centralwidget);
        groupBoxInputStatus->setObjectName("groupBoxInputStatus");
        gridLayout_2 = new QGridLayout(groupBoxInputStatus);
        gridLayout_2->setObjectName("gridLayout_2");
        labeln1 = new QLabel(groupBoxInputStatus);
        labeln1->setObjectName("labeln1");
        labeln1->setMinimumSize(QSize(51, 21));
        labeln1->setFrameShape(QFrame::Shape::WinPanel);
        labeln1->setFrameShadow(QFrame::Shadow::Sunken);
        labeln1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(labeln1, 0, 0, 1, 1);

        labeln2 = new QLabel(groupBoxInputStatus);
        labeln2->setObjectName("labeln2");
        labeln2->setMinimumSize(QSize(51, 21));
        labeln2->setFrameShape(QFrame::Shape::WinPanel);
        labeln2->setFrameShadow(QFrame::Shadow::Sunken);
        labeln2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(labeln2, 0, 1, 1, 1);

        labeln3 = new QLabel(groupBoxInputStatus);
        labeln3->setObjectName("labeln3");
        labeln3->setMinimumSize(QSize(51, 21));
        labeln3->setFrameShape(QFrame::Shape::WinPanel);
        labeln3->setFrameShadow(QFrame::Shadow::Sunken);
        labeln3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(labeln3, 0, 2, 1, 1);

        labeln4 = new QLabel(groupBoxInputStatus);
        labeln4->setObjectName("labeln4");
        labeln4->setMinimumSize(QSize(51, 21));
        labeln4->setFrameShape(QFrame::Shape::WinPanel);
        labeln4->setFrameShadow(QFrame::Shadow::Sunken);
        labeln4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(labeln4, 0, 3, 1, 1);

        labeln5 = new QLabel(groupBoxInputStatus);
        labeln5->setObjectName("labeln5");
        labeln5->setMinimumSize(QSize(51, 21));
        labeln5->setFrameShape(QFrame::Shape::WinPanel);
        labeln5->setFrameShadow(QFrame::Shadow::Sunken);
        labeln5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(labeln5, 1, 0, 1, 1);

        labeln6 = new QLabel(groupBoxInputStatus);
        labeln6->setObjectName("labeln6");
        labeln6->setMinimumSize(QSize(51, 21));
        labeln6->setFrameShape(QFrame::Shape::WinPanel);
        labeln6->setFrameShadow(QFrame::Shadow::Sunken);
        labeln6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(labeln6, 1, 1, 1, 1);

        labeln7 = new QLabel(groupBoxInputStatus);
        labeln7->setObjectName("labeln7");
        labeln7->setMinimumSize(QSize(51, 21));
        labeln7->setFrameShape(QFrame::Shape::WinPanel);
        labeln7->setFrameShadow(QFrame::Shadow::Sunken);
        labeln7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(labeln7, 1, 2, 1, 1);

        labeln8 = new QLabel(groupBoxInputStatus);
        labeln8->setObjectName("labeln8");
        labeln8->setMinimumSize(QSize(51, 21));
        labeln8->setFrameShape(QFrame::Shape::WinPanel);
        labeln8->setFrameShadow(QFrame::Shadow::Sunken);
        labeln8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(labeln8, 1, 3, 1, 1);

        labeln9 = new QLabel(groupBoxInputStatus);
        labeln9->setObjectName("labeln9");
        labeln9->setMinimumSize(QSize(51, 21));
        labeln9->setFrameShape(QFrame::Shape::WinPanel);
        labeln9->setFrameShadow(QFrame::Shadow::Sunken);
        labeln9->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(labeln9, 2, 0, 1, 1);

        labeln10 = new QLabel(groupBoxInputStatus);
        labeln10->setObjectName("labeln10");
        labeln10->setMinimumSize(QSize(51, 21));
        labeln10->setFrameShape(QFrame::Shape::WinPanel);
        labeln10->setFrameShadow(QFrame::Shadow::Sunken);
        labeln10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(labeln10, 2, 1, 1, 1);

        labeln11 = new QLabel(groupBoxInputStatus);
        labeln11->setObjectName("labeln11");
        labeln11->setMinimumSize(QSize(51, 21));
        labeln11->setFrameShape(QFrame::Shape::WinPanel);
        labeln11->setFrameShadow(QFrame::Shadow::Sunken);
        labeln11->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(labeln11, 2, 2, 1, 1);

        labeln12 = new QLabel(groupBoxInputStatus);
        labeln12->setObjectName("labeln12");
        labeln12->setMinimumSize(QSize(51, 21));
        labeln12->setFrameShape(QFrame::Shape::WinPanel);
        labeln12->setFrameShadow(QFrame::Shadow::Sunken);
        labeln12->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(labeln12, 2, 3, 1, 1);


        gridLayout_3->addWidget(groupBoxInputStatus, 4, 0, 1, 4);

        pushButtonReadOutput = new QPushButton(centralwidget);
        pushButtonReadOutput->setObjectName("pushButtonReadOutput");

        gridLayout_3->addWidget(pushButtonReadOutput, 2, 3, 1, 1);

        lineEditIPAddress = new QLineEdit(centralwidget);
        lineEditIPAddress->setObjectName("lineEditIPAddress");

        gridLayout_3->addWidget(lineEditIPAddress, 1, 1, 1, 2);

        spinBoxModbusID = new QSpinBox(centralwidget);
        spinBoxModbusID->setObjectName("spinBoxModbusID");
        spinBoxModbusID->setMinimumSize(QSize(61, 25));
        spinBoxModbusID->setMinimum(1);
        spinBoxModbusID->setMaximum(64);

        gridLayout_3->addWidget(spinBoxModbusID, 2, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(24);
        font.setBold(true);
        label_3->setFont(font);

        gridLayout_3->addWidget(label_3, 0, 1, 1, 2);

        MainWindow_ETD8A12->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow_ETD8A12);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 334, 22));
        MainWindow_ETD8A12->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow_ETD8A12);
        statusbar->setObjectName("statusbar");
        MainWindow_ETD8A12->setStatusBar(statusbar);

        retranslateUi(MainWindow_ETD8A12);

        QMetaObject::connectSlotsByName(MainWindow_ETD8A12);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow_ETD8A12)
    {
        MainWindow_ETD8A12->setWindowTitle(QCoreApplication::translate("MainWindow_ETD8A12", "ETD8A12 Control Demo", nullptr));
        pushButtonOpen->setText(QCoreApplication::translate("MainWindow_ETD8A12", "Connect", nullptr));
        groupBoxDeviceOutputControl->setTitle(QCoreApplication::translate("MainWindow_ETD8A12", "Device Output Control", nullptr));
        checkBoxCh1->setText(QCoreApplication::translate("MainWindow_ETD8A12", "K1B AC", nullptr));
        labelCh1->setText(QCoreApplication::translate("MainWindow_ETD8A12", "OFF", nullptr));
        checkBoxCh7->setText(QCoreApplication::translate("MainWindow_ETD8A12", "7", nullptr));
        labelCh7->setText(QCoreApplication::translate("MainWindow_ETD8A12", "OFF", nullptr));
        checkBoxCh2->setText(QCoreApplication::translate("MainWindow_ETD8A12", "K1B Lampu", nullptr));
        labelCh2->setText(QCoreApplication::translate("MainWindow_ETD8A12", "OFF", nullptr));
        checkBoxCh8->setText(QCoreApplication::translate("MainWindow_ETD8A12", "8", nullptr));
        labelCh8->setText(QCoreApplication::translate("MainWindow_ETD8A12", "OFF", nullptr));
        checkBoxCh3->setText(QCoreApplication::translate("MainWindow_ETD8A12", "3", nullptr));
        labelCh3->setText(QCoreApplication::translate("MainWindow_ETD8A12", "OFF", nullptr));
        checkBoxCh9->setText(QCoreApplication::translate("MainWindow_ETD8A12", "9", nullptr));
        labelCh9->setText(QCoreApplication::translate("MainWindow_ETD8A12", "OFF", nullptr));
        checkBoxCh4->setText(QCoreApplication::translate("MainWindow_ETD8A12", "4", nullptr));
        labelCh4->setText(QCoreApplication::translate("MainWindow_ETD8A12", "OFF", nullptr));
        checkBoxCh10->setText(QCoreApplication::translate("MainWindow_ETD8A12", "10", nullptr));
        labelCh10->setText(QCoreApplication::translate("MainWindow_ETD8A12", "OFF", nullptr));
        checkBoxCh5->setText(QCoreApplication::translate("MainWindow_ETD8A12", "5", nullptr));
        labelCh5->setText(QCoreApplication::translate("MainWindow_ETD8A12", "OFF", nullptr));
        checkBoxCh11->setText(QCoreApplication::translate("MainWindow_ETD8A12", "11", nullptr));
        labelCh11->setText(QCoreApplication::translate("MainWindow_ETD8A12", "OFF", nullptr));
        checkBoxCh6->setText(QCoreApplication::translate("MainWindow_ETD8A12", "6", nullptr));
        labelCh6->setText(QCoreApplication::translate("MainWindow_ETD8A12", "OFF", nullptr));
        checkBoxCh12->setText(QCoreApplication::translate("MainWindow_ETD8A12", "12", nullptr));
        labelCh12->setText(QCoreApplication::translate("MainWindow_ETD8A12", "OFF", nullptr));
        label->setText(QCoreApplication::translate("MainWindow_ETD8A12", "IP Address", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow_ETD8A12", "ModBus ID", nullptr));
        groupBoxInputStatus->setTitle(QCoreApplication::translate("MainWindow_ETD8A12", "Device Input Status", nullptr));
        labeln1->setText(QCoreApplication::translate("MainWindow_ETD8A12", "IN1", nullptr));
        labeln2->setText(QCoreApplication::translate("MainWindow_ETD8A12", "IN2", nullptr));
        labeln3->setText(QCoreApplication::translate("MainWindow_ETD8A12", "IN3", nullptr));
        labeln4->setText(QCoreApplication::translate("MainWindow_ETD8A12", "IN4", nullptr));
        labeln5->setText(QCoreApplication::translate("MainWindow_ETD8A12", "IN5", nullptr));
        labeln6->setText(QCoreApplication::translate("MainWindow_ETD8A12", "IN6", nullptr));
        labeln7->setText(QCoreApplication::translate("MainWindow_ETD8A12", "IN7", nullptr));
        labeln8->setText(QCoreApplication::translate("MainWindow_ETD8A12", "IN8", nullptr));
        labeln9->setText(QCoreApplication::translate("MainWindow_ETD8A12", "IN9", nullptr));
        labeln10->setText(QCoreApplication::translate("MainWindow_ETD8A12", "IN10", nullptr));
        labeln11->setText(QCoreApplication::translate("MainWindow_ETD8A12", "IN11", nullptr));
        labeln12->setText(QCoreApplication::translate("MainWindow_ETD8A12", "IN12", nullptr));
        pushButtonReadOutput->setText(QCoreApplication::translate("MainWindow_ETD8A12", "Read Output", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow_ETD8A12", "Blok K1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow_ETD8A12: public Ui_MainWindow_ETD8A12 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_ETD8A12_H
