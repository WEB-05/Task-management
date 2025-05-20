#include "widget.h"
#include "email.h"
#include "fun.h"
#include<time.h>
#include<set>
#include "Widget.h"

#include "ui_widget.h"

extern char err_buf[100];


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::doALARM_test()
{
    Widget *secondWindow = new Widget(); 
    secondWindow->setWindowTitle("Second Window");
    secondWindow->show();
    send_email("webrunpku","HZ4suXv6ZEvMeDzp","webrunpku@126.com","2300017788@stu.pku.edu.cn"
    ,"提醒事项","提醒正文");
}

void Widget::doALARM()
{
    if(alarm_work)
    {
        time_t current=time(NULL);
        struct tm *tim=localtime(&current);
        while(1)
        {
            alarm_qq t=*alarm_queue.begin();
            struct tm alatim=t.alarmtime;
            int k=(comparetim(*tim,alatim,1));
            if(k>0)
            {
                break;
            }
            else if(k==0)
            {
                alarm_queue.erase(alarm_queue.begin());
            }
            else if(k==-1)
            {
                alarm_queue.erase(alarm_queue.begin());
                int id=t.alarm_id;
                alarms[alarm::id_to_location[id]].do_alarm();
            }
        }
    }
}

//槽函数
void Widget::onButtonClicked_login(const string &username,const string &password){
    int result=login(username,password,err_buf);
    if(result < 0){//显示一系列的错误提醒
        Widget *info_window = new Widget();
        QMessageBox::information(info_window,"提醒",err_buf);
    }
    else{//进入主菜单
        MainTable();
    }
}

void Widget::onButtonClicked_register(){
    RegisterTable();
}

void Widget::onButtonClicked_confirm(const string &username,const string &password,const colors &color){
    bool result = signup(username,password,err_buf,color);
    if(result==0){//用户名已存在
        Widget *info_window = new Widget();
        QMessageBox::information(info_window,"提醒",err_buf);
    }
    else{//进入登录界面
        LogInTable();
    }
}

void Widget::onButtonClicked_back(){
    LogInTable();
}



















