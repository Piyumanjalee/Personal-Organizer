/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_home
{
public:
    QAction *actionlohi;
    QWidget *centralwidget;
    QPushButton *Acedemic;
    QPushButton *Budgeting;
    QPushButton *Logout;
    QPushButton *IncomeTracker;
    QWidget *widget;
    QPushButton *ExpenceTracker;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *home)
    {
        if (home->objectName().isEmpty())
            home->setObjectName("home");
        home->resize(800, 600);
        home->setStyleSheet(QString::fromUtf8("background-color:#d3ffc5;   /* Mint green */"));
        actionlohi = new QAction(home);
        actionlohi->setObjectName("actionlohi");
        centralwidget = new QWidget(home);
        centralwidget->setObjectName("centralwidget");
        Acedemic = new QPushButton(centralwidget);
        Acedemic->setObjectName("Acedemic");
        Acedemic->setGeometry(QRect(390, 420, 241, 81));
        Acedemic->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #06ff44;       /* Light blue background color */\n"
"    color: white;                    /* White text color */\n"
"    border: white;                    /* Remove default border */\n"
"    border-radius: 10px;             /* Rounded corners */\n"
"    padding: 10px 20px;              /* Padding for larger button */\n"
"    font-size: 16px;                 /* Font size for button text */\n"
"    font-weight: bold;               /* Bold text */\n"
"    transition: background-color 0.3s ease; /* Smooth transition for hover effect */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2193b0;       /* Darker blue when hovered */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3a6073;       /* Even darker blue when pressed */\n"
"}\n"
""));
        Budgeting = new QPushButton(centralwidget);
        Budgeting->setObjectName("Budgeting");
        Budgeting->setGeometry(QRect(380, 270, 251, 72));
        Budgeting->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #06ff44;       /* Light blue background color */\n"
"    color: white;                    /* White text color */\n"
"    border: white;                    /* Remove default border */\n"
"    border-radius: 10px;             /* Rounded corners */\n"
"    padding: 10px 20px;              /* Padding for larger button */\n"
"    font-size: 16px;                 /* Font size for button text */\n"
"    font-weight: bold;               /* Bold text */\n"
"    transition: background-color 0.3s ease; /* Smooth transition for hover effect */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2193b0;       /* Darker blue when hovered */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3a6073;       /* Even darker blue when pressed */\n"
"}\n"
""));
        Logout = new QPushButton(centralwidget);
        Logout->setObjectName("Logout");
        Logout->setGeometry(QRect(680, 0, 111, 51));
        Logout->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #95ffe8;       /* Light blue background color */\n"
"    color: white;                    /* White text color */\n"
"    border: white;                    /* Remove default border */\n"
"    border-radius: 10px;             /* Rounded corners */\n"
"    padding: 10px 20px;              /* Padding for larger button */\n"
"    font-size: 16px;                 /* Font size for button text */\n"
"    font-weight: bold;               /* Bold text */\n"
"    transition: background-color 0.3s ease; /* Smooth transition for hover effect */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2193b0;       /* Darker blue when hovered */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3a6073;       /* Even darker blue when pressed */\n"
"}\n"
""));
        IncomeTracker = new QPushButton(centralwidget);
        IncomeTracker->setObjectName("IncomeTracker");
        IncomeTracker->setGeometry(QRect(40, 430, 241, 71));
        IncomeTracker->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #06ff44;       /* Light blue background color */\n"
"    color: white;                    /* White text color */\n"
"    border: white;                    /* Remove default border */\n"
"    border-radius: 10px;             /* Rounded corners */\n"
"    padding: 10px 20px;              /* Padding for larger button */\n"
"    font-size: 16px;                 /* Font size for button text */\n"
"    font-weight: bold;               /* Bold text */\n"
"    transition: background-color 0.3s ease; /* Smooth transition for hover effect */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2193b0;       /* Darker blue when hovered */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3a6073;       /* Even darker blue when pressed */\n"
"}\n"
""));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 671, 221));
        widget->setStyleSheet(QString::fromUtf8("QWidget{ border-image:url(:/piyu/images.jpeg);}"));
        ExpenceTracker = new QPushButton(centralwidget);
        ExpenceTracker->setObjectName("ExpenceTracker");
        ExpenceTracker->setGeometry(QRect(20, 270, 271, 72));
        ExpenceTracker->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #06ff44;       /* Light blue background color */\n"
"    color: white;                    /* White text color */\n"
"    border: white;                    /* Remove default border */\n"
"    border-radius: 10px;             /* Rounded corners */\n"
"    padding: 10px 20px;              /* Padding for larger button */\n"
"    font-size: 16px;                 /* Font size for button text */\n"
"    font-weight: bold;               /* Bold text */\n"
"    transition: background-color 0.3s ease; /* Smooth transition for hover effect */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2193b0;       /* Darker blue when hovered */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3a6073;       /* Even darker blue when pressed */\n"
"}\n"
""));
        home->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(home);
        statusbar->setObjectName("statusbar");
        home->setStatusBar(statusbar);

        retranslateUi(home);

        QMetaObject::connectSlotsByName(home);
    } // setupUi

    void retranslateUi(QMainWindow *home)
    {
        home->setWindowTitle(QCoreApplication::translate("home", "MainWindow", nullptr));
        actionlohi->setText(QCoreApplication::translate("home", "lohi", nullptr));
        Acedemic->setText(QCoreApplication::translate("home", "Acedemic shedule", nullptr));
        Budgeting->setText(QCoreApplication::translate("home", "Category based budgeting", nullptr));
        Logout->setText(QCoreApplication::translate("home", "logout", nullptr));
        IncomeTracker->setText(QCoreApplication::translate("home", "Income Tracker", nullptr));
        ExpenceTracker->setText(QCoreApplication::translate("home", "Expence Tracker", nullptr));
    } // retranslateUi

};

namespace Ui {
    class home: public Ui_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
