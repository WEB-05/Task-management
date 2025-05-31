#ifndef DEMO_WINDOW_H
#define DEMO_WINDOW_H
#include <fun.h>

#include <QWidget>

namespace Ui {
class Demo_Window;
}

class Demo_Window : public QWidget
{
    Q_OBJECT

public:
    explicit Demo_Window(QWidget *parent = nullptr);
    ~Demo_Window();

    void demo_task(int id);
    void hide_left();
    void show_left();
    void hide_right();
    void show_right();

private:
    Ui::Demo_Window *ui;

    int left_task=0,right_task=0;

signals:
    void goto_settings();
    void goto_setnew();
    void goto_feedback();
    void go_exit();

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();


    void on_sort_key_button_clicked();
    void on_done_confirmed_button1_clicked();
    void on_remove_confirmed_button1_clicked();
    void on_done_confirmed_button2_clicked();
    void on_remove_confirmed_button2_clicked();
    void on_last_page_button_clicked();
    void on_next_page_button_clicked();
    void on_pushButton_clicked();

    void on_all_clicked();

    void on_clear_clicked();

    void on_all_2_clicked();

    void on_clear_2_clicked();

    void on_confirm_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

public:
    void init(int way);
};

#endif // DEMO_WINDOW_H
