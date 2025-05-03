#ifndef WORKER_H
#define WORKER_H

#include <QObject>

class Worker : public QObject {
    Q_OBJECT
public:
    void doWork();
signals:
    void requestShowWindow();
};

#endif // WORKER_H
