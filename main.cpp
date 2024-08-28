#include "mainwindow.h"
#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    MainWindow mw(w.m_socket,&w);
    /*登入成功就展示主窗口*/
    QObject::connect(&w,&Widget::loginSuccess,&mw,[&mw](){mw.show();});
    w.show();
    return a.exec();
}
