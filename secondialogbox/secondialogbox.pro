QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    studentdashboard.cpp \
    studentwindow1.cpp \
    teacherdashboard.cpp \
    teacherwindow1.cpp

HEADERS += \
    mainwindow.h \
    studentdashboard.h \
    studentwindow1.h \
    teacherdashboard.h \
    teacherwindow1.h

FORMS += \
    mainwindow.ui \
    studentdashboard.ui \
    studentwindow1.ui \
    teacherdashboard.ui \
    teacherwindow1.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    pictures.qrc

DISTFILES +=
