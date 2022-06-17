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

 int MyRobot::getBatterie()
 {
     unsigned char batterie = DataReceived[2];
     return batterie;
 }

 void MyRobot::setVitesse(int vitesse){
     _vitesse = vitesse;
     qDebug() << "Vitesse choisie : " << _vitesse;
 }

