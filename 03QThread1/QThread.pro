#-------------------------------------------------
#
# Project created by QtCreator 2018-01-15T22:26:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QThread
TEMPLATE = app


SOURCES += main.cpp\
        threadwidget.cpp \
    mythread.cpp

HEADERS  += threadwidget.h \
    mythread.h

FORMS    += threadwidget.ui
