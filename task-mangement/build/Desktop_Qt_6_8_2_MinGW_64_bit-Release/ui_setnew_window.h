/********************************************************************************
** Form generated from reading UI file 'setnew_window.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETNEW_WINDOW_H
#define UI_SETNEW_WINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetNew_Window
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label;
    QLabel *label_2;
    QTimeEdit *new_deadtime;
    QDateEdit *new_deadline;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *new_emergency_degree;
    QTimeEdit *timeEdit_2;
    QDateEdit *dateEdit_2;
    QPushButton *add_alarm_time;
    QPushButton *reset_page_button;
    QPushButton *submit_page_button;
    QScrollArea *email_added;
    QWidget *scrollAreaWidgetContents_2;
    QLabel *label_7;
    QLineEdit *newtask_name;
    QLabel *label_8;
    QTextEdit *newtask_discription;
    QLabel *label_9;
    QLabel *label_10;
    QComboBox *task_type;
    QScrollArea *alarm_added;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_6;
    QPushButton *add_email;
    QLineEdit *new_email_address;
    QLineEdit *new_email_name;
    QPushButton *reset_email;
    QPushButton *reset_alarm_time;
    QGroupBox *groupBox;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *alarm_type_confirmed;
    QPushButton *pushButton_6;

    void setupUi(QWidget *SetNew_Window)
    {
        if (SetNew_Window->objectName().isEmpty())
            SetNew_Window->setObjectName("SetNew_Window");
        SetNew_Window->setEnabled(true);
        SetNew_Window->resize(979, 591);
        pushButton = new QPushButton(SetNew_Window);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 181, 100));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{ border-image: url(:/images/button.png) 0 0 0 0 stretch stretch;\n"
"\n"
"color:rgb(255, 243, 181);\n"
"font: 25pt \"FZYaoTi\";\n"
"}\n"
"    QPushButton:hover {\n"
"        color: black;\n"
"    }\n"
"    QPushButton:pressed {\n"
"        color: rgb(255, 19, 133);\n"
"    }"));
        pushButton_2 = new QPushButton(SetNew_Window);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 200, 181, 100));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{ border-image: url(:/images/button.png) 0 0 0 0 stretch stretch;\n"
"\n"
"color:rgb(255, 19, 133);\n"
"font: 25pt \"FZYaoTi\";\n"
"}\n"
"    QPushButton:hover {\n"
"        color: black;\n"
"    }\n"
"    QPushButton:pressed {\n"
"        color: rgb(255, 19, 133);\n"
"    }\n"
""));
        pushButton_3 = new QPushButton(SetNew_Window);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(0, 300, 181, 100));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{ border-image: url(:/images/button.png) 0 0 0 0 stretch stretch;\n"
"\n"
"color:rgb(255, 243, 181);\n"
"font: 25pt \"FZYaoTi\";\n"
"}\n"
"    QPushButton:hover {\n"
"        color: black;\n"
"    }\n"
"    QPushButton:pressed {\n"
"        color: rgb(255, 19, 133);\n"
"    }"));
        pushButton_4 = new QPushButton(SetNew_Window);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 400, 181, 100));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{ border-image: url(:/images/button.png) 0 0 0 0 stretch stretch;\n"
"\n"
"color:rgb(255, 243, 181);\n"
"font: 25pt \"FZYaoTi\";\n"
"}\n"
"    QPushButton:hover {\n"
"        color: black;\n"
"    }\n"
"    QPushButton:pressed {\n"
"        color: rgb(255, 19, 133);\n"
"    }"));
        pushButton_5 = new QPushButton(SetNew_Window);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(0, 500, 181, 91));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{ border-image: url(:/images/button.png) 0 0 0 0 stretch stretch;\n"
"\n"
"color:rgb(255, 243, 181);\n"
"font: 25pt \"FZYaoTi\";\n"
"}\n"
"    QPushButton:hover {\n"
"        color: black;\n"
"    }\n"
"    QPushButton:pressed {\n"
"        color: rgb(255, 19, 133);\n"
"    }"));
        label = new QLabel(SetNew_Window);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 230, 71, 31));
        label_2 = new QLabel(SetNew_Window);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(520, 0, 81, 51));
        new_deadtime = new QTimeEdit(SetNew_Window);
        new_deadtime->setObjectName("new_deadtime");
        new_deadtime->setGeometry(QRect(560, 220, 142, 51));
        QFont font;
        font.setPointSize(12);
        new_deadtime->setFont(font);
        new_deadtime->setStyleSheet(QString::fromUtf8(".QTimeEdit[timeEditStyle=\"commom\"]\n"
"{\n"
"    min-height:24px;\n"
"    max-height:24px;\n"
"    border-radius:2px;\n"
"    border:1px solid #cccccc;\n"
"}\n"
"\n"
".QTimeEdit[timeEditStyle=\"commom\"]:hover,\n"
".QTimeEdit[timeEditStyle=\"commom\"]:focus\n"
"{\n"
"    border-radius:2px;\n"
"    border:1px solid #0f6dbe;\n"
"}\n"
"\n"
".QTimeEdit[timeEditStyle=\"commom\"]::down-button\n"
"{\n"
"    border:none;\n"
"    width:30px;\n"
"    background-color:white;\n"
"}\n"
"\n"
"\n"
".QTimeEdit[timeEditStyle=\"commom\"]::up-button\n"
"{\n"
"    border:none;\n"
"    width:30px;\n"
"    background-color:white;\n"
"}\n"
"\n"
"/***********\345\220\221\344\270\213\347\256\255\345\244\264**********/\n"
".QTimeEdit[timeEditStyle = \"commom\"]::down-arrow {\n"
"    image:url(:/myicon/image/down.png);\n"
"}\n"
"\n"
"/**********\345\220\221\344\270\212\347\256\255\345\244\264**********/\n"
".QTimeEdit[timeEditStyle = \"commom\"]::up-arrow {\n"
"    image:url(:/myicon/image//up.png);\n"
"}"));
        new_deadtime->setAlignment(Qt::AlignmentFlag::AlignCenter);
        new_deadline = new QDateEdit(SetNew_Window);
        new_deadline->setObjectName("new_deadline");
        new_deadline->setGeometry(QRect(300, 220, 142, 51));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        new_deadline->setFont(font1);
        new_deadline->setStyleSheet(QString::fromUtf8(".QDateTimeEdit\n"
"{\n"
"    min-height:24px;\n"
"    max-height:24px;\n"
"    border-radius:2px;\n"
"text-align: center;\n"
"        \n"
"        color: #333333;\n"
"    border:1px solid #cccccc;\n"
"}\n"
"\n"
".QDateTimeEdit:hover,.QDateTimeEdit:focus\n"
"{\n"
"    border-radius:2px;\n"
"    border:1px solid #0f6dbe;\n"
"}\n"
"\n"
".QDateTimeEdit::drop-down\n"
"{\n"
"    border:none;\n"
"    width:30px;\n"
"}\n"
"\n"
".QDateTimeEdit::down-arrow {\n"
"    image:url(:/myicon/image/down.png);\n"
"}"));
        new_deadline->setAlignment(Qt::AlignmentFlag::AlignCenter);
        new_deadline->setDate(QDate(2025, 1, 1));
        label_3 = new QLabel(SetNew_Window);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(470, 230, 111, 31));
        label_4 = new QLabel(SetNew_Window);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(730, 230, 171, 61));
        new_emergency_degree = new QSpinBox(SetNew_Window);
        new_emergency_degree->setObjectName("new_emergency_degree");
        new_emergency_degree->setEnabled(true);
        new_emergency_degree->setGeometry(QRect(820, 220, 111, 51));
        new_emergency_degree->setFont(font);
        new_emergency_degree->setStyleSheet(QString::fromUtf8(""));
        new_emergency_degree->setAlignment(Qt::AlignmentFlag::AlignCenter);
        new_emergency_degree->setMaximum(10);
        timeEdit_2 = new QTimeEdit(SetNew_Window);
        timeEdit_2->setObjectName("timeEdit_2");
        timeEdit_2->setGeometry(QRect(470, 510, 151, 41));
        timeEdit_2->setFont(font);
        timeEdit_2->setStyleSheet(QString::fromUtf8(".QTimeEdit[timeEditStyle=\"commom\"]\n"
"{\n"
"    min-height:24px;\n"
"    max-height:24px;\n"
"    border-radius:2px;\n"
"    border:1px solid #cccccc;\n"
"}\n"
"\n"
".QTimeEdit[timeEditStyle=\"commom\"]:hover,\n"
".QTimeEdit[timeEditStyle=\"commom\"]:focus\n"
"{\n"
"    border-radius:2px;\n"
"    border:1px solid #0f6dbe;\n"
"}\n"
"\n"
".QTimeEdit[timeEditStyle=\"commom\"]::down-button\n"
"{\n"
"    border:none;\n"
"    width:30px;\n"
"    background-color:white;\n"
"}\n"
"\n"
"\n"
".QTimeEdit[timeEditStyle=\"commom\"]::up-button\n"
"{\n"
"    border:none;\n"
"    width:30px;\n"
"    background-color:white;\n"
"}\n"
"\n"
"/***********\345\220\221\344\270\213\347\256\255\345\244\264**********/\n"
".QTimeEdit[timeEditStyle = \"commom\"]::down-arrow {\n"
"    image:url(:/myicon/image/down.png);\n"
"}\n"
"\n"
"/**********\345\220\221\344\270\212\347\256\255\345\244\264**********/\n"
".QTimeEdit[timeEditStyle = \"commom\"]::up-arrow {\n"
"    image:url(:/myicon/image//up.png);\n"
"}"));
        timeEdit_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        timeEdit_2->setProperty("showGroupSeparator", QVariant(true));
        timeEdit_2->setDateTime(QDateTime(QDate(2025, 1, 1), QTime(0, 0, 0)));
        timeEdit_2->setDate(QDate(2025, 1, 1));
        timeEdit_2->setMaximumDateTime(QDateTime(QDate(2040, 1, 1), QTime(23, 59, 59)));
        timeEdit_2->setMinimumDateTime(QDateTime(QDate(2020, 1, 1), QTime(0, 0, 0)));
        timeEdit_2->setMaximumDate(QDate(2040, 1, 1));
        timeEdit_2->setMinimumDate(QDate(2020, 1, 1));
        timeEdit_2->setCurrentSection(QDateTimeEdit::Section::MinuteSection);
        timeEdit_2->setCurrentSectionIndex(1);
        timeEdit_2->setTime(QTime(0, 0, 0));
        dateEdit_2 = new QDateEdit(SetNew_Window);
        dateEdit_2->setObjectName("dateEdit_2");
        dateEdit_2->setGeometry(QRect(470, 460, 151, 41));
        dateEdit_2->setFont(font);
        dateEdit_2->setStyleSheet(QString::fromUtf8(".QDateTimeEdit\n"
"{\n"
"    min-height:24px;\n"
"    max-height:24px;\n"
"    border-radius:2px;\n"
"text-align: center;\n"
"        \n"
"        color: #333333;\n"
"    border:1px solid #cccccc;\n"
"}\n"
"\n"
".QDateTimeEdit:hover,.QDateTimeEdit:focus\n"
"{\n"
"    border-radius:2px;\n"
"    border:1px solid #0f6dbe;\n"
"}\n"
"\n"
".QDateTimeEdit::drop-down\n"
"{\n"
"    border:none;\n"
"    width:30px;\n"
"}\n"
"\n"
".QDateTimeEdit::down-arrow {\n"
"    image:url(:/myicon/image/down.png);\n"
"}"));
        dateEdit_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        dateEdit_2->setDateTime(QDateTime(QDate(2025, 1, 1), QTime(0, 0, 0)));
        dateEdit_2->setDate(QDate(2025, 1, 1));
        add_alarm_time = new QPushButton(SetNew_Window);
        add_alarm_time->setObjectName("add_alarm_time");
        add_alarm_time->setGeometry(QRect(630, 460, 91, 41));
        add_alarm_time->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        background-color: white;\n"
"        color: #2196F3;\n"
"        border: 2px solid #2196F3;\n"
"        border-radius: 20px;\n"
"        padding: 2px 2px;\n"
"\n"
"		font-size:12px;\n"
"    }\n"
"\n"
"    /* \346\202\254\345\201\234\347\212\266\346\200\201\357\274\232\350\223\235\345\272\225\347\231\275\345\255\227 */\n"
"    QPushButton:hover {\n"
"        background-color: #2196F3;\n"
"        color: white;\n"
"    }\n"
"\n"
"    /* \346\214\211\344\270\213\347\212\266\346\200\201\357\274\232\346\267\261\350\223\235\345\272\225\347\231\275\345\255\227 */\n"
"    QPushButton:pressed {\n"
"        background-color: #1976D2;\n"
"        color: white;\n"
"    }\n"
"\n"
"QPushButton:disabled {\n"
"    /* \347\246\201\347\224\250\347\212\266\346\200\201\357\274\232\347\201\260\346\241\206\347\201\260\345\272\225\347\201\260\345\255\227 */\n"
""
                        "    background-color: #f5f5f5;\n"
"    color: #808080 ;\n"
"    border: 2px solid #9e9e9e;\n"
"}"));
        reset_page_button = new QPushButton(SetNew_Window);
        reset_page_button->setObjectName("reset_page_button");
        reset_page_button->setGeometry(QRect(780, 460, 151, 41));
        reset_page_button->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        background-color: white;\n"
"        color: red;\n"
"        border: 2px solid red;\n"
"        border-radius: 20px;\n"
"        padding: 2px 2px;\n"
"\n"
"		font-size:17px;\n"
"    }\n"
"\n"
"    /* \346\202\254\345\201\234\347\212\266\346\200\201\357\274\232\350\223\235\345\272\225\347\231\275\345\255\227 */\n"
"    QPushButton:hover {\n"
"        background-color: red;\n"
"        color: white;\n"
"    }\n"
"\n"
"    /* \346\214\211\344\270\213\347\212\266\346\200\201\357\274\232\346\267\261\350\223\235\345\272\225\347\231\275\345\255\227 */\n"
"    QPushButton:pressed {\n"
"        background-color: rgb(143, 0, 0);\n"
"        color: white;\n"
"    }"));
        submit_page_button = new QPushButton(SetNew_Window);
        submit_page_button->setObjectName("submit_page_button");
        submit_page_button->setGeometry(QRect(780, 510, 151, 41));
        submit_page_button->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        background-color: white;\n"
"        color: #2196F3;\n"
"        border: 2px solid #2196F3;\n"
"        border-radius: 20px;\n"
"        padding: 2px 2px;\n"
"\n"
"		font-size:17px;\n"
"    }\n"
"\n"
"    /* \346\202\254\345\201\234\347\212\266\346\200\201\357\274\232\350\223\235\345\272\225\347\231\275\345\255\227 */\n"
"    QPushButton:hover {\n"
"        background-color: #2196F3;\n"
"        color: white;\n"
"    }\n"
"\n"
"    /* \346\214\211\344\270\213\347\212\266\346\200\201\357\274\232\346\267\261\350\223\235\345\272\225\347\231\275\345\255\227 */\n"
"    QPushButton:pressed {\n"
"        background-color: #1976D2;\n"
"        color: white;\n"
"    }"));
        email_added = new QScrollArea(SetNew_Window);
        email_added->setObjectName("email_added");
        email_added->setGeometry(QRect(210, 320, 231, 91));
        email_added->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 229, 89));
        email_added->setWidget(scrollAreaWidgetContents_2);
        label_7 = new QLabel(SetNew_Window);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(210, 50, 111, 41));
        newtask_name = new QLineEdit(SetNew_Window);
        newtask_name->setObjectName("newtask_name");
        newtask_name->setGeometry(QRect(300, 50, 421, 41));
        newtask_name->setStyleSheet(QString::fromUtf8("\n"
"    QLineEdit {\n"
"        border: 2px solid #ccc;\n"
"        border-radius: 10px;\n"
"        padding: 5px 10px;\n"
"        background: #f9f9f9;\n"
"        font-size: 14px;\n"
"     	color:black\n"
"    }\n"
"    QLineEdit:focus {\n"
"        border-color: #2196F3;\n"
"        background: white;\n"
"    }\n"
"    QLineEdit:disabled {\n"
"        background: #eee;\n"
"        color: #777;\n"
"    }"));
        label_8 = new QLabel(SetNew_Window);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(210, 110, 91, 31));
        newtask_discription = new QTextEdit(SetNew_Window);
        newtask_discription->setObjectName("newtask_discription");
        newtask_discription->setGeometry(QRect(300, 110, 631, 91));
        newtask_discription->setStyleSheet(QString::fromUtf8("\n"
"    QTextEdit {\n"
"        border: 2px solid #ccc;\n"
"        border-radius: 10px;\n"
"        padding: 5px 10px;\n"
"        background: #f9f9f9;\n"
"        font-size: 14px;\n"
"     	color:black\n"
"    }\n"
"    QTextEdit:focus {\n"
"        border-color:  #2196F3;\n"
"        background: white;\n"
"    }\n"
"    QTextEdit:disabled {\n"
"        background: #eee;\n"
"        color: #777;\n"
"    }"));
        label_9 = new QLabel(SetNew_Window);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(210, 290, 211, 31));
        label_10 = new QLabel(SetNew_Window);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(760, 40, 91, 61));
        QFont font2;
        font2.setPointSize(10);
        label_10->setFont(font2);
        task_type = new QComboBox(SetNew_Window);
        task_type->addItem(QString());
        task_type->addItem(QString());
        task_type->addItem(QString());
        task_type->addItem(QString());
        task_type->addItem(QString());
        task_type->addItem(QString());
        task_type->setObjectName("task_type");
        task_type->setGeometry(QRect(840, 50, 91, 41));
        task_type->setStyleSheet(QString::fromUtf8(" QComboBox {\n"
"        border: 1px solid #E0E0E0;\n"
"        border-radius: 15px;\n"
"        padding: 8px 30px 8px 15px;\n"
"        background: white;\n"
"        color: #333;\n"
"    }\n"
"    \n"
"    QComboBox:hover {\n"
"        border: 1px solid #2196F3;\n"
"        box-shadow: 0 1px 3px rgba(33,150,243,0.3);\n"
"    }\n"
"    \n"
"    QComboBox::drop-down {\n"
"        subcontrol-origin: padding;\n"
"        subcontrol-position: center right;\n"
"        width: 15px;\n"
"        border: none;\n"
"    }\n"
"    \n"
"    \n"
"    QComboBox QAbstractItemView {\n"
"        border: none;\n"
"        border-radius: 8px;\n"
"        background: white;\n"
"        selection-background-color: #2196F3;\n"
"        selection-color: white;\n"
"        outline: none;\n"
"        box-shadow: 0 2px 8px rgba(0,0,0,0.15);\n"
"        margin: 4px 0;\n"
"    }"));
        task_type->setEditable(false);
        alarm_added = new QScrollArea(SetNew_Window);
        alarm_added->setObjectName("alarm_added");
        alarm_added->setGeometry(QRect(210, 460, 231, 91));
        alarm_added->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 229, 89));
        alarm_added->setWidget(scrollAreaWidgetContents);
        label_6 = new QLabel(SetNew_Window);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(210, 420, 181, 51));
        add_email = new QPushButton(SetNew_Window);
        add_email->setObjectName("add_email");
        add_email->setGeometry(QRect(630, 320, 91, 41));
        add_email->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        background-color: white;\n"
"        color: #2196F3;\n"
"        border: 2px solid #2196F3;\n"
"        border-radius: 20px;\n"
"        padding: 2px 2px;\n"
"\n"
"		font-size:12px;\n"
"    }\n"
"\n"
"    /* \346\202\254\345\201\234\347\212\266\346\200\201\357\274\232\350\223\235\345\272\225\347\231\275\345\255\227 */\n"
"    QPushButton:hover {\n"
"        background-color: #2196F3;\n"
"        color: white;\n"
"    }\n"
"\n"
"    /* \346\214\211\344\270\213\347\212\266\346\200\201\357\274\232\346\267\261\350\223\235\345\272\225\347\231\275\345\255\227 */\n"
"    QPushButton:pressed {\n"
"        background-color: #1976D2;\n"
"        color: white;\n"
"    }\n"
"QPushButton:disabled {\n"
"    /* \347\246\201\347\224\250\347\212\266\346\200\201\357\274\232\347\201\260\346\241\206\347\201\260\345\272\225\347\201\260\345\255\227 */\n"
"    "
                        "background-color: #f5f5f5;\n"
"    color: #808080 ;\n"
"    border: 2px solid #9e9e9e;\n"
"}"));
        new_email_address = new QLineEdit(SetNew_Window);
        new_email_address->setObjectName("new_email_address");
        new_email_address->setGeometry(QRect(450, 370, 171, 41));
        new_email_address->setStyleSheet(QString::fromUtf8("\n"
"    QLineEdit {\n"
"        border: 2px solid #ccc;\n"
"        border-radius: 10px;\n"
"        padding: 1px 1px;\n"
"        background: #f9f9f9;\n"
"        font-size: 14px;\n"
"     	color:black\n"
"    }\n"
"    QLineEdit:focus {\n"
"        border-color:  #2196F3;\n"
"        background: white;\n"
"    }\n"
"    QLineEdit:disabled {\n"
"        background: #eee;\n"
"        color: #777;\n"
"    }"));
        new_email_name = new QLineEdit(SetNew_Window);
        new_email_name->setObjectName("new_email_name");
        new_email_name->setGeometry(QRect(450, 320, 171, 41));
        new_email_name->setStyleSheet(QString::fromUtf8("\n"
"    QLineEdit {\n"
"        border: 2px solid #ccc;\n"
"        border-radius: 10px;\n"
"        padding: 1px 1px;\n"
"        background: #f9f9f9;\n"
"        font-size: 14px;\n"
"     	color:black\n"
"    }\n"
"    QLineEdit:focus {\n"
"        border-color:  #2196F3;\n"
"        background: white;\n"
"    }\n"
"    QLineEdit:disabled {\n"
"        background: #eee;\n"
"        color: #777;\n"
"    }"));
        reset_email = new QPushButton(SetNew_Window);
        reset_email->setObjectName("reset_email");
        reset_email->setGeometry(QRect(630, 370, 91, 41));
        reset_email->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        background-color: white;\n"
"        color: red;\n"
"        border: 2px solid red;\n"
"        border-radius: 20px;\n"
"        padding: 2px 2px;\n"
"\n"
"		font-size:12px;\n"
"    }\n"
"\n"
"    /* \346\202\254\345\201\234\347\212\266\346\200\201\357\274\232\350\223\235\345\272\225\347\231\275\345\255\227 */\n"
"    QPushButton:hover {\n"
"        background-color: red;\n"
"        color: white;\n"
"    }\n"
"\n"
"    /* \346\214\211\344\270\213\347\212\266\346\200\201\357\274\232\346\267\261\350\223\235\345\272\225\347\231\275\345\255\227 */\n"
"    QPushButton:pressed {\n"
"        background-color: rgb(143, 0, 0);\n"
"        color: white;\n"
"    }\n"
"QPushButton:disabled {\n"
"    /* \347\246\201\347\224\250\347\212\266\346\200\201\357\274\232\347\201\260\346\241\206\347\201\260\345\272\225\347\201\260\345\255\227 */\n"
"    backg"
                        "round-color: #f5f5f5;\n"
"    color: #808080 ;\n"
"    border: 2px solid #9e9e9e;\n"
"}"));
        reset_alarm_time = new QPushButton(SetNew_Window);
        reset_alarm_time->setObjectName("reset_alarm_time");
        reset_alarm_time->setGeometry(QRect(630, 510, 91, 41));
        reset_alarm_time->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        background-color: white;\n"
"        color: red;\n"
"        border: 2px solid red;\n"
"        border-radius: 20px;\n"
"        padding: 2px 2px;\n"
"\n"
"		font-size:12px;\n"
"    }\n"
"\n"
"    /* \346\202\254\345\201\234\347\212\266\346\200\201\357\274\232\350\223\235\345\272\225\347\231\275\345\255\227 */\n"
"    QPushButton:hover {\n"
"        background-color: red;\n"
"        color: white;\n"
"    }\n"
"\n"
"    /* \346\214\211\344\270\213\347\212\266\346\200\201\357\274\232\346\267\261\350\223\235\345\272\225\347\231\275\345\255\227 */\n"
"    QPushButton:pressed {\n"
"        background-color: rgb(143, 0, 0);\n"
"        color: white;\n"
"    }\n"
"QPushButton:disabled {\n"
"    /* \347\246\201\347\224\250\347\212\266\346\200\201\357\274\232\347\201\260\346\241\206\347\201\260\345\272\225\347\201\260\345\255\227 */\n"
"    backg"
                        "round-color: #f5f5f5;\n"
"    color: #808080 ;\n"
"    border: 2px solid #9e9e9e;\n"
"}"));
        groupBox = new QGroupBox(SetNew_Window);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(780, 320, 151, 91));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        groupBox->setFont(font3);
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"        border: none;\n"
"        border-radius: 8px;\n"
"        margin-top: 20px;\n"
"        padding-top: 25px;\n"
"        background: #FFFFFF;\n"
"        font-weight: bold;\n"
"        color: #424242;\n"
"        box-shadow: 0 2px 5px rgba(0,0,0,0.1);\n"
"    }\n"
"    \n"
"    QGroupBox::title {\n"
"        subcontrol-origin: margin;\n"
"        left: 15px;\n"
"        padding: 0 8px;\n"
"        background: #2196F3;\n"
"        color: white;\n"
"        border-radius: 4px;\n"
"    }\n"
"\n"
"QCheckBox {\n"
"        spacing: 5px;\n"
"        color: #333333;\n"
"    }\n"
"    \n"
"    QCheckBox::indicator {\n"
"        width: 18px;\n"
"        height: 20px;\n"
"        border-radius: 6px;\n"
"        background: #CFD8DC;\n"
"    }\n"
"    \n"
"    QCheckBox::indicator:checked {\n"
"        background: #4CAF50;\n"
"    }\n"
"    \n"
"    QCheckBox::indicator:unchecked {\n"
"        background: #CFD8DC;\n"
"    }\n"
"    \n"
"    QCheckBox::indicator:unchecked:hover {\n"
"        background"
                        ": #B0BEC5;\n"
"    }\n"
"    \n"
"    QCheckBox::indicator:checked:hover {\n"
"        background: #388E3C;\n"
"    }"));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(10, 20, 98, 31));
        checkBox->setStyleSheet(QString::fromUtf8(""));
        checkBox->setChecked(true);
        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(10, 60, 98, 31));
        checkBox_2->setChecked(true);
        alarm_type_confirmed = new QPushButton(groupBox);
        alarm_type_confirmed->setObjectName("alarm_type_confirmed");
        alarm_type_confirmed->setGeometry(QRect(70, 32, 71, 41));
        alarm_type_confirmed->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        background-color: white;\n"
"        color: #2196F3;\n"
"        border: 2px solid #2196F3;\n"
"        border-radius: 20px;\n"
"        padding: 2px 2px;\n"
"\n"
"		font-size:12px;\n"
"    }\n"
"\n"
"    /* \346\202\254\345\201\234\347\212\266\346\200\201\357\274\232\350\223\235\345\272\225\347\231\275\345\255\227 */\n"
"    QPushButton:hover {\n"
"        background-color: #2196F3;\n"
"        color: white;\n"
"    }\n"
"\n"
"    /* \346\214\211\344\270\213\347\212\266\346\200\201\357\274\232\346\267\261\350\223\235\345\272\225\347\231\275\345\255\227 */\n"
"    QPushButton:pressed {\n"
"        background-color: #1976D2;\n"
"        color: white;\n"
"    }"));
        pushButton_6 = new QPushButton(SetNew_Window);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(0, 100, 181, 100));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{ border-image: url(:/images/button.png) 0 0 0 0 stretch stretch;\n"
"\n"
"color:rgb(255, 243, 181);\n"
"font: 25pt \"FZYaoTi\";\n"
"}\n"
"    QPushButton:hover {\n"
"        color: black;\n"
"    }\n"
"    QPushButton:pressed {\n"
"        color: rgb(255, 19, 133);\n"
"    }"));

        retranslateUi(SetNew_Window);

        QMetaObject::connectSlotsByName(SetNew_Window);
    } // setupUi

    void retranslateUi(QWidget *SetNew_Window)
    {
        SetNew_Window->setWindowTitle(QCoreApplication::translate("SetNew_Window", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("SetNew_Window", "\346\237\245\347\234\213\344\273\273\345\212\241", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SetNew_Window", "\346\226\260\345\273\272\344\273\273\345\212\241", nullptr));
        pushButton_3->setText(QCoreApplication::translate("SetNew_Window", "\345\217\215\351\246\210\346\200\273\347\273\223", nullptr));
        pushButton_4->setText(QCoreApplication::translate("SetNew_Window", "\344\270\252\344\272\272\350\256\276\347\275\256", nullptr));
        pushButton_5->setText(QCoreApplication::translate("SetNew_Window", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
        label->setText(QCoreApplication::translate("SetNew_Window", "<html><head/><body><p><span style=\" font-size:11pt;\">\346\210\252\346\255\242\346\227\245\346\234\237\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("SetNew_Window", "<html><head/><body><p><span style=\" font-size:14pt;\">\346\226\260\345\273\272\344\273\273\345\212\241</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("SetNew_Window", "<html><head/><body><p><span style=\" font-size:11pt;\">\346\210\252\346\255\242\346\227\266\351\227\264\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("SetNew_Window", "<html><head/><body><p><span style=\" font-size:11pt;\">\347\264\247\346\200\245\347\250\213\345\272\246\357\274\232</span></p><p><span style=\" font-size:11pt;\">\357\274\2100-10\357\274\211</span></p></body></html>", nullptr));
        add_alarm_time->setText(QCoreApplication::translate("SetNew_Window", "\346\267\273\345\212\240\346\217\220\351\206\222\346\227\266\351\227\264", nullptr));
        reset_page_button->setText(QCoreApplication::translate("SetNew_Window", "\351\207\215\347\275\256", nullptr));
        submit_page_button->setText(QCoreApplication::translate("SetNew_Window", "\346\217\220\344\272\244", nullptr));
        label_7->setText(QCoreApplication::translate("SetNew_Window", "<html><head/><body><p><span style=\" font-size:11pt;\">\344\273\273\345\212\241\345\220\215\347\247\260\357\274\232</span></p></body></html>", nullptr));
        newtask_name->setPlaceholderText(QCoreApplication::translate("SetNew_Window", "\350\257\267\350\276\223\345\205\245\344\273\273\345\212\241\345\220\215\347\247\260\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("SetNew_Window", "<html><head/><body><p><span style=\" font-size:11pt;\">\344\273\273\345\212\241\346\217\217\350\277\260\357\274\232</span></p></body></html>", nullptr));
        newtask_discription->setPlaceholderText(QCoreApplication::translate("SetNew_Window", "\350\257\267\350\276\223\345\205\245\346\217\217\350\277\260\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("SetNew_Window", "<html><head/><body><p><span style=\" font-size:11pt;\">\345\267\262\346\267\273\345\212\240\347\232\204\346\217\220\351\206\222\351\202\256\347\256\261\357\274\232</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("SetNew_Window", "\344\273\273\345\212\241\347\261\273\345\236\213\357\274\232", nullptr));
        task_type->setItemText(0, QCoreApplication::translate("SetNew_Window", "\345\267\245\344\275\234", nullptr));
        task_type->setItemText(1, QCoreApplication::translate("SetNew_Window", "\345\255\246\344\271\240", nullptr));
        task_type->setItemText(2, QCoreApplication::translate("SetNew_Window", "\347\224\237\346\264\273", nullptr));
        task_type->setItemText(3, QCoreApplication::translate("SetNew_Window", "\347\244\276\345\233\242", nullptr));
        task_type->setItemText(4, QCoreApplication::translate("SetNew_Window", "\345\256\266\345\272\255", nullptr));
        task_type->setItemText(5, QCoreApplication::translate("SetNew_Window", "\345\205\266\344\273\226", nullptr));

        label_6->setText(QCoreApplication::translate("SetNew_Window", "<html><head/><body><p><span style=\" font-size:11pt;\">\345\267\262\346\267\273\345\212\240\347\232\204\346\217\220\351\206\222\346\227\266\351\227\264\357\274\232</span></p></body></html>", nullptr));
        add_email->setText(QCoreApplication::translate("SetNew_Window", "\346\267\273\345\212\240\346\217\220\351\206\222\351\202\256\347\256\261", nullptr));
        new_email_address->setText(QString());
        new_email_address->setPlaceholderText(QCoreApplication::translate("SetNew_Window", "\350\257\267\350\276\223\345\205\245\351\202\256\347\256\261", nullptr));
#if QT_CONFIG(tooltip)
        new_email_name->setToolTip(QCoreApplication::translate("SetNew_Window", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        new_email_name->setText(QString());
        new_email_name->setPlaceholderText(QCoreApplication::translate("SetNew_Window", "\350\257\267\350\276\223\345\205\245\347\247\260\345\221\274", nullptr));
        reset_email->setText(QCoreApplication::translate("SetNew_Window", "\351\207\215\347\275\256\346\217\220\351\206\222\351\202\256\347\256\261", nullptr));
        reset_alarm_time->setText(QCoreApplication::translate("SetNew_Window", "\351\207\215\347\275\256\346\217\220\351\206\222\346\227\266\351\227\264", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SetNew_Window", "\346\217\220\351\206\222\346\226\271\345\274\217", nullptr));
        checkBox->setText(QCoreApplication::translate("SetNew_Window", "\351\202\256\347\256\261", nullptr));
        checkBox_2->setText(QCoreApplication::translate("SetNew_Window", "\351\227\271\351\222\237", nullptr));
        alarm_type_confirmed->setText(QCoreApplication::translate("SetNew_Window", "\347\241\256\350\256\244", nullptr));
        pushButton_6->setText(QCoreApplication::translate("SetNew_Window", "\346\227\245\345\216\206\346\250\241\345\274\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetNew_Window: public Ui_SetNew_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETNEW_WINDOW_H
