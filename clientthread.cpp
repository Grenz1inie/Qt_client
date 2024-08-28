#include "clientthread.h"

#include <QJsonDocument>
#include <QJsonObject>

clientThread::clientThread(QObject *parent)
    : QObject{parent}
{
    connect(m_socket,&QTcpSocket::readyRead,this,[=](){
        //接收json数据
        QJsonObject message = QJsonDocument::fromJson(m_socket->readAll()).object();

        // 根据类型处理消息
        if (message["type"].toString() == "signal")
        {
            QString content = message["content"].toString();
            if(message["content"].toString()=="loginSuccess")
            {
                emit loginSuccess();
            }
        }
        else if(message["type"].toString() == "message")
        {
            emit getMsg();
        }
    });

}
