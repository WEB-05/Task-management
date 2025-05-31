#ifndef SIGNUP_WINDOW_H
#define SIGNUP_WINDOW_H

#include <QWidget>


namespace Ui {
class Signup_window;
}

class Signup_window : public QWidget
{
    Q_OBJECT

public:
    explicit Signup_window(QWidget *parent = nullptr);
    ~Signup_window();

private slots:
    void on_pushButton_pressed();

    void on_pushButton_released();

    void on_button1_clicked();

    void on_button2_clicked();

private:
    Ui::Signup_window *ui;

signals:
    void goto_login();
};

#endif // SIGNUP_WINDOW_H
