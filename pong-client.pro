#-------------------------------------------------
#
# Project created by QtCreator 2013-03-26T14:36:24
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pong-client
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    renderlabel.cpp \
    scene.cpp \
    bat.cpp \
    jobcannotbedone.cpp \
    arena.cpp \
    mathutils.cpp \
    serveurcommunicator.cpp \
    clientcommunicator.cpp \
    GameState.cpp \
    Lockable.cpp \
    serversync.cpp

HEADERS  += mainwindow.h \
    renderlabel.h \
    scene.h \
    bat.h \
    jobcannotbedone.h \
    arena.h \
    mathutils.h \
    serveurcommunicator.h \
    clientcommunicator.h \
    GameState.hpp \
    PongTypes.hpp \
    Lockable.hpp \
    serversync.h

FORMS    += mainwindow.ui
