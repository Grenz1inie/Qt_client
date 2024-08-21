/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *button_login;
    QLineEdit *input_box_id;
    QLineEdit *input_box_pwd;
    QLabel *tip_id_not_null;
    QLabel *tip_pwd_not_null;
    QPushButton *button_reg;
    QPushButton *button_pwd_fgt;
    QLabel *label_tip_status;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->setEnabled(true);
        Widget->resize(231, 186);
        Widget->setMinimumSize(QSize(231, 179));
        button_login = new QPushButton(Widget);
        button_login->setObjectName("button_login");
        button_login->setGeometry(QRect(10, 130, 101, 31));
        QFont font;
        font.setBold(true);
        button_login->setFont(font);
        button_login->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        button_login->setAutoRepeat(false);
        button_login->setAutoDefault(false);
        button_login->setFlat(false);
        input_box_id = new QLineEdit(Widget);
        input_box_id->setObjectName("input_box_id");
        input_box_id->setGeometry(QRect(10, 20, 211, 31));
        input_box_id->setFont(font);
        input_box_id->setAutoFillBackground(false);
        input_box_pwd = new QLineEdit(Widget);
        input_box_pwd->setObjectName("input_box_pwd");
        input_box_pwd->setGeometry(QRect(10, 70, 211, 31));
        input_box_pwd->setFont(font);
        input_box_pwd->setAutoFillBackground(false);
        input_box_pwd->setReadOnly(false);
        tip_id_not_null = new QLabel(Widget);
        tip_id_not_null->setObjectName("tip_id_not_null");
        tip_id_not_null->setGeometry(QRect(20, 0, 121, 16));
        tip_id_not_null->setTextFormat(Qt::TextFormat::PlainText);
        tip_pwd_not_null = new QLabel(Widget);
        tip_pwd_not_null->setObjectName("tip_pwd_not_null");
        tip_pwd_not_null->setGeometry(QRect(20, 50, 121, 16));
        tip_pwd_not_null->setTextFormat(Qt::TextFormat::PlainText);
        button_reg = new QPushButton(Widget);
        button_reg->setObjectName("button_reg");
        button_reg->setGeometry(QRect(120, 130, 101, 31));
        button_reg->setFont(font);
        button_reg->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        button_reg->setAutoRepeat(false);
        button_reg->setAutoDefault(false);
        button_reg->setFlat(false);
        button_pwd_fgt = new QPushButton(Widget);
        button_pwd_fgt->setObjectName("button_pwd_fgt");
        button_pwd_fgt->setGeometry(QRect(170, 100, 61, 20));
        QFont font1;
        font1.setPointSize(7);
        font1.setBold(false);
        font1.setUnderline(true);
        button_pwd_fgt->setFont(font1);
        button_pwd_fgt->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        button_pwd_fgt->setAutoRepeat(false);
        button_pwd_fgt->setAutoDefault(false);
        button_pwd_fgt->setFlat(true);
        label_tip_status = new QLabel(Widget);
        label_tip_status->setObjectName("label_tip_status");
        label_tip_status->setGeometry(QRect(10, 170, 101, 16));

        retranslateUi(Widget);

        button_login->setDefault(false);
        button_reg->setDefault(false);
        button_pwd_fgt->setDefault(false);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\347\231\273\345\205\245", nullptr));
        button_login->setText(QCoreApplication::translate("Widget", "\347\231\273\345\205\245", nullptr));
        input_box_id->setPlaceholderText(QCoreApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245ID...", nullptr));
        input_box_pwd->setPlaceholderText(QCoreApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201...", nullptr));
        button_reg->setText(QCoreApplication::translate("Widget", "\346\263\250\345\206\214", nullptr));
        button_pwd_fgt->setText(QCoreApplication::translate("Widget", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        label_tip_status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
