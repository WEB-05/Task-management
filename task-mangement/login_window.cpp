#include "login_window.h"
#include "ui_login_window.h"
#include "fun.h"
#include "widget.h"
#include <QStyleOption>
#include <iostream>
using namespace std;
#include "main_window.h"
#include "settings_window.h"

MainWindow* mainw;

Login_window::Login_window(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login_window)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);
}

Login_window::~Login_window()
{
    delete ui;
}

extern char err_buf[50];

//QObject::connect(button2,&QPushButton::clicked,Login_Window,&Widget::onButtonClicked_register);
void Login_window::on_button1_clicked()
{
    QString username = ui->textInput1->text();  // 假设text1是QLineEdit
    QString password = ui->textInput2->text();
    int result=login(username.toStdString(),password.toStdString(),err_buf);
    if(result < 0){//显示一系列的错误提醒
        Widget *info_window = new Widget();
        QMessageBox::warning(info_window,"提醒",err_buf);
    }
    else{//进入主菜单
        emit login_success();
        mainw=new MainWindow(nullptr);
        mainw->show();
    }
}


void Login_window::on_pushButton_pressed()
{
    ui->textInput2->setEchoMode( QLineEdit::Normal);
}


void Login_window::on_pushButton_released()
{
    ui->textInput2->setEchoMode( QLineEdit::Password);
}


void Login_window::on_button2_clicked()
{
    emit goto_signup();
    ui->textInput2->clear();
    ui->textInput1->clear();
}

