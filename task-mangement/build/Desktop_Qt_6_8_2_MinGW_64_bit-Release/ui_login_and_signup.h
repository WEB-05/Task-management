/********************************************************************************
** Form generated from reading UI file 'login_and_signup.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_AND_SIGNUP_H
#define UI_LOGIN_AND_SIGNUP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login_and_signup
{
public:

    void setupUi(QWidget *login_and_signup)
    {
        if (login_and_signup->objectName().isEmpty())
            login_and_signup->setObjectName("login_and_signup");
        login_and_signup->resize(521, 481);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/to_do_list_fzl_icon.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        login_and_signup->setWindowIcon(icon);

        retranslateUi(login_and_signup);

        QMetaObject::connectSlotsByName(login_and_signup);
    } // setupUi

    void retranslateUi(QWidget *login_and_signup)
    {
        login_and_signup->setWindowTitle(QCoreApplication::translate("login_and_signup", "PKU Task Mangement", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login_and_signup: public Ui_login_and_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_AND_SIGNUP_H
