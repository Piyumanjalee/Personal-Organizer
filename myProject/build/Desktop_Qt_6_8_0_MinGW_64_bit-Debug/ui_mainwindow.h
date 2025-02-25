/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *Cancel;
    QPushButton *SignUp;
    QPushButton *Login;
    QLabel *label_4;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:#d3ffc5;   /* Mint green */"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 19, 121, 61));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 28px;\n"
"    color: green;\n"
"    padding: 10px;\n"
"    background-color: #f0f0f0;  /* Light gray background for contrast */\n"
"    border-radius: 8px;         /* Rounded corners */\n"
"    font-weight: bold;          /* Bold text */\n"
"    text-align: center;         /* Center the text */\n"
"}\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 160, 151, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 25px;\n"
"    color: #333333;   /* Dark gray color for the text */\n"
"    padding: 5px;\n"
"    font-weight: normal;  /* Regular weight */\n"
"    text-align: left;     /* Align the text to the left */\n"
"}\n"
""));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(220, 160, 321, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    font-size: 10px;                   /* Default font size */\n"
"    color: #000000;                    /* Black text color */\n"
"    padding: 8px;                      /* Inner padding */\n"
"    background-color: #f9f9f9;        /* Light gray background */\n"
"    border: 2px solid #cccccc;         /* Light gray border */\n"
"    border-radius: 5px;                /* Rounded corners */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #4CAF50;         /* Green border when focused */\n"
"    background-color: #ffffff;         /* White background when focused */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #aaaaaa;                    /* Light gray for placeholder text */\n"
"    font-style: italic;                /* Italic style for a subtle hint */\n"
"    font-size: 16px;                   /* Placeholder font size */\n"
"}\n"
""));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(220, 240, 331, 41));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    font-size: 10px;                   /* Default font size */\n"
"    color: #000000;                    /* Black text color */\n"
"    padding: 8px;                      /* Inner padding */\n"
"    background-color: #f9f9f9;        /* Light gray background */\n"
"    border: 2px solid #cccccc;         /* Light gray border */\n"
"    border-radius: 5px;                /* Rounded corners */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #4CAF50;         /* Green border when focused */\n"
"    background-color: #ffffff;         /* White background when focused */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #aaaaaa;                    /* Light gray for placeholder text */\n"
"    font-style: italic;                /* Italic style for a subtle hint */\n"
"    font-size: 16px;                   /* Placeholder font size */\n"
"}\n"
""));
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Password);
        Cancel = new QPushButton(centralwidget);
        Cancel->setObjectName("Cancel");
        Cancel->setGeometry(QRect(100, 360, 111, 51));
        Cancel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-size: 18px;\n"
"    padding: 10px 20px;                /* Vertical and horizontal padding */\n"
"    color: #ffffff;                     /* White text color */\n"
"    background-color: #4CAF50;         /* Green background for login */\n"
"    border: none;                       /* No border */\n"
"    border-radius: 5px;                /* Rounded corners */\n"
"    transition: background-color 0.3s;  /* Smooth transition effect */\n"
"}"));
        SignUp = new QPushButton(centralwidget);
        SignUp->setObjectName("SignUp");
        SignUp->setGeometry(QRect(450, 430, 121, 51));
        SignUp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-size: 18px;\n"
"    padding: 10px 20px;                /* Vertical and horizontal padding */\n"
"    color: #ffffff;                     /* White text color */\n"
"    background-color: #4CAF50;         /* Green background for login */\n"
"    border: none;                       /* No border */\n"
"    border-radius: 5px;                /* Rounded corners */\n"
"    transition: background-color 0.3s;  /* Smooth transition effect */\n"
"}"));
        Login = new QPushButton(centralwidget);
        Login->setObjectName("Login");
        Login->setGeometry(QRect(380, 360, 121, 51));
        Login->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-size: 18px;\n"
"    padding: 10px 20px;                /* Vertical and horizontal padding */\n"
"    color: #ffffff;                     /* White text color */\n"
"    background-color: #4CAF50;         /* Green background for login */\n"
"    border: none;                       /* No border */\n"
"    border-radius: 5px;                /* Rounded corners */\n"
"    transition: background-color 0.3s;  /* Smooth transition effect */\n"
"}"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(280, 450, 161, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 240, 151, 41));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 25px;\n"
"    color: #333333;   /* Dark gray color for the text */\n"
"    padding: 5px;\n"
"    font-weight: normal;  /* Regular weight */\n"
"    text-align: left;     /* Align the text to the left */\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "User Name: ", nullptr));
        Cancel->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        SignUp->setText(QCoreApplication::translate("MainWindow", "sign up", nullptr));
        Login->setText(QCoreApplication::translate("MainWindow", "login", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Don't have an account?", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password  :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
