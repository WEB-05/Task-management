#include "demo_window.h"
#include "fun.h"
#include "ui_demo_window.h"
#include <QString>
#include "detailed.h"

int next_task=0;
int pre_task=-1;
int filt_type=63;
int filt_mode=7;
extern char err_buf[50];
extern int complete_num;

Demo_Window::Demo_Window(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Demo_Window)
{
    ui->setupUi(this);
    init(1);
}

void Demo_Window::init(int way=0)
{
    if(way)
    {
        if(ui->radioButton_2->isChecked())
        {
            sort_task(ENDTIME);
        }
        else if(ui->radioButton->isChecked())
        {
            sort_task(URGENT);
        }
    }
    update_task(err_buf);
    filter(filt_type,filt_mode,err_buf);
    ui->last_page_button->setEnabled(false);
    pre_task=-1;
    int total=task::task_number_vec;
    left_task=0;
    show_left();
    show_right();
    while(left_task<total&&(!tasks[left_task].valid||!tasks[left_task].show))
    {
        left_task++;
    }
    if(left_task==total)
    {
        hide_left();
        hide_right();
        next_task=total;
        right_task=total;
        ui->next_page_button->setEnabled(false);
        return;
    }
    right_task=left_task+1;
    while(right_task<total&&(!tasks[right_task].valid||!tasks[right_task].show))
    {
        right_task++;
    }
    if(right_task==total)
    {
        hide_right();
        demo_task(left_task);
        ui->next_page_button->setEnabled(false);
        next_task=total;
    }
    else
    {
        demo_task(left_task);
        demo_task(right_task);
        next_task=right_task+1;
        while(next_task<total&&(!tasks[next_task].valid||!tasks[next_task].show))
        {
            next_task++;
        }
        if(next_task==total)
        {
            ui->next_page_button->setEnabled(false);
        }
        else
        {
            ui->next_page_button->setEnabled(true);
        }
    }
}

Demo_Window::~Demo_Window()
{
    delete ui;
}

extern char err_buf[50];
extern bool question(QWidget* p,QString q);



void Demo_Window::show_left(){
    ui->label->show();
    ui->label_9->show();
    ui->label_13->show();
    ui->label_15->show();
    ui->label_19->show();
    ui->label_5->show();
    ui->task_name1->show();
    ui->task_type1->show();
    ui->task_discription1->show();
    ui->urgency_degree1->show();
    ui->deadline1->show();
    ui->current_state1->show();
    ui->done_confirmed_button1->show();
    ui->remove_confirmed_button1->show();
    ui->pushButton_6->show();
}
void Demo_Window::hide_left(){
    ui->label->setVisible(false);
    ui->label_9->setVisible(false);
    ui->label_13->setVisible(false);
    ui->label_15->setVisible(false);
    ui->label_19->setVisible(false);
    ui->label_5->setVisible(false);
    ui->task_name1->setVisible(false);
    ui->task_type1->setVisible(false);
    ui->task_discription1->setVisible(false);
    ui->urgency_degree1->setVisible(false);
    ui->deadline1->setVisible(false);
    ui->current_state1->setVisible(false);
    ui->done_confirmed_button1->setVisible(false);
    ui->remove_confirmed_button1->setVisible(false);
    ui->pushButton_6->setVisible(false);
}
void Demo_Window::show_right(){
    ui->label_2->show();
    ui->label_10->show();
    ui->label_14->show();
    ui->label_17->show();
    ui->label_21->show();
    ui->label_6->show();
    ui->task_name2->show();
    ui->task_type2->show();
    ui->task_discription2->show();
    ui->urgency_degree2->show();
    ui->deadline2->show();
    ui->current_state2->show();
    ui->done_confirmed_button2->show();
    ui->remove_confirmed_button2->show();
    ui->pushButton_7->show();
}
void Demo_Window::hide_right(){
    ui->label_2->setVisible(false);
    ui->label_10->setVisible(false);
    ui->label_14->setVisible(false);
    ui->label_17->setVisible(false);
    ui->label_21->setVisible(false);
    ui->label_6->setVisible(false);
    ui->task_name2->setVisible(false);
    ui->task_type2->setVisible(false);
    ui->task_discription2->setVisible(false);
    ui->urgency_degree2->setVisible(false);
    ui->deadline2->setVisible(false);
    ui->current_state2->setVisible(false);
    ui->done_confirmed_button2->setVisible(false);
    ui->remove_confirmed_button2->setVisible(false);
    ui->pushButton_7->setVisible(false);
}
void Demo_Window::demo_task(int id){
    string title=tasks[id].get_title();
    string text=tasks[id].get_text();
    int type=tasks[id].get_type();
    int urgent=tasks[id].get_urgent();
    QString urgentStr=QString("%1").arg(urgent);
    struct tm ddl=tasks[id].get_endtime();
    QString ddlStr = QString("%1-%2-%3 %4:%5")
                         .arg(ddl.tm_year + 1900)  // 年份需加1900
                         .arg(ddl.tm_mon + 1)       // 月份从0开始
                         .arg(ddl.tm_mday)
                         .arg(ddl.tm_hour)
                         .arg(ddl.tm_min);
    int mode=tasks[id].get_mode();

    if(left_task == id){
        ui->task_name1->setText(QString::fromStdString(title));
        switch(type)
        {
        case STUDY:
        {
            ui->task_type1->setText("学习");
            break;
        }
        case WORK:
        {
            ui->task_type1->setText("工作");
            break;
        }
        case LIFE:
        {
            ui->task_type1->setText("生活");
            break;
        }
        case VOLUNTEER:
        {
            ui->task_type1->setText("社团");
            break;
        }
        case OTHER:
        {
            ui->task_type1->setText("其他");
            break;
        }
        case FAMILY:
        {
            ui->task_type1->setText("家庭");
            break;
        }
        default:{
            ui->task_type1->setText("未知");
            break;
        }
        }
        ui->task_discription1->setText(QString::fromStdString(text));
        ui->urgency_degree1->setText(urgentStr);
        ui->deadline1->setText(ddlStr);
        ui->done_confirmed_button1->setEnabled(1);
        switch(mode)
        {
        case COMPLETE:
        {
            ui->current_state1->setText("已完成，不错哦！");
            ui->current_state1->setStyleSheet("color:green;");
            ui->task_name1->setStyleSheet("color:green;");
            ui->done_confirmed_button1->setEnabled(0);
            break;
        }
        case OVERDUE:
        {
            ui->current_state1->setText("没完成，并且过期了！");
            ui->current_state1->setStyleSheet("color:red;");
            ui->task_name1->setStyleSheet("color:red;");
            break;
        }
        case NORMAL:
        {
            ui->current_state1->setText("未完成，抓紧时间吧！");
            ui->current_state1->setStyleSheet("color:black;");
            ui->task_name1->setStyleSheet("color:black;");
            break;
        }
        default:
        {
            ui->current_state1->setText("不为人知的秘密！");
            break;
        }
        }
    }
    else{
        ui->task_name2->setText(QString::fromStdString(title));
        switch(type)
        {
        case STUDY:
        {
            ui->task_type2->setText("学习");
            break;
        }
        case WORK:
        {
            ui->task_type2->setText("工作");
            break;
        }
        case LIFE:
        {
            ui->task_type2->setText("生活");
            break;
        }
        case VOLUNTEER:
        {
            ui->task_type2->setText("社团");
            break;
        }
        case OTHER:
        {
            ui->task_type2->setText("其他");
            break;
        }
        case FAMILY:
        {
            ui->task_type1->setText("家庭");
            break;
        }
        default:{
            ui->task_type2->setText("未知");
            break;
        }
        }
        ui->task_discription2->setText(QString::fromStdString(text));
        ui->urgency_degree2->setText(urgentStr);
        ui->deadline2->setText(ddlStr);
        ui->done_confirmed_button2->setEnabled(1);
        switch(mode)
        {
        case COMPLETE:
        {
            ui->current_state2->setText("已完成，不错哦！");
            ui->done_confirmed_button2->setEnabled(0);
            ui->current_state2->setStyleSheet("color:green;");
            ui->task_name2->setStyleSheet("color:green;");
            break;
        }
        case OVERDUE:
        {
            ui->current_state2->setText("没完成，并且过期了！");
            ui->current_state2->setStyleSheet("color:red;");
            ui->task_name2->setStyleSheet("color:red;");
            break;
        }
        case NORMAL:
        {
            ui->current_state2->setText("未完成，抓紧时间吧！");
            ui->current_state2->setStyleSheet("color:black;");
            ui->task_name2->setStyleSheet("color:black;");
            break;
        }
        default:
        {
            ui->current_state2->setText("不为人知的秘密！");
            break;
        }
        }
    }
}



void Demo_Window::on_pushButton_2_clicked()
{
    emit goto_setnew();
}


void Demo_Window::on_pushButton_3_clicked()
{
    emit goto_feedback();
}


void Demo_Window::on_pushButton_4_clicked()
{
    emit goto_settings();
}


void Demo_Window::on_pushButton_clicked()
{
    init(1);
}


void Demo_Window::on_pushButton_5_clicked()
{
    emit go_exit();
}

//处理排序方式的选择
void Demo_Window::on_sort_key_button_clicked()
{
    if(ui->radioButton_2->isChecked())
    {
        sort_task(ENDTIME);
    }
    else if(ui->radioButton->isChecked())
    {
        sort_task(URGENT);
    }

    init(0);
}

//处理 左 边这个任务：完成任务******加个弹窗——是否确认完成
void Demo_Window::on_done_confirmed_button1_clicked()
{
    QString q="是否确认完成任务？";
    if(question(this,q)){
        tasks[left_task].change_mode(COMPLETE,err_buf);
        ui->current_state1->setText("已完成，不错哦！");
        ui->current_state1->setStyleSheet("color:green;");
        ui->task_name1->setStyleSheet("color:green;");
        complete_num++;
        ui->done_confirmed_button1->setEnabled(0);
    }
}

//处理 左 边这个任务：删除任务******加个弹窗——是否确认删除
void Demo_Window::on_remove_confirmed_button1_clicked()
{
    QString q="是否确认删除任务？";
    if(question(this,q)){
        delete_task(tasks[left_task].get_taskid(),err_buf);
        //删除左边的任务之后的逻辑********注意删的是不是末尾的任务，还有删的是不是倒数第二个任务********如果删的是最后一个任务但不是第一个任务，直接调用：on_last_page_button_clicked()函数返回上一页********如果删的也是第一个任务直接调用：hide_left()
        int total=task::task_number_vec;
        if(right_task!=total)
        {
            left_task=right_task;
            demo_task(left_task);
            if(next_task==total)
            {
                right_task=total;
                hide_right();
                ui->next_page_button->setEnabled(false);
            }
            else
            {
                right_task=next_task;
                demo_task(right_task);
                next_task=right_task+1;
                while(next_task<total&&(!tasks[next_task].valid||!tasks[next_task].show))
                {
                    next_task++;
                }
                if(next_task==total)
                {
                    ui->next_page_button->setEnabled(false);
                }
                else
                {
                    ui->next_page_button->setEnabled(true);
                }
            }
        }
        else
        {
            next_task=total;
            if(pre_task<0)
            {
                hide_left();
                ui->next_page_button->setEnabled(false);
                ui->last_page_button->setEnabled(false);
                return;
            }
            right_task=pre_task;
            left_task=right_task-1;
            while(left_task>=0&&(!tasks[left_task].valid||!tasks[left_task].show))
            {
                left_task--;
            }
            ui->next_page_button->setEnabled(false);
            pre_task=left_task-1;
            while(pre_task>=0&&(!tasks[pre_task].valid||!tasks[pre_task].show))
            {
                pre_task--;
            }
            if(pre_task<0)
            {
                ui->last_page_button->setEnabled(false);
            }
            //展示任务
            show_right();
            demo_task(left_task);
            demo_task(right_task);
        }
    }
}

//处理 右 边这个任务：完成任务******加个弹窗——是否确认完成
void Demo_Window::on_done_confirmed_button2_clicked()
{
    QString q="是否确认完成任务？";
    if(question(this,q)){
        tasks[right_task].change_mode(COMPLETE,err_buf);
        ui->current_state2->setText("已完成，不错哦！");
        ui->current_state2->setStyleSheet("color:green;");
        ui->task_name2->setStyleSheet("color:green;");
        complete_num++;
        ui->done_confirmed_button2->setEnabled(0);
    }
}

//处理 右 边这个任务：删除任务******加个弹窗——是否确认删除
void Demo_Window::on_remove_confirmed_button2_clicked()
{
    QString q="是否确认删除任务？";
    if(question(this,q)){
        delete_task(tasks[right_task].get_taskid(),err_buf);
        //删除右边的任务之后的逻辑********注意删的是不是末尾的任务
        int total=task::task_number_vec;
        if(next_task==total)
        {
            hide_right();
            ui->next_page_button->setEnabled(false);
            right_task=total;
            return;
        }
        else
            right_task=next_task;
        demo_task(right_task);
        next_task=right_task+1;
        while(next_task<total&&(!tasks[next_task].valid||!tasks[next_task].show))
        {
            next_task++;
        }
        if(next_task==total)
        {
            ui->next_page_button->setEnabled(false);
        }
        else
        {
            ui->next_page_button->setEnabled(true);
        }
    }
}


void Demo_Window::on_last_page_button_clicked()
{
    //确定左右任务********如果left_task=0或者left_task是第一个任务，直接return
    if(pre_task<0)
        return;
    next_task=left_task;
    right_task=pre_task;
    left_task=right_task-1;
    while(left_task>=0&&(!tasks[left_task].valid||!tasks[left_task].show))
    {
        left_task--;
    }
    ui->next_page_button->setEnabled(true);
    pre_task=left_task-1;
    while(pre_task>=0&&(!tasks[pre_task].valid||!tasks[pre_task].show))
    {
        pre_task--;
    }
    if(pre_task<0)
    {
        ui->last_page_button->setEnabled(false);
    }
    //展示任务
    show_right();
    demo_task(left_task);
    demo_task(right_task);
}


void Demo_Window::on_next_page_button_clicked()
{
    //确定左右任务********如果有一个任务是最后一个任务直接return

    int total=task::task_number_vec;
    if(next_task==total)
        return;
    ui->last_page_button->setEnabled(true);
    pre_task=right_task;
    left_task=next_task;
    right_task=left_task+1;
    while(right_task<total&&(!tasks[right_task].valid||!tasks[right_task].show))
    {
        right_task++;
    }
    if(right_task==total)
    {
        hide_right();
        demo_task(left_task);
        ui->next_page_button->setEnabled(false);
    }
    else
    {
        demo_task(left_task);
        demo_task(right_task);
        next_task=right_task+1;
        while(next_task<total&&(!tasks[next_task].valid||!tasks[next_task].show))
        {
            next_task++;
        }
        if(next_task==total)
        {
            ui->next_page_button->setEnabled(false);
        }
        else
        {
            ui->next_page_button->setEnabled(true);
        }
    }
}
//以下是几个展示的框框的名称：
//task_name
//task_type
//task_discription
//urgency_degree
//deadlne
//current_state


void Demo_Window::on_all_clicked()
{
    ui->study->setChecked(1);
    ui->family->setChecked(1);
    ui->other->setChecked(1);
    ui->life->setChecked(1);
    ui->work->setChecked(1);
    ui->volunteer->setChecked(1);
}


void Demo_Window::on_clear_clicked()
{
    ui->study->setChecked(0);
    ui->family->setChecked(0);
    ui->other->setChecked(0);
    ui->life->setChecked(0);
    ui->work->setChecked(0);
    ui->volunteer->setChecked(0);
}


void Demo_Window::on_all_2_clicked()
{
    ui->comple->setChecked(1);
    ui->overdue->setChecked(1);
    ui->normal->setChecked(1);
}


void Demo_Window::on_clear_2_clicked()
{
    ui->comple->setChecked(0);
    ui->overdue->setChecked(0);
    ui->normal->setChecked(0);
}


void Demo_Window::on_confirm_clicked()
{
    filt_mode=0;
    if(ui->comple->isChecked())
    {
        filt_mode+=COMPLETE;
    }
    if(ui->overdue->isChecked())
    {
        filt_mode+=OVERDUE;
    }
    if(ui->normal->isChecked())
    {
        filt_mode+=NORMAL;
    }
    filt_type=0;
    if(ui->study->isChecked())
    {
        filt_type+=STUDY;
    }
    if(ui->work->isChecked())
    {
        filt_type+=WORK;
    }
    if(ui->life->isChecked())
    {
        filt_type+=LIFE;
    }
    if(ui->family->isChecked())
    {
        filt_type+=FAMILY;
    }
    if(ui->volunteer->isChecked())
    {
        filt_type+=VOLUNTEER;
    }
    if(ui->other->isChecked())
    {
        filt_type+=OTHER;
    }

    init(0);
}

Detailed *detail_page_left=nullptr;
Detailed *detail_page_right=nullptr;
void Demo_Window::on_pushButton_6_clicked()
{
    if (detail_page_left) {
        delete detail_page_left;
        detail_page_left=nullptr;
    }
    detail_page_left=new Detailed;
    detail_page_left->setAttribute(Qt::WA_DeleteOnClose);
    detail_page_left->setWindowTitle(ui->task_name1->text());
    connect(detail_page_left, &Detailed::destroyed, this, [this]() {
        detail_page_left = nullptr;
        demo_task(left_task);
    });
    detail_page_left->init(left_task);
    detail_page_left->show();
}


void Demo_Window::on_pushButton_7_clicked()
{
    if (detail_page_right) {
        delete detail_page_right;
        detail_page_right=nullptr;
    }
    detail_page_right=new Detailed;
    detail_page_right->setAttribute(Qt::WA_DeleteOnClose);
    detail_page_right->setWindowTitle(ui->task_name2->text());
    connect(detail_page_right, &Detailed::destroyed, this, [this]() {
        detail_page_right = nullptr;
        demo_task(right_task);
    });
    detail_page_right->init(right_task);
    detail_page_right->show();
}

