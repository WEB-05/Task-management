#ifndef WORKER_H
#define WORKER_H

#include <QObject>

class Worker : public QObject {
    Q_OBJECT
public:
    void doWork();
signals:
    void requestRing();
};

#endif // WORKER_H
