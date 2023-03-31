#-------------------------------------------------
#
# Project created by QtCreator 2023-02-24T20:21:36
#
#-------------------------------------------------
#本项目中，部件全部使用开头小写+驼峰命名法，类名全部使用开头大写+驼峰命名法
QT       += core gui
QT       += serialport
QT       += opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#可执行文件名称
TARGET = VoidTerminal
TEMPLATE = app

#版本信息
VERSION = 1.0.0

#图标
#RC_ICONS =resource/logo.ico

#公司名称
QMAKE_TARGET_COMPANY = "xGgui PersonalDevelop"

#产品名称
QMAKE_TARGET_PRODUCT = "VoidTerminal ground station"

#文件说明
QMAKE_TARGET_DESCRIPTION = "Qt Creator based on Qt 5.13.0 (MinGW 32 bit)"

#版权信息


#中文（简体）
RC_LANG = 0x0004

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        dialogs/calculator.cpp \
        dialogs/config.cpp \
        dialogs/gauge.cpp \
        dialogs/settingline.cpp \
        dialogs/skin.cpp \
        dialogs/note.cpp \
        qopengl/glwidget.cpp \
        headparameter.cpp \
        main.cpp \
        qopengl/model.cpp \
        myTabWidget/mytabbar.cpp \
        myTabWidget/mytabpage.cpp \
        myTabWidget/mytabpopup.cpp \
        myTabWidget/mytabwidget.cpp \
        threads/datasortthread.cpp \
        threads/sendandrecserialthread.cpp \
        threads/serialthread.cpp \
        widgets/datacalibration.cpp \
        widgets/debugparameter.cpp \
        widgets/flightstatus.cpp \
        widgets/mainwidget.cpp \
        widgets/sendandreceive.cpp \
        widgets/waveanalysis.cpp
HEADERS += \
        dialogs/calculator.h \
        dialogs/config.h \
        dialogs/gauge.h \
        dialogs/settingline.h \
        dialogs/skin.h \
        dialogs/note.h \
        qopengl/glwidget.h \
        headparameter.h \
        qopengl/model.h \
        myTabWidget/mytabbar.h \
        myTabWidget/mytabpage.h \
        myTabWidget/mytabpopup.h \
        myTabWidget/mytabwidget.h \
        threads/datasortthread.h \
        threads/sendandrecserialthread.h \
        threads/serialthread.h \
        widgets/datacalibration.h \
        widgets/debugparameter.h \
        widgets/flightstatus.h \
        widgets/mainwidget.h \
        widgets/sendandreceive.h \
        widgets/waveanalysis.h
FORMS += \
        uis/calculator.ui \
        uis/config.ui \
        uis/datacalibration.ui \
        uis/debugparameter.ui \
        uis/flightstatus.ui \
        uis/gauge.ui \
        uis/mainwidget.ui \
        uis/note.ui \
        uis/sendandreceive.ui \
        uis/settingline.ui \
        uis/skin.ui \
        uis/waveanalysis.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


DISTFILES +=


#opengl库
win32: LIBS += -LD:/application/qt5.13/5.13.0/mingw73_32/lib/ -lfreeglut
win32: LIBS += -lOpenGL32
win32: LIBS += -lGlU32


RESOURCES += \
    res.qrc




win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../application/qt5.13/5.13.0/mingw73_32/lib/ -lquc
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../application/qt5.13/5.13.0/mingw73_32/lib/ -lqucd

INCLUDEPATH += $$PWD/../../../../application/qt5.13/5.13.0/mingw73_32/include/Qtquc
DEPENDPATH += $$PWD/../../../../application/qt5.13/5.13.0/mingw73_32/include/Qtquc

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../application/qt5.13/5.13.0/mingw73_32/lib/ -lqwt
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../application/qt5.13/5.13.0/mingw73_32/lib/ -lqwtd

INCLUDEPATH += $$PWD/../../../../application/qt5.13/5.13.0/mingw73_32/include/Qtqwt
DEPENDPATH += $$PWD/../../../../application/qt5.13/5.13.0/mingw73_32/include/Qtqwt

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../application/qt5.13/5.13.0/mingw73_32/lib/ -lQt5Xlsx
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../application/qt5.13/5.13.0/mingw73_32/lib/ -lQt5Xlsxd

INCLUDEPATH += $$PWD/../../../../application/qt5.13/5.13.0/mingw73_32/include/QtXlsx
DEPENDPATH += $$PWD/../../../../application/qt5.13/5.13.0/mingw73_32/include/QtXlsx
