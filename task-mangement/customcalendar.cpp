#include "customcalendar.h"
#include <QPainter>
#include<map>
using namespace std;

extern map<QDate,int> sche;

CustomCalendar::CustomCalendar(QWidget *parent)
    : QCalendarWidget(parent)
{
}


void CustomCalendar::paintCell(QPainter *painter, const QRect &rect, QDate date) const
{
    QCalendarWidget::paintCell(painter, rect, date);
    if (sche.find(date)!=sche.end())
    {
        int m=sche[date];
        if(m==1)
        {
            painter->setBrush(Qt::green);
            painter->setPen(Qt::green);
            painter->drawEllipse(rect.bottomLeft() + QPoint(rect.width()/2, -13), 3, 3);
        }
        else if(m==2)
        {
            painter->setBrush(Qt::red);
            painter->setPen(Qt::red);
            painter->drawEllipse(rect.bottomLeft() + QPoint(rect.width()/2, -13), 3, 3);
        }
        else if(m==4)
        {
            painter->setBrush(Qt::blue);
            painter->setPen(Qt::blue);
            painter->drawEllipse(rect.bottomLeft() + QPoint(rect.width()/2, -13), 3, 3);
        }
        else if(m==3)
        {
            painter->setBrush(Qt::red);
            painter->setPen(Qt::red);
            painter->drawEllipse(rect.bottomLeft() + QPoint(rect.width()/2-6, -13), 3, 3);
            painter->setBrush(Qt::green);
            painter->setPen(Qt::green);
            painter->drawEllipse(rect.bottomLeft() + QPoint(rect.width()/2+6, -13), 3, 3);
        }
        else if(m==5)
        {
            painter->setBrush(Qt::black);
            painter->setPen(Qt::black);
            painter->drawEllipse(rect.bottomLeft() + QPoint(rect.width()/2-6, -13), 3, 3);
            painter->setBrush(Qt::green);
            painter->setPen(Qt::green);
            painter->drawEllipse(rect.bottomLeft() + QPoint(rect.width()/2+6, -13), 3, 3);
        }
        else if(m==6)
        {
            painter->setBrush(Qt::red);
            painter->setPen(Qt::red);
            painter->drawEllipse(rect.bottomLeft() + QPoint(rect.width()/2-6, -13), 3, 3);
            painter->setBrush(Qt::black);
            painter->setPen(Qt::black);
            painter->drawEllipse(rect.bottomLeft() + QPoint(rect.width()/2+6, -13), 3, 3);
        }
        else if(m==7)
        {
            painter->setBrush(Qt::red);
            painter->setPen(Qt::red);
            painter->drawEllipse(rect.bottomLeft() + QPoint(rect.width()/2-12, -13), 3, 3);
            painter->setBrush(Qt::black);
            painter->setPen(Qt::black);
            painter->drawEllipse(rect.bottomLeft() + QPoint(rect.width()/2, -13), 3, 3);
            painter->setBrush(Qt::green);
            painter->setPen(Qt::green);
            painter->drawEllipse(rect.bottomLeft() + QPoint(rect.width()/2+12, -13), 3, 3);
        }
    }
    return;
}
