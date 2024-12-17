/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *OnBtn;
    QPushButton *OffBtn;
    QPushButton *PlusBtn;
    QPushButton *MoinsBtn;
    QLabel *label;
    QLabel *etat_led_13_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(468, 289);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        OnBtn = new QPushButton(centralwidget);
        OnBtn->setObjectName("OnBtn");
        OnBtn->setGeometry(QRect(60, 40, 101, 41));
        QFont font;
        font.setPointSize(12);
        OnBtn->setFont(font);
        OffBtn = new QPushButton(centralwidget);
        OffBtn->setObjectName("OffBtn");
        OffBtn->setGeometry(QRect(270, 40, 101, 41));
        OffBtn->setFont(font);
        PlusBtn = new QPushButton(centralwidget);
        PlusBtn->setObjectName("PlusBtn");
        PlusBtn->setGeometry(QRect(60, 140, 101, 41));
        QFont font1;
        font1.setPointSize(15);
        PlusBtn->setFont(font1);
        MoinsBtn = new QPushButton(centralwidget);
        MoinsBtn->setObjectName("MoinsBtn");
        MoinsBtn->setGeometry(QRect(270, 140, 101, 41));
        QFont font2;
        font2.setPointSize(20);
        MoinsBtn->setFont(font2);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 100, 101, 21));
        label->setFont(font);
        etat_led_13_label = new QLabel(centralwidget);
        etat_led_13_label->setObjectName("etat_led_13_label");
        etat_led_13_label->setGeometry(QRect(280, 100, 101, 21));
        etat_led_13_label->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 468, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(OnBtn, SIGNAL(clicked()), MainWindow, SLOT(on_clicked()));
        QObject::connect(OffBtn, SIGNAL(clicked()), MainWindow, SLOT(off_clicked()));
        QObject::connect(PlusBtn, SIGNAL(clicked()), MainWindow, SLOT(plus_clicked()));
        QObject::connect(MoinsBtn, SIGNAL(clicked()), MainWindow, SLOT(moins_clicked()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        OnBtn->setText(QCoreApplication::translate("MainWindow", "ON", nullptr));
        OffBtn->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
        PlusBtn->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        MoinsBtn->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Etat Led 13", nullptr));
        etat_led_13_label->setText(QCoreApplication::translate("MainWindow", "NA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
