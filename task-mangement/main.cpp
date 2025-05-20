#include <windows.h>
#include "widget.h"
#include "fun.h"
#include <QApplication>
#include<iostream>
#include <stdio.h>
#include <QThread>
#include<QDebug>
#include <process.h>
#include<string.h>
#include<string>
#include "worker.h"
#include "email.h"

//HANDLE Mutex= CreateMutex(NULL, 0, NULL);


int main(int argc, char *argv[])
{

    QApplication a(argc,argv);
    //WaitForSingleObject(Mutex,INFINITE);
    Widget w;
    RegisterTable();
    //ReleaseMutex(Mutex);


    Worker worker;
    QThread workerThread;
    worker.moveToThread(&workerThread);

   
    QObject::connect(&workerThread, &QThread::started, &worker, &Worker::doWork);
    QObject::connect(&worker, &Worker::requestRing, &w,&Widget::doALARM);

    workerThread.start();
    a.exec();


    workerThread.wait();
    workerThread.quit();

    //CloseHandle(Mutex);
    return 0;
}

