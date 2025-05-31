#ifndef LOGIN_WINDOW_H
#define LOGIN_WINDOW_H

#include <QWidget>
#include "main_window.h"

namespace Ui {
class Login_window;
}

class Login_window : public QWidget
{
    Q_OBJECT

public:
    explicit Login_window(QWidget *parent = nullptr);
    ~Login_window();

private slots:
    void on_button1_clicked();

    void on_pushButton_pressed();

    void on_pushButton_released();

    void on_button2_clicked();

private:
    Ui::Login_window *ui;

signals:
    void goto_signup();
    void login_success();
};


#endif // LOGIN_WINDOW_H
