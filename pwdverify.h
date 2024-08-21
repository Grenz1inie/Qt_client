#ifndef PWDVERIFY_H
#define PWDVERIFY_H

#include <QObject>
#include <QTcpSocket>

class PwdVerify : public QObject
{
    Q_OBJECT
public:
    QTcpSocket* m_socket;
    explicit PwdVerify(QObject *parent = nullptr);

public slots:
    void connectToHost(void);

signals:
};

#endif // PWDVERIFY_H
