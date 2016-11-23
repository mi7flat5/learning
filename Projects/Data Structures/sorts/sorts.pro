QT += core
QT -= gui

TARGET = sorts
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

HEADERS += \
    BubbleSort.h \
    InsertionSort.h \
    SelectionSort.h

