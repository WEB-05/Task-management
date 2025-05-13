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

//sort ways
#define ENDTIME 1
#define URGENT 2

//max numbers
#define MAX_TASK 100
#define MAX_ALARM 500

using namespace std;

extern bool alarm_work;

extern int overdue;


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
    user();
    user(int id_num,string na,string pas,string email_a,string email_pass,colors co );
    string get_name() const;
    // input:~ output:success:1;else:0 with error information at char* error
    bool change_name(string name,char* error);
    string get_password() const;
    bool change_password(string password,char* error);
    string get_email() const;
    bool change_email(string email_acc,char* error);
    string get_email_password() const;
    bool change_email_password(string email_password,char* error);
    int get_id() const;
    colors get_color() const;
    bool change_color(colors c,char* error);
    friend ifstream& operator >>(ifstream& i,user& u);
    friend ofstream& operator <<(ofstream& o,const user& u);
};
extern user curr_user;


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
    bool valid;
    int saving_place; //using for saving in array and file
    static int alarm_number; //sum of alarm
    static int alarm_number_vec;
    static int real_alarm_number;
    static set<int> empty_location;
    static map<int,int> id_to_location;
    //get an alarm with alarms[alarm::id_to_location[alarm_id]]
    alarm();
    alarm(int aid,int tid,struct tm tim,int way,int* member,int member_num);
    int get_alarm_id() const;
    struct tm get_alarmtime() const;
    int get_alarm_way() const;

    //please write this function to show window,ring and send email according to the alarm_way
    //you can use the "send_email" function
    bool do_alarm();
    friend ofstream& operator<<(ofstream& o,const alarm& a);
    friend ifstream& operator>>(ifstream& in,alarm& a);
};
typedef struct m
{
    string name;
    string email;
}memberr;
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
    friend class alarm;
public:
    bool valid;
    vector<int> alarm_id;
    vector<memberr> members;
    int save_place; //using for saving in array and file
    static int task_number; //sum of task
    static int task_number_vec;
    static int real_task_number;
    static set<int>empty_location;
    static map<int,int> id_to_location;
    //get a task with tasks[task::id_to_location[task_id]]
    task();
    task(string ti,string tex,int typ,struct tm endt,int tid,int urg,int mode,bool show);
    string get_title() const;
    bool change_title(string title,char* error);
    string get_text() const;
    bool change_text(string text,char* error);
    int get_urgent() const;
    bool change_urgent(int urgent,char* error);
    int get_mode() const;
    bool change_mode(int mode,char* error);
    struct tm get_endtime() const;
    bool change_endtime(struct tm time,char* error);
    int get_taskid() const;
    //return: -1:error else:alarm_id
    int make_alarm(struct tm alarmtime,int task_id,int alarm_way,int* member,int member_num,char* error);
    bool addmember(string name,string email,char* error);
    bool deletemember(int index,char* error);
    friend int make_task(string title,string text,int type,int mode,struct tm endtime,int urg,char* error,bool show);
    friend bool filter(int type,int mode,char *error);
    friend bool update(char* error);
    friend ofstream& operator<<(ofstream& o,const task& t);
    friend ifstream& operator>>(ifstream& in,task& t);
};
//struct of alarm for set
typedef struct alarm_q
{
    struct tm alarmtime;
    int alarm_id;
}alarm_qq;

class cmp
{
public:
    bool operator()(const alarm_qq& a,const alarm_qq& b)const;
};

extern set<alarm_qq,cmp> alarm_queue;
extern task tasks[MAX_TASK];
extern alarm alarms[MAX_ALARM];

// input:~ output:success:1;else:0 with error information at char* error
int  login(string username,string password,char *error);
// input:~ output:success:1;else:0 with error information at char* error
bool signup(string username,string password,char *error,string email_account,string email_password,colors color);

int make_task(string title,string text,int type,int mode,struct tm endtime,int urg,char* error,bool show);

bool delete_task(int task_id,char *error);

bool delete_alarm(int alarm_id,char* error);

int comparetim(const struct tm& aa,const struct tm& bb,int way);

bool sort_task(int way);

//退出前调用，存盘
bool save(char *error); 

bool load(string filename,char* error);

#endif // FUN_H
