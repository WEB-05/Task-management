#ifndef CALENDAR_H
#define CALENDAR_H

#include <QWidget>
#include <QDate>
#include "fun.h"

bool sort_times(const task& a,const task& b);

namespace Ui {
class Calendar;
}

class Calendar : public QWidget
{
    Q_OBJECT

public:
    explicit Calendar(QWidget *parent = nullptr);
    ~Calendar();
    void init();

private:
    Ui::Calendar *ui;
    void init_task(int way);
    QWidget *newContent=nullptr;

signals:
    void goto_demo();
    void goto_setnew();
    void goto_settings();
    void go_exit();
    void goto_feedback();
    void goto_date(QDate date);

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_calendarWidget_clicked(const QDate &date);
};

#endif // CALENDAR_H
