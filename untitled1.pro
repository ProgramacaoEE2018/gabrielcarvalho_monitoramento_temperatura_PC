#-------------------------------------------------
#
# Project created by QtCreator 2018-06-11T20:19:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = untitled1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    qcustomplot.cpp \
    Alarme c++.cpp \
    Componente_Hardware c++.cpp \
    Monitoramento de Temperaturas.cpp \
    stdafx.cpp \
    Componente_Hardware.cpp \
    Alarme.cpp

HEADERS += \
        mainwindow.h \
    qcustomplot.h \
    Alarme c++.h \
    Componente_Hardware c++.h \
    stdafx.h \
    targetver.h \
    Alarme.h \
    Componente_Hardware.h

FORMS += \
        mainwindow.ui
