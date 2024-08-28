#ifndef CLIENTTHREAD_H
#define CLIENTTHREAD_H

#include <QObject>
#include <QTcpSocket>

class clientThread : public QObject
{
    Q_OBJECT
public:
    QTcpSocket* m_socket;
    explicit clientThread(QObject *parent = nullptr);

signals:
    void loginSuccess();
    void getMsg();
};

#endif // CLIENTTHREAD_H
