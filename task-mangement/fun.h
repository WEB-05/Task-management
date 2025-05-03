#ifndef FUN_H
#define FUN_H
#include<string>
#include <ctime>
#include<vector>
#include<queue>
#include<set>
#include<map>
//task type
#define STUDY 1
#define WORK 2
#define LIFE 4
#define VOLUNTEER 8
#define OTHER 16

//task mode
#define COMPLETE 1
#define OVERDUE 2
#define NORMAL 4


//alarm_way
//combain by addition
//example: email and ring:5
#define EMAIL 1
#define WINDOW 2
#define RING 4

//max numbers
#define MAX_TASK 100
#define MAX_ALARM 500

using namespace std;

//classes
typedef struct c
{
    int r;
    int g;
    int b;
}colors;
class user
{
    string name;
    string password;
    string email_account;
    string email_password;
    colors color;
    int id_num;
public:
    static int user_number;
    string get_name();
    // input:~ output:success:1;else:0 with error information at char* error
    bool change_name(string name,char* error);
    string get_password();
    bool change_password(string password,char* error);
    string get_email();
    bool change_email(string email_acc,char* error);
    string get_email_password();
    bool change_email_password(string email_password,char* error);
    int get_id();
    colors get_color();
    bool change_color(colors c,char* error);
};
class task;
class alarm
{
    int alarm_id;
    int task_id; //the task which create this alarm
    struct tm alarmtime;
    //member:tm_year tm_month tm_mday tm_hour tm_min
    int alarm_way;
    vector<int> member;//members to alarm

    friend class task;
public:
    int saving_place; //using for saving in array and file
    static int alarm_number; //sum of alarm
    static set<int> empty_location;
    static map<int,int> id_to_location;
    //get an alarm with alarms[alarm::id_to_location[alarm_id]]
    int get_alarm_id();
    struct tm get_alarmtime();
    int get_alarm_way();

    //please write this function to show window,ring and send email according to the alarm_way
    //you can use the "send_email" function
    bool do_alarm();

};
typedef struct m
{
    string name;
    string email;
}member;
class task
{
    string title;
    string text;
    int type;
    struct tm endtime;
    //member:tm_year tm_month tm_mday tm_hour tm_min
    int urgent;
    int task_id;
    int mode;
    bool show;
    vector<int> alarm_id;
    friend class alarm;
    friend bool filter(int type,int mode,char *error);
public:
    vector<member> members;
    int save_place; //using for saving in array and file
    static int task_number; //sum of task
    static set<int>empty_location;
    static map<int,int> id_to_location;
    //get a task with tasks[task::id_to_location[task_id]]
    string get_title();
    bool change_title(string title,char* error);
    string get_text();
    bool change_text(string text,char* error);
    int get_urgent();
    bool change_urgent(int urgent,char* error);
    int get_mode();
    bool change_mode(int mode,char* error);
    struct tm get_endtime();
    bool change_endtime(struct tm* time,char* error);
    int get_taskid();
    //return: -1:error else:alarm_id
    int make_alarm(struct tm alarmtime,int task_id,int alarm_way,int* member,int member_num,char* error);
    bool addmember(string name,string email,char* error);
    bool deletemember(int index,char* error);
};
//struct of alarm for set
typedef struct alarm_q
{
    struct tm alarmtime;
    int alarm_id;
}alarm_qq;

//compare class in set
class cmp
{
public:
    bool operator()(alarm_qq& a,alarm_qq& b);
};

// input:~ output:success:1;else:0 with error information at char* error
bool login(string username,string password,char *error);
// input:~ output:success:1;else:0 with error information at char* error
bool signup(string username,string password,string email_account,string email_password,char *error);
// input:~ output:success:1;else:0 with error information at char* error
bool send_email(char* email_accont,char* email_password,string receiver,string subject,string content,char* error);

bool delete_task(int task_id,char *error);

bool delete_alarm(int alarm_id,char* error);

bool sort_task(int way,char *error);

bool filter(int type,int mode,char *error);

bool update(char *error);

void fuu();
#endif // FUN_H
