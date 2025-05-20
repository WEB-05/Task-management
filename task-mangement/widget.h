#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QObject>
#include <QVBoxLayout>
#include <QLabel>
#include <QMessageBox>
#include <string.h>

#include "fun.h"

QT_BEGIN_NAMESPACE
using namespace std;
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
public slots:
    void doALARM();
    void doALARM_test();

    void onButtonClicked_login(const string &username,const string &password);
    void onButtonClicked_register();

    void onButtonClicked_confirm(const string &username,const string &password,const colors &color);
    void onButtonClicked_back();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
