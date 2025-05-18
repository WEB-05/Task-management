#include "widget.h"
#include "email.h"
#include "fun.h"
#include<time.h>
#include<set>

#include "ui_widget.h"


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
    send_email("webrunpku","HZ4suXv6ZEvMeDzp","webrunpku@126.com","2400013226@stu.pku.edu.cn"
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























