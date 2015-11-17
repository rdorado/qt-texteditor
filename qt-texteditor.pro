#-------------------------------------------------
#
# Project created by QtCreator 2015-11-09T14:49:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt-texteditor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    about.cpp \
    finddialog.cpp

HEADERS  += mainwindow.h \
    document.h \
    about.h \
    finddialog.h

FORMS    += mainwindow.ui \
    about.ui \
    finddialog.ui

RESOURCES += \
    resources.qrc
