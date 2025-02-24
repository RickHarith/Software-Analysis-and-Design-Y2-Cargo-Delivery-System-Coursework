QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    companyandshippingrates.cpp \
    companylogin.cpp \
    companyorder.cpp \
    companyregistration.cpp \
    companysmainpage.cpp \
    customercompletedorder.cpp \
    customereditandview.cpp \
    customerinvoice.cpp \
    customeroderstatus.cpp \
    customerorderpage.cpp \
    driveracceptedorders.cpp \
    drivereditdetails.cpp \
    driverlogin.cpp \
    drivermainpage.cpp \
    driverorderhistory.cpp \
    driverregistration.cpp \
    main.cpp \
    mainwindow.cpp \
    userregistration.cpp \
    viewdriverdetails.cpp

HEADERS += \
    CompanyCommission.h \
    CompanySession.h \
    DriverSession.h \
    UserSession.h \
    companyandshippingrates.h \
    companylogin.h \
    companyorder.h \
    companyregistration.h \
    companysmainpage.h \
    customercompletedorder.h \
    customereditandview.h \
    customerinvoice.h \
    customeroderstatus.h \
    customerorderpage.h \
    driveracceptedorders.h \
    drivereditdetails.h \
    driverlogin.h \
    drivermainpage.h \
    driverorderhistory.h \
    driverregistration.h \
    mainwindow.h \
    userregistration.h \
    viewdriverdetails.h

FORMS += \
    companyandshippingrates.ui \
    companylogin.ui \
    companyorder.ui \
    companyregistration.ui \
    companysmainpage.ui \
    customercompletedorder.ui \
    customereditandview.ui \
    customerinvoice.ui \
    customeroderstatus.ui \
    customerorderpage.ui \
    driveracceptedorders.ui \
    drivereditdetails.ui \
    driverlogin.ui \
    drivermainpage.ui \
    driverorderhistory.ui \
    driverregistration.ui \
    mainwindow.ui \
    userregistration.ui \
    viewdriverdetails.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

LIBS += -lsqlite3

DISTFILES += \ \
    ../SDI TEST/Databases/Users.db
