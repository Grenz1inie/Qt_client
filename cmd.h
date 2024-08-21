#ifndef CMD_H
#define CMD_H


#include <QObject>
#include <QNetworkInterface>
#include <QTcpSocket>

class CMD : public QObject
{
    Q_OBJECT
public:
    QTcpSocket* m_socket;
    explicit CMD(QObject *parent = nullptr);
    void connectToServer(void);
public slots:

signals:
};

#endif // CMD_H
