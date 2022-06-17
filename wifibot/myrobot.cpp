#include "myrobot.h"


MyRobot::MyRobot(QObject *parent) : QObject(parent) {
    DataToSend.resize(9);
    DataToSend[0] = 0xFF;
    DataToSend[1] = 0x07;
    DataToSend[2] = 0x0;
    DataToSend[3] = 0x0;
    DataToSend[4] = 0x0;
    DataToSend[5] = 0x0;
    DataToSend[6] = 0x0;
    DataToSend[7] = 0x0;
    DataToSend[8] = 0x0;
    DataReceived.resize(21);
    TimerEnvoi = new QTimer();
    // setup signal and slot
    connect(TimerEnvoi, SIGNAL(timeout()), this, SLOT(MyTimerSlot())); //Send data to wifibot timer

    _vitesse = 120;
}


void MyRobot::doConnect() {
    socket = new QTcpSocket(this); // socket creation
    connect(socket, SIGNAL(connected()),this, SLOT(connected()));
    connect(socket, SIGNAL(disconnected()),this, SLOT(disconnected()));
    connect(socket, SIGNAL(bytesWritten(qint64)),this, SLOT(bytesWritten(qint64)));
    connect(socket, SIGNAL(readyRead()),this, SLOT(readyRead()));
    qDebug() << "connecting..."; // this is not blocking call
    //socket->connectToHost("LOCALHOST", 15020);
    socket->connectToHost("192.168.1.106", 15020); // connection to wifibot
    // we need to wait...
    if(!socket->waitForConnected(5000)) {
        qDebug() << "Error: " << socket->errorString();
        return;
    }
    TimerEnvoi->start(75);

}

void MyRobot::disConnect() {
    TimerEnvoi->stop();
    socket->close();
}

void MyRobot::connected() {
    qDebug() << "connected..."; // Hey server, tell me about you.
}

void MyRobot::disconnected() {
    qDebug() << "disconnected...";
}

void MyRobot::bytesWritten(qint64 bytes) {
    qDebug() << bytes << " bytes written...";
}

void MyRobot::readyRead() {
    qDebug() << "reading..."; // read the data from the socket
    DataReceived = socket->readAll();
    emit updateUI(DataReceived);
}

void MyRobot::MyTimerSlot() {
    qDebug() << "Timer...";
    while(Mutex.tryLock());
    socket->write(DataToSend);
    Mutex.unlock();
}

//Envoie données pour avancer
void MyRobot::Avancer() {
        DataToSend[0] = 0xFF;
        DataToSend[1] = 0x07;
        DataToSend[2] = _vitesse; // Vitesse gauche
        DataToSend[3] = 0x0; // pas touche
        DataToSend[4] = _vitesse; // Vitesse droite
        DataToSend[5] = 0x0; // pas touche
        DataToSend[6] = 0x50; // Roues gauche et droite avancent

        short Crc= Crc16(DataToSend, 7) ;
        DataToSend[7] = char(Crc); // CRC
        DataToSend[8] = char(Crc>>8); // CRC
}

//Envoie données pour reculer
void MyRobot::Reculer() {

    DataToSend[0] = 0xFF;
    DataToSend[1] = 0x07;
    DataToSend[2] = _vitesse; // Vitesse gauche
    DataToSend[3] = 0x0; // pas touche
    DataToSend[4] = _vitesse; // Vitesse droite
    DataToSend[5] = 0x0; // pas touche
    DataToSend[6] = 0x0; // Roues gauche et droite reculent

    short Crc= Crc16(DataToSend, 7) ;
    DataToSend[7] = char(Crc); // CRC
    DataToSend[8] = char(Crc>>8); // CRC

}

//Envoie données pour tourner à gauche
void MyRobot::Gauche() {

    DataToSend[0] = 0xFF;
    DataToSend[1] = 0x07;
    DataToSend[2] = _vitesse; // Vitesse gauche
    DataToSend[3] = 0x0; // pas touche
    DataToSend[4] = _vitesse; // Vitesse droite
    DataToSend[5] = 0x0; // pas touche
    DataToSend[6] = 0x10; // Roues droite avancent roues gauche reculent
    short Crc= Crc16(DataToSend, 7) ;
    DataToSend[7] = char(Crc); // CRC
    DataToSend[8] = char(Crc>>8); // CRC

}

//Envoie données pour tourner à droite
void MyRobot::Droite() {

    DataToSend[0] = 0xFF;
    DataToSend[1] = 0x07;
    DataToSend[2] = _vitesse; // Vitesse gauche
    DataToSend[3] = 0x0; // pas touche
    DataToSend[4] = _vitesse; // Vitesse droite
    DataToSend[5] = 0x0; // pas touche
    DataToSend[6] = 0x40; // Roues droite reculent et roues gauche avancent
    short Crc= Crc16(DataToSend, 7) ;
    DataToSend[7] = char(Crc); // CRC
    DataToSend[8] = char(Crc>>8); // CRC

}

//Méthode faisant le CRC des 7 premières données
 short MyRobot::Crc16(QByteArray Adresse_tab , int Taille_max)
{
unsigned int  Crc = 0xFFFF;
unsigned int Polynome = 0xA001;
unsigned int CptOctet = 0;
unsigned int CptBit = 0;
unsigned int Parity= 0;
 Crc = 0xFFFF;
 Polynome = 0xA001;
for ( CptOctet= 1 ; CptOctet < Taille_max ; CptOctet++)
 {
 Crc ^= unsigned char(Adresse_tab [CptOctet]) ;
 for ( CptBit = 0; CptBit <= 7 ; CptBit++)
 {
 Parity= Crc;
 Crc >>= 1;
 if (Parity%2 == true) Crc ^= Polynome;
 }
 }
return(Crc);
}

 //Envoie données pour stopper toutes les roues
 void MyRobot::Stop(){

     DataToSend[0] = 0xFF;
     DataToSend[1] = 0x07;
     DataToSend[2] = 0x0; // Vitesse gauche
     DataToSend[3] = 0x0; // pas touche
     DataToSend[4] = 0x0; // Vitesse droite
     DataToSend[5] = 0x0; // pas touche
     DataToSend[6] = 0x50; // Roues droite et roues gauche
     short Crc= Crc16(DataToSend, 7) ;
     DataToSend[7] = char(Crc); // CRC
     DataToSend[8] = char(Crc>>8); // CRC
 }

 //Paramétrage de la vitesse
 void MyRobot::setVitesse(unsigned char vitesse){
     _vitesse = vitesse;
 }

 //Retourne la vitesse actuelle
 int MyRobot::showvitesse(){
     return _vitesse ;
 }

 //Retourne la batterie du robot
 int MyRobot::getBatterie(){
     unsigned char batterie;
     batterie=DataReceived[2];
     batterie=1.754*batterie-221; //126-183
     return batterie;
 }

 //Récupère les données du capteur IR avant droit
 int MyRobot::get_irAvD(){
     unsigned char IR = DataReceived[11];
     int ir=(int)IR;
     return ir;
 }

 //Récupère les données du capteur IR arrière gauche
 int MyRobot::get_irArG(){
     unsigned char IR = DataReceived[12];
     int ir =(int)IR;
     return ir;
 }

 //Récupère les données du capteur IR arrière droit
 int MyRobot::get_irArD(){
     unsigned char IR = DataReceived[4];
     int ir=(int)IR;
     return ir;
 }

 //Récupère les données du capteur IR avant gauche
 int MyRobot::get_irAvG(){
     unsigned char IR = DataReceived[3];
     int ir=(int)IR;
     return ir;
 }

 //Stop les roues du robot à l'approche d'un obstacle proche
 void MyRobot::stopIR(){
    int ir0= get_irAvG();
    int ir1= get_irAvD();
    int ir2= get_irArD();

    if(ir0 && ir1 || ir2 < 100){
        Stop();
    }
 }

 double MyRobot::getVitesse(){
     unsigned long ticdr , ticg ;
     ticdr = ((((long)DataReceived[8]<<24))+(((long)DataReceived[7]<<16))+(((long)DataReceived[6]<<8))+((long)DataReceived[5]));
     ticg = ((((long)DataReceived[16]<<24))+(((long)DataReceived[15]<<16))+(((long)DataReceived[14]<<8))+((long)DataReceived[13]));

     unsigned long diff1 = ticdr - tics_dr_prec ;
     tics_dr_prec = ticdr ;

     unsigned long diff2 = ticg - tics_g_prec ;
     tics_g_prec = ticg ;

     double dist1 = (diff1/2448) *2*3.14*6.75*0.01 ;
     double dist2 = (diff2/2448)*2*3.14*6.75*0.01 ;
     double vitdr = dist1/0.075;
     double vitg = dist2/0.075;
     double vit = (vitdr+vitg)/2;
     qDebug()<< "La vitesse est" << vit;
     return vit ;

 }

