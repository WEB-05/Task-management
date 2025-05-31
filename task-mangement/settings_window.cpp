#include "settings_window.h"
#include "ui_settings_window.h"
#include "fun.h"
#include "Widget.h"
#include <QWidget>
#include <QMessageBox>
#include <QPalette>

extern char err_buf[50];
extern QWidget* overlay;
extern int light;

Settings_Window::Settings_Window(QWidget *parent): QWidget(parent), ui(new Ui::Settings_Window)
{
    ui->setupUi(this);

    int r=curr_user.get_color().r;
    int b=curr_user.get_color().b;
    int g=curr_user.get_color().g;
    if(!(r==0&&b==0&&g==0))
    {
        QLinearGradient gradient(0, 0, width(), height());
        gradient.setColorAt(1, QColor(r,g,b));
        gradient.setColorAt(0, Qt::white);

        QPalette palette;
        palette.setBrush(QPalette::Window, gradient);
        setPalette(palette);     // 窗口背景
        qApp->setPalette(palette);
        ui->horizontalSlider_6->setValue(r);
        ui->horizontalSlider_5->setValue(g);
        ui->horizontalSlider_3->setValue(b);
    }
}

Settings_Window::~Settings_Window()
{
    delete ui;
}

extern bool question(QWidget* p,QString q);

bool Settings_Window::test()
{
    int r=ui->horizontalSlider_6->value();
    int g=ui->horizontalSlider_5->value();
    int b=ui->horizontalSlider_3->value();
    colors col=curr_user.get_color();
    if(ui->lineEdit_7->text().isEmpty()&&ui->lineEdit_9->text().isEmpty()&&ui->lineEdit_11->text().isEmpty()&&
        ui->lineEdit_13->text().isEmpty()&&r==col.r&&g==col.g&&b==col.b)
    {
        return 1;
    }
    else
    {
        QString q="有修改未保存，是否离开？";
        return question(this,q);
    }
}

void Settings_Window::init()
{
    colors col=curr_user.get_color();
    ui->horizontalSlider_6->setValue(col.r);
    ui->horizontalSlider_5->setValue(col.g);
    ui->horizontalSlider_3->setValue(col.b);
    ui->lineEdit_7->clear();
    ui->lineEdit_9->clear();
    ui->lineEdit_11->clear();
    ui->lineEdit_13->clear();
}

void Settings_Window::on_pushButton_clicked()
{
    if(!test())return;
    emit goto_demo();
}


void Settings_Window::on_pushButton_2_clicked()
{
    if(!test())return;
    emit goto_setnew();
}


void Settings_Window::on_pushButton_3_clicked()
{
    if(!test())return;
    emit goto_feedback();
}


void Settings_Window::on_pushButton_5_clicked()
{
    if(!test())return;
    emit go_exit();
}


//修改用户名
void Settings_Window::on_pushButton_7_clicked()
{
    QString username = ui->lineEdit_7->text();
    std::string name_=username.toStdString();
    bool temp=curr_user.change_name(name_,err_buf);
    QMessageBox::information(this,"提醒",err_buf);
    if(temp)
        ui->lineEdit_7->clear();
}


//修改密码
void Settings_Window::on_pushButton_6_clicked()
{
    QString password = ui->lineEdit_9->text();
    std::string password_=password.toStdString();
    bool temp=curr_user.change_password(password_,err_buf);
    QMessageBox::information(this,"提醒",err_buf);
    if(temp)
        ui->lineEdit_9->clear();
}





//亮度调整new

void Settings_Window::on_horizontalSlider_4_valueChanged(int value)
{

    light=value;
    QString style = QString("background-color: rgba(0, 0, 0, %1);").arg((80-value)/100.0);
    overlay->setStyleSheet(style);
}

//R new
void Settings_Window::on_horizontalSlider_6_valueChanged(int value)
{
    int r=value;
    int g=ui->horizontalSlider_5->value();
    int b=ui->horizontalSlider_3->value();
    QString style = QString("background-color: rgb(%1, %2, %3);border: 1.3px solid black; ").arg(r).arg(g).arg(b);
    ui->label_color->setStyleSheet(style);
}

//G new
void Settings_Window::on_horizontalSlider_5_valueChanged(int value)
{
    int r=ui->horizontalSlider_6->value();
    int g=value;
    int b=ui->horizontalSlider_3->value();
    QString style = QString("background-color: rgb(%1, %2, %3);border: 1.3px solid black; ").arg(r).arg(g).arg(b);
    ui->label_color->setStyleSheet(style);
}


// B new
void Settings_Window::on_horizontalSlider_3_valueChanged(int value)
{
    int r=ui->horizontalSlider_6->value();
    int g=ui->horizontalSlider_5->value();
    int b=value;
    QString style = QString("background-color: rgb(%1, %2, %3);border: 1.3px solid black; ").arg(r).arg(g).arg(b);
    ui->label_color->setStyleSheet(style);
}


void Settings_Window::on_pushButton_10_clicked()
{
    int r=ui->horizontalSlider_6->value();
    int g=ui->horizontalSlider_5->value();
    int b=ui->horizontalSlider_3->value();
    curr_user.change_color(colors{r,g,b},err_buf);
    QLinearGradient gradient(0, 0, width(), height());
    gradient.setColorAt(1, QColor(r,g,b));
    gradient.setColorAt(0, Qt::white);

    QPalette palette;
    palette.setBrush(QPalette::Window, gradient);
    setPalette(palette);      // 窗口背景
    qApp->setPalette(palette);
}


void Settings_Window::on_pushButton_11_pressed()
{
    ui->lineEdit_9->setEchoMode(QLineEdit::Normal);
}


void Settings_Window::on_pushButton_11_released()
{
    ui->lineEdit_9->setEchoMode(QLineEdit::Password);
}


void Settings_Window::on_pushButton_12_pressed()
{
    ui->lineEdit_13->setEchoMode(QLineEdit::Normal);
}




void Settings_Window::on_pushButton_12_released()
{
    ui->lineEdit_13->setEchoMode(QLineEdit::Password);
}

