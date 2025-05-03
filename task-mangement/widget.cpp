#include "widget.h"

#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::createSecondWindow()
{
    Widget *secondWindow = new Widget(); // 主线程创建窗口
    secondWindow->setWindowTitle("Second Window");
    secondWindow->show();
}
