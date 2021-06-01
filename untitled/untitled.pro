QT       += core gui network
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    form.cpp \
    main.cpp \
    countwidget.cpp \
    menu.cpp \
    msgchecker.cpp \
    msgsender.cpp \
    shop.cpp

HEADERS += \
    countwidget.h \
    form.h \
    menu.h \
    msgchecker.h \
    msgsender.h \
    shop.h

FORMS += \
    countwidget.ui \
    form.ui \
    menu.ui \
    shop.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
