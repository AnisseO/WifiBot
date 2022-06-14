#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myrobot.h"
#include "QKeyEvent"
#include "QLabel"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QWebEngineView *page = ui->QCAM;
    page->load(QUrl("http://192.168.1.106:8080/?action=stream"));
    manager = new QNetworkAccessManager();
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
 * BOUTONS
*/
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
    //ui->stop->setIcon(QIcon(":/stop.png"));
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

    if (e->key() == Qt::Key_Left) {
        request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094852&group=1&value=120"));
        manager->get(request);
    }

    if (e->key() == Qt::Key_Right) {
        request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094852&group=1&value=-120"));
        manager->get(request);
    }

    if (e->key() == Qt::Key_Down) {
        request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094853&group=1&value=120"));
        manager->get(request);
    }

    if (e->key() == Qt::Key_Up) {
        request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094853&group=1&value=-120"));
        manager->get(request);
    }
}

//Affichage de la batterie du robot
void MainWindow::on_Batterie_valueChanged(int value)
{
    value = robot.getBatterie();
    ui->Batterie->setValue(value);
}

//Slider pour choisir la vitesse des roues
void MainWindow::on_horizontalSlider_sliderMoved(int position)
{
    robot.setVitesse(position);
}

/**
 * Déplacement caméra depuis le bouton sur l'interface vers le haut
 * @brief MainWindow::on_bt_haut_cam_clicked
 */
void MainWindow::on_bt_haut_cam_clicked()
{
    request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094853&group=1&value=-120"));
    manager->get(request);
}


void MainWindow::on_bt_bas_cam_clicked()
{
    request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094853&group=1&value=120"));
    manager->get(request);
}

void MainWindow::on_bt_gauche_cam_clicked()
{
    request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094852&group=1&value=120"));
    manager->get(request);
}

void MainWindow::on_bt_droite_cam_clicked()
{
    request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094852&group=1&value=-120"));
    manager->get(request);
}

