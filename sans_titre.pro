#-------------------------------------------------
#
# Project created by QtCreator 2016-08-28T13:19:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sans_titre
TEMPLATE = app


SOURCES += src/main.cpp\
    src/mainwindow.cpp \
    src/wowinstall.cpp \
    src/download_manager.cpp \
    src/file.cpp \
    src/file_manager.cpp \
    src/launcher_config.cpp \
    src/news_manager.cpp \
    src/core.cpp

HEADERS  += src/mainwindow.h \
    src/wowinstall.h \
    src/download_manager.h \
    src/news_manager.h \
    src/launcher_config.h \
    src/file_manager.h \
    src/file.h \
    src/core.h

FORMS    += mainwindow.ui

RESOURCES += \
    background.qrc \
    btns.qrc

DISTFILES +=
