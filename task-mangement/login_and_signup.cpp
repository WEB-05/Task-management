#include "login_and_signup.h"
#include "ui_login_and_signup.h"
#include "login_window.h"
#include "signup_window.h"


login_and_signup::login_and_signup(QMainWindow *parent)
    : QMainWindow(parent)
    , ui(new Ui::login_and_signup)// 初始化 Designer UI
{
    stackedWidget = new QStackedWidget(this);
    setCentralWidget(stackedWidget);
    stackedWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    // 加载各个页面
    loginPage = new Login_window(this);
    signupPage = new Signup_window(this);

    //编写槽函数
    connect(loginPage,&Login_window::goto_signup,this,&login_and_signup::goto_signup);
    connect(signupPage,&Signup_window::goto_login,this,&login_and_signup::goto_login);
    connect(loginPage,&Login_window::login_success,this,&login_and_signup::close_page);

    // 添加到堆栈
    stackedWidget->addWidget(loginPage);
    stackedWidget->addWidget(signupPage);

    // 默认显示登录页
    stackedWidget->setCurrentWidget(loginPage);
    this->setAttribute(Qt::WA_DeleteOnClose);
    ui->setupUi(this);
}

login_and_signup::~login_and_signup()
{
    delete ui;
    delete signupPage;
    delete loginPage;
    delete stackedWidget;
}

void login_and_signup::goto_signup()
{
    stackedWidget->setCurrentWidget(signupPage);
}

void login_and_signup::goto_login()
{
    stackedWidget->setCurrentWidget(loginPage);
}

void login_and_signup::close_page()
{

    this->hide();
}
