#include "worker.h"
#include<iostream>
#include <stdio.h>
#include <QThread>
#include <time.h>

using namespace std;

void Worker::doWork()
{
    //WaitForSingleObject(Mutex, INFINITE);
    printf("time\n");
    fflush(stdout);
    int n;
    while(1)
    {
        time_t current=time(NULL);
        struct tm *tim=localtime(&current);
        n=(5-(tim->tm_min)%5)*60-tim->tm_sec;
        QThread::sleep(n);
        emit Worker::requestRing(); // �����źţ��������߳�����
    }
    //ReleaseMutex(Mutex);
}
