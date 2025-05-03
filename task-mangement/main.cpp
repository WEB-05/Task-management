#include <windows.h>
#include "widget.h"
#include "fun.h"
#include <QApplication>
#include<iostream>
#include <stdio.h>
#include <QThread>
#include<QDebug>
#include <process.h>
#include "worker.h"

//HANDLE Mutex= CreateMutex(NULL, 0, NULL);


void Worker::doWork()
{
    //WaitForSingleObject(Mutex, INFINITE);
    printf("time\n");
    fflush(stdout);
    while(1)
    {
        emit Worker::requestShowWindow(); // 发送信号，请求主线程显示窗口
        QThread::sleep(5);
    }
    //ReleaseMutex(Mutex);
}


int main(int argc, char *argv[])
{

    QApplication a(argc,argv);
    //WaitForSingleObject(Mutex,INFINITE);
    Widget w;
    w.show();
    //ReleaseMutex(Mutex);
    fuu();



    Worker worker;
    QThread workerThread;
    worker.moveToThread(&workerThread);

    // 连接信号槽
    QObject::connect(&workerThread, &QThread::started, &worker, &Worker::doWork);
    QObject::connect(&worker, &Worker::requestShowWindow, &w,&Widget::createSecondWindow);

    workerThread.start(); // 启动子线程
    a.exec();

    workerThread.quit();
    workerThread.wait();

    //CloseHandle(Mutex);
    return 0;
}

