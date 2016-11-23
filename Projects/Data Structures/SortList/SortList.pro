QT += core
QT -= gui

TARGET = SortList
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    listDriver.cpp \
    ItemType.cpp \
    sorted.cpp \
    dr2.cpp

DISTFILES +=

HEADERS += \
    ItemType.h \
    sorted.h

