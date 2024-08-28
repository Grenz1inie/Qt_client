#ifndef WIDGET_H
#define WIDGET_H

#include"sqlite.h"
#include <QTcpSocket>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    QTcpSocket* m_socket;
    Widget(QWidget *parent = nullptr);
    ~Widget();

signals:
    void loginSuccess();
private slots:
    void on_button_login_released();

    void on_pushButton_released();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
