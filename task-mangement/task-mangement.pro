QT       += core gui
QT += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    demo_window.cpp \
    detailed.cpp \
    email.cpp \
    feedback_window.cpp \
    login_and_signup.cpp \
    login_window.cpp \
    main.cpp \
    main_window.cpp \
    setnew_window.cpp \
    settings_window.cpp \
    signup_window.cpp \
    widget.cpp \
    fun.cpp \
    worker.cpp

HEADERS += \
    demo_window.h \
    detailed.h \
    email.h \
    feedback_window.h \
    login_and_signup.h \
    login_window.h \
    main_window.h \
    setnew_window.h \
    settings_window.h \
    signup_window.h \
    widget.h \
    fun.h \
    worker.h

FORMS += \
    demo_window.ui \
    detailed.ui \
    feedback_window.ui \
    login_and_signup.ui \
    login_window.ui \
    main_window.ui \
    setnew_window.ui \
    settings_window.ui \
    signup_window.ui \
    widget.ui

LIBS += -lWs2_32
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

DISTFILES +=
