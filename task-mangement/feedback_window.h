#ifndef FEEDBACK_WINDOW_H
#define FEEDBACK_WINDOW_H

#include <QWidget>

namespace Ui {
class Feedback_Window;
}

class Feedback_Window : public QWidget
{
    Q_OBJECT

public:
    explicit Feedback_Window(QWidget *parent = nullptr);
    ~Feedback_Window();

    bool check_first();
    bool check_second();
    bool check_third();

private:
    Ui::Feedback_Window *ui;

signals:
    void goto_demo();
    void goto_setnew();
    void goto_settings();
    void go_exit();
    void go_calendar();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

public:
    void init();

};

#endif // FEEDBACK_WINDOW_H
