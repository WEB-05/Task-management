#include "fun.h"
#include "email.h"
#include <iostream>
#include <string.h>
#include <fstream>
#include <time.h>
#include <algorithm>
using namespace std;

//compare class in set

bool cmp::operator()(const alarm_qq& a,const alarm_qq& b)const
    {
        struct tm aa=a.alarmtime;
        struct tm bb=b.alarmtime;
        if(aa.tm_year==bb.tm_year)
        {
            if(aa.tm_mon==bb.tm_mon)
            {
                if(aa.tm_mday==bb.tm_mday)
                {
                    if(aa.tm_hour==bb.tm_hour)
                    {
                        return aa.tm_min<bb.tm_min;
                    }
                    else
                    {
                        return aa.tm_hour<bb.tm_hour;
                    }
                }
                else
                {
                    return aa.tm_mday<bb.tm_mday;
                }
            }
            else
            {
                return aa.tm_mon<bb.tm_mon;
            }
        }
        else
        {
            return aa.tm_year<bb.tm_year;
        }
    }


//define global variables
set<alarm_qq,cmp> alarm_queue;
bool alarm_work=0;
task tasks[MAX_TASK];
alarm alarms[MAX_ALARM];
set<string> u_name;

int last_5_complete[5]={0};
int overdue=0;
user curr_user;
bool user_change=0;
char err_buf[50];


//class user
user::user(){}
user::user(int id,string na,string pas,string email_a="webrunpku",string email_pass="HZ4suXv6ZEvMeDzp",colors co={0,0,0} ):
id_num(id),name(na),password(pas),email_account(email_a),email_password(email_pass),color(co){}
string user::get_name() const
{return name;}
bool user::change_name(string name1,char* error)
{
    if(u_name.find(name1)!=u_name.end())
    {
        strcpy(error,"name already exists");
        return 0;
    }
    name=name1;
    user_change=1;
    return 1;   
}
string user::get_password() const
{return password;}
bool user::change_password(string pass,char* error)
{
    password=pass;
    user_change=1;
    return 1;   
}
string user::get_email() const
{
    return email_account;
}
bool user::change_email(string emailn,char* error)
{
    email_account=emailn;
    user_change=1;
    return 1;   
}
string user::get_email_password() const
{
    return email_password;
}
bool user::change_email_password(string pass,char* error)
{
    email_password=pass;
    user_change=1;
    return 1;   
}
int user::get_id() const{return id_num;}
int user::user_number=0;
colors user::get_color() const
{return color;}
bool user::change_color(colors c,char* error)
{
    color=c;
    return 1;   
}
ifstream& operator >>(ifstream& i,user& u)
{
    i>>u.id_num>>u.name>>u.password>>u.email_account>>u.email_password>>
    u.color.r>>u.color.g>>u.color.b;
    return i;
}
ofstream& operator <<(ofstream& o,const user& u)
{
    o<<u.id_num<<' '<<u.name<<' '<<u.password<<' '<<u.email_account<<' '<<u.email_password<<
     ' '<<u.color.r<<' '<<u.color.g<<' '<<u.color.b<<endl;
    return o;
}

//class alarm
int alarm::alarm_number=0;
int alarm::alarm_number_vec=0;
int alarm::real_alarm_number=0;
set<int> alarm::empty_location;
map<int,int> alarm::id_to_location;
alarm::alarm(){valid=0;}
alarm::alarm(int aid,int tid,struct tm tim,int way,int* members,int member_num):
alarm_id(aid),task_id(tid),alarmtime(tim),alarm_way(way)
{
    for(int i=0;i<member_num;i++)
        {
            member.push_back(members[i]);
        }
    valid=1;
}
int alarm::get_alarm_id() const {return alarm_id;}
struct tm alarm::get_alarmtime() const {return alarmtime;}
int alarm::get_alarm_way() const {return alarm_way;}
bool alarm::do_alarm()
{
    if(alarm_way&2)
    {
        //window
    }
    if(alarm_way&4)
    {
        //ring
    }
    if(alarm_way&1)
    {
        for(int i=0;i<member.size();i++)
        {
            memberr mb=tasks[task::id_to_location[task_id]].members[member[i]];
            send_email(curr_user.get_email(),curr_user.get_email_password(),mb.email,"subject","content",err_buf);
        }
    }
    return 1;
}
ofstream& operator<<(ofstream& o,const alarm& a)
{
    o<<a.alarm_id<<' '<<a.task_id<<' '<<a.alarm_way<<' '<<a.valid<<' '<<a.saving_place<<endl;
    o<<a.alarmtime.tm_year<<' '<<a.alarmtime.tm_mon<<' '<<a.alarmtime.tm_mday<<' '<<a.alarmtime.tm_min<<endl;
    o<<a.member.size()<<endl;
    for(int i=0;i<a.member.size();i++)
    {
        o<<a.member[i]<<' ';
    }
    o<<endl;
    return o;
}
ifstream& operator>>(ifstream& in,alarm& a)
{
    in>>a.alarm_id>>a.task_id>>a.alarm_way>>a.valid>>a.saving_place;
    in>>a.alarmtime.tm_year>>a.alarmtime.tm_mon>>a.alarmtime.tm_mday>>a.alarmtime.tm_min;
    a.alarmtime.tm_sec=0;
    int n,memb;
    in>>n;
    for(int i=0;i<n;i++)
    {
        in>>memb;
        a.member.push_back(memb);
    }
    return in;
}

//class task
int task::task_number=0;
int task::task_number_vec=0;
int task::real_task_number=0;
set<int> task::empty_location;
map<int,int> task::id_to_location;
string task::get_title() const {return title;}
task::task(){valid=0;}
task::task(string ti,string tex,int typ,struct tm endt,int tid,int urg,int mod,bool show=1):
title(ti),text(tex),type(typ),endtime(endt),task_id(tid),urgent(urg),mode(mod),show(show){valid=1;}
bool task::change_title(string titlen,char* error)
{
    title=titlen;
    return 1;
}
string task::get_text() const {return text;}
bool task::change_text(string textn,char* error)
{
    text=textn;
    return 1;
}
int task::get_urgent() const{return urgent;}
bool task::change_urgent(int urgentn,char* error)
{
    urgent=urgentn;
    return 1;
}
int task::get_mode() const {return mode;}
bool task::change_mode(int moden,char* error)
{
    mode=moden;
    return 1;
}
struct tm task::get_endtime() const{
    return endtime;
}
bool task::change_endtime(struct tm time,char* error)
{
    endtime=time;
    return 1;
}
int task::get_taskid() const {return task_id;}
int task::make_alarm(struct tm alarmtime,int task_id,int alarm_way,int* member_to,int member_num,char* error)
{
    int id=alarm::alarm_number;
    alarm a(id,task_id,alarmtime,alarm_way,member_to,member_num);
    int loca;
    if(alarm::empty_location.empty())
    {
        loca=alarm::alarm_number_vec;
        alarm::alarm_number_vec++;
    }
    else
    {
        loca=*(alarm::empty_location.begin());
        alarm::empty_location.erase(alarm::empty_location.begin());
    }
    if(loca>=MAX_ALARM)
    {
        strcpy(error,"too many alarms");
        alarm::alarm_number_vec--;
        return -1;
    }
    ++alarm::alarm_number;
    alarm::real_alarm_number++;
    a.saving_place=loca;
    alarm::id_to_location[id]=loca;
    alarm_id.push_back(id);
    alarms[loca]=a;
    alarm_qq aq{alarmtime,id};
    alarm_queue.insert(aq);
    return id;
}
bool task::addmember(string name,string email,char* error)
{
    memberr mb{name,email};
    members.push_back(mb);
    return 1;
}
/// aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa empty的不要显示出来（防止序号改变）
bool task::deletemember(int index,char* error)
{ members[index].name="empty";
    return 1;
}
ofstream& operator<<(ofstream& o,const task& t)
    {
        o<<t.task_id<<' '<<t.title<<' '<<t.text<<' '<<t.type<<' '<<t.urgent<<' '<<t.mode<<' '<<t.show
          <<' '<<t.valid<<' '<<t.save_place<<endl;
        o<<t.endtime.tm_year<<' '<<t.endtime.tm_mon<<' '<<t.endtime.tm_mday<<' '<<t.endtime.tm_min<<endl;
        o<<t.alarm_id.size()<<endl;
        for(int i=0;i<t.alarm_id.size();i++)
        {
            o<<t.alarm_id[i]<<' ';
        }
        o<<endl<<t.members.size();
        for(int i=0;i<t.members.size();i++)
        {
            o<<t.members[i].name<<' '<<t.members[i].email<<endl;
        }
        return o;
    }
ifstream& operator>>(ifstream& in,task& t)
{   
    in>>t.task_id>>t.title>>t.text>>t.type>>t.urgent>>t.mode>>t.show>>t.valid>>t.save_place;
    in>>t.endtime.tm_year>>t.endtime.tm_mon>>t.endtime.tm_mday>>t.endtime.tm_min;
    t.endtime.tm_sec=0;
    int n,id;
    in>>n;
    for(int i=0;i<n;i++)
    {
        in>>id;
        t.alarm_id.push_back(id);
    }
    in>>n;
    string name,email;
    for(int i=0;i<n;i++)
    {
        in>>name>>email;
        t.members.push_back(memberr{name,email});
    }
    return in;
}



int make_task(string title,string text,int type,int mode,struct tm endtime,int urg,char* error,bool show=1)
{
    int id=task::task_number;
    task t(title,text,type,endtime,id,urg,mode,show);
    int loca;
    if(task::empty_location.empty())
    {
        loca=task::task_number_vec;
        task::task_number_vec++;
    }
    else
    {
        loca=*(task::empty_location.begin());
        task::empty_location.erase(task::empty_location.begin());
    }
    if(loca>=MAX_ALARM)
    {
        strcpy(error,"too many tasks");
        task::task_number_vec--;
        return -1;
    }
    task::real_task_number++;
    task::task_number++;
    t.save_place=loca;
    task::id_to_location[id]=loca;
    tasks[loca]=t;
    return id;
}

bool delete_task(int task_id,char *error)
{
    auto a=task::id_to_location.find(task_id);
    if(a==task::id_to_location.end())
    {
        strcpy(error,"task not found");
        return 0;
    }
    int loca=a->second;
    for(int i:tasks[loca].alarm_id)
    {
        if(!delete_alarm(i,error))
            return 0;
    }
    task::id_to_location.erase(a);
    tasks[loca].valid=0;
    task::real_task_number--;
    task::empty_location.insert(loca);
    return 1;
}

bool delete_alarm(int alarm_id,char* error)
{
    auto a=alarm::id_to_location.find(alarm_id);
    if(a==alarm::id_to_location.end())
    {
        strcpy(error,"alarm not found");
        return 0;
    }
    int loca=a->second;
    alarm::id_to_location.erase(a);
    alarms[loca].valid=0;
    alarm::real_alarm_number--;
    alarm::empty_location.insert(loca);
    alarm_qq t{alarms[loca].get_alarmtime(),alarms[loca].get_alarm_id()};
    auto b=alarm_queue.find(t);
    if(b==alarm_queue.end())
    {
        strcpy(error,"alarm not found in set");
        return 0;
    }
    alarm_queue.erase(b);
    return 1;
}

bool filter(int type,int mode,char *error)
{
    for(int i=0;i<task::task_number_vec;i++)
    {
        if(tasks[i].valid&&((tasks[i].type&type)==type)&&((tasks[i].mode&mode)==mode))
        {
            tasks[i].show=1; 
        }
        else
        {
            tasks[i].show=0;
        }
    }
}

int comparetim(const struct tm& aa,const struct tm& bb,int way=1)
    {
        if(aa.tm_year==bb.tm_year)
        {
            if(aa.tm_mon==bb.tm_mon)
            {
                if(aa.tm_mday==bb.tm_mday)
                {
                    if(aa.tm_hour==bb.tm_hour)
                    {
                        if(aa.tm_min==bb.tm_min&&way)
                        {
                            return aa.tm_sec<bb.tm_sec;
                        }
                        else
                        {
                            if(aa.tm_min==bb.tm_min)
                            {
                                return -1;
                            }
                            else
                            {
                                return aa.tm_min<bb.tm_min;
                            }
                        }
                    }
                    else
                    {
                        return aa.tm_hour<bb.tm_hour;
                    }
                }
                else
                {
                    return aa.tm_mday<bb.tm_mday;
                }
            }
            else
            {
                return aa.tm_mon<bb.tm_mon;
            }
        }
        else
        {
            return aa.tm_year<bb.tm_year;
        }
    }

bool update(char *error)
{
    time_t current=time(NULL);
    struct tm *tim=localtime(&current);
    for(int i=0;i<task::task_number_vec;i++)
    {
        if(tasks[i].valid&&tasks[i].mode==NORMAL)
        {
            struct tm endtime=tasks[i].endtime;
            if(comparetim(endtime,*tim))
            {
                tasks[i].mode=OVERDUE;
            }
        }
    }

}

bool sort_time(const task& a,const task& b)
{
    struct tm aa=a.get_endtime();
    struct tm bb=b.get_endtime();
    int t=comparetim(aa,bb);
    if(t==-1)
    {
        return a.get_urgent()>b.get_urgent();
    }
    else
    {
        return t;
    }
}

bool sort_urgent(const task& a,const task& b)
{
    if(a.get_urgent()==b.get_urgent())
    {
        struct tm aa=a.get_endtime();
        struct tm bb=b.get_endtime();
        int t=comparetim(aa,bb);
        if(t==-1)
            t=0;
        return t;
    }
    else
    {
        return a.get_urgent()>b.get_urgent();
    }
}

bool sort_task(int way,char *error)
{
    switch(way)
    {
        case ENDTIME:
        {
            sort(tasks,tasks+task::task_number_vec,sort_time);
            break;
        }
        case URGENT:
        {
            sort(tasks,tasks+task::task_number_vec,sort_urgent);
            break;
        }
    }
    task::empty_location.clear();
    for(int i=0;i<task::task_number_vec;i++)
    {
        if(tasks[i].valid)
        {
            task::id_to_location[tasks[i].get_taskid()]=i;
            tasks[i].save_place=i;
        }
        else
        {
            task::empty_location.insert(i);
        }
    }

    return 1;
}

bool save()
{
    if(user_change)
    {
        ifstream srcf;
        srcf.open("user_data.txt",ios::in);
        vector<user> u;
        int n;
        srcf>>n;
        user us;
        int id=curr_user.get_id();
        for(int i=0;i<n;i++)
        {
            srcf>>us;
            if(us.get_id()==id)
            {
                u.push_back(curr_user);
            }
            else
            {
                u.push_back(us);
            }
        }
        srcf.close();
        ofstream outf("user_data.txt",ios::out);
        outf<<user::user_number<<endl;
        for(int i=0;i<user::user_number;i++)
        {
            outf<<u[i];
        }
        outf.close();
    }
    char cid=char(curr_user.get_id()+'0');
    string ccid;
    ccid=cid;
    string filename="data_of_id"+ccid+".txt";
    ofstream outfile(filename,ios::out);
    outfile<<overdue<<' ';
    for(int i=0;i<5;i++)
        outfile<<last_5_complete[i]<<' ';
    outfile<<endl;
    outfile<<task::task_number<<' '<<task::task_number_vec<<' '<<task::real_task_number<<endl;
    for(int i=0;i<task::task_number_vec;i++)
    {
        outfile<<tasks[i];
    }
    outfile<<alarm::alarm_number<<' '<<alarm::alarm_number_vec<<' '<<alarm::real_alarm_number<<endl;
    for(int i=0;i<alarm::alarm_number_vec;i++)
    {
        outfile<<alarms[i];
    }
    outfile.close();
    u_name.clear();
    alarm_work=0;
    return 1;
}

bool load(string filename,char* error)
{
    ifstream infile;
    infile.open(filename,ios::in);
    if(infile)
    {
        infile>>overdue;
        for(int i=0;i<5;i++)
            infile>>last_5_complete[i];
        infile>>task::task_number>>task::task_number_vec>>task::real_task_number;
        for(int i=0;i<task::task_number_vec;i++)
        {
            infile>>tasks[i];
            if(tasks[i].valid)
            {
                task::id_to_location[tasks[i].get_taskid()]=i;
            }
            else
            {
                task::empty_location.insert(i);
            }
        }
        infile>>alarm::alarm_number>>alarm::alarm_number_vec>>alarm::real_alarm_number;
        time_t current=time(NULL);
        struct tm *tim=localtime(&current);
        struct tm alarmtim;
        for(int i=0;i<alarm::alarm_number_vec;i++)
        {
            infile>>alarms[i];
            if(alarms[i].valid)
            {
                int id=alarms[i].get_alarm_id();
                alarm::id_to_location[id]=i;
                alarmtim=alarms[i].get_alarmtime();
                if(comparetim(*tim,alarmtim))
                {
                    alarm_queue.insert(alarm_qq{alarmtim,i});
                }
            }
            else
            {
                alarm::empty_location.insert(i);
            }
        }
        infile.close();
    }
    else
    {
        //如果是刚注册第一次登录返回0是正常的，因为还没有保存过（没有创建文件）
        strcpy(error,"data of the user don't found");
    }
    alarm_work=1;
    return 1;
}

bool signup(string username,string password,char *error,string email_account="webrunpku",
    string email_password="HZ4suXv6ZEvMeDzp",colors color={0,0,0})
{
    
        ifstream infile;
        infile.open("user_data.txt",ios::in);
        vector<user> users;
        if(infile)
        {
            infile>>user::user_number;
            user us;
            for(int i=0;i<user::user_number;i++)
            {
                infile>>us;
                users.push_back(us);
                string nn=us.get_name();
                if(nn==username)
                {   
                    //需要做出提示用户名已存在
                    strcpy(error,"username already exists");
                    infile.close();
                    return 0;
                }
            }
            infile.close();
        }
        else
        {
            //如果是还没有注册过任何用户返回0是正常的，因为还没有保存过（没有创建文件）
            strcpy(error,"all user data not found");
        }
        user::user_number++;
        user newuse(user::user_number,username,password,email_account,email_password,color);
        users.push_back(newuse);
        ofstream outf("user_data.txt",ios::out);
        outf<<user::user_number<<endl;
        for(int i=0;i<user::user_number;i++)
        {
            outf<<users[i];
        }
        outf.close();
}



int  login(string username,string password,char *error)
{
        u_name.clear();
        ifstream infile;
        infile.open("user_data.txt",ios::in);
        bool flag=0;
        if(infile)
        {
            infile>>user::user_number;
            user us;
            for(int i=0;i<user::user_number;i++)
            {
                infile>>us;
                u_name.insert(us.get_name());
                if(!flag)
                {
                    if(username==us.get_name())
                    {
                        if(password!=us.get_password())
                        {
                            //应提示密码错误
                            strcpy(error,"password incorrect");
                            infile.close();
                            return -1;
                        }
                        else 
                        {
                            flag=1;
                            curr_user=us;
                        }
                    }
                }
            }
            infile.close();
        }
        else
        {
            //应提示没有注册，请先注册
            strcpy(error,"all user data not found");
            return -2;
        }
    if(!flag)
    {
        //应提示用户名不存在
        strcpy(error,"all user data not found");
        return -3;
    }
    char cid=char(curr_user.get_id()+'0');
    string ccid;
    ccid=cid;
    string filename="data_of_id"+ccid+".txt";
    load(filename,error);

    return 1;
}


//notes:
//1.所有输入中不要有空格（先不做错误检测，输入测试时手动避免）
//2.一定要调用save
//3.每次刷新update
//4.新载入数据最好重过一次filter和sort
//5.暂不支持用户注销
//6.展示时注意valid字段（member是name!="empty"）
//7.所有文件GBK编码
