
QT += core gui charts sql



greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17


# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    acedemic.cpp \
    budget.cpp \
    budgettable.cpp \
    database.cpp \
    expence.cpp \
    expencetable.cpp \
    financialreport.cpp \
    home.cpp \
    income.cpp \
    incometable.cpp \
    main.cpp \
    mainwindow.cpp \
    signup.cpp \
    welcome.cpp

HEADERS += \
    acedemic.h \
    budget.h \
    budgettable.h \
    database.h \
    expence.h \
    expencetable.h \
    financialreport.h \
    home.h \
    income.h \
    incometable.h \
    mainwindow.h \
    signup.h \
    welcome.h

FORMS += \
    acedemic.ui \
    budget.ui \
    budgettable.ui \
    expence.ui \
    expencetable.ui \
    financialreport.ui \
    home.ui \
    income.ui \
    incometable.ui \
    mainwindow.ui \
    signup.ui \
    welcome.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
