#ifndef DETAILED_H
#define DETAILED_H

#include <QWidget>

namespace Ui {
class Detailed;
}

class Detailed : public QWidget
{
    Q_OBJECT

public:
    explicit Detailed(QWidget *parent = nullptr);
    ~Detailed();

private slots:
    void on_pushButton_clicked();
    void handleButtonClick_1();
    void handleButtonClick_2();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

    void on_add_email_clicked();

    void on_add_alarm_time_clicked();

private:
    Ui::Detailed *ui;
    int loca;
    void init_mem(int way);
    void init_time(int way);
    QWidget *newContent=nullptr;
    QWidget *newContent1=nullptr;
    QWidget* overlay=nullptr;
public:
    void init(int loc);
};

#endif // DETAILED_H
