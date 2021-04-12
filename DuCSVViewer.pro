#-------------------------------------------------
#
# Project created by QtCreator 2015-11-09T08:04:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DuCSVViewer
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    NuevoDialog.cpp

HEADERS  += MainWindow.h \
    NuevoDialog.h

FORMS    += MainWindow.ui \
    NuevoDialog.ui

QMAKE_CXXFLAGS += -std=gnu++14
