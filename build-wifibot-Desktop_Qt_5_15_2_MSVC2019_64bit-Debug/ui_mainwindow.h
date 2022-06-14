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
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "QWebEngineView"

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
    QWebEngineView *QCAM;
    QSlider *horizontalSlider;
    QPushButton *bt_haut_cam;
    QPushButton *bt_bas_cam;
    QPushButton *bt_droite_cam;
    QPushButton *bt_gauche_cam;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1290, 752);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        bt_connect = new QPushButton(centralwidget);
        bt_connect->setObjectName(QString::fromUtf8("bt_connect"));
        bt_connect->setGeometry(QRect(190, 620, 171, 71));
        QFont font;
        font.setPointSize(11);
        bt_connect->setFont(font);
        bt_disconnect = new QPushButton(centralwidget);
        bt_disconnect->setObjectName(QString::fromUtf8("bt_disconnect"));
        bt_disconnect->setGeometry(QRect(440, 620, 181, 71));
        bt_disconnect->setFont(font);
        bt_left = new QPushButton(centralwidget);
        bt_left->setObjectName(QString::fromUtf8("bt_left"));
        bt_left->setGeometry(QRect(100, 190, 201, 121));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        bt_left->setFont(font1);
        bt_left->setStyleSheet(QString::fromUtf8("#bt_left{\n"
"background-color: transparent;\n"
"border-image: url(:gauche.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        bt_right = new QPushButton(centralwidget);
        bt_right->setObjectName(QString::fromUtf8("bt_right"));
        bt_right->setGeometry(QRect(520, 190, 191, 121));
        bt_right->setFont(font1);
        bt_right->setStyleSheet(QString::fromUtf8("#bt_right{\n"
"background-color: transparent;\n"
"border-image: url(:droite.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        bt_haut = new QPushButton(centralwidget);
        bt_haut->setObjectName(QString::fromUtf8("bt_haut"));
        bt_haut->setGeometry(QRect(350, 10, 151, 161));
        QPalette palette;
        QBrush brush(QColor(245, 245, 245, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(241, 248, 245, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(250, 250, 250, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush2);
        QBrush brush3(QColor(247, 247, 247, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush3);
        QBrush brush4(QColor(238, 244, 249, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush4);
        QBrush brush5(QColor(248, 248, 248, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush5);
        QBrush brush6(QColor(116, 118, 120, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        QBrush brush7(QColor(232, 232, 234, 255));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        QBrush brush8(QColor(208, 208, 208, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        QBrush brush9(QColor(64, 65, 66, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush8);
        QBrush brush10(QColor(46, 47, 48, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        QBrush brush11(QColor(105, 105, 105, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush11);
        QBrush brush12(QColor(53, 54, 55, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        QBrush brush13(QColor(127, 127, 128, 255));
        brush13.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        QBrush brush14(QColor(164, 166, 168, 96));
        brush14.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush14);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush14);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        QBrush brush15(QColor(0, 0, 0, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush15);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        bt_haut->setPalette(palette);
        bt_haut->setMouseTracking(false);
        bt_haut->setStyleSheet(QString::fromUtf8("#bt_haut{\n"
"background-color: transparent;\n"
"border-image: url(:haut.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        bt_bas = new QPushButton(centralwidget);
        bt_bas->setObjectName(QString::fromUtf8("bt_bas"));
        bt_bas->setGeometry(QRect(340, 170, 161, 151));
        bt_bas->setStyleSheet(QString::fromUtf8("#bt_bas{\n"
"background-color: transparent;\n"
"border-image: url(:bas.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        stop = new QPushButton(centralwidget);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setGeometry(QRect(310, 460, 181, 121));
        stop->setStyleSheet(QString::fromUtf8("#stop{\n"
"background-color: transparent;\n"
"border-image: url(:stop.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        Batterie = new QProgressBar(centralwidget);
        Batterie->setObjectName(QString::fromUtf8("Batterie"));
        Batterie->setGeometry(QRect(1120, 30, 118, 23));
        Batterie->setValue(24);
        QCAM = new QWebEngineView(centralwidget);
        QCAM->setObjectName(QString::fromUtf8("QCAM"));
        QCAM->setGeometry(QRect(780, 120, 451, 271));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(180, 360, 481, 71));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(240);
        horizontalSlider->setValue(150);
        horizontalSlider->setOrientation(Qt::Horizontal);
        bt_haut_cam = new QPushButton(centralwidget);
        bt_haut_cam->setObjectName(QString::fromUtf8("bt_haut_cam"));
        bt_haut_cam->setGeometry(QRect(950, 480, 91, 71));
        QFont font2;
        font2.setPointSize(26);
        bt_haut_cam->setFont(font2);
        bt_bas_cam = new QPushButton(centralwidget);
        bt_bas_cam->setObjectName(QString::fromUtf8("bt_bas_cam"));
        bt_bas_cam->setGeometry(QRect(950, 560, 91, 71));
        QFont font3;
        font3.setPointSize(16);
        bt_bas_cam->setFont(font3);
        bt_droite_cam = new QPushButton(centralwidget);
        bt_droite_cam->setObjectName(QString::fromUtf8("bt_droite_cam"));
        bt_droite_cam->setGeometry(QRect(1060, 560, 91, 71));
        QFont font4;
        font4.setPointSize(20);
        bt_droite_cam->setFont(font4);
        bt_gauche_cam = new QPushButton(centralwidget);
        bt_gauche_cam->setObjectName(QString::fromUtf8("bt_gauche_cam"));
        bt_gauche_cam->setGeometry(QRect(840, 560, 91, 71));
        bt_gauche_cam->setFont(font4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1290, 21));
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
        bt_left->setText(QString());
        bt_right->setText(QString());
        bt_haut->setText(QString());
        bt_bas->setText(QString());
        stop->setText(QString());
        bt_haut_cam->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        bt_bas_cam->setText(QCoreApplication::translate("MainWindow", "BAS", nullptr));
        bt_droite_cam->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        bt_gauche_cam->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
