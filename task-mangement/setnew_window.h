#ifndef SETNEW_WINDOW_H
#define SETNEW_WINDOW_H

#include <QWidget>

namespace Ui {
class SetNew_Window;
}

class SetNew_Window : public QWidget
{
    Q_OBJECT

public:
    explicit SetNew_Window(QWidget *parent = nullptr);
    ~SetNew_Window();

private:
    Ui::SetNew_Window *ui;

signals:
    void goto_demo();
    void goto_settings();
    void goto_feedback();
    void go_exit();
    void go_calendar();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();


    void on_add_email_clicked();
    void on_reset_email_clicked();
    void on_add_alarm_time_clicked();
    void on_reset_alarm_time_clicked();
    void on_reset_page_button_clicked();
    void on_submit_page_button_clicked();
    void on_alarm_type_confirmed_clicked();
    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

public:
    void reset_page();
};

#endif // SETNEW_WINDOW_H
