#-------------------------------------------------
#
# Project created by QtCreator 2016-12-06T15:08:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = USBDatalogger
TEMPLATE = app

INCLUDEPATH += hidapi

SOURCES += main.cpp\
        mainwindow.cpp \
    listcontroller.cpp \
    datastructurefield.cpp \
    usb_hid.cpp

HEADERS  += mainwindow.h \
    listcontroller.h \
    datastructurefield.h \
    hidapi/hidapi.h \
    usb_hid.h

FORMS    += mainwindow.ui
