/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

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

class Ui_signUp
{
public:
    QWidget *centralwidget;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_4;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *Login;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_6;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QPushButton *clear;
    QLineEdit *lineEdit_4;
    QWidget *widget;
    QPushButton *Sign_Up;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *signUp)
    {
        if (signUp->objectName().isEmpty())
            signUp->setObjectName("signUp");
        signUp->resize(980, 709);
        signUp->setStyleSheet(QString::fromUtf8("background-color:#d3ffc5;   /* Mint green */"));
        centralwidget = new QWidget(signUp);
        centralwidget->setObjectName("centralwidget");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 270, 151, 20));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{font-size:18px;}"));
        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(210, 260, 331, 41));
        lineEdit_5->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(140, 330, 61, 20));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{font-size:18px;}"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(70, 210, 131, 21));
        label_7->setStyleSheet(QString::fromUtf8("QLabel{font-size:18px;}"));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(210, 390, 331, 41));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        lineEdit_3->setEchoMode(QLineEdit::EchoMode::Normal);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 150, 91, 20));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{font-size:18px;}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(330, 70, 321, 61));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    font-size: 28px;                 /* Larger font size for the header */\n"
"    font-weight: bold;               /* Make the text bold */\n"
"    color: #1a73e8;                  /* Blue color for a modern look */\n"
"    padding: 12px;                   /* Padding around the text */\n"
"    background-color: #e6f2ff;      /* Light blue background for contrast */\n"
"    border-radius: 10px;             /* Rounded corners */\n"
"    text-align: center;              /* Center the text */\n"
"    letter-spacing: 1px;             /* Slightly increase letter spacing */\n"
"}\n"
""));
        Login = new QPushButton(centralwidget);
        Login->setObjectName("Login");
        Login->setGeometry(QRect(440, 480, 131, 51));
        Login->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-size: 18px;\n"
"    padding: 10px 20px;                /* Vertical and horizontal padding */\n"
"    color: #ffffff;                     /* White text color */\n"
"    background-color: #4CAF50;         /* Green background for login */\n"
"    border: none;                       /* No border */\n"
"    border-radius: 5px;                /* Rounded corners */\n"
"    transition: background-color 0.3s;  /* Smooth transition effect */\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(380, 10, 181, 61));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 32px;            /* Larger font size for emphasis */\n"
"    color: #4CAF50;             /* Green color for a fresh look */\n"
"    font-weight: bold;          /* Make the text bold */\n"
"    padding: 10px 20px;         /* Add padding around the text */\n"
"    background-color: #e8f5e9;  /* Light green background to match the color scheme */\n"
"    border-radius: 8px;         /* Rounded corners */\n"
"    text-align: center;         /* Center-align the text */\n"
"}\n"
""));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(210, 140, 331, 41));
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
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(140, 470, 281, 71));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 22px;              /* Increase the font size */\n"
"    color: #1a73e8;               /* Set the text color to blue */\n"
"    font-weight: bold;            /* Make the text bold */\n"
"    padding: 5px;                 /* Add padding around the text */\n"
"}\n"
""));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(70, 400, 131, 20));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{font-size:18px;}"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(210, 320, 331, 41));
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
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Normal);
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(100, 540, 111, 41));
        clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-size: 18px;\n"
"    padding: 10px 20px;                /* Vertical and horizontal padding */\n"
"    color: #ffffff;                     /* White text color */\n"
"    background-color: #4CAF50;         /* Green background for login */\n"
"    border: none;                       /* No border */\n"
"    border-radius: 5px;                /* Rounded corners */\n"
"    transition: background-color 0.3s;  /* Smooth transition effect */\n"
"}"));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(210, 200, 331, 41));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(700, 10, 231, 141));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"border-image:url(:/piyu/4.jpg);\n"
"}\n"
"background-color:#d3ffc5;   /* Mint green */"));
        Sign_Up = new QPushButton(centralwidget);
        Sign_Up->setObjectName("Sign_Up");
        Sign_Up->setGeometry(QRect(630, 540, 141, 41));
        Sign_Up->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-size: 18px;\n"
"    padding: 10px 20px;                /* Vertical and horizontal padding */\n"
"    color: #ffffff;                     /* White text color */\n"
"    background-color: #4CAF50;         /* Green background for login */\n"
"    border: none;                       /* No border */\n"
"    border-radius: 5px;                /* Rounded corners */\n"
"    transition: background-color 0.3s;  /* Smooth transition effect */\n"
"}"));
        signUp->setCentralWidget(centralwidget);
        menubar = new QMenuBar(signUp);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 980, 26));
        signUp->setMenuBar(menubar);
        statusbar = new QStatusBar(signUp);
        statusbar->setObjectName("statusbar");
        signUp->setStatusBar(statusbar);

        retranslateUi(signUp);

        QMetaObject::connectSlotsByName(signUp);
    } // setupUi

    void retranslateUi(QMainWindow *signUp)
    {
        signUp->setWindowTitle(QCoreApplication::translate("signUp", "MainWindow", nullptr));
        label_5->setText(QCoreApplication::translate("signUp", "Confirm password:", nullptr));
        label_4->setText(QCoreApplication::translate("signUp", "Email:", nullptr));
        label_7->setText(QCoreApplication::translate("signUp", "Enter Password:", nullptr));
        label_3->setText(QCoreApplication::translate("signUp", "Full name:", nullptr));
        label_2->setText(QCoreApplication::translate("signUp", "Create your account", nullptr));
        Login->setText(QCoreApplication::translate("signUp", "login", nullptr));
        label->setText(QCoreApplication::translate("signUp", "Sign up", nullptr));
        label_6->setText(QCoreApplication::translate("signUp", "Already have an account?", nullptr));
        label_8->setText(QCoreApplication::translate("signUp", "Phone number:", nullptr));
        clear->setText(QCoreApplication::translate("signUp", "clear", nullptr));
        Sign_Up->setText(QCoreApplication::translate("signUp", "sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signUp: public Ui_signUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
