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

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
