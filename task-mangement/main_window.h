#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QStackedWidget>
#include "settings_window.h"
#include "demo_window.h"
#include "feedback_window.h"
#include "setnew_window.h"
#include "calendar.h"

extern QWidget* overlay;

namespace Ui { class MainWindow; }

class MainWindow:public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QStackedWidget *stackedWidget;

    Demo_Window *demoPage;
    SetNew_Window *setnewPage;
    Settings_Window *settingsPage;
    Feedback_Window *feedbackPage;
    Calendar *calendarPage;

private slots:
    // 页面切换
    void goto_demo();
    void goto_setnew();
    void goto_settings();
    void goto_feedback();
    void go_exit();
    void goto_calendar();
    void goto_date(QDate date);

};

#endif // MAIN_WINDOW_H
