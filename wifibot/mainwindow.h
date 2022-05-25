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

    void on_bt_haut_clicked();
    void on_bt_bas_clicked();

    void on_bt_left_clicked();

    void on_bt_right_clicked();

    void on_stop_clicked();

private:
    Ui::MainWindow *ui;
    MyRobot robot;

};
#endif // MAINWINDOW_H
