#include "detailed.h"
#include "ui_detailed.h"
#include "fun.h"
#include <QVBoxLayout>
#include<QGroupBox>
#include<iostream>
#include<QMessageBox>
#include<QString>
using namespace std;

extern char err_buf[50];
extern bool isEmailValid(QString &email);
extern bool question(QWidget *p,QString q);
extern int overdue;
extern time_t current;
extern int light;

Detailed::Detailed(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Detailed)
{
    ui->setupUi(this);
    this->setFixedSize(842, 495);
    overlay = new QWidget(this);
    QString style = QString("background-color: rgba(0, 0, 0, %1);").arg((80-light)/100.0);
    overlay->setStyleSheet(style); // 10%黑色遮罩
    overlay->setAttribute(Qt::WA_TransparentForMouseEvents);
    overlay->setGeometry(0, 0, 842,495); // 覆盖整个窗口
    overlay->show();
}

Detailed::~Detailed()
{
    delete ui;
}

void Detailed::on_pushButton_clicked()
{
    this->close();
}

void Detailed::init(int loc)
{
    loca=loc;
    ui->lineEdit->setText(QString::fromStdString(tasks[loc].get_title()));
    ui->plainTextEdit->setPlainText(QString::fromStdString(tasks[loc].get_text()));
    struct tm endtime=tasks[loc].get_endtime();
    int type=tasks[loc].get_type();
    switch(type)
    {
    case STUDY:ui->comboBox->setCurrentText("学习");break;
    case WORK:ui->comboBox->setCurrentText("工作");break;
    case VOLUNTEER:ui->comboBox->setCurrentText("社团");break;
    case FAMILY:ui->comboBox->setCurrentText("家庭");break;
    case LIFE:ui->comboBox->setCurrentText("生活");break;
    case OTHER:ui->comboBox->setCurrentText("其他");break;
    default:break;
    }
    ui->dateTimeEdit->setTime(QTime(endtime.tm_hour,endtime.tm_min));
    ui->dateTimeEdit->setDate(QDate(endtime.tm_year+1900,endtime.tm_mon+1,endtime.tm_mday));
    ui->spinBox->setValue(tasks[loc].get_urgent());
    switch(tasks[loc].get_alarmway())
    {
    case 0:
    {
        ui->alarm_way->setText("无提醒");
        ui->label->setVisible(0);
        ui->member_area->setVisible(0);
        ui->new_email_address->setVisible(0);
        ui->new_email_name->setVisible(0);
        ui->add_email->setVisible(0);
        ui->label_2->setVisible(0);
        ui->time_area->setVisible(0);
        ui->dateEdit_2->setVisible(0);
        ui->timeEdit_2->setVisible(0);
        ui->add_alarm_time->setVisible(0);
        ui->pushButton->move(210,446);
        this->setFixedSize(309, 495);
        break;
    }
    case WINDOW:
    {
        ui->alarm_way->setText("闹钟");
        ui->label->setVisible(0);
        ui->member_area->setVisible(0);
        ui->new_email_address->setVisible(0);
        ui->new_email_name->setVisible(0);
        ui->add_email->setVisible(0);
        QPoint currentPos = ui->label_2->pos();
        ui->label_2->move(currentPos.x(), currentPos.y() - 220);
        currentPos=ui->time_area->pos();
        ui->time_area->move(currentPos.x(), currentPos.y() - 220);
        currentPos=ui->dateEdit_2->pos();
        ui->dateEdit_2->move(currentPos.x(), currentPos.y() - 100);
        currentPos=ui->add_alarm_time->pos();
        ui->add_alarm_time->move(currentPos.x(), currentPos.y() - 85);
        currentPos=ui->timeEdit_2->pos();
        ui->timeEdit_2->move(currentPos.x(), currentPos.y() - 90);
        ui->time_area->setFixedHeight(381);
        break;
    }
    case EMAIL:
    {
        ui->alarm_way->setText("邮件");
        break;
    }
    case 3:ui->alarm_way->setText("闹钟+邮件");break;
    default:break;
    }
    ui->new_email_address->clear();
    ui->new_email_name->clear();
    current=time(NULL);
    struct tm *tim=localtime(&current);
    ui->dateEdit_2->setDate(QDate(tim->tm_year+1900, tim->tm_mon+1, tim->tm_mday));
    ui->timeEdit_2->setTime(QTime(tim->tm_hour, tim->tm_min));
    init_mem(0);
    init_time(0);
}

void Detailed::init_mem(int way=1)
{
    if(newContent&&way)
    {
        delete newContent;
    }
    newContent=nullptr;
    newContent = new QWidget(ui->member_area);
    ui->member_area->setWidget(newContent);
    ui->member_area->setWidgetResizable(true);
    new QVBoxLayout(newContent);


    int num=tasks[loca].members.size();
    for (int i = 0; i < num; ++i) {
        QGroupBox *emailBox = new QGroupBox(newContent);
        QVBoxLayout *boxLayout = new QVBoxLayout(emailBox);

        QLabel *nameLabel = new QLabel("名称: " + QString::fromStdString(tasks[loca].members[i].name), emailBox);
        QLabel *addrLabel = new QLabel("地址: " + QString::fromStdString(tasks[loca].members[i].email), emailBox);
        nameLabel->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
        addrLabel->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

        nameLabel->setIndent(0);
        addrLabel->setIndent(0);

        nameLabel->setStyleSheet("QLabel { padding: 0px; }");
        addrLabel->setStyleSheet("QLabel { color: #666; }");
        QPushButton *button = new QPushButton(QString("删除提醒邮箱"),emailBox);
        button->setProperty("id", i);
        connect(button, &QPushButton::clicked, this, &Detailed::handleButtonClick_1);
        boxLayout->addWidget(nameLabel);
        boxLayout->addWidget(addrLabel);
        boxLayout->addWidget(button);
        newContent->layout()->addWidget(emailBox);
        newContent->adjustSize();
    }

    // 设置布局和滚动区域
    newContent->adjustSize();
}

void Detailed::handleButtonClick_1()
{
    if(tasks[loca].members.size()==1)
    {
        QMessageBox::warning(this, "禁止删除", "至少需要一个邮箱地址！");
        return;
    }
    int id = sender()->property("id").toInt();
    tasks[loca].deletemember(id,err_buf);
    init_mem(1);
}

void Detailed::init_time(int way=1)
{
    if(newContent1&&way)
    {
        delete newContent1;
    }
    newContent1=nullptr;
    newContent1 = new QWidget(ui->time_area);
    ui->time_area->setWidget(newContent1);
    ui->time_area->setWidgetResizable(true);
    new QVBoxLayout(newContent1);


    int num=tasks[loca].alarm_id.size();
    for (int i = 0; i < num; ++i) {
        QGroupBox *timeBox = new QGroupBox(newContent1);
        QVBoxLayout *boxLayout = new QVBoxLayout(timeBox);
        int id=tasks[loca].alarm_id[i];
        struct tm tim=alarms[alarm::id_to_location[id]].get_alarmtime();
        QString timeStr = QString("%1-%2-%3 %4:%5")
                             .arg(tim.tm_year + 1900)  // 年份需加1900
                             .arg(tim.tm_mon + 1)       // 月份从0开始
                             .arg(tim.tm_mday).arg(tim.tm_hour).arg(tim.tm_min);

        QLabel *nameLabel = new QLabel(timeStr, timeBox);

        nameLabel->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

        nameLabel->setIndent(0);

        nameLabel->setStyleSheet("QLabel { padding: 0px; }");
        QPushButton *button = new QPushButton(QString("删除提醒时间"),timeBox);
        button->setProperty("id", id);
        connect(button, &QPushButton::clicked, this, &Detailed::handleButtonClick_2);
        boxLayout->addWidget(nameLabel);
        boxLayout->addWidget(button);

        newContent1->layout()->addWidget(timeBox);
        newContent1->adjustSize();
    }

    // 设置布局和滚动区域
    newContent1->adjustSize();
}

void Detailed::handleButtonClick_2()
{
    current=time(NULL);
    struct tm *tim=localtime(&current);
    ui->dateEdit_2->setDate(QDate(tim->tm_year+1900, tim->tm_mon+1, tim->tm_mday));
    ui->timeEdit_2->setTime(QTime(tim->tm_hour, tim->tm_min));
    if(tasks[loca].alarm_id.size()==1)
    {
        QMessageBox::warning(this, "禁止删除", "至少需要一个提醒时间！");
        return;
    }
    int id = sender()->property("id").toInt();
    delete_alarm(id,err_buf,1);
    init_time(1);
}


void Detailed::on_pushButton_2_clicked()
{
    if(ui->lineEdit->text().trimmed().toStdString()==tasks[loca].get_title())
    {
        QMessageBox::warning(this, "修改失败", "与原任务名称相同");
        return;
    }
    tasks[loca].change_title(ui->lineEdit->text().trimmed().toStdString(),err_buf);
    QMessageBox::information(this, "修改成功", "修改成功！");
}


void Detailed::on_pushButton_3_clicked()
{
    if(ui->plainTextEdit->toPlainText().trimmed().toStdString()==tasks[loca].get_text())
    {
        QMessageBox::warning(this, "修改失败", "与原任务描述相同");
        return;
    }
    tasks[loca].change_text(ui->plainTextEdit->toPlainText().trimmed().toStdString(),err_buf);
    QMessageBox::information(this, "修改成功", "修改成功！");
}


void Detailed::on_pushButton_5_clicked()
{
    if(ui->spinBox->value()==tasks[loca].get_urgent())
    {
        QMessageBox::warning(this, "修改失败", "与原任务紧急程度相同");
        return;
    }
    tasks[loca].change_urgent(ui->spinBox->value(),err_buf);
    QMessageBox::information(this, "修改成功", "修改成功！");
}



void Detailed::on_pushButton_6_clicked()
{
    QString comboText = ui->comboBox->currentText();
    int type=0;
    if(comboText=="工作")
    {
        type=WORK;
    }
    else if(comboText=="学习")
    {
        type=STUDY;
    }
    else if(comboText=="家庭")
    {
        type=FAMILY;
    }
    else if(comboText=="社团")
    {
        type=VOLUNTEER;
    }
    else if(comboText=="生活")
    {
        type=LIFE;
    }
    else
    {
        type=OTHER;
    }
    if(type==tasks[loca].get_type())
    {
        QMessageBox::warning(this, "修改失败", "与原任务类型相同");
        return;
    }
    tasks[loca].change_type(type,err_buf);
    QMessageBox::information(this, "修改成功", "修改成功！");
}


void Detailed::on_pushButton_4_clicked()
{
    QDate date = ui->dateTimeEdit->date();
    QTime time = ui->dateTimeEdit->time();

    struct tm endtime = {0};
    struct tm endtimeold=tasks[loca].get_endtime();

    endtime.tm_year = date.year() - 1900;
    endtime.tm_mon = date.month() - 1;
    endtime.tm_mday = date.day();
    endtime.tm_hour = time.hour();
    endtime.tm_min = time.minute();
    endtime.tm_sec =0;
    if(endtime.tm_year==endtimeold.tm_year&&endtime.tm_mon==endtimeold.tm_mon&&endtime.tm_mday==endtimeold.tm_mday
        &&endtime.tm_hour==endtimeold.tm_hour&&endtime.tm_min==endtimeold.tm_min)
    {
        QMessageBox::warning(this, "修改失败", "与原截止时间相同");
        return;
    }
    tasks[loca].change_endtime(endtime,err_buf);
    QMessageBox::information(this, "修改成功", "修改成功！");
    struct tm *tim=localtime(&current);
        if(tasks[loca].mode==NORMAL)
        {
            struct tm endtime=tasks[loca].endtime;
            if(comparetim(endtime,*tim,1))
            {
                tasks[loca].mode=OVERDUE;
                overdue++;
            }
        }
        else if(tasks[loca].mode==OVERDUE)
        {
            struct tm endtime=tasks[loca].endtime;
            if(comparetim(*tim,endtime,1))
            {
                tasks[loca].mode=NORMAL;
                overdue--;
            }
        }
}


void Detailed::on_add_email_clicked()
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
    tasks[loca].addmember(name.toStdString(),addr.toStdString(),err_buf);
    ui->new_email_address->clear();
    ui->new_email_name->clear();
    init_mem(1);
}


void Detailed::on_add_alarm_time_clicked()
{
    QString q="是否确认添加提醒时间？";
    if(!question(this,q))return;
    QDate date = ui->dateEdit_2->date();
    QTime time1 = ui->timeEdit_2->time();
    struct tm atime;
    atime.tm_year = date.year() - 1900;
    atime.tm_mon = date.month() - 1;
    atime.tm_mday = date.day();
    atime.tm_hour = time1.hour();
    atime.tm_min = time1.minute();
    atime.tm_sec = 0;

    tasks[loca].make_alarm(atime,tasks[loca].task_id,tasks[loca].alarm_way,err_buf);

    init_time(1);
    current=time(NULL);
    struct tm *tim=localtime(&current);
    ui->dateEdit_2->setDate(QDate(tim->tm_year+1900, tim->tm_mon+1, tim->tm_mday));
    ui->timeEdit_2->setTime(QTime(tim->tm_hour, tim->tm_min));
}
