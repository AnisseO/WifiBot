#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myrobot.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_bt_connect_clicked();
    void on_bt_disconnect_clicked();

    void on_left_button_pressed();

    void on_pushButton_2_pressed();

private:
    Ui::MainWindow *ui;
    MyRobot robot;

};
#endif // MAINWINDOW_H
