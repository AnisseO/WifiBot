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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
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
    QLCDNumber *irAvG;
    QLCDNumber *irArG;
    QLCDNumber *irAvD;
    QLCDNumber *irArD;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QMenuBar *menubar;
    QMenu *menuWifiBot;
    QMenu *menuCamera;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1290, 897);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        bt_connect = new QPushButton(centralwidget);
        bt_connect->setObjectName(QString::fromUtf8("bt_connect"));
        bt_connect->setGeometry(QRect(280, 660, 241, 151));
        QFont font;
        font.setPointSize(11);
        bt_connect->setFont(font);
        bt_connect->setStyleSheet(QString::fromUtf8("#bt_connect{\n"
"background-color: transparent;\n"
"border-image: url(:off.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        bt_left = new QPushButton(centralwidget);
        bt_left->setObjectName(QString::fromUtf8("bt_left"));
        bt_left->setGeometry(QRect(100, 180, 201, 121));
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
        bt_right->setGeometry(QRect(510, 180, 191, 121));
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
        bt_haut->setGeometry(QRect(330, 80, 161, 161));
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
        bt_bas->setGeometry(QRect(330, 250, 161, 151));
        bt_bas->setStyleSheet(QString::fromUtf8("#bt_bas{\n"
"background-color: transparent;\n"
"border-image: url(:bas.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        stop = new QPushButton(centralwidget);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setGeometry(QRect(310, 530, 181, 121));
        stop->setStyleSheet(QString::fromUtf8("#stop{\n"
"background-color: transparent;\n"
"border-image: url(:stop.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"#stop:pressed{\n"
"border-image: url(:stop_press.png);\n"
"}"));
        Batterie = new QProgressBar(centralwidget);
        Batterie->setObjectName(QString::fromUtf8("Batterie"));
        Batterie->setGeometry(QRect(1150, 60, 118, 23));
        Batterie->setValue(24);
        QCAM = new QWebEngineView(centralwidget);
        QCAM->setObjectName(QString::fromUtf8("QCAM"));
        QCAM->setGeometry(QRect(780, 240, 451, 271));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(180, 440, 481, 71));
        horizontalSlider->setMinimum(120);
        horizontalSlider->setMaximum(240);
        horizontalSlider->setValue(150);
        horizontalSlider->setOrientation(Qt::Horizontal);
        bt_haut_cam = new QPushButton(centralwidget);
        bt_haut_cam->setObjectName(QString::fromUtf8("bt_haut_cam"));
        bt_haut_cam->setGeometry(QRect(930, 540, 141, 121));
        QFont font2;
        font2.setPointSize(26);
        bt_haut_cam->setFont(font2);
        bt_haut_cam->setStyleSheet(QString::fromUtf8("#bt_haut_cam{\n"
"background-color: transparent;\n"
"border-image: url(:haut_bl.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        bt_bas_cam = new QPushButton(centralwidget);
        bt_bas_cam->setObjectName(QString::fromUtf8("bt_bas_cam"));
        bt_bas_cam->setGeometry(QRect(930, 670, 141, 91));
        QFont font3;
        font3.setPointSize(16);
        bt_bas_cam->setFont(font3);
        bt_bas_cam->setStyleSheet(QString::fromUtf8("#bt_bas_cam{\n"
"background-color: transparent;\n"
"border-image: url(:bas_b.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        bt_droite_cam = new QPushButton(centralwidget);
        bt_droite_cam->setObjectName(QString::fromUtf8("bt_droite_cam"));
        bt_droite_cam->setGeometry(QRect(1090, 600, 141, 111));
        QFont font4;
        font4.setPointSize(20);
        bt_droite_cam->setFont(font4);
        bt_droite_cam->setStyleSheet(QString::fromUtf8("#bt_droite_cam{\n"
"background-color: transparent;\n"
"border-image: url(:droite_b.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        bt_gauche_cam = new QPushButton(centralwidget);
        bt_gauche_cam->setObjectName(QString::fromUtf8("bt_gauche_cam"));
        bt_gauche_cam->setGeometry(QRect(770, 590, 141, 121));
        bt_gauche_cam->setFont(font4);
        bt_gauche_cam->setStyleSheet(QString::fromUtf8("#bt_gauche_cam{\n"
"background-color: transparent;\n"
"border-image: url(:gauche_b.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        irAvG = new QLCDNumber(centralwidget);
        irAvG->setObjectName(QString::fromUtf8("irAvG"));
        irAvG->setGeometry(QRect(810, 20, 91, 31));
        irArG = new QLCDNumber(centralwidget);
        irArG->setObjectName(QString::fromUtf8("irArG"));
        irArG->setGeometry(QRect(810, 80, 91, 31));
        irAvD = new QLCDNumber(centralwidget);
        irAvD->setObjectName(QString::fromUtf8("irAvD"));
        irAvD->setGeometry(QRect(920, 20, 91, 31));
        irArD = new QLCDNumber(centralwidget);
        irArD->setObjectName(QString::fromUtf8("irArD"));
        irArD->setGeometry(QRect(920, 80, 91, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(730, 10, 71, 51));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Bahnschrift SemiBold Condensed"));
        font5.setPointSize(18);
        font5.setBold(true);
        label->setFont(font5);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(730, 80, 71, 51));
        label_2->setFont(font5);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1020, 20, 101, 41));
        label_3->setFont(font5);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1020, 70, 71, 51));
        label_4->setFont(font5);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 450, 141, 61));
        label_5->setFont(font5);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(880, 150, 261, 51));
        label_6->setFont(font5);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(200, 20, 441, 51));
        label_7->setFont(font5);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1290, 21));
        menuWifiBot = new QMenu(menubar);
        menuWifiBot->setObjectName(QString::fromUtf8("menuWifiBot"));
        menuCamera = new QMenu(menubar);
        menuCamera->setObjectName(QString::fromUtf8("menuCamera"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuWifiBot->menuAction());
        menubar->addAction(menuCamera->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        bt_connect->setText(QString());
        bt_left->setText(QString());
        bt_right->setText(QString());
        bt_haut->setText(QString());
        bt_bas->setText(QString());
        stop->setText(QString());
        bt_haut_cam->setText(QString());
        bt_bas_cam->setText(QString());
        bt_droite_cam->setText(QString());
        bt_gauche_cam->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Bahnschrift SemiBold Condensed'; font-size:16pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; color:#ebebeb;\">AvG</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Bahnschrift SemiBold Condensed'; font-size:16pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; color:#ebebeb;\">ArG</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Bahnschrift SemiBold Condensed'; font-size:16pt; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; color:#ebebeb;\">AvD</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; color:#ebebeb;\"><br /></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Bahnschrift SemiBold Condensed'; font-size:16pt; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; color:#ebebeb;\">ArD</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Bahnschrift SemiBold Condensed'; font-size:18pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; color:#ebebeb;\">Vitesse:</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Bahnschrift SemiBold Condensed'; font-size:18pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; color:#ebebeb;\">Pilotage cam\303\251ra</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Bahnschrift SemiBold Condensed'; font-size:18pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#efefef;\">Pilotage robot</span></p></body></html>", nullptr));
        menuWifiBot->setTitle(QCoreApplication::translate("MainWindow", "WifiBot", nullptr));
        menuCamera->setTitle(QCoreApplication::translate("MainWindow", "Cam\303\251ra", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
