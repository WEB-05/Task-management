#ifndef LOGIN_AND_SIGNUP_H
#define LOGIN_AND_SIGNUP_H

#include <QMainWindow>
#include <QStackedWidget>
#include "login_window.h"
#include "signup_window.h"

namespace Ui {
class login_and_signup;
}

class login_and_signup : public QMainWindow
{
    Q_OBJECT

public:
    explicit login_and_signup(QMainWindow *parent = nullptr);
    ~login_and_signup();
private:
    QStackedWidget *stackedWidget;
    Login_window *loginPage;  // 登录页
    Signup_window *signupPage;   // 主页面

private:
    Ui::login_and_signup *ui;
private slots:
    void goto_signup();
    void goto_login();
    void close_page();
};

#endif // LOGIN_AND_SIGNUP_H
