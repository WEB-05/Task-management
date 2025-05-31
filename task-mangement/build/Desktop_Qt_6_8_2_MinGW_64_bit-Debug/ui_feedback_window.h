/********************************************************************************
** Form generated from reading UI file 'feedback_window.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEEDBACK_WINDOW_H
#define UI_FEEDBACK_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Feedback_Window
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *efficiency;
    QLabel *art_of_management;
    QLabel *god;
    QLCDNumber *task_sum;
    QLCDNumber *task_curr;
    QLCDNumber *task_done;
    QLCDNumber *task_overdue;
    QLabel *label_01;
    QLabel *label_02;
    QLabel *label_03;
    QLabel *god_2;

    void setupUi(QWidget *Feedback_Window)
    {
        if (Feedback_Window->objectName().isEmpty())
            Feedback_Window->setObjectName("Feedback_Window");
        Feedback_Window->resize(979, 591);
        pushButton = new QPushButton(Feedback_Window);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 181, 131));
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
        pushButton_2 = new QPushButton(Feedback_Window);
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
        pushButton_3 = new QPushButton(Feedback_Window);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(0, 260, 181, 131));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton \n"
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
        pushButton_4 = new QPushButton(Feedback_Window);
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
        pushButton_5 = new QPushButton(Feedback_Window);
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
        label = new QLabel(Feedback_Window);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 40, 141, 61));
        label_3 = new QLabel(Feedback_Window);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(250, 170, 151, 51));
        label_4 = new QLabel(Feedback_Window);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(250, 240, 151, 51));
        label_5 = new QLabel(Feedback_Window);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(250, 360, 131, 41));
        label_6 = new QLabel(Feedback_Window);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(290, 100, 111, 51));
        efficiency = new QLabel(Feedback_Window);
        efficiency->setObjectName("efficiency");
        efficiency->setGeometry(QRect(380, 350, 181, 141));
        efficiency->setStyleSheet(QString::fromUtf8(""));
        art_of_management = new QLabel(Feedback_Window);
        art_of_management->setObjectName("art_of_management");
        art_of_management->setGeometry(QRect(580, 330, 191, 181));
        god = new QLabel(Feedback_Window);
        god->setObjectName("god");
        god->setGeometry(QRect(790, 320, 171, 171));
        task_sum = new QLCDNumber(Feedback_Window);
        task_sum->setObjectName("task_sum");
        task_sum->setGeometry(QRect(430, 30, 131, 51));
        QFont font;
        font.setBold(false);
        task_sum->setFont(font);
        task_sum->setStyleSheet(QString::fromUtf8("border: none;\n"
"color:balck;\n"
"background-color: white;"));
        task_sum->setSegmentStyle(QLCDNumber::Flat);
        task_curr = new QLCDNumber(Feedback_Window);
        task_curr->setObjectName("task_curr");
        task_curr->setGeometry(QRect(430, 100, 131, 51));
        task_curr->setFont(font);
        task_curr->setStyleSheet(QString::fromUtf8("border: none;\n"
"color:balck;\n"
"background-color: white;"));
        task_curr->setDigitCount(5);
        task_curr->setSegmentStyle(QLCDNumber::Flat);
        task_done = new QLCDNumber(Feedback_Window);
        task_done->setObjectName("task_done");
        task_done->setGeometry(QRect(430, 170, 131, 51));
        task_done->setFont(font);
        task_done->setStyleSheet(QString::fromUtf8("border: none;\n"
"color:green;\n"
"background-color: white;"));
        task_done->setSegmentStyle(QLCDNumber::Flat);
        task_overdue = new QLCDNumber(Feedback_Window);
        task_overdue->setObjectName("task_overdue");
        task_overdue->setGeometry(QRect(430, 240, 131, 51));
        task_overdue->setFont(font);
        task_overdue->setStyleSheet(QString::fromUtf8("border: none;\n"
"color:red;\n"
"background-color: white;"));
        task_overdue->setSmallDecimalPoint(false);
        task_overdue->setSegmentStyle(QLCDNumber::Flat);
        task_overdue->setProperty("value", QVariant(0.000000000000000));
        task_overdue->setProperty("intValue", QVariant(0));
        label_01 = new QLabel(Feedback_Window);
        label_01->setObjectName("label_01");
        label_01->setGeometry(QRect(411, 488, 61, 31));
        QFont font1;
        font1.setPointSize(13);
        label_01->setFont(font1);
        label_01->setStyleSheet(QString::fromUtf8(""));
        label_02 = new QLabel(Feedback_Window);
        label_02->setObjectName("label_02");
        label_02->setGeometry(QRect(614, 490, 61, 31));
        label_02->setFont(font1);
        label_03 = new QLabel(Feedback_Window);
        label_03->setObjectName("label_03");
        label_03->setGeometry(QRect(826, 487, 61, 31));
        label_03->setFont(font1);
        god_2 = new QLabel(Feedback_Window);
        god_2->setObjectName("god_2");
        god_2->setGeometry(QRect(790, 320, 171, 171));

        retranslateUi(Feedback_Window);

        QMetaObject::connectSlotsByName(Feedback_Window);
    } // setupUi

    void retranslateUi(QWidget *Feedback_Window)
    {
        Feedback_Window->setWindowTitle(QCoreApplication::translate("Feedback_Window", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Feedback_Window", "\346\237\245\347\234\213\344\273\273\345\212\241", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Feedback_Window", "\346\226\260\345\273\272\344\273\273\345\212\241", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Feedback_Window", "\345\217\215\351\246\210\346\200\273\347\273\223", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Feedback_Window", "\344\270\252\344\272\272\350\256\276\347\275\256", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Feedback_Window", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
        label->setText(QCoreApplication::translate("Feedback_Window", "<html><head/><body><p align=\"right\"><span style=\" font-size:11pt;\">\344\275\240\346\217\220\344\272\244\347\232\204\344\273\273\345\212\241\346\200\273\346\225\260\357\274\232</span></p><p align=\"right\"><span style=\" font-size:8pt;\">\357\274\210\345\220\253\345\267\262\345\210\240\351\231\244\344\273\273\345\212\241\357\274\211</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Feedback_Window", "<html><head/><body><p align=\"right\"><span style=\" font-size:11pt;\">\345\267\262\347\273\217\345\256\214\346\210\220\347\232\204\344\273\273\345\212\241\346\225\260\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Feedback_Window", "<html><head/><body><p><span style=\" font-size:11pt;\">\346\234\252\345\217\212\346\227\266\345\256\214\346\210\220\347\232\204\344\273\273\345\212\241\346\225\260\357\274\232</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Feedback_Window", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">\344\275\240\347\232\204\347\247\260\345\217\267\357\274\232</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Feedback_Window", "<html><head/><body><p align=\"right\"><span style=\" font-size:11pt;\">\347\216\260\346\234\211\344\273\273\345\212\241\346\200\273\346\225\260\357\274\232</span></p></body></html>", nullptr));
        efficiency->setText(QCoreApplication::translate("Feedback_Window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">\346\225\210\347\216\207\350\276\276\344\272\272</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span>\350\276\276\346\210\220\346\235\241\344\273\266\357\274\232</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-"
                        "right:0px; -qt-block-indent:0; text-indent:0px;\"><span >\345\256\214\346\210\220\347\216\260\346\234\211\346\211\200\346\234\211\344\273\273\345\212\241</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span >\344\270\224\345\216\206\345\217\262\346\210\230\347\273\251\346\262\241\346\234\211overdue</span></p></body></html>", nullptr));
        art_of_management->setText(QCoreApplication::translate("Feedback_Window", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; \">\345\271\263\350\241\241\345\244\247\345\270\210</span></p><p><span >\350\276\276\346\210\220\346\235\241\344\273\266\357\274\232</span></p><p><span >\350\207\263\345\260\2213\347\247\215\347\261\273\345\236\213\344\273\273\345\212\241\345\255\230\345\234\250</span></p><p><span >\344\270\224\345\205\266\345\220\204\347\261\273\345\256\214\346\210\220\350\207\263\345\260\221\344\270\200\351\241\271</span></p></body></html>", nullptr));
        god->setText(QCoreApplication::translate("Feedback_Window", "<html><head/><body><p><span style=\" font-weight:700;\">\351\232\220\350\227\217\346\210\220\345\260\261\357\274\232</span></p><p><span style=\" font-size:14pt; font-weight:700;\">\346\221\206\347\203\202\343\201\256\347\245\236</span></p><p>\350\276\276\346\210\220\346\235\241\344\273\266\357\274\232</p><p>overdue\344\273\273\345\212\241\350\266\205\350\277\2073\344\270\252</p><p>\344\270\224\347\233\256\345\211\215\346\227\240complete\344\273\273\345\212\241</p></body></html>", nullptr));
        label_01->setText(QCoreApplication::translate("Feedback_Window", "<html><head/><body><p><span >\346\234\252\350\276\276\346\210\220</span></p></body></html>", nullptr));
        label_02->setText(QCoreApplication::translate("Feedback_Window", "<html><head/><body><p><span >\346\234\252\350\276\276\346\210\220</span></p></body></html>", nullptr));
        label_03->setText(QCoreApplication::translate("Feedback_Window", "<html><head/><body><p><span >\346\234\252\350\276\276\346\210\220</span></p></body></html>", nullptr));
        god_2->setText(QCoreApplication::translate("Feedback_Window", "<html><head/><body><p><span style=\" font-weight:700; color:#000000;\">\351\232\220\350\227\217\346\210\220\345\260\261\357\274\232</span></p><p><span style=\" font-size:14pt; font-weight:700; color:#707070;\">\357\274\237\357\274\237\357\274\237</span></p><p><span style=\" color:#707070;\">\350\276\276\346\210\220\346\235\241\344\273\266\357\274\232</span></p><p><span style=\" color:#707070;\">\357\274\237\357\274\237\357\274\237</span></p><p><span style=\" color:#707070;\">\357\274\237\357\274\237\357\274\237</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Feedback_Window: public Ui_Feedback_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEDBACK_WINDOW_H
