/********************************************************************************
** Form generated from reading UI file 'demo_window.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO_WINDOW_H
#define UI_DEMO_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Demo_Window
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QGroupBox *groupBox;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QPushButton *sort_key_button;
    QPushButton *last_page_button;
    QPushButton *next_page_button;
    QLabel *label;
    QLabel *label_2;
    QLabel *task_name1;
    QLabel *task_name2;
    QPushButton *done_confirmed_button1;
    QPushButton *remove_confirmed_button1;
    QPushButton *done_confirmed_button2;
    QPushButton *remove_confirmed_button2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *current_state1;
    QLabel *current_state2;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *task_type1;
    QLabel *task_type2;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *urgency_degree1;
    QLabel *label_17;
    QLabel *urgency_degree2;
    QLabel *label_19;
    QLabel *label_21;
    QLabel *deadline1;
    QLabel *deadline2;
    QTextBrowser *task_discription1;
    QTextBrowser *task_discription2;
    QGroupBox *groupBox_2;
    QCheckBox *work;
    QCheckBox *family;
    QCheckBox *study;
    QCheckBox *other;
    QCheckBox *life;
    QPushButton *clear;
    QPushButton *all;
    QCheckBox *comple;
    QCheckBox *normal;
    QCheckBox *overdue;
    QPushButton *all_2;
    QPushButton *clear_2;
    QPushButton *confirm;
    QCheckBox *volunteer;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QWidget *Demo_Window)
    {
        if (Demo_Window->objectName().isEmpty())
            Demo_Window->setObjectName("Demo_Window");
        Demo_Window->setEnabled(true);
        Demo_Window->resize(979, 591);
        pushButton = new QPushButton(Demo_Window);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 181, 131));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton \n"
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
        pushButton_2 = new QPushButton(Demo_Window);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 130, 181, 131));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton \n"
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
        pushButton_3 = new QPushButton(Demo_Window);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(0, 260, 181, 131));
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
        pushButton_4 = new QPushButton(Demo_Window);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 390, 181, 131));
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
        pushButton_5 = new QPushButton(Demo_Window);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(0, 520, 181, 71));
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
        groupBox = new QGroupBox(Demo_Window);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(180, 0, 211, 71));
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
"    }"));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(10, 30, 51, 23));
        radioButton_2->setChecked(true);
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(69, 30, 71, 23));
        sort_key_button = new QPushButton(groupBox);
        sort_key_button->setObjectName("sort_key_button");
        sort_key_button->setGeometry(QRect(149, 30, 51, 28));
        sort_key_button->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
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
        last_page_button = new QPushButton(Demo_Window);
        last_page_button->setObjectName("last_page_button");
        last_page_button->setGeometry(QRect(903, 7, 61, 41));
        last_page_button->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
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
"    }\n"
"QPushButton:disabled {\n"
"    /* \347\246\201\347\224\250\347\212\266\346\200\201\357\274\232\347\201\260\346\241\206\347\201\260\345\272\225\347\201\260\345\255\227 */\n"
"    "
                        "background-color: #f5f5f5;\n"
"    color: #808080 ;\n"
"    border: 2px solid #9e9e9e;\n"
"}"));
        next_page_button = new QPushButton(Demo_Window);
        next_page_button->setObjectName("next_page_button");
        next_page_button->setEnabled(true);
        next_page_button->setGeometry(QRect(903, 50, 61, 41));
        next_page_button->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
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
"    }\n"
"QPushButton:disabled {\n"
"    /* \347\246\201\347\224\250\347\212\266\346\200\201\357\274\232\347\201\260\346\241\206\347\201\260\345\272\225\347\201\260\345\255\227 */\n"
"    "
                        "background-color: #f5f5f5;\n"
"    color: #808080 ;\n"
"    border: 2px solid #9e9e9e;\n"
"}"));
        label = new QLabel(Demo_Window);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 80, 71, 31));
        label_2 = new QLabel(Demo_Window);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(600, 80, 61, 31));
        task_name1 = new QLabel(Demo_Window);
        task_name1->setObjectName("task_name1");
        task_name1->setGeometry(QRect(280, 70, 251, 51));
        QFont font;
        font.setBold(true);
        task_name1->setFont(font);
        task_name1->setAutoFillBackground(false);
        task_name1->setFrameShape(QFrame::Shape::NoFrame);
        task_name2 = new QLabel(Demo_Window);
        task_name2->setObjectName("task_name2");
        task_name2->setGeometry(QRect(680, 70, 251, 51));
        task_name2->setFont(font);
        done_confirmed_button1 = new QPushButton(Demo_Window);
        done_confirmed_button1->setObjectName("done_confirmed_button1");
        done_confirmed_button1->setGeometry(QRect(210, 530, 101, 41));
        done_confirmed_button1->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        background-color: white;\n"
"        color: #2196F3;\n"
"        border: 2px solid #2196F3;\n"
"        border-radius: 15px;\n"
"        padding: 2px 2px;\n"
"\n"
"		font-size:14px;\n"
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
        remove_confirmed_button1 = new QPushButton(Demo_Window);
        remove_confirmed_button1->setObjectName("remove_confirmed_button1");
        remove_confirmed_button1->setGeometry(QRect(430, 530, 101, 41));
        remove_confirmed_button1->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
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
        done_confirmed_button2 = new QPushButton(Demo_Window);
        done_confirmed_button2->setObjectName("done_confirmed_button2");
        done_confirmed_button2->setGeometry(QRect(620, 530, 101, 41));
        done_confirmed_button2->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        background-color: white;\n"
"        color: #2196F3;\n"
"        border: 2px solid #2196F3;\n"
"        border-radius: 15px;\n"
"        padding: 2px 2px;\n"
"\n"
"		font-size:14px;\n"
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
        remove_confirmed_button2 = new QPushButton(Demo_Window);
        remove_confirmed_button2->setObjectName("remove_confirmed_button2");
        remove_confirmed_button2->setGeometry(QRect(840, 530, 101, 41));
        remove_confirmed_button2->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
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
        label_5 = new QLabel(Demo_Window);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(200, 480, 101, 41));
        label_6 = new QLabel(Demo_Window);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(600, 480, 101, 41));
        current_state1 = new QLabel(Demo_Window);
        current_state1->setObjectName("current_state1");
        current_state1->setGeometry(QRect(280, 480, 111, 41));
        current_state1->setFont(font);
        current_state2 = new QLabel(Demo_Window);
        current_state2->setObjectName("current_state2");
        current_state2->setGeometry(QRect(680, 480, 111, 41));
        current_state2->setFont(font);
        label_9 = new QLabel(Demo_Window);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(200, 120, 91, 41));
        label_10 = new QLabel(Demo_Window);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(600, 120, 91, 41));
        task_type1 = new QLabel(Demo_Window);
        task_type1->setObjectName("task_type1");
        task_type1->setGeometry(QRect(280, 120, 141, 41));
        task_type1->setFrameShape(QFrame::Shape::NoFrame);
        task_type2 = new QLabel(Demo_Window);
        task_type2->setObjectName("task_type2");
        task_type2->setGeometry(QRect(680, 120, 141, 41));
        label_13 = new QLabel(Demo_Window);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(200, 170, 101, 41));
        label_14 = new QLabel(Demo_Window);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(600, 170, 101, 41));
        label_15 = new QLabel(Demo_Window);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(200, 400, 81, 41));
        urgency_degree1 = new QLabel(Demo_Window);
        urgency_degree1->setObjectName("urgency_degree1");
        urgency_degree1->setGeometry(QRect(280, 400, 111, 41));
        label_17 = new QLabel(Demo_Window);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(600, 400, 81, 41));
        urgency_degree2 = new QLabel(Demo_Window);
        urgency_degree2->setObjectName("urgency_degree2");
        urgency_degree2->setGeometry(QRect(680, 400, 111, 41));
        label_19 = new QLabel(Demo_Window);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(200, 440, 81, 41));
        label_21 = new QLabel(Demo_Window);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(600, 440, 81, 41));
        deadline1 = new QLabel(Demo_Window);
        deadline1->setObjectName("deadline1");
        deadline1->setGeometry(QRect(280, 440, 201, 41));
        deadline2 = new QLabel(Demo_Window);
        deadline2->setObjectName("deadline2");
        deadline2->setGeometry(QRect(680, 440, 201, 41));
        task_discription1 = new QTextBrowser(Demo_Window);
        task_discription1->setObjectName("task_discription1");
        task_discription1->setGeometry(QRect(280, 180, 256, 192));
        task_discription1->setStyleSheet(QString::fromUtf8("QTextBrowser\n"
"{\n"
"background: transparent; border: none;\n"
"}"));
        task_discription2 = new QTextBrowser(Demo_Window);
        task_discription2->setObjectName("task_discription2");
        task_discription2->setGeometry(QRect(680, 180, 256, 192));
        task_discription2->setStyleSheet(QString::fromUtf8("QTextBrowser\n"
"{\n"
"background: transparent; border: none;\n"
"}"));
        groupBox_2 = new QGroupBox(Demo_Window);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(390, 0, 481, 71));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
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
"QCheckBox {\n"
"        spacing: 5px;\n"
"        color: #333333;\n"
"    }\n"
"    \n"
"    QCheckBox::indicator {\n"
"        width: 15px;\n"
"        height: 15px;\n"
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
"        background: #B0"
                        "BEC5;\n"
"    }\n"
"    \n"
"    QCheckBox::indicator:checked:hover {\n"
"        background: #388E3C;\n"
"    }"));
        groupBox_2->setCheckable(false);
        work = new QCheckBox(groupBox_2);
        work->setObjectName("work");
        work->setGeometry(QRect(10, 20, 51, 21));
        work->setChecked(true);
        family = new QCheckBox(groupBox_2);
        family->setObjectName("family");
        family->setGeometry(QRect(70, 44, 51, 21));
        family->setChecked(true);
        study = new QCheckBox(groupBox_2);
        study->setObjectName("study");
        study->setGeometry(QRect(70, 20, 51, 21));
        study->setChecked(true);
        other = new QCheckBox(groupBox_2);
        other->setObjectName("other");
        other->setGeometry(QRect(130, 44, 51, 21));
        other->setChecked(true);
        life = new QCheckBox(groupBox_2);
        life->setObjectName("life");
        life->setGeometry(QRect(130, 20, 51, 21));
        life->setChecked(true);
        clear = new QPushButton(groupBox_2);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(180, 44, 51, 24));
        clear->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        background-color: white;\n"
"        color: red;\n"
"        border: 2px solid red;\n"
"        border-radius: 10px;\n"
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
"    }"));
        all = new QPushButton(groupBox_2);
        all->setObjectName("all");
        all->setGeometry(QRect(180, 20, 51, 24));
        all->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
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
        comple = new QCheckBox(groupBox_2);
        comple->setObjectName("comple");
        comple->setGeometry(QRect(240, 20, 61, 22));
        comple->setChecked(true);
        normal = new QCheckBox(groupBox_2);
        normal->setObjectName("normal");
        normal->setGeometry(QRect(240, 45, 61, 22));
        normal->setChecked(true);
        overdue = new QCheckBox(groupBox_2);
        overdue->setObjectName("overdue");
        overdue->setGeometry(QRect(301, 21, 61, 22));
        overdue->setChecked(true);
        all_2 = new QPushButton(groupBox_2);
        all_2->setObjectName("all_2");
        all_2->setGeometry(QRect(363, 19, 51, 24));
        all_2->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
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
        clear_2 = new QPushButton(groupBox_2);
        clear_2->setObjectName("clear_2");
        clear_2->setGeometry(QRect(363, 43, 51, 24));
        clear_2->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        background-color: white;\n"
"        color: red;\n"
"        border: 2px solid red;\n"
"        border-radius: 10px;\n"
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
"    }"));
        confirm = new QPushButton(groupBox_2);
        confirm->setObjectName("confirm");
        confirm->setGeometry(QRect(421, 29, 51, 31));
        confirm->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
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
        volunteer = new QCheckBox(groupBox_2);
        volunteer->setObjectName("volunteer");
        volunteer->setGeometry(QRect(9, 43, 51, 21));
        volunteer->setChecked(true);
        pushButton_6 = new QPushButton(Demo_Window);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(330, 529, 91, 41));
        pushButton_6->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        background-color: white;\n"
"        color: #2196F3;\n"
"        border: 2px solid #2196F3;\n"
"        border-radius: 15px;\n"
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
        pushButton_7 = new QPushButton(Demo_Window);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(740, 530, 91, 41));
        pushButton_7->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        background-color: white;\n"
"        color: #2196F3;\n"
"        border: 2px solid #2196F3;\n"
"        border-radius: 15px;\n"
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

        retranslateUi(Demo_Window);

        QMetaObject::connectSlotsByName(Demo_Window);
    } // setupUi

    void retranslateUi(QWidget *Demo_Window)
    {
        Demo_Window->setWindowTitle(QCoreApplication::translate("Demo_Window", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Demo_Window", "\346\237\245\347\234\213\344\273\273\345\212\241", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Demo_Window", "\346\226\260\345\273\272\344\273\273\345\212\241", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Demo_Window", "\345\217\215\351\246\210\346\200\273\347\273\223", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Demo_Window", "\344\270\252\344\272\272\350\256\276\347\275\256", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Demo_Window", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Demo_Window", "\346\216\222\345\272\217\346\226\271\345\274\217", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Demo_Window", "\346\227\266\351\227\264", nullptr));
        radioButton->setText(QCoreApplication::translate("Demo_Window", "\347\264\247\346\200\245\347\250\213\345\272\246", nullptr));
        sort_key_button->setText(QCoreApplication::translate("Demo_Window", "\347\241\256\350\256\244", nullptr));
        last_page_button->setText(QCoreApplication::translate("Demo_Window", "\344\270\212\344\270\200\351\241\265", nullptr));
        next_page_button->setText(QCoreApplication::translate("Demo_Window", "\344\270\213\344\270\200\351\241\265", nullptr));
        label->setText(QCoreApplication::translate("Demo_Window", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\344\273\273\345\212\241\345\220\215\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Demo_Window", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\344\273\273\345\212\241\345\220\215\357\274\232</span></p></body></html>", nullptr));
        task_name1->setText(QString());
        task_name2->setText(QString());
        done_confirmed_button1->setText(QCoreApplication::translate("Demo_Window", "\345\256\214\346\210\220\344\273\273\345\212\241", nullptr));
        remove_confirmed_button1->setText(QCoreApplication::translate("Demo_Window", "\345\210\240\351\231\244\344\273\273\345\212\241", nullptr));
        done_confirmed_button2->setText(QCoreApplication::translate("Demo_Window", "\345\256\214\346\210\220\344\273\273\345\212\241", nullptr));
        remove_confirmed_button2->setText(QCoreApplication::translate("Demo_Window", "\345\210\240\351\231\244\344\273\273\345\212\241", nullptr));
        label_5->setText(QCoreApplication::translate("Demo_Window", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\345\275\223\345\211\215\347\212\266\346\200\201\357\274\232</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Demo_Window", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\345\275\223\345\211\215\347\212\266\346\200\201\357\274\232</span></p></body></html>", nullptr));
        current_state1->setText(QCoreApplication::translate("Demo_Window", "<html><head/><body><p><br/></p></body></html>", nullptr));
        current_state2->setText(QCoreApplication::translate("Demo_Window", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("Demo_Window", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\344\273\273\345\212\241\347\261\273\345\236\213\357\274\232</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("Demo_Window", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\344\273\273\345\212\241\347\261\273\345\236\213\357\274\232</span></p></body></html>", nullptr));
        task_type1->setText(QCoreApplication::translate("Demo_Window", "<html><head/><body><p><br/></p></body></html>", nullptr));
        task_type2->setText(QCoreApplication::translate("Demo_Window", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("Demo_Window", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\344\273\273\345\212\241\346\217\217\350\277\260\357\274\232</span></p></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("Demo_Window", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\344\273\273\345\212\241\346\217\217\350\277\260\357\274\232</span></p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("Demo_Window", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\347\264\247\346\200\245\347\250\213\345\272\246\357\274\232</span></p></body></html>", nullptr));
        urgency_degree1->setText(QString());
        label_17->setText(QCoreApplication::translate("Demo_Window", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\347\264\247\346\200\245\347\250\213\345\272\246\357\274\232</span></p></body></html>", nullptr));
        urgency_degree2->setText(QString());
        label_19->setText(QCoreApplication::translate("Demo_Window", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\346\210\252\346\255\242\346\227\266\351\227\264\357\274\232</span></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("Demo_Window", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\346\210\252\346\255\242\346\227\266\351\227\264\357\274\232</span></p></body></html>", nullptr));
        deadline1->setText(QString());
        deadline2->setText(QString());
        task_discription1->setHtml(QCoreApplication::translate("Demo_Window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        task_discription2->setHtml(QCoreApplication::translate("Demo_Window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Demo_Window", "\347\255\233\351\200\211", nullptr));
        work->setText(QCoreApplication::translate("Demo_Window", "\345\267\245\344\275\234", nullptr));
        family->setText(QCoreApplication::translate("Demo_Window", "\345\256\266\345\272\255", nullptr));
        study->setText(QCoreApplication::translate("Demo_Window", "\345\255\246\344\271\240", nullptr));
        other->setText(QCoreApplication::translate("Demo_Window", "\345\205\266\344\273\226", nullptr));
        life->setText(QCoreApplication::translate("Demo_Window", "\347\224\237\346\264\273", nullptr));
        clear->setText(QCoreApplication::translate("Demo_Window", "\346\270\205\347\251\272", nullptr));
        all->setText(QCoreApplication::translate("Demo_Window", "\345\205\250\351\200\211", nullptr));
        comple->setText(QCoreApplication::translate("Demo_Window", "\345\267\262\345\256\214\346\210\220", nullptr));
        normal->setText(QCoreApplication::translate("Demo_Window", "\346\234\252\345\256\214\346\210\220", nullptr));
        overdue->setText(QCoreApplication::translate("Demo_Window", "\345\267\262\350\277\207\346\234\237", nullptr));
        all_2->setText(QCoreApplication::translate("Demo_Window", "\345\205\250\351\200\211", nullptr));
        clear_2->setText(QCoreApplication::translate("Demo_Window", "\346\270\205\347\251\272", nullptr));
        confirm->setText(QCoreApplication::translate("Demo_Window", "\347\241\256\350\256\244", nullptr));
        volunteer->setText(QCoreApplication::translate("Demo_Window", "\347\244\276\345\233\242", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Demo_Window", "\346\237\245\347\234\213\346\217\220\351\206\222/\344\277\256\346\224\271", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Demo_Window", "\346\237\245\347\234\213\346\217\220\351\206\222/\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Demo_Window: public Ui_Demo_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO_WINDOW_H
