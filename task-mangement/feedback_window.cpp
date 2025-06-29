#include "feedback_window.h"
#include "ui_feedback_window.h"
#include "fun.h"
#include <Qstring>

Feedback_Window::Feedback_Window(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Feedback_Window)
{
    ui->setupUi(this);
}

Feedback_Window::~Feedback_Window()
{
    delete ui;
}

void Feedback_Window::on_pushButton_clicked()
{
    emit goto_demo();
}


void Feedback_Window::on_pushButton_2_clicked()
{
    emit goto_setnew();
}


void Feedback_Window::on_pushButton_4_clicked()
{
    emit goto_settings();
}


void Feedback_Window::on_pushButton_5_clicked()
{
    emit go_exit();
}


void Feedback_Window::on_pushButton_3_clicked()
{
    init();
}

extern int overdue;
extern int complete_num;

bool Feedback_Window::check_first(){
    if(overdue) return false;
    for(int i=0;i<task::task_number_vec;i++){
        if(tasks[i].valid){
            if(tasks[i].get_mode()!=COMPLETE) return false;    
        }
    }
    return true;
}

bool Feedback_Window::check_second(){
    int type1=0,type2=0,type3=0,type4=0,type5=0;
    for(int i=0;i<task::task_number_vec;i++){
        if(tasks[i].valid){
            if(tasks[i].get_mode()==COMPLETE){
                switch(tasks[i].get_type()){
                    case STUDY:
                    {
                        type1++;
                        break;
                    }
                    case WORK:
                    {
                        type2++;
                        break;
                    }
                    case LIFE:
                    {
                        type3++;
                        break;
                    }
                    case VOLUNTEER:
                    {
                        type4++;
                        break;
                    }
                    case FAMILY:
                    {
                        type5++;
                        break;
                    }
                }
            }
        }
    }
    int all=0;
    if(type1) all++;
    if(type2) all++;
    if(type3) all++;
    if(type4) all++;
    if(type5) all++;
    if(all>=3) return true;
    return false;
}

bool Feedback_Window::check_third(){
    for(int i=0;i<task::task_number_vec;i++){
        if(tasks[i].valid){
            if(tasks[i].get_mode()==COMPLETE) return false;
        }
    }
    if(overdue>=3) return true;
    return false;
}

void Feedback_Window::init()
{
    ui->task_overdue->display(overdue);
    ui->task_done->display(complete_num);
    ui->task_sum->display(task::task_number);
    ui->task_curr->display(task::real_task_number);

    if(check_first())
    {
        ui->label_01->setText("已达成");
        ui->label_01->setStyleSheet("color:black");
        ui->efficiency->setStyleSheet("color:black");
    }
    else
    {
        ui->label_01->setText("未达成");
        ui->label_01->setStyleSheet("color:#707070");
        ui->efficiency->setStyleSheet("color:#707070");
    }
    if(check_second())
    {
        ui->label_02->setText("已达成");
        ui->label_02->setStyleSheet("color:black");
        ui->art_of_management->setStyleSheet("color:black");
    }
    else
    {
        ui->label_02->setText("未达成");
        ui->label_02->setStyleSheet("color:#707070");
        ui->art_of_management->setStyleSheet("color:#707070");
    }
    if(check_third()){
        ui->god->setVisible(true);
        ui->god_2->setVisible(false);
        ui->label_03->setText("已达成");
        ui->label_03->setStyleSheet("color:black");
    }
    else
    {
        ui->god->setVisible(false);
        ui->god_2->show();
        ui->label_03->setText("未达成");
        ui->label_03->setStyleSheet("color:#707070");
    }
}

void Feedback_Window::on_pushButton_6_clicked()
{
    emit go_calendar();
}

