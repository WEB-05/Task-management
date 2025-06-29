#ifndef CUSTOMCALENDAR_H
#define CUSTOMCALENDAR_H
#include <QCalendarWidget>
#include<QPainter>
#include <QDate>

class CustomCalendar : public QCalendarWidget
{
    Q_OBJECT
public:
    explicit CustomCalendar(QWidget *parent = nullptr);

protected:
    void paintCell(QPainter *painter, const QRect &rect, QDate date) const override;


};


#endif // CUSTOMCALENDAR_H
