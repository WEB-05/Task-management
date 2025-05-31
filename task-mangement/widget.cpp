#include "widget.h"
#include "email.h"
#include "fun.h"
#include<time.h>
#include<set>
#include<iostream>
using namespace std;

#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    this->setAttribute(Qt::WA_DeleteOnClose);
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::doALARM()
{
    if(alarm_work)
    {
        time_t current=time(NULL);
        struct tm *tim=localtime(&current);
        while(!alarm_queue.empty())
        {
            alarm_qq t=*alarm_queue.begin();
            struct tm alatim=t.alarmtime;
            int k=(comparetim(*tim,alatim,0));
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

