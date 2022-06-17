#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QKeyEvent>
#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
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
    void keyPressEvent(QKeyEvent *z);


private slots:
    void on_bt_connect_clicked();

    void on_bt_haut_clicked();
    void on_bt_bas_clicked();
    void on_bt_right_clicked();
    void on_bt_left_clicked();
    void on_stop_clicked();

    void on_Batterie_valueChanged(int value);
    void on_horizontalSlider_sliderMoved(int position);

    void on_bt_haut_cam_clicked();
    void on_bt_bas_cam_clicked();
    void on_bt_gauche_cam_clicked();
    void on_bt_droite_cam_clicked();

    void on_lcdNumber_overflow();

    void display_irAvD();
    void display_irAvG();
    void display_irArD();
    void display_irArG();

    void update();

private:
    Ui::MainWindow *ui;
    MyRobot robot;
    QNetworkAccessManager *manager;
    QNetworkRequest request;
    int count=0;
    unsigned char batLevel;

    QTimer *TimerReceiveIR;
    QTimer *refresh;

};
#endif // MAINWINDOW_H
