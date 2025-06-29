#ifndef SETTINGS_WINDOW_H
#define SETTINGS_WINDOW_H

#include <QWidget>

namespace Ui {
class Settings_Window;
}

class Settings_Window : public QWidget
{
    Q_OBJECT

public:
    explicit Settings_Window(QWidget *parent = nullptr);
    ~Settings_Window();
    void init();

private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_horizontalSlider_4_valueChanged(int value);

    void on_horizontalSlider_6_valueChanged(int value);

    void on_horizontalSlider_5_valueChanged(int value);

    void on_horizontalSlider_3_valueChanged(int value);

    void on_pushButton_10_clicked();


    void on_pushButton_11_pressed();

    void on_pushButton_11_released();

    void on_pushButton_12_pressed();

    void on_pushButton_12_released();

    void on_pushButton_13_clicked();

private:
    Ui::Settings_Window *ui;

    bool test();

signals:
    void goto_demo();
    void goto_setnew();
    void goto_feedback();
    void go_exit();
    void go_calendar();
};

#endif // SETTINGS_WINDOW_H
