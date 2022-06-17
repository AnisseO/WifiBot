#ifndef MYROBOT_H
#define MYROBOT_H

#include <QObject>
#include <QTcpSocket>
#include <QAbstractSocket>
#include <QDebug>
#include <QTimer>
#include <QMutex>

class MyRobot : public QObject {
    Q_OBJECT
public:
    explicit MyRobot(QObject *parent = 0);
    void doConnect();
    void disConnect();
    QByteArray DataToSend;
    QByteArray DataReceived;
    QMutex Mutex;
    unsigned int _vitesse;
    unsigned long tics_dr_prec=0;
    unsigned long tics_g_prec =0;

signals:
    void updateUI(const QByteArray Data);

public slots:
    void connected();
    void disconnected();
    void bytesWritten(qint64 bytes);
    void readyRead();
    void MyTimerSlot();
    void Avancer();
    void Reculer();
    void Gauche();
    void Droite();
    void Stop();
    int getBatterie();
    void setVitesse(unsigned char vitesse);
    int showvitesse();
    int get_irAvD();
    int get_irArD();
    int get_irAvG();
    int get_irArG();
    void stopIR();
    double getVitesse();
    short MyRobot::Crc16(QByteArray Adresse_tab , int Taille_max) ;

private:
    QTcpSocket *socket;
    QTimer *TimerEnvoi;
};

#endif // MYROBOT_H
