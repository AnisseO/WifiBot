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
    QWebEngineView *page = ui->QCAM; //Création d'un stream sur l'app
    page->load(QUrl("http://192.168.1.106:8080/?action=stream")); //Récupération des images de la caméra du robot
    manager = new QNetworkAccessManager(); //Création d'un manager
    connect(&robot, SIGNAL(updateUI(QByteArray)), this, SLOT(update())); //Récupération des signals envoyés par le robot
}

//Destructeur
MainWindow::~MainWindow()
{
    delete ui;
}

/*
 * BOUTONS
*/
void MainWindow::on_bt_connect_clicked() //Bt connect et disconnect
{
    count++;//Compteur
    if(count & 1){ //Si impair = connexion
      robot.doConnect();
      ui->bt_connect->setStyleSheet("border-image: url(:on.png)");

    }
    else{   //Si pair = deconnexion
      ui->bt_connect->setStyleSheet("border-image: url(:off.png)");
      robot.disConnect();
    }
}

//Bt haut roues robot
void MainWindow::on_bt_haut_clicked()
{
    robot.Avancer();
}

 //Bt bas roues robot
void MainWindow::on_bt_bas_clicked()
{
    robot.Reculer();
}

//Bt droite roues robot
void MainWindow::on_bt_right_clicked()
{
    robot.Droite();
}

//Bt gauche roues robot
void MainWindow::on_bt_left_clicked()
{
    robot.Gauche();
}

//Bt stop des roues
void MainWindow::on_stop_clicked()
{
    robot.Stop();
}

///
/// Clavier
///
//Méthode pour les touches du clavier
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
    update();
    value = batLevel;
    ui->Batterie->setValue(value);
}

//Slider pour choisir la vitesse des roues
void MainWindow::on_horizontalSlider_sliderMoved(int position)
{
    robot.setVitesse(position);//Position du slider(entre 0-240) sera la vitesse des roues
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

/**
 * Déplacement caméra depuis le bouton sur l'interface vers le bas
 * @brief MainWindow::on_bt_bas_cam_clicked
 */
void MainWindow::on_bt_bas_cam_clicked()
{
    request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094853&group=1&value=120"));
    manager->get(request);
}

/**
 * Déplacement caméra depuis le bouton sur l'interface vers la gauche
 * @brief MainWindow::on_bt_gauche_cam_clicked
 */
void MainWindow::on_bt_gauche_cam_clicked()
{
    request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094852&group=1&value=120"));
    manager->get(request);
}

/**
 * Déplacement caméra depuis le bouton sur l'interface vers la droite
 * @brief MainWindow::on_bt_droite_cam_clicked
 */
void MainWindow::on_bt_droite_cam_clicked()
{
    request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094852&group=1&value=-120"));
    manager->get(request);
}

//Méthode récupérant les données envoyées par le robot
void MainWindow::update(){
    batterie = DataReceived[2];
}
