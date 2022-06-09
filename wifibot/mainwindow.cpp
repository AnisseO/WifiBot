#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myrobot.h"
#include "QKeyEvent"

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
    value = robot.getBatterie()*0.1*100/12.7;
    ui->Batterie->setValue(value);
}

/*
void MainWindow::updateBatteryLevel(){
    QString danger = "QProgressBar::chunk {background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0,stop: 0 #FF0350,stop: 0.4999 #FF0020,stop: 0.5 #FF0019,stop: 1 #FF0000 );border-bottom-right-radius: 5px;border-bottom-left-radius: 5px;border: .px solid black;}";
    QString safe= "QProgressBar::chunk {background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0,stop: 0 #78d,stop: 0.4999 #46a,stop: 0.5 #45a,stop: 1 #238 );border-bottom-right-radius: 7px;border-bottom-left-radius: 7px;border: 1px solid black;}";

    ui->Batterie->setValue( robot.getBatterie()*0.1*100/12.7);

    if (ui->Batterie->value() < 25){
        ui->Batterie->setStyleSheet(danger);
    }

    else {
        ui->Batterie->setStyleSheet(safe);
    }
}
*/

void MainWindow::on_horizontalSlider_sliderMoved(int position)
{
    qDebug() << "Vitesse choisie : " << position;
    robot.setVitesse(position);
}



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

