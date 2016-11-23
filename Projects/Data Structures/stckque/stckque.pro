QT += core
QT -= gui

TARGET = stckque
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    stack.cpp \
    queue.cpp

HEADERS += \
    stack.h \
    queue.h

