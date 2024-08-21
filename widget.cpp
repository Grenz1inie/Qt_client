#include "widget.h"
#include "ui_widget.h"
#include "pwdverify.h"

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

    /*绑定 连接信号 和 状态指示*/
    connect(m_socket,&QTcpSocket::connected,NULL,[this](){
        ui->label_tip_status->setText("服务器已连接");
    });

    /*连接服务器*/
    m_socket->connectToHost(QHostAddress("127.0.0.1"),(unsigned short)10001);

    /*初始化本地数据库*/
    Sqlite* sqliteDataBase=new Sqlite(this);


}

Widget::~Widget()
{
    delete ui;
}


/*----------------------登入相关----------------------*/

/*登入按钮*/
void Widget::on_button_login_released(bool flag)
{
    if(flag)
    {
        ui->label_tip_status->setText("服务器连接成功");
    }
    else
    {
        ui->label_tip_status->setText("服务器连接失败");
    }
}

