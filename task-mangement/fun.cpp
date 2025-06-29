#include "fun.h"
#include "email.h"
#include <iostream>
#include <string.h>
#include <fstream>
#include <time.h>
#include <algorithm>
#include<widget.h>
#include<QApplication>
#include <QSoundEffect>
using namespace std;

char err_buf[50];
QSoundEffect *alarm_sound =nullptr;

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
int complete_num=0;
user curr_user;
bool user_change=0;



//class user
user::user(){}
user::user(int id,string na,string pas,string email_a="webrunpku",string email_pass="HZ4suXv6ZEvMeDzp",colors co={0,0,0} ):
id_num(id),name(na),password(pas),email_account(email_a),email_password(email_pass),color(co){}
string user::get_name() const
{return name;}
bool user::change_name(string name1,char* error)
{
    if(name1=="")
    {
        strcpy(error,"用户名不能为空！");
        return 0;
    }
    if(this->name==name1)
    {
        strcpy(error,"新旧用户名一致，换个damn！");
        return 0;
    }
    if(u_name.find(name1)!=u_name.end())
    {
        strcpy(error,"手慢无，该用户名已存在！");
        return 0;
    }
    u_name.erase(name);
    name=name1;
    u_name.insert(name1);
    user_change=1;
    strcpy(error,"用户名更改成功，damn！");
    return 1;   
}
string user::get_password() const
{return password;}
bool user::change_password(string pass,char* error)
{
    if(pass=="")
    {
        strcpy(error,"哎嘛心真大，密码咋能没有呢！");
        return 0;
    }
    if(this->password==pass)
    {
        strcpy(error,"新旧密码一致，换个damn！");
        return 0;
    }
    strcpy(error,"密码更改成功，damn！");
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
    user_change=1;
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
alarm::alarm(int aid,int tid,struct tm tim,int way):
alarm_id(aid),task_id(tid),alarmtime(tim),alarm_way(way)
{
    valid=1;
}
int alarm::get_alarm_id() const {return alarm_id;}
struct tm alarm::get_alarmtime() const {return alarmtime;}
int alarm::get_alarm_way() const {return alarm_way;}
int alarm::get_task_id() const {return task_id;}
bool alarm::do_alarm()
{
    string name=tasks[task::id_to_location[task_id]].title;
    string text=tasks[task::id_to_location[task_id]].text;
    struct tm endtime=tasks[task::id_to_location[task_id]].endtime;
    int mode=tasks[task::id_to_location[task_id]].mode;
    string window="任务"+name+"提醒时间到了！";
    string subject="PKU Task Mangement："+name+"任务提醒";
    string content="您好，PKU Task Mangement 提醒您：\n任务名称："+name+"\n任务内容："+text+"\n截止时间："+
        to_string(endtime.tm_year+1900)+"年"+to_string(endtime.tm_mon+1)+"月"+to_string(endtime.tm_mday)+"日 "
                     +to_string(endtime.tm_hour)+":"+to_string(endtime.tm_min);
    if(mode==4)
    {
        content+="\n任务尚未完成，请合理安排时间，注意任务完成情况！";
    }
    else if(mode==1)
    {
        content+="\n任务已经完成，此邮件仅做提醒！";
    }
    if(alarm_way&1)
    {
        int num=tasks[task::id_to_location[task_id]].members.size();
        for(int i=0;i<num;i++)
        {
            memberr mb=tasks[task::id_to_location[task_id]].members[i];
            send_email(curr_user.get_email(),curr_user.get_email_password(),curr_user.get_email()+"@126.com",mb.email
                       ,QString::fromStdString(subject).toLocal8Bit().toStdString(),
                       QString::fromStdString(mb.name+content).toLocal8Bit().toStdString());
        }
    }
    if(alarm_way&2)
    {
        if(!alarm_sound)
        {
            alarm_sound = new QSoundEffect();
            alarm_sound->setSource(QUrl::fromLocalFile(":/sound/alarm.wav"));
            alarm_sound->setLoopCount(QSoundEffect::Infinite); // 无限循环
        }
        alarm_sound->play();
        QMessageBox msgBox;
        msgBox.setWindowModality(Qt::NonModal);  // 非模态对话框通常不触发系统提示音
        msgBox.setWindowTitle("时间到");
        msgBox.setText(QString::fromStdString(window));
        msgBox.exec();
        alarm_sound->stop();
    }
    return 1;
}
ofstream& operator<<(ofstream& o,const alarm& a)
{
    o<<a.alarm_id<<' '<<a.task_id<<' '<<a.alarm_way<<' '<<a.valid<<' '<<a.saving_place<<endl;
    o<<a.alarmtime.tm_year<<' '<<a.alarmtime.tm_mon<<' '<<a.alarmtime.tm_mday<<' '
      <<a.alarmtime.tm_hour<<' '<<a.alarmtime.tm_min<<endl;
    o<<endl;
    return o;
}
ifstream& operator>>(ifstream& in,alarm& a)
{
    in>>a.alarm_id>>a.task_id>>a.alarm_way>>a.valid>>a.saving_place;
    in>>a.alarmtime.tm_year>>a.alarmtime.tm_mon>>a.alarmtime.tm_mday>>a.alarmtime.tm_hour>>a.alarmtime.tm_min;
    a.alarmtime.tm_sec=0;
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
task::task(string ti,string tex,int typ,struct tm endt,int tid,int urg,int alrw,int mod,bool show=1):
    title(ti),text(tex),type(typ),endtime(endt),task_id(tid),urgent(urg),alarm_way(alrw),mode(mod),show(show){valid=1;}
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
int task::get_alarmway() const{return alarm_way;}
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
int task::get_type() const {return type;}
bool task::change_type(int typ,char* error)
{
    type=typ;
    return 1;
}
int task::make_alarm(struct tm alarmtime,int task_id,int alarm_way,char* error)
{
    int id=alarm::alarm_number;
    alarm a(id,task_id,alarmtime,alarm_way);
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
int task::addmember(string name,string email,char* error)
{
    memberr mb{name,email};
    members.push_back(mb);
    return members.size()-1;
}

bool task::deletemember(int index,char* error)
{
    members.erase(members.begin()+index);
    return 1;
}
ofstream& operator<<(ofstream& o,const task& t)
    {
        o<<t.task_id<<' '<<t.title<<' '<<t.text<<' '<<t.type<<' '<<t.urgent<<' '<<t.mode<<' '<<t.show
          <<' '<<t.valid<<' '<<t.save_place<<' '<<t.alarm_way<<endl;
        o<<t.endtime.tm_year<<' '<<t.endtime.tm_mon<<' '<<t.endtime.tm_mday<<' '<<t.endtime.tm_hour<<' '<<t.endtime.tm_min<<endl;
        o<<t.alarm_id.size()<<endl;
        for(int i=0;i<t.alarm_id.size();i++)
        {
            o<<t.alarm_id[i]<<' ';
        }
        o<<endl<<t.members.size()<<endl;
        for(int i=0;i<t.members.size();i++)
        {
            o<<t.members[i].name<<' '<<t.members[i].email<<endl;
        }
        return o;
    }
ifstream& operator>>(ifstream& in,task& t)
{   
    in>>t.task_id>>t.title>>t.text>>t.type>>t.urgent>>t.mode>>t.show>>t.valid>>t.save_place>>t.alarm_way;
    in>>t.endtime.tm_year>>t.endtime.tm_mon>>t.endtime.tm_mday>>t.endtime.tm_hour>>t.endtime.tm_min;
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



int make_task(string title,string text,int type,int mode,struct tm endtime,int urg,int alarm_way,char* error,bool show=1)
{
    int id=task::task_number;
    task t(title,text,type,endtime,id,urg,alarm_way,mode,show);
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
        delete_alarm(i,error,0);
    }
    task::id_to_location.erase(a);
    tasks[loca].valid=0;
    task::real_task_number--;
    task::empty_location.insert(loca);
    return 1;
}

bool delete_alarm(int alarm_id1,char* error,int way=1)
{
    auto a=alarm::id_to_location.find(alarm_id1);
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
    alarm_qq t{alarms[loca].get_alarmtime(),alarm_id1};
    auto b=alarm_queue.find(t);
    if(b==alarm_queue.end())
    {
        strcpy(error,"alarm not found in set");
    }
    else
    {
        alarm_queue.erase(b);
    }
    if(way)
    {
        int tid=alarms[loca].get_task_id();
        auto k=find(tasks[task::id_to_location[tid]].alarm_id.begin(),
                      tasks[task::id_to_location[tid]].alarm_id.end(),alarm_id1);
        tasks[task::id_to_location[tid]].alarm_id.erase(k);
    }
    return 1;
}

bool filter(int type,int mode,char *error)
{
    for(int i=0;i<task::task_number_vec;i++)
    {
        if(tasks[i].valid&&((tasks[i].type&type)==tasks[i].type)&&((tasks[i].mode&mode)==tasks[i].mode))
        {
            tasks[i].show=1; 
        }
        else
        {
            tasks[i].show=0;
        }
    }
    return 1;
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

bool update_task(char *error)
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
                overdue++;
            }
        }
    }
    return 1;

}

bool sort_time(const task& a,const task& b)
{
    int ma=a.get_mode();
    int mb=b.get_mode();
    if(ma==COMPLETE&&mb!=COMPLETE)
    {
        return false;
    }
    else if(ma!=COMPLETE&&mb==COMPLETE)
    {
        return true;
    }
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
    int ma=a.get_mode();
    int mb=b.get_mode();
    if(ma==COMPLETE&&mb!=COMPLETE)
    {
        return false;
    }
    else if(ma!=COMPLETE&&mb==COMPLETE)
    {
        return true;
    }
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

void sort_task(int way)
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
}

bool save(char* err_buf)
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
    outfile<<overdue<<' '<<complete_num<<' ';
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
        infile>>overdue>>complete_num;
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

bool signup(string username,string password,char *error)
{
    if(username=="")
    {
        strcpy(error,"用户名不能为空！");
        return 0;
    }

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
                strcpy(error,"手慢无，该用户名已存在！");
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
    if(password=="")
    {
        strcpy(error,"哎嘛心真大，密码忘设了！");
        return 0;
    }
    user::user_number++;
    user newuse(user::user_number,username,password,"webrunpku","HZ4suXv6ZEvMeDzp");
    users.push_back(newuse);
    ofstream outf("user_data.txt",ios::out);
    outf<<user::user_number<<endl;
    for(int i=0;i<user::user_number;i++)
    {
        outf<<users[i];
    }
    outf.close();
    return 1;
}


int  login(string username,string password,char *error)
{
    if(username=="")
    {
        strcpy(error,"空名吗，有意思！");
        return -4;
    }

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
                        if(password=="")
                        {
                            strcpy(error,"支付可以免密，登录不行！");
                            infile.close();
                            return -5;
                        }
                        if(password!=us.get_password())
                        {
                            //应提示密码错误
                            strcpy(error,"（第一时间赶来嘲笑）密码错了哈哈哈！");
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
            strcpy(error,"亲您还不是咱家会员，去免费注册一个吧！");
            return -2;
        }
    if(!flag)
    {
        //应提示用户名不存在
        strcpy(error,"亲您还不是咱家会员，去免费注册一个吧！");
        return -3;
    }
    char cid=char(curr_user.get_id()+'0');
    string ccid;
    ccid=cid;
    string filename="data_of_id"+ccid+".txt";
    load(filename,error);

    return 1;
}

