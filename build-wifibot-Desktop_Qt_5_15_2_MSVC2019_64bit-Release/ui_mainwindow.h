/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *bt_connect;
    QPushButton *bt_disconnect;
    QPushButton *bt_left;
    QPushButton *bt_right;
    QPushButton *bt_haut;
    QPushButton *bt_bas;
    QPushButton *stop;
    QProgressBar *Batterie;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        bt_connect = new QPushButton(centralwidget);
        bt_connect->setObjectName(QString::fromUtf8("bt_connect"));
        bt_connect->setGeometry(QRect(160, 430, 171, 71));
        bt_disconnect = new QPushButton(centralwidget);
        bt_disconnect->setObjectName(QString::fromUtf8("bt_disconnect"));
        bt_disconnect->setGeometry(QRect(410, 430, 181, 71));
        bt_left = new QPushButton(centralwidget);
        bt_left->setObjectName(QString::fromUtf8("bt_left"));
        bt_left->setGeometry(QRect(170, 160, 131, 61));
        bt_right = new QPushButton(centralwidget);
        bt_right->setObjectName(QString::fromUtf8("bt_right"));
        bt_right->setGeometry(QRect(520, 160, 131, 61));
        bt_haut = new QPushButton(centralwidget);
        bt_haut->setObjectName(QString::fromUtf8("bt_haut"));
        bt_haut->setGeometry(QRect(350, 60, 121, 71));
        bt_bas = new QPushButton(centralwidget);
        bt_bas->setObjectName(QString::fromUtf8("bt_bas"));
        bt_bas->setGeometry(QRect(350, 150, 121, 71));
        stop = new QPushButton(centralwidget);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setGeometry(QRect(260, 290, 291, 71));
        Batterie = new QProgressBar(centralwidget);
        Batterie->setObjectName(QString::fromUtf8("Batterie"));
        Batterie->setGeometry(QRect(660, 20, 118, 23));
        Batterie->setValue(24);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        bt_connect->setText(QCoreApplication::translate("MainWindow", "Connexion", nullptr));
        bt_disconnect->setText(QCoreApplication::translate("MainWindow", "Deconnexion", nullptr));
        bt_left->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        bt_right->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        bt_haut->setText(QCoreApplication::translate("MainWindow", "HAUT", nullptr));
        bt_bas->setText(QCoreApplication::translate("MainWindow", "BAS", nullptr));
        stop->setText(QCoreApplication::translate("MainWindow", "STOP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
