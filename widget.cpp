#include "widget.h"
#include "ui_widget.h"

#include"clientthread.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // /*创建线程*/
    // QThread* m_thread=new QThread;

    // /*创建线程工作对象*/
    // PwdVerify * m_worker=new PwdVerify;

    // /*绑定线程和工作对象*/
    // m_worker->moveToThread((m_thread));
    
    // /*绑定连接成功的信号与状态标签*/
    // connect(m_worker,&PwdVerify::serverConnected,NULL,[this](){
    //     ui->label_tip_status->setText("服务器已连接");
    // });


    /*创建套接字*/
    m_socket=new QTcpSocket(this);

    /*初始化登入按钮不可用*/
    ui->button_login->setDisabled(true);

    /*绑定 连接信号 和 状态指示*/
    connect(m_socket,&QTcpSocket::connected,this,[this](){
        ui->label_tip_status->setText("服务器已连接");
        ui->button_login->setEnabled(true);
    });

    /*绑定 断联信号 和 状态指示*/
    connect(m_socket,&QTcpSocket::disconnected,this,[this](){
        ui->label_tip_status->setText("服务器未连接");
        ui->button_login->setEnabled(false);
    });

    /*连接服务器*/
    m_socket->connectToHost(QHostAddress("127.0.0.1"),(unsigned short)10001);

    /*创建副线程,用于处理服务器端发来的数据*/
    QThread* s_thread=new QThread;

    /*创建多线程工作对象*/
    clientThread* worker=new clientThread(m_socket);

    connect(worker,&clientThread::loginSuccess,this,[=](){
        /*隐藏登入窗口*/
        this->hide();
        emit loginSuccess();
    });

    /*将工作对象移入副线程*/
    worker->moveToThread(s_thread);

    /*启动副线程*/
    s_thread->start();

    // /*初始化本地数据库*/
    // Sqlite* sqliteDataBase=new Sqlite(this);


}

Widget::~Widget()
{
    delete ui;
}


/*----------------------登入相关----------------------*/

/*登入按钮*/
void Widget::on_button_login_released()
{
    QByteArray data=(ui->input_box_id->text()+'\n'+ui->input_box_pwd->text()).toUtf8();

    /*发送账号和密码*/
    m_socket->write(data);

}


void Widget::on_pushButton_released()
{
    /*连接服务器*/
    m_socket->connectToHost(QHostAddress("127.0.0.1"),(unsigned short)10001);
}

