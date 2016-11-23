QT += core
QT -= gui

TARGET = Queue
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    ItemType.cpp \
    listDriver.cpp \
    QueType.cpp

HEADERS += \
    ItemType.h \
    QueType.h

