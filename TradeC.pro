#-------------------------------------------------
#
# Project created by QtCreator 2017-11-29T13:25:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TradeC
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

CONFIG(debug, debug|release) {
   TARGET = $$join(TARGET,,,d)                #为debug版本生成的文件增加d的后缀
   DESTDIR = ../../bin/x64/debug/clientC/ #设置exe文件的生成目录
   OBJECTS_DIR = ./temp/debug/obj             #设置obj文件的生成目录
   MOC_DIR = ./temp/debug/moc/                #将QT自动生成的对象放在moc文件夹下
} else {
   DESTDIR = ../../bin/x64/release/clientC/
   OBJECTS_DIR = ./temp/release/obj/
   MOC_DIR = ./temp/release/moc/
}

SOURCES += main.cpp\
        mainWindow.cpp \
    titleBar.cpp \
    quote.cpp \
    stockTrade.cpp \
    conditionEntrust.cpp \
    normalEntrust.cpp \
    labelClick.cpp

HEADERS  += mainWindow.h \
    titleBar.h \
    quote.h \
    stockTrade.h \
    conditionEntrust.h \
    normalEntrust.h \
    labelClick.h

FORMS    += mainWindow.ui \
    quote.ui \
    conditionEntrust.ui \
    normalEntrust.ui
