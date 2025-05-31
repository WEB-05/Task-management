/********************************************************************************
** Form generated from reading UI file 'signup_window.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_WINDOW_H
#define UI_SIGNUP_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signup_window
{
public:
    QFrame *frame;
    QLineEdit *textInput1;
    QLineEdit *textInput2;
    QPushButton *pushButton;
    QPushButton *button1;
    QPushButton *button2;

    void setupUi(QWidget *Signup_window)
    {
        if (Signup_window->objectName().isEmpty())
            Signup_window->setObjectName("Signup_window");
        Signup_window->resize(521, 481);
        frame = new QFrame(Signup_window);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 531, 491));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"border-image:url(:/images/signup.png);\n"
"\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        textInput1 = new QLineEdit(frame);
        textInput1->setObjectName("textInput1");
        textInput1->setGeometry(QRect(160, 140, 221, 41));
        textInput1->setStyleSheet(QString::fromUtf8("\n"
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
        textInput2 = new QLineEdit(frame);
        textInput2->setObjectName("textInput2");
        textInput2->setGeometry(QRect(160, 199, 221, 41));
        textInput2->setStyleSheet(QString::fromUtf8("\n"
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
        textInput2->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(389, 209, 51, 21));
        pushButton->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
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
        button1 = new QPushButton(frame);
        button1->setObjectName("button1");
        button1->setGeometry(QRect(100, 280, 111, 51));
        button1->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        background-color: white;\n"
"        color: #2196F3;\n"
"        border: 2px solid #2196F3;\n"
"        border-radius: 20px;\n"
"        padding: 2px 2px;\n"
"        font-weight: bold;\n"
"		font-size:23px;\n"
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
        button1->setIconSize(QSize(26, 16));
        button2 = new QPushButton(frame);
        button2->setObjectName("button2");
        button2->setGeometry(QRect(280, 280, 111, 51));
        button2->setStyleSheet(QString::fromUtf8("  /* \351\273\230\350\256\244\347\212\266\346\200\201\357\274\232\350\223\235\346\241\206\347\231\275\345\272\225\350\223\235\345\255\227 */\n"
"    QPushButton {\n"
"        \n"
"background-color: #2196F3;\n"
"        color: white;\n"
"        border: 2px solid #2196F3;\n"
"        border-radius: 20px;\n"
"        padding: 8px 16px;\n"
"        font-weight: bold;\n"
"		font-size:23px;\n"
"    }\n"
"\n"
"    /* \346\202\254\345\201\234\347\212\266\346\200\201\357\274\232\350\223\235\345\272\225\347\231\275\345\255\227 */\n"
"    QPushButton:hover {\n"
"        background-color:rgb(21, 96, 153);\n"
"    }\n"
"\n"
"    /* \346\214\211\344\270\213\347\212\266\346\200\201\357\274\232\346\267\261\350\223\235\345\272\225\347\231\275\345\255\227 */\n"
"    QPushButton:pressed {\n"
"        background-color: #2196f3;\n"
"        color: white;\n"
"    }"));
        button2->setIconSize(QSize(26, 16));

        retranslateUi(Signup_window);

        QMetaObject::connectSlotsByName(Signup_window);
    } // setupUi

    void retranslateUi(QWidget *Signup_window)
    {
        Signup_window->setWindowTitle(QCoreApplication::translate("Signup_window", "Form", nullptr));
        textInput1->setPlaceholderText(QCoreApplication::translate("Signup_window", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        textInput2->setText(QString());
        textInput2->setPlaceholderText(QCoreApplication::translate("Signup_window", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("Signup_window", "\346\230\276\347\244\272\345\257\206\347\240\201", nullptr));
        button1->setText(QCoreApplication::translate("Signup_window", "\347\241\256\350\256\244", nullptr));
        button2->setText(QCoreApplication::translate("Signup_window", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup_window: public Ui_Signup_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_WINDOW_H
