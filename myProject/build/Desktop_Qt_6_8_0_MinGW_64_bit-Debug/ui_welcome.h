/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_welcome
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QPushButton *GoToHome;
    QPushButton *Logout;
    QWidget *widget;
    QLineEdit *emaillabel;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *welcome)
    {
        if (welcome->objectName().isEmpty())
            welcome->setObjectName("welcome");
        welcome->resize(829, 600);
        welcome->setStyleSheet(QString::fromUtf8("background-color:#d3ffc5;   /* Mint green */"));
        centralwidget = new QWidget(welcome);
        centralwidget->setObjectName("centralwidget");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 70, 651, 91));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 32px;            /* Larger font size for emphasis */\n"
"    color: #4CAF50;             /* Green color for a fresh look */\n"
"    font-weight: bold;          /* Make the text bold */\n"
"    padding: 10px 20px;         /* Add padding around the text */\n"
"    background-color: #e8f5e9;  /* Light green background to match the color scheme */\n"
"    border-radius: 8px;         /* Rounded corners */\n"
"    text-align: center;         /* Center-align the text */\n"
"}\n"
""));
        GoToHome = new QPushButton(centralwidget);
        GoToHome->setObjectName("GoToHome");
        GoToHome->setGeometry(QRect(618, 500, 191, 41));
        GoToHome->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Logout->setGeometry(QRect(30, 510, 141, 41));
        Logout->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        widget->setGeometry(QRect(70, 170, 681, 311));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"border-image: url(:/piyu/3.jpg);\n"
"}"));
        emaillabel = new QLineEdit(centralwidget);
        emaillabel->setObjectName("emaillabel");
        emaillabel->setGeometry(QRect(230, 15, 351, 41));
        emaillabel->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Arial\";\n"
"color: rgb(0, 0, 255);\n"
"background:transparent;"));
        welcome->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(welcome);
        statusbar->setObjectName("statusbar");
        welcome->setStatusBar(statusbar);

        retranslateUi(welcome);

        QMetaObject::connectSlotsByName(welcome);
    } // setupUi

    void retranslateUi(QMainWindow *welcome)
    {
        welcome->setWindowTitle(QCoreApplication::translate("welcome", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("welcome", "WELCOME TO USER ACCOUNT SYSTEM", nullptr));
        GoToHome->setText(QCoreApplication::translate("welcome", "Go to home page", nullptr));
        Logout->setText(QCoreApplication::translate("welcome", "logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcome: public Ui_welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
