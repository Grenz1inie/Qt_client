#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QTcpSocket* m_socket,QWidget *parent)
    : QMainWindow(parent),m_socket(m_socket)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
    delete parent();
}
