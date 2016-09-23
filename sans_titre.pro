#-------------------------------------------------
#
# Project created by QtCreator 2016-08-28T13:19:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sans_titre
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    wowinstall.cpp \
    src/FileManager.cpp \
    src/DownloadManager.cpp \
    src/NewsManager.cpp \
    src/File.cpp

HEADERS  += mainwindow.h \
    wowinstall.h \
    src/FileManager.h \
    src/DownloadManager.h \
    src/NewsManager.h \
    src/File.h

FORMS    += mainwindow.ui

RESOURCES += \
    background.qrc \
    btns.qrc

DISTFILES +=
