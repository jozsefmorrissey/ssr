QT += core
QT -= gui

TARGET = test
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    terminator.cpp \
    cterminator.c

HEADERS += \
    terminator.h

