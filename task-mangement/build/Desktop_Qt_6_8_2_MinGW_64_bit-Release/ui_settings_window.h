/********************************************************************************
** Form generated from reading UI file 'settings_window.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_WINDOW_H
#define UI_SETTINGS_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings_Window
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QSlider *horizontalSlider_3;
    QSlider *horizontalSlider_4;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLineEdit *lineEdit_11;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLineEdit *lineEdit_13;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QSlider *horizontalSlider_5;
    QSlider *horizontalSlider_6;
    QLabel *label_11;
    QLabel *label_color;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;

    void setupUi(QWidget *Settings_Window)
    {
        if (Settings_Window->objectName().isEmpty())
            Settings_Window->setObjectName("Settings_Window");
        Settings_Window->resize(979, 591);
        Settings_Window->setStyleSheet(QString::fromUtf8("\n"
"    QLineEdit {\n"
"        border: 2px solid #ccc;\n"
"        border-radius: 10px;\n"
"        padding: 5px 10px;\n"
"        background: #f9f9f9;\n"
"        font-size: 14px;\n"
"     	color:black\n"
"    }\n"
"    QLineEdit:focus {\n"
"        border-color: #4CAF50;\n"
"        background: white;\n"
"    }\n"
"    QLineEdit:disabled {\n"
"        background: #eee;\n"
"        color: #777;\n"
"    }"));
        pushButton = new QPushButton(Settings_Window);
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
        pushButton_2 = new QPushButton(Settings_Window);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 200, 181, 100));
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
        pushButton_3 = new QPushButton(Settings_Window);
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
        pushButton_4 = new QPushButton(Settings_Window);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 400, 181, 100));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton \n"
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
        pushButton_4->setCheckable(false);
        pushButton_4->setChecked(false);
        pushButton_4->setAutoDefault(false);
        pushButton_5 = new QPushButton(Settings_Window);
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
        horizontalSlider_3 = new QSlider(Settings_Window);
        horizontalSlider_3->setObjectName("horizontalSlider_3");
        horizontalSlider_3->setGeometry(QRect(667, 412, 131, 20));
        horizontalSlider_3->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    height: 5px;\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #BBDEFB, stop:1 #E3F2FD);\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    width: 5px;\n"
"    height: 15px;\n"
"    margin: -5px 0;\n"
"    background: qradialgradient(cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, \n"
"                               stop:0 #64B5F6, stop:1 #1976D2);\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #42A5F5, stop:1 #90CAF9);\n"
"    border-radius: 3px;\n"
"}"));
        horizontalSlider_3->setMaximum(255);
        horizontalSlider_3->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider_4 = new QSlider(Settings_Window);
        horizontalSlider_4->setObjectName("horizontalSlider_4");
        horizontalSlider_4->setGeometry(QRect(380, 340, 261, 20));
        horizontalSlider_4->setMinimumSize(QSize(0, 0));
        horizontalSlider_4->setMaximumSize(QSize(261, 20));
        horizontalSlider_4->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        horizontalSlider_4->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        horizontalSlider_4->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    height: 5px;\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #BBDEFB, stop:1 #E3F2FD);\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    width: 5px;\n"
"    height: 15px;\n"
"    margin: -5px 0;\n"
"    background: qradialgradient(cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, \n"
"                               stop:0 #64B5F6, stop:1 #1976D2);\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #42A5F5, stop:1 #90CAF9);\n"
"    border-radius: 3px;\n"
"}"));
        horizontalSlider_4->setMaximum(80);
        horizontalSlider_4->setPageStep(4);
        horizontalSlider_4->setValue(80);
        horizontalSlider_4->setSliderPosition(80);
        horizontalSlider_4->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider_4->setInvertedAppearance(false);
        horizontalSlider_4->setInvertedControls(false);
        horizontalSlider_4->setTickPosition(QSlider::TickPosition::NoTicks);
        lineEdit_7 = new QLineEdit(Settings_Window);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(370, 20, 281, 51));
        lineEdit_7->setStyleSheet(QString::fromUtf8("\n"
"    QLineEdit {\n"
"        border: 2px solid #ccc;\n"
"        border-radius: 10px;\n"
"        padding: 5px 10px;\n"
"        background: #f9f9f9;\n"
"        font-size: 14px;\n"
"     	color:black\n"
"    }\n"
"    QLineEdit:focus {\n"
"        border-color: #4CAF50;\n"
"        background: white;\n"
"    }\n"
"    QLineEdit:disabled {\n"
"        background: #eee;\n"
"        color: #777;\n"
"    }"));
        lineEdit_9 = new QLineEdit(Settings_Window);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setGeometry(QRect(370, 100, 281, 51));
        lineEdit_9->setEchoMode(QLineEdit::EchoMode::Password);
        pushButton_6 = new QPushButton(Settings_Window);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(710, 100, 161, 51));
        pushButton_6->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
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
        pushButton_7 = new QPushButton(Settings_Window);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(710, 20, 161, 51));
        pushButton_7->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
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
        lineEdit_11 = new QLineEdit(Settings_Window);
        lineEdit_11->setObjectName("lineEdit_11");
        lineEdit_11->setGeometry(QRect(370, 180, 281, 51));
        pushButton_8 = new QPushButton(Settings_Window);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(710, 180, 161, 51));
        pushButton_8->setTabletTracking(false);
        pushButton_8->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
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
        pushButton_9 = new QPushButton(Settings_Window);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(710, 260, 161, 51));
        pushButton_9->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
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
        lineEdit_13 = new QLineEdit(Settings_Window);
        lineEdit_13->setObjectName("lineEdit_13");
        lineEdit_13->setGeometry(QRect(370, 260, 281, 51));
        lineEdit_13->setEchoMode(QLineEdit::EchoMode::Password);
        label = new QLabel(Settings_Window);
        label->setObjectName("label");
        label->setGeometry(QRect(300, 332, 71, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(Settings_Window);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(201, 409, 81, 21));
        label_2->setFont(font);
        label_3 = new QLabel(Settings_Window);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(277, 410, 69, 21));
        label_4 = new QLabel(Settings_Window);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(457, 410, 69, 19));
        label_5 = new QLabel(Settings_Window);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(637, 410, 69, 19));
        label_6 = new QLabel(Settings_Window);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(270, 460, 501, 111));
        label_7 = new QLabel(Settings_Window);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(250, 30, 101, 31));
        label_7->setFont(font);
        label_8 = new QLabel(Settings_Window);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(250, 100, 81, 51));
        label_8->setFont(font);
        label_9 = new QLabel(Settings_Window);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(250, 190, 91, 31));
        label_9->setFont(font);
        label_10 = new QLabel(Settings_Window);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(250, 270, 71, 31));
        label_10->setFont(font);
        horizontalSlider_5 = new QSlider(Settings_Window);
        horizontalSlider_5->setObjectName("horizontalSlider_5");
        horizontalSlider_5->setGeometry(QRect(487, 410, 131, 20));
        horizontalSlider_5->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    height: 5px;\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #BBDEFB, stop:1 #E3F2FD);\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    width: 5px;\n"
"    height: 15px;\n"
"    margin: -5px 0;\n"
"    background: qradialgradient(cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, \n"
"                               stop:0 #64B5F6, stop:1 #1976D2);\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #42A5F5, stop:1 #90CAF9);\n"
"    border-radius: 3px;\n"
"}"));
        horizontalSlider_5->setMaximum(255);
        horizontalSlider_5->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider_6 = new QSlider(Settings_Window);
        horizontalSlider_6->setObjectName("horizontalSlider_6");
        horizontalSlider_6->setGeometry(QRect(307, 410, 131, 20));
        horizontalSlider_6->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    height: 5px;\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #BBDEFB, stop:1 #E3F2FD);\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    width: 5px;\n"
"    height: 15px;\n"
"    margin: -5px 0;\n"
"    background: qradialgradient(cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, \n"
"                               stop:0 #64B5F6, stop:1 #1976D2);\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #42A5F5, stop:1 #90CAF9);\n"
"    border-radius: 3px;\n"
"}"));
        horizontalSlider_6->setMaximum(255);
        horizontalSlider_6->setOrientation(Qt::Orientation::Horizontal);
        label_11 = new QLabel(Settings_Window);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(827, 410, 41, 21));
        QFont font1;
        font1.setPointSize(10);
        label_11->setFont(font1);
        label_color = new QLabel(Settings_Window);
        label_color->setObjectName("label_color");
        label_color->setGeometry(QRect(867, 400, 45, 45));
        label_color->setStyleSheet(QString::fromUtf8("\n"
"border: 1.3px solid black;  \n"
""));
        pushButton_10 = new QPushButton(Settings_Window);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(829, 464, 81, 31));
        pushButton_10->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        background-color: white;\n"
"        color: #2196F3;\n"
"        border: 2px solid #2196F3;\n"
"        border-radius: 20px;\n"
"        padding: 2px 2px;\n"
"\n"
"		font-size:13px;\n"
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
        pushButton_11 = new QPushButton(Settings_Window);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(653, 116, 51, 21));
        pushButton_11->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        background-color: white;\n"
"        color: #2196F3;\n"
"        border: 2px solid #2196F3;\n"
"        border-radius: 20px;\n"
"        padding: 2px 2px;\n"
"        font-weight: bold;\n"
"		font-size:10px;\n"
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
        pushButton_12 = new QPushButton(Settings_Window);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(653, 278, 51, 21));
        pushButton_12->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        background-color: white;\n"
"        color: #2196F3;\n"
"        border: 2px solid #2196F3;\n"
"        border-radius: 20px;\n"
"        padding: 2px 2px;\n"
"        font-weight: bold;\n"
"		font-size:10px;\n"
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
        pushButton_13 = new QPushButton(Settings_Window);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(0, 100, 181, 100));
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton \n"
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

        retranslateUi(Settings_Window);

        QMetaObject::connectSlotsByName(Settings_Window);
    } // setupUi

    void retranslateUi(QWidget *Settings_Window)
    {
        Settings_Window->setWindowTitle(QCoreApplication::translate("Settings_Window", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Settings_Window", "\346\237\245\347\234\213\344\273\273\345\212\241", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Settings_Window", "\346\226\260\345\273\272\344\273\273\345\212\241", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Settings_Window", "\345\217\215\351\246\210\346\200\273\347\273\223", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Settings_Window", "\344\270\252\344\272\272\350\256\276\347\275\256", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Settings_Window", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
        lineEdit_7->setText(QString());
        lineEdit_7->setPlaceholderText(QCoreApplication::translate("Settings_Window", "\350\257\267\350\276\223\345\205\245\346\226\260\347\224\250\346\210\267\345\220\215", nullptr));
        lineEdit_9->setText(QString());
        lineEdit_9->setPlaceholderText(QCoreApplication::translate("Settings_Window", "\350\257\267\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Settings_Window", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Settings_Window", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        lineEdit_11->setText(QString());
        lineEdit_11->setPlaceholderText(QCoreApplication::translate("Settings_Window", "\350\257\267\350\276\223\345\205\245\351\202\256\347\256\261", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Settings_Window", "\347\241\256\350\256\244\346\217\220\344\272\244", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Settings_Window", "\347\241\256\350\256\244\346\217\220\344\272\244", nullptr));
        lineEdit_13->setText(QString());
        lineEdit_13->setPlaceholderText(QCoreApplication::translate("Settings_Window", "\350\257\267\350\276\223\345\205\245\351\202\256\347\256\261\345\257\206\347\240\201", nullptr));
        label->setText(QCoreApplication::translate("Settings_Window", "\351\241\265\351\235\242\344\272\256\345\272\246\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Settings_Window", "\350\203\214\346\231\257\351\242\234\350\211\262\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Settings_Window", "R\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Settings_Window", "G:", nullptr));
        label_5->setText(QCoreApplication::translate("Settings_Window", "B\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("Settings_Window", "\346\204\237\350\260\242\346\202\250\344\275\277\347\224\250\346\234\254\350\275\257\344\273\266\357\274\201\n"
"\345\274\200\345\217\221\350\200\205\357\274\232 23\345\205\203\345\237\271 \347\216\213\346\201\251\345\215\232\n"
"              24\344\277\241\347\247\221 \346\233\276\346\265\251\350\275\251 \346\242\201\346\242\223\346\266\265\n"
"", nullptr));
        label_7->setText(QCoreApplication::translate("Settings_Window", "\344\277\256\346\224\271\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("Settings_Window", "\344\277\256\346\224\271\345\257\206\347\240\201\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("Settings_Window", "\344\275\240\347\232\204\351\202\256\347\256\261\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("Settings_Window", "\351\202\256\347\256\261\345\257\206\347\240\201\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("Settings_Window", "\351\242\204\350\247\210", nullptr));
        label_color->setText(QString());
        pushButton_10->setText(QCoreApplication::translate("Settings_Window", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Settings_Window", "\346\230\276\347\244\272\345\257\206\347\240\201", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Settings_Window", "\346\230\276\347\244\272\345\257\206\347\240\201", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Settings_Window", "\346\227\245\345\216\206\346\250\241\345\274\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings_Window: public Ui_Settings_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_WINDOW_H
