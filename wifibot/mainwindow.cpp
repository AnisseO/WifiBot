#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myrobot.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_bt_connect_clicked()
{
    robot.doConnect();
}


void MainWindow::on_bt_disconnect_clicked()
{
    robot.disConnect();
}

void MainWindow::on_bt_haut_clicked()
{
    robot.Avancer();
}


void MainWindow::on_bt_bas_clicked()
{
    robot.Reculer();
}


void MainWindow::on_bt_right_clicked()
{
    robot.Droite();
}
void MainWindow::on_bt_left_clicked()
{
    robot.Gauche();
}

