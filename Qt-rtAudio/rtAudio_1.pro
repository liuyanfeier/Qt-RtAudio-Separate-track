#-------------------------------------------------
#
# Project created by QtCreator 2016-08-18T15:42:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = rtAudio_1
TEMPLATE = app

LIBS += -lole32 \
    -lwinmm \
    -ldsound

DEFINES += __WINDOWS_DS__

SOURCES += \
    3rdParty/RtAudio.cpp \
    mian.cpp \
    recording.cpp \
    thread.cpp

HEADERS  += \
    3rdParty/RtAudio.h \
    recording.h \
    thread.h

FORMS    += \
    recording.ui
