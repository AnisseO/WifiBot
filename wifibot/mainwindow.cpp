#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myrobot.h"
#include "QKeyEvent"

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

///BOUTONS
///
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

void MainWindow::on_stop_clicked()
{
    robot.Stop();
}

///Clavier
///
void MainWindow::keyPressEvent(QKeyEvent *e){

    if (e->key() == Qt::Key_Z) {
    robot.Avancer();
    }

    if (e->key() == Qt::Key_S) {
    robot.Reculer();
    }

    if (e->key() == Qt::Key_Q) {
    robot.Gauche();
    }

    if (e->key() == Qt::Key_D) {
    robot.Droite();
    }

    if (e->key() == Qt::Key_Space) {
        robot.Stop();
    }
}

//Affichage de la batterie du robot
void MainWindow::on_Batterie_valueChanged(int value)
{
    value = robot.getBatterie();
}

