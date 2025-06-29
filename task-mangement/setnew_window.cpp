#include "setnew_window.h"
#include "fun.h"
#include "ui_setnew_window.h"
#include <QMessageBox>
#include <vector>
#include <time.h>
#include<QVBoxLayout>
#include<string>
#include<QVector>
#include "widget.h"
#include <QRegularExpressionValidator>

using namespace std;

vector<memberr> mem;
typedef struct alrtim
{
    QDate date;
    QTime time;
}alarm_time;
vector<alarm_time> Time;
QWidget *scrollContent;
QWidget *scrollAlarmContent;
time_t current=time(NULL);

extern char err_buf[50];
extern task tasks[MAX_TASK];
int al_way=3;

SetNew_Window::SetNew_Window(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SetNew_Window)
{
    ui->setupUi(this);
    current=time(NULL);
    struct tm *tim=localtime(&current);
    ui->dateEdit_2->setDate(QDate(tim->tm_year+1900, tim->tm_mon+1, tim->tm_mday));
    ui->timeEdit_2->setTime(QTime(tim->tm_hour, tim->tm_min));
    ui->new_deadline->setDate(QDate(tim->tm_year+1900, tim->tm_mon+1, tim->tm_mday));
    ui->new_deadtime->setTime(QTime(tim->tm_hour, tim->tm_min));
}

SetNew_Window::~SetNew_Window()
{
    delete ui;
}

bool isEmailValid(QString &email) {
    QRegularExpressionValidator validator(QRegularExpression(R"(^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$)"));
    int pos = 0;
    return validator.validate(email, pos) == QValidator::Acceptable;
}

bool question(QWidget *p,QString q)
{
    QMessageBox::StandardButton reply = QMessageBox::question(
        p,
        "确认操作",
        q,
        QMessageBox::Yes | QMessageBox::No
        );

    if (reply == QMessageBox::No) {
        return 0;
    }

    else
    {
        return 1;
    }

}

void SetNew_Window::on_pushButton_clicked()
{
    QString q="任务尚未保存，是否退出？";
    if(!question(this,q))return;
    emit goto_demo();
}


void SetNew_Window::on_pushButton_3_clicked()
{
    QString q="任务尚未保存，是否退出？";
    if(!question(this,q))return;
    emit goto_feedback();
}


void SetNew_Window::on_pushButton_4_clicked()
{
    QString q="任务尚未保存，是否退出？";
    if(!question(this,q))return;
    emit goto_settings();
}


void SetNew_Window::on_pushButton_5_clicked()
{
    QString q="任务尚未保存，是否退出？";
    if(!question(this,q))return;
    emit go_exit();
}



//******提交之前先弹窗确认******
void SetNew_Window::on_add_email_clicked()
{
    QString name = ui->new_email_name->text().trimmed();
    QString addr = ui->new_email_address->text().trimmed();
    if(name.isEmpty() || addr.isEmpty()) {
        QMessageBox::warning(this, "输入错误", "邮箱名称和地址不能为空！");
        return;
    }
    if(!isEmailValid(addr))
    {
        QMessageBox::warning(this, "输入错误", "邮箱地址无效！");
        return;
    }
    QString q="是否确认添加提醒邮箱？";
    if(!question(this,q))return;
    mem.push_back(memberr{name.toStdString(),addr.toStdString()});
    if(!scrollContent) {
        scrollContent = new QWidget(ui->email_added);
        ui->email_added->setWidget(scrollContent);
        ui->email_added->setWidgetResizable(true);
        new QVBoxLayout(scrollContent);
    }
    QGroupBox *emailBox = new QGroupBox(scrollContent);
    QVBoxLayout *boxLayout = new QVBoxLayout(emailBox);

    QLabel *nameLabel = new QLabel("名称: " + name, emailBox);
    QLabel *addrLabel = new QLabel("地址: " + addr, emailBox);
    nameLabel->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
    addrLabel->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

    nameLabel->setIndent(0);
    addrLabel->setIndent(0);

    nameLabel->setStyleSheet("QLabel { padding: 0px; }");
    addrLabel->setStyleSheet("QLabel { color: #666; }");

    boxLayout->addWidget(nameLabel);
    boxLayout->addWidget(addrLabel);
    scrollContent->layout()->addWidget(emailBox);

    scrollContent->adjustSize();
    ui->new_email_name->clear();
    ui->new_email_address->clear();



    return;
}

//******重置之前先弹窗确认******
void SetNew_Window::on_reset_email_clicked()
{
    QString q="是否确认清空提醒邮箱？";
    if(!question(this,q))return;
    mem.clear();
    if (scrollContent) {
        QLayout *layout = scrollContent->layout();
        while (QLayoutItem *item = layout->takeAt(0)) {
            if (QWidget *widget = item->widget()) {
                widget->deleteLater();
            }
            delete item;
        }
        scrollContent->adjustSize();
    }

    ui->new_email_name->clear();
    ui->new_email_address->clear();
}

//******提交之前先弹窗确认******
void SetNew_Window::on_add_alarm_time_clicked()
{
    QString q="是否确认添加提醒时间？";
    QDate date = ui->dateEdit_2->date();
    QTime time = ui->timeEdit_2->time();
    if(!question(this,q))return;
    QString dateStr = date.toString("yyyy-MM-dd");
    QString timeStr = time.toString("hh:mm:ss");
    QString combinedStr = dateStr + " " + timeStr;

    Time.push_back(alarm_time{date,time});

    if(!scrollAlarmContent) {
        scrollAlarmContent = new QWidget(ui->alarm_added);
        ui->alarm_added->setWidget(scrollAlarmContent);
        ui->alarm_added->setWidgetResizable(true);
        new QVBoxLayout(scrollAlarmContent);
    }

    QFrame *rowFrame = new QFrame(scrollAlarmContent);
    QHBoxLayout *rowLayout = new QHBoxLayout(rowFrame);
    rowLayout->setContentsMargins(5, 2, 5, 2);


    QLabel *datetimeLabel = new QLabel(combinedStr, rowFrame);
    datetimeLabel->setStyleSheet("font: 12pt 'Segoe UI'; padding: 3px;");
    rowLayout->addWidget(datetimeLabel);


    scrollAlarmContent->layout()->addWidget(rowFrame);
    scrollAlarmContent->adjustSize();
}

//******重置之前先弹窗确认******
void SetNew_Window::on_reset_alarm_time_clicked()
{
    QString q="是否确认清空提醒时间？";
    if(!question(this,q))return;
    Time.clear();
    if (scrollAlarmContent) {
        QLayout *layout = scrollAlarmContent->layout();
        while (QLayoutItem *item = layout->takeAt(0)) {
            if (QWidget *widget = item->widget()) {
                widget->deleteLater();
            }
            delete item;
        }
        scrollAlarmContent->adjustSize();
    }
    current=time(NULL);
    struct tm *tim=localtime(&current);
    ui->dateEdit_2->setDate(QDate(tim->tm_year+1900, tim->tm_mon+1, tim->tm_mday));
    ui->timeEdit_2->setTime(QTime(tim->tm_hour, tim->tm_min));

}

//******重置之前先弹窗确认******
void SetNew_Window::on_reset_page_button_clicked()
{
    QString q="是否确认重置页面？";
    if(!question(this,q))return;
    reset_page();
}

void SetNew_Window::reset_page()
{
    Time.clear();
    if (scrollAlarmContent) {
        QLayout *layout = scrollAlarmContent->layout();
        while (QLayoutItem *item = layout->takeAt(0)) {
            if (QWidget *widget = item->widget()) {
                widget->deleteLater();
            }
            delete item;
        }
        scrollAlarmContent->adjustSize();
    }
    current=time(NULL);
    struct tm *tim=localtime(&current);
    ui->dateEdit_2->setDate(QDate(tim->tm_year+1900, tim->tm_mon+1, tim->tm_mday));
    ui->timeEdit_2->setTime(QTime(tim->tm_hour, tim->tm_min));
    ui->new_deadline->setDate(QDate(tim->tm_year+1900, tim->tm_mon+1, tim->tm_mday));
    ui->new_deadtime->setTime(QTime(tim->tm_hour, tim->tm_min));

    mem.clear();
    if (scrollContent) {
        QLayout *layout = scrollContent->layout();
        while (QLayoutItem *item = layout->takeAt(0)) {
            if (QWidget *widget = item->widget()) {
                widget->deleteLater();
            }
            delete item;
        }
        scrollContent->adjustSize();
    }
    ui->add_email->setEnabled(true);
    ui->reset_email->setEnabled(true);
    ui->add_alarm_time->setEnabled(true);
    ui->reset_alarm_time->setEnabled(true);
    ui->new_email_address->setEnabled(true);
    ui->new_email_name->setEnabled(true);
    ui->dateEdit_2->setEnabled(true);
    ui->timeEdit_2->setEnabled(true);
    ui->new_email_name->clear();
    ui->new_email_address->clear();
    ui->newtask_name->clear();
    ui->newtask_discription->clear();
    ui->task_type->setCurrentIndex(0);
    ui->new_emergency_degree->setValue(0);
    ui->checkBox->setCheckState(Qt::Checked);
    ui->checkBox_2->setCheckState(Qt::Checked);
    al_way=3;
}

//******提交之前先弹窗确认******
void SetNew_Window::on_submit_page_button_clicked()
{
    if(al_way==3&&mem.empty()&&Time.empty())
    {
        QMessageBox::warning(this,"提醒","请设置提醒时间和提醒邮箱！");
        return;
    }
    if((al_way&1)&&mem.empty())
    {
        QMessageBox::warning(this,"提醒","请设置提醒邮箱！");
        return;
    }
    if(al_way&&Time.empty())
    {
        QMessageBox::warning(this,"提醒","请设置提醒时间！");
        return;
    }
    QString q="是否确认提交任务？";
    if(!question(this,q))return;
    string title = ui->newtask_name->text().trimmed().toStdString();
    string text =  ui->newtask_discription->toPlainText().trimmed().toStdString();
    QString comboText = ui->task_type->currentText();
    int type=0;
    if(comboText=="工作"){
        type=2;
    }
    else if(comboText=="学习"){
        type=1;
    }
    else if(comboText=="家庭"){
        type=FAMILY;
    }
    else if(comboText=="社团"){
        type=8;
    }
    else if(comboText=="生活")
    {
        type=LIFE;
    }
    else{
        type=16;
    }
    QDate date = ui->new_deadline->date();
    QTime time = ui->new_deadtime->time();

    struct tm endtime = {0};

    endtime.tm_year = date.year() - 1900;
    endtime.tm_mon = date.month() - 1;
    endtime.tm_mday = date.day();
    endtime.tm_hour = time.hour();
    endtime.tm_min = time.minute();
    endtime.tm_sec =0;


    int urg= ui->new_emergency_degree->value();

    int id=make_task(title,text,type,4,endtime,urg,al_way,err_buf,1);
    int loc=task::id_to_location[id];
    int mem_num=mem.size();
    for(int i=0;i<mem_num;i++)
    {
        int m_id=tasks[loc].addmember(mem[i].name,mem[i].email,err_buf);
    }
    for(int i=0;i<Time.size();i++)
    {
        struct tm atime = {0};

        atime.tm_year = Time[i].date.year() - 1900;
        atime.tm_mon = Time[i].date.month() - 1;
        atime.tm_mday = Time[i].date.day();
        atime.tm_hour = Time[i].time.hour();
        atime.tm_min = Time[i].time.minute();
        atime.tm_sec = 0;

        tasks[loc].make_alarm(atime,id,al_way,err_buf);
    }

    QMessageBox::information(this,"提醒","新建任务成功！");
    emit goto_demo();
    reset_page();
}

//直接设置不再询问
void SetNew_Window::on_alarm_type_confirmed_clicked()
{

    const bool emailEnabled = ui->checkBox->isChecked();
    const bool alarmEnabled = ui->checkBox_2->isChecked();
    al_way=0;
    if(emailEnabled)
        al_way+=1;
    if(alarmEnabled)
        al_way+=2;

    if (!emailEnabled) {
        mem.clear();
        if (scrollContent) {
            QLayout *layout = scrollContent->layout();
            while (QLayoutItem *item = layout->takeAt(0)) {
                if (QWidget *widget = item->widget()) {
                    widget->deleteLater();
                }
                delete item;
            }
            scrollContent->adjustSize();
        }

        ui->new_email_name->clear();
        ui->new_email_address->clear();
        ui->new_email_address->setEnabled(0);
        ui->new_email_name->setEnabled(0);
        ui->add_email->setEnabled(false);
        ui->reset_email->setEnabled(false);
    } else {

        ui->add_email->setEnabled(true);
        ui->reset_email->setEnabled(true);
        ui->new_email_address->setEnabled(1);
        ui->new_email_name->setEnabled(1);
    }

    if (!alarmEnabled&&!emailEnabled) {
        Time.clear();
        if (scrollAlarmContent) {
            QLayout *layout = scrollAlarmContent->layout();
            while (QLayoutItem *item = layout->takeAt(0)) {
                if (QWidget *widget = item->widget()) {
                    widget->deleteLater();
                }
                delete item;
            }
            scrollAlarmContent->adjustSize();
        }
        current=time(NULL);
        struct tm *tim=localtime(&current);
        ui->dateEdit_2->setDate(QDate(tim->tm_year+1900, tim->tm_mon+1, tim->tm_mday));
        ui->timeEdit_2->setTime(QTime(tim->tm_hour, tim->tm_min));
        ui->dateEdit_2->setEnabled(0);
        ui->timeEdit_2->setEnabled(0);
        ui->add_alarm_time->setEnabled(false);
        ui->reset_alarm_time->setEnabled(false);
    }
    else{
        ui->dateEdit_2->setEnabled(1);
        ui->timeEdit_2->setEnabled(1);
        ui->add_alarm_time->setEnabled(true);
        ui->reset_alarm_time->setEnabled(true);
    }
}


void SetNew_Window::on_pushButton_2_clicked()
{
    QString q="是否确认重置页面？";
    if(!question(this,q))return;
    reset_page();
}

void SetNew_Window::on_pushButton_6_clicked()
{
    QString q="任务尚未保存，是否退出？";
    if(!question(this,q))return;
    emit go_calendar();
}

