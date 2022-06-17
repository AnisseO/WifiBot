#include "mainwindow.h"
#include "myrobot.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setStyleSheet("background-image:url(:fond.jpg)"); // Définition du fond de l'application
    w.show();
    return a.exec();
}
