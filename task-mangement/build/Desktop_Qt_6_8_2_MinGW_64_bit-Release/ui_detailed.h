/********************************************************************************
** Form generated from reading UI file 'detailed.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILED_H
#define UI_DETAILED_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Detailed
{
public:
    QLabel *label;
    QLabel *label_2;
    QScrollArea *member_area;
    QWidget *scrollAreaWidgetContents;
    QScrollArea *time_area;
    QWidget *scrollAreaWidgetContents_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit;
    QDateTimeEdit *dateTimeEdit;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_5;
    QLabel *label_6;
    QSpinBox *spinBox;
    QPushButton *pushButton_5;
    QLabel *label_7;
    QComboBox *comboBox;
    QPushButton *pushButton_6;
    QLabel *label_8;
    QLabel *alarm_way;
    QLineEdit *new_email_name;
    QDateEdit *dateEdit_2;
    QPushButton *add_alarm_time;
    QTimeEdit *timeEdit_2;
    QPushButton *add_email;
    QLineEdit *new_email_address;

    void setupUi(QWidget *Detailed)
    {
        if (Detailed->objectName().isEmpty())
            Detailed->setObjectName("Detailed");
        Detailed->resize(842, 495);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/to_do_list_fzl_icon.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Detailed->setWindowIcon(icon);
        label = new QLabel(Detailed);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 20, 61, 31));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label_2 = new QLabel(Detailed);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(310, 240, 61, 41));
        label_2->setFont(font);
        member_area = new QScrollArea(Detailed);
        member_area->setObjectName("member_area");
        member_area->setGeometry(QRect(310, 50, 291, 191));
        member_area->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 289, 189));
        member_area->setWidget(scrollAreaWidgetContents);
        time_area = new QScrollArea(Detailed);
        time_area->setObjectName("time_area");
        time_area->setGeometry(QRect(310, 280, 291, 181));
        time_area->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 289, 179));
        time_area->setWidget(scrollAreaWidgetContents_2);
        pushButton = new QPushButton(Detailed);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(723, 446, 81, 31));
        pushButton->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        background-color: white;\n"
"        color: red;\n"
"        border: 2px solid red;\n"
"        border-radius: 15px;\n"
"        padding: 2px 2px;\n"
"\n"
"		font-size:14px;\n"
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
        label_3 = new QLabel(Detailed);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 30, 61, 31));
        lineEdit = new QLineEdit(Detailed);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(70, 30, 141, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("\n"
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
        pushButton_2 = new QPushButton(Detailed);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(230, 30, 51, 24));
        pushButton_2->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        background-color: white;\n"
"        color: #2196F3;\n"
"        border: 2px solid #2196F3;\n"
"        border-radius: 10px;\n"
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
        label_4 = new QLabel(Detailed);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 90, 61, 31));
        plainTextEdit = new QPlainTextEdit(Detailed);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(70, 90, 211, 161));
        plainTextEdit->setStyleSheet(QString::fromUtf8("\n"
"    QPlainTextEdit {\n"
"        border: 2px solid #ccc;\n"
"        border-radius: 10px;\n"
"        padding: 5px 10px;\n"
"        background: #f9f9f9;\n"
"        font-size: 14px;\n"
"     	color:black\n"
"    }\n"
"    QPlainTextEdit :focus {\n"
"        border-color:  #2196F3;\n"
"        background: white;\n"
"    }\n"
"    QPlainTextEdit :disabled {\n"
"        background: #eee;\n"
"        color: #777;\n"
"    }"));
        dateTimeEdit = new QDateTimeEdit(Detailed);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setGeometry(QRect(80, 270, 201, 51));
        dateTimeEdit->setFont(font);
        dateTimeEdit->setStyleSheet(QString::fromUtf8(".QTimeEdit[timeEditStyle=\"commom\"]\n"
"{\n"
"\n"
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
        dateTimeEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_3 = new QPushButton(Detailed);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 140, 51, 24));
        pushButton_3->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        background-color: white;\n"
"        color: #2196F3;\n"
"        border: 2px solid #2196F3;\n"
"        border-radius: 10px;\n"
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
        pushButton_4 = new QPushButton(Detailed);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(10, 310, 51, 24));
        pushButton_4->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        background-color: white;\n"
"        color: #2196F3;\n"
"        border: 2px solid #2196F3;\n"
"        border-radius: 10px;\n"
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
        label_5 = new QLabel(Detailed);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 280, 54, 16));
        label_6 = new QLabel(Detailed);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 368, 54, 16));
        spinBox = new QSpinBox(Detailed);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(70, 358, 51, 31));
        spinBox->setMaximum(10);
        pushButton_5 = new QPushButton(Detailed);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(10, 400, 51, 24));
        pushButton_5->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        background-color: white;\n"
"        color: #2196F3;\n"
"        border: 2px solid #2196F3;\n"
"        border-radius: 10px;\n"
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
        label_7 = new QLabel(Detailed);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(160, 368, 54, 16));
        comboBox = new QComboBox(Detailed);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(220, 358, 71, 31));
        comboBox->setStyleSheet(QString::fromUtf8(" QComboBox {\n"
"        border: 1px solid #E0E0E0;\n"
"        border-radius: 15px;\n"
"        padding: 8px 8px 8px 15px;\n"
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
        pushButton_6 = new QPushButton(Detailed);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(160, 400, 51, 24));
        pushButton_6->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        background-color: white;\n"
"        color: #2196F3;\n"
"        border: 2px solid #2196F3;\n"
"        border-radius: 10px;\n"
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
        label_8 = new QLabel(Detailed);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 430, 81, 41));
        QFont font1;
        font1.setPointSize(12);
        label_8->setFont(font1);
        alarm_way = new QLabel(Detailed);
        alarm_way->setObjectName("alarm_way");
        alarm_way->setGeometry(QRect(109, 435, 91, 31));
        alarm_way->setFont(font1);
        new_email_name = new QLineEdit(Detailed);
        new_email_name->setObjectName("new_email_name");
        new_email_name->setGeometry(QRect(620, 70, 201, 41));
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
        dateEdit_2 = new QDateEdit(Detailed);
        dateEdit_2->setObjectName("dateEdit_2");
        dateEdit_2->setGeometry(QRect(640, 290, 111, 41));
        dateEdit_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        dateEdit_2->setDateTime(QDateTime(QDate(2025, 1, 1), QTime(16, 0, 0)));
        dateEdit_2->setDate(QDate(2025, 1, 1));
        add_alarm_time = new QPushButton(Detailed);
        add_alarm_time->setObjectName("add_alarm_time");
        add_alarm_time->setGeometry(QRect(650, 390, 91, 41));
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
"QPushButton:disabled {\n"
"    /* \347\246\201\347\224\250\347\212\266\346\200\201\357\274\232\347\201\260\346\241\206\347\201\260\345\272\225\347\201\260\345\255\227 */\n"
"    "
                        "background-color: #f5f5f5;\n"
"    color: #808080 ;\n"
"    border: 2px solid #9e9e9e;\n"
"}"));
        timeEdit_2 = new QTimeEdit(Detailed);
        timeEdit_2->setObjectName("timeEdit_2");
        timeEdit_2->setGeometry(QRect(640, 340, 111, 41));
        timeEdit_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        timeEdit_2->setProperty("showGroupSeparator", QVariant(true));
        timeEdit_2->setDateTime(QDateTime(QDate(2025, 1, 1), QTime(0, 0, 0)));
        timeEdit_2->setDate(QDate(2025, 1, 1));
        timeEdit_2->setMaximumDateTime(QDateTime(QDate(2040, 1, 1), QTime(15, 59, 59)));
        timeEdit_2->setMinimumDateTime(QDateTime(QDate(2020, 1, 1), QTime(16, 0, 0)));
        timeEdit_2->setMaximumDate(QDate(2040, 1, 1));
        timeEdit_2->setMinimumDate(QDate(2020, 1, 1));
        timeEdit_2->setCurrentSection(QDateTimeEdit::Section::MinuteSection);
        timeEdit_2->setCurrentSectionIndex(1);
        timeEdit_2->setTime(QTime(0, 0, 0));
        add_email = new QPushButton(Detailed);
        add_email->setObjectName("add_email");
        add_email->setGeometry(QRect(650, 190, 91, 41));
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
        new_email_address = new QLineEdit(Detailed);
        new_email_address->setObjectName("new_email_address");
        new_email_address->setGeometry(QRect(620, 130, 201, 41));
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

        retranslateUi(Detailed);

        QMetaObject::connectSlotsByName(Detailed);
    } // setupUi

    void retranslateUi(QWidget *Detailed)
    {
        Detailed->setWindowTitle(QCoreApplication::translate("Detailed", "Form", nullptr));
        label->setText(QCoreApplication::translate("Detailed", "\346\217\220\351\206\222\351\202\256\347\256\261\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Detailed", "\346\217\220\351\206\222\346\227\266\351\227\264\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("Detailed", "\345\205\263\351\227\255", nullptr));
        label_3->setText(QCoreApplication::translate("Detailed", "\344\273\273\345\212\241\345\220\215\347\247\260\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Detailed", "\344\277\256\346\224\271", nullptr));
        label_4->setText(QCoreApplication::translate("Detailed", "\344\273\273\345\212\241\346\217\217\350\277\260\357\274\232", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Detailed", "\344\277\256\346\224\271", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Detailed", "\344\277\256\346\224\271", nullptr));
        label_5->setText(QCoreApplication::translate("Detailed", "\346\210\252\346\255\242\346\227\266\351\227\264\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("Detailed", "\347\264\247\346\200\245\347\250\213\345\272\246\357\274\232", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Detailed", "\344\277\256\346\224\271", nullptr));
        label_7->setText(QCoreApplication::translate("Detailed", "\344\273\273\345\212\241\347\261\273\345\236\213\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Detailed", "\345\267\245\344\275\234", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Detailed", "\345\255\246\344\271\240", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Detailed", "\347\224\237\346\264\273", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Detailed", "\347\244\276\345\233\242", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Detailed", "\345\256\266\345\272\255", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("Detailed", "\345\205\266\344\273\226", nullptr));

        pushButton_6->setText(QCoreApplication::translate("Detailed", "\344\277\256\346\224\271", nullptr));
        label_8->setText(QCoreApplication::translate("Detailed", "\346\217\220\351\206\222\346\226\271\345\274\217\357\274\232", nullptr));
        alarm_way->setText(QCoreApplication::translate("Detailed", "TextLabel", nullptr));
#if QT_CONFIG(tooltip)
        new_email_name->setToolTip(QCoreApplication::translate("Detailed", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        new_email_name->setText(QString());
        new_email_name->setPlaceholderText(QCoreApplication::translate("Detailed", "\350\257\267\350\276\223\345\205\245\347\247\260\345\221\274", nullptr));
        add_alarm_time->setText(QCoreApplication::translate("Detailed", "\346\267\273\345\212\240\346\217\220\351\206\222\346\227\266\351\227\264", nullptr));
        add_email->setText(QCoreApplication::translate("Detailed", "\346\267\273\345\212\240\346\217\220\351\206\222\351\202\256\347\256\261", nullptr));
        new_email_address->setText(QString());
        new_email_address->setPlaceholderText(QCoreApplication::translate("Detailed", "\350\257\267\350\276\223\345\205\245\351\202\256\347\256\261", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Detailed: public Ui_Detailed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILED_H
