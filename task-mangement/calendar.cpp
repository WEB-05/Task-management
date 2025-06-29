#include "calendar.h"
#include "ui_calendar.h"
#include "customcalendar.h"
#include<map>
#include<vector>
#include <QVBoxLayout>
#include<QGroupBox>
#include<QString>
using namespace std;

extern task tasks[MAX_TASK];
map<QDate,int> sche;

Calendar::Calendar(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Calendar)
{
    ui->setupUi(this);
}

Calendar::~Calendar()
{
    delete ui;
}

void Calendar::init()
{
    sche.clear();
    for(int i=0;i<task::task_number_vec;i++)
    {
        if (!tasks[i].valid)
        {
            continue;
        }
        struct tm endtime=tasks[i].get_endtime();
        QDate t=QDate(endtime.tm_year+1900,endtime.tm_mon+1,endtime.tm_mday);
        int mode=tasks[i].get_mode();
        if(sche.find(t)!=sche.end())
        {
            sche[t]|=mode;
        }
        else
        {
            sche[t]=mode;
        }
    }
    ui->calendarWidget->update();
    QDate date=ui->calendarWidget->selectedDate();
    if(sche.find(date)!=sche.end())
    {
        ui->pushButton_7->setEnabled(true);
    }
    else
    {
        ui->pushButton_7->setEnabled(false);
    }
    init_task(0);
    return;
}

void Calendar::on_pushButton_clicked()
{
    emit goto_demo();
}


void Calendar::on_pushButton_2_clicked()
{
    emit goto_setnew();
}

void Calendar::on_pushButton_3_clicked()
{
    emit goto_feedback();
}

void Calendar::on_pushButton_4_clicked()
{
    emit goto_settings();
}


void Calendar::on_pushButton_5_clicked()
{
    emit go_exit();
}

void Calendar::on_pushButton_6_clicked()
{
    init();
}

void Calendar::on_pushButton_7_clicked()
{
    emit goto_date(ui->calendarWidget->selectedDate());
}


void Calendar::on_calendarWidget_clicked(const QDate &date)
{
    if(sche.find(date)!=sche.end())
    {
        ui->pushButton_7->setEnabled(true);    
    }
    else
    {
        ui->pushButton_7->setEnabled(false);
    }
    init_task(1);
}

void Calendar::init_task(int way=1)
{
    if(newContent&&way)
    {
        delete newContent;
    }
    newContent=nullptr;
    newContent = new QWidget(ui->taskarea);
    ui->taskarea->setWidget(newContent);
    ui->taskarea->setWidgetResizable(true);
    new QVBoxLayout(newContent);

    vector<task> temp;
    QDate sel=ui->calendarWidget->selectedDate();
    for(int i=0;i<task::task_number_vec;i++)
    {
        if(!tasks[i].valid)
        {
            continue;
        }
        struct tm endtime=tasks[i].get_endtime();
        QDate t=QDate(endtime.tm_year+1900,endtime.tm_mon+1,endtime.tm_mday);
        if(sel==t)
        {
            temp.push_back(tasks[i]);
        }
    }
    int l=temp.size();
    if(l==0)
    {
        QLabel *nameLabel = new QLabel("当日无任务！", newContent);
        nameLabel->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        nameLabel->setStyleSheet("QLabel { font-size: 22px; font-weight: bold; }");
        newContent->layout()->addWidget(nameLabel);
        newContent->adjustSize();
        return;
    }
    sort(temp.begin(),temp.end(),sort_times);
    for (int i = 0; i < l; ++i) {
        QGroupBox *taskBox = new QGroupBox(newContent);
        QHBoxLayout *boxLayout = new QHBoxLayout(taskBox);

        QLabel *nameLabel = new QLabel("任务名称:  " + QString::fromStdString(temp[i].get_title()), taskBox);
        string s;
        switch(temp[i].get_mode())
        {
            case 1:s="已完成！";break;
            case 2:s="已过期！";break;
            case 4:s="未完成！";break;
        };
        QLabel *addrLabel = new QLabel("完成状态:  " + QString::fromStdString(s), taskBox);
        nameLabel->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
        addrLabel->setAlignment(Qt::AlignRight | Qt::AlignVCenter);

        switch(temp[i].get_mode())
        {
            case 1:addrLabel->setStyleSheet("QLabel { color: green; font-weight: bold; }");break;
            case 2:addrLabel->setStyleSheet("QLabel { color: red; font-weight: bold; }");break;
            case 4:addrLabel->setStyleSheet("QLabel { color: black; font-weight: bold; }");break;
        };

        nameLabel->setIndent(0);
        addrLabel->setIndent(0);

        nameLabel->setStyleSheet("QLabel { padding: 0px; }");
        boxLayout->addWidget(nameLabel);
        boxLayout->addWidget(addrLabel);
        newContent->layout()->addWidget(taskBox);
        newContent->adjustSize();
    }

    // 设置布局和滚动区域
    newContent->adjustSize();
}


bool sort_times(const task& a,const task& b)
{
    int ma=a.get_mode();
    int mb=b.get_mode();
    if(ma==OVERDUE&&mb!=COMPLETE)
    {
        return true;
    }
    else if(ma!=COMPLETE&&mb==OVERDUE)
    {
        return false;
    }
    else if(ma==COMPLETE&&mb!=COMPLETE)
    {
        return false;
    }
    else if(ma!=COMPLETE&&mb==COMPLETE)
    {
        return true;
    }
    struct tm aa=a.get_endtime();
    struct tm bb=b.get_endtime();
    int t=comparetim(aa,bb,1);
    if(t==-1)
    {
        return a.get_urgent()>b.get_urgent();
    }
    else
    {
        return t;
    }
}
