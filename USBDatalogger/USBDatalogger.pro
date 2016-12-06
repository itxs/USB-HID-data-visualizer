#-------------------------------------------------
#
# Project created by QtCreator 2016-12-06T15:08:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = USBDatalogger
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    listcontroller.cpp

HEADERS  += mainwindow.h \
    datastructitem.h \
    listcontroller.h

FORMS    += mainwindow.ui
