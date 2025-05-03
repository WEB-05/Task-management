#include "fun.h"
#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

//define global variables
set<alarm_qq,cmp> alarm_queue;
task tasks[MAX_TASK];
alarm alarms[MAX_ALARM];

int last_5_complete[5];
int overdue;

void fuu()
{
    cout<<1<<endl;
    fflush(stdout);
}
