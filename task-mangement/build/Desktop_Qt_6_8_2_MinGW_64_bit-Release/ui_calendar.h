/********************************************************************************
** Form generated from reading UI file 'calendar.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALENDAR_H
#define UI_CALENDAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>
#include "customcalendar.h"

QT_BEGIN_NAMESPACE

class Ui_Calendar
{
public:
    CustomCalendar *calendarWidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_7;
    QScrollArea *taskarea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *Calendar)
    {
        if (Calendar->objectName().isEmpty())
            Calendar->setObjectName("Calendar");
        Calendar->resize(979, 591);
        calendarWidget = new CustomCalendar(Calendar);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(180, 0, 651, 401));
        calendarWidget->setGridVisible(false);
        calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::HorizontalHeaderFormat::SingleLetterDayNames);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::VerticalHeaderFormat::NoVerticalHeader);
        pushButton_2 = new QPushButton(Calendar);
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
        pushButton = new QPushButton(Calendar);
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
        pushButton_3 = new QPushButton(Calendar);
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
        pushButton_4 = new QPushButton(Calendar);
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
        pushButton_6 = new QPushButton(Calendar);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(0, 100, 181, 100));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton \n"
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
        pushButton_5 = new QPushButton(Calendar);
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
        textBrowser = new QTextBrowser(Calendar);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(834, 80, 141, 161));
        textBrowser->setStyleSheet(QString::fromUtf8("QTextBrowser{\n"
"        background-color: white;\n"
"      border: 1.3px solid rgb(0,0,0)\n"
"\n"
"}"));
        pushButton_7 = new QPushButton(Calendar);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(840, 290, 121, 71));
        pushButton_7->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
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
        taskarea = new QScrollArea(Calendar);
        taskarea->setObjectName("taskarea");
        taskarea->setGeometry(QRect(330, 420, 621, 161));
        taskarea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 619, 159));
        taskarea->setWidget(scrollAreaWidgetContents);
        label = new QLabel(Calendar);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 470, 131, 51));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);
        label_2 = new QLabel(Calendar);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(843, 190, 31, 41));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/red.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(Calendar);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(844, 105, 31, 41));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/green.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(Calendar);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(837, 148, 43, 41));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/blue.png")));
        label_4->setScaledContents(true);

        retranslateUi(Calendar);

        QMetaObject::connectSlotsByName(Calendar);
    } // setupUi

    void retranslateUi(QWidget *Calendar)
    {
        Calendar->setWindowTitle(QCoreApplication::translate("Calendar", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Calendar", "\346\226\260\345\273\272\344\273\273\345\212\241", nullptr));
        pushButton->setText(QCoreApplication::translate("Calendar", "\346\237\245\347\234\213\344\273\273\345\212\241", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Calendar", "\345\217\215\351\246\210\346\200\273\347\273\223", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Calendar", "\344\270\252\344\272\272\350\256\276\347\275\256", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Calendar", "\346\227\245\345\216\206\346\250\241\345\274\217", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Calendar", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Calendar", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:700;\">\345\233\276\344\276\213</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">            </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; tex"
                        "t-indent:0px;\"><span style=\" font-size:10pt;\">            :\346\234\211\345\267\262\345\256\214\346\210\220\344\273\273\345\212\241</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">    </span><span style=\" font-size:8pt; color:#ffffff;\">1</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:6pt;\">    </span><span style=\" font-size:6pt; color:#ffffff;\">1</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">            :\346\234\211\346\234\252\345\256\214\346\210\220\344\273\273\345\212\241</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:6pt;\">  </span><s"
                        "pan style=\" font-size:8pt;\"> </span><span style=\" font-size:8pt; color:#ffffff;\"> 1</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:6pt; color:#ffffff;\">    1</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">            :\346\234\211\345\267\262\350\277\207\346\234\237\344\273\273\345\212\241</span></p></body></html>", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Calendar", "\350\267\263\350\275\254\345\210\260\351\200\211\345\256\232\346\227\245\346\234\237", nullptr));
        label->setText(QCoreApplication::translate("Calendar", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\351\200\211\345\256\232\346\227\245\346\234\237\347\232\204\344\273\273\345\212\241\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Calendar: public Ui_Calendar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALENDAR_H
