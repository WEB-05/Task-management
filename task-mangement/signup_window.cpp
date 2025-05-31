#include "signup_window.h"
#include "ui_signup_window.h"
#include "fun.h"
#include "widget.h"

Signup_window::Signup_window(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Signup_window)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);
}

Signup_window::~Signup_window()
{
    delete ui;
}

void Signup_window::on_pushButton_pressed()
{
    ui->textInput2->setEchoMode( QLineEdit::Normal);
}



void Signup_window::on_pushButton_released()
{
    ui->textInput2->setEchoMode( QLineEdit::Password);
}

extern char err_buf[50];
void Signup_window::on_button1_clicked()
{
    QString username = ui->textInput1->text();  // 假设text1是QLineEdit
    QString password = ui->textInput2->text();
    bool result = signup(username.toStdString(),password.toStdString(),err_buf);
    if(result==0){//用户名已存在
        Widget *info_window = new Widget();
        QMessageBox::information(info_window,"提醒",err_buf);
    }
    else{//进入登录界面
        QMessageBox::information(this,"提醒","注册成功！");
        emit goto_login();
        ui->textInput2->clear();
        ui->textInput1->clear();
    }
}


void Signup_window::on_button2_clicked()
{
    emit goto_login();
    ui->textInput2->clear();
    ui->textInput1->clear();
}

