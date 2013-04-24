#ifndef LOBBY_H
#define LOBBY_H

#include <QWidget>
#include <QUdpSocket>
#include <QString>
#include <QNetworkInterface>

namespace Ui {
class Lobby;
}

class Lobby : public QWidget
{
    Q_OBJECT
    
public:
    explicit Lobby(QWidget *parent = 0);
    ~Lobby();
    void synchroniseWithServer();
    
private:
    void _startNetworkConnection();


    Ui::Lobby *_ui;
    QUdpSocket _udpSocket;
    QHostAddress _multicastAddress;
    QHostAddress _serverAddress;
    QString _id;
    qint16 _localPort;
    qint16 _serverPort;
    qint16 _packetsEmited;

signals:
    void lobbyServerFound();
    void serverLost();

public slots:
    void processDatagram();
    void readServerSync();
    void announce();
    void acknowledgeServer();
    void resetGlobalState();
};

#endif // LOBBY_H