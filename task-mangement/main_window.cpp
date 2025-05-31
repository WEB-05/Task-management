#include "main_window.h"
#include "ui_main_window.h"
#include "fun.h"

QWidget* overlay;
int light;
extern char err_buf[50];

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(nullptr),
    ui(new Ui::MainWindow)  // 初始化 Designer UI
{
    stackedWidget = new QStackedWidget(this);
    setCentralWidget(stackedWidget);
    stackedWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

       //用于调整亮度
    light=80;
    overlay = new QWidget(this);
    overlay->setStyleSheet("background-color: rgba(0, 0, 0, 0);"); // 10%黑色遮罩
    overlay->setAttribute(Qt::WA_TransparentForMouseEvents);
    overlay->setGeometry(0, 0, 979, 591); // 覆盖整个窗口
    overlay->show();

    // 延迟创建功能页（避免不必要的开销）
    demoPage = new Demo_Window(this);
    setnewPage = new SetNew_Window(this);
    settingsPage = new Settings_Window(this);
    feedbackPage = new Feedback_Window(this);


    //编写槽函数连接
    //settingsPage的槽函数连接
    connect(settingsPage,&Settings_Window::goto_demo,this,&MainWindow::goto_demo);
    connect(settingsPage,&Settings_Window::goto_setnew,this,&MainWindow::goto_setnew);
    connect(settingsPage,&Settings_Window::goto_feedback,this,&MainWindow::goto_feedback);
    connect(settingsPage,&Settings_Window::go_exit,this,&MainWindow::go_exit);

    //demoPage的槽函数连接
    connect(demoPage,&Demo_Window::goto_setnew,this,&MainWindow::goto_setnew);
    connect(demoPage,&Demo_Window::goto_feedback,this,&MainWindow::goto_feedback);
    connect(demoPage,&Demo_Window::goto_settings,this,&MainWindow::goto_settings);
    connect(demoPage,&Demo_Window::go_exit,this,&MainWindow::go_exit);

    //setnewPage的槽函数连接
    connect(setnewPage,&SetNew_Window::goto_demo,this,&MainWindow::goto_demo);
    connect(setnewPage,&SetNew_Window::goto_feedback,this,&MainWindow::goto_feedback);
    connect(setnewPage,&SetNew_Window::goto_settings,this,&MainWindow::goto_settings);
    connect(setnewPage,&SetNew_Window::go_exit,this,&MainWindow::go_exit);

    //feedbackPage的槽函数连接
    connect(feedbackPage,&Feedback_Window::goto_demo,this,&MainWindow::goto_demo);
    connect(feedbackPage,&Feedback_Window::goto_setnew,this,&MainWindow::goto_setnew);
    connect(feedbackPage,&Feedback_Window::goto_settings,this,&MainWindow::goto_settings);
    connect(feedbackPage,&Feedback_Window::go_exit,this,&MainWindow::go_exit);

    // 添加页面到 stackedWidget
    stackedWidget->addWidget(demoPage);
    stackedWidget->addWidget(setnewPage);
    stackedWidget->addWidget(settingsPage);
    stackedWidget->addWidget(feedbackPage);


    // 默认显示demo界面
    stackedWidget->setCurrentWidget(demoPage);
    this->setAttribute(Qt::WA_DeleteOnClose);
    ui->setupUi(this);  // 加载 Designer 设计的界面

}



MainWindow::~MainWindow() {
    delete demoPage;
    delete setnewPage;
    delete feedbackPage;
    delete settingsPage;
    delete stackedWidget;
    delete ui;  // 自动清理 Designer UI
}

//处理settings_window的信号函数的槽函数
void MainWindow::goto_demo(){
    demoPage->init(1);
    stackedWidget->setCurrentWidget(demoPage);
}

void MainWindow::goto_setnew(){
    setnewPage->reset_page();
    stackedWidget->setCurrentWidget(setnewPage);
}

void MainWindow::goto_settings(){
    settingsPage->init();
    stackedWidget->setCurrentWidget(settingsPage);
}

void MainWindow::goto_feedback(){
    feedbackPage->init();
    stackedWidget->setCurrentWidget(feedbackPage);
}

void MainWindow::go_exit(){
    save(err_buf);
    this->close();
}

