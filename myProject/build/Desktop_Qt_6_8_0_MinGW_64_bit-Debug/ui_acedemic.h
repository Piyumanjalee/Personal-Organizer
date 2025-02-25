/********************************************************************************
** Form generated from reading UI file 'acedemic.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACEDEMIC_H
#define UI_ACEDEMIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_acedemic
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox;
    QLineEdit *lineEdit_2;
    QCheckBox *checkBox;
    QLabel *label_3;
    QTimeEdit *timeEdit;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_9;
    QPushButton *Save1;
    QPushButton *Back1;
    QLabel *label_12;
    QDateEdit *dateEdit;
    QPushButton *GoToNextPage;
    QWidget *page_2;
    QPushButton *Save2;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEdit_4;
    QPushButton *Back2;
    QLabel *label_13;
    QCalendarWidget *calendarWidget_2;
    QTimeEdit *timeEdit_2;
    QPushButton *GoToPreviousPage;
    QLabel *label_15;
    QLabel *label_14;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *acedemic)
    {
        if (acedemic->objectName().isEmpty())
            acedemic->setObjectName("acedemic");
        acedemic->resize(1258, 662);
        acedemic->setStyleSheet(QString::fromUtf8("background-color:#d3ffc5;   /* Mint green */"));
        centralwidget = new QWidget(acedemic);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(30, 60, 1091, 531));
        stackedWidget->setStyleSheet(QString::fromUtf8("QStackedWidget {\n"
"    border: 2px solid #007BFF;      /* Blue border */\n"
"    background-color: #f4f4f4;      /* Light gray background */\n"
"    padding: 10px;                   /* Padding around the widget */\n"
"    border-radius: 5px;              /* Rounded corners */\n"
"}"));
        page = new QWidget();
        page->setObjectName("page");
        label_8 = new QLabel(page);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(60, 300, 101, 20));
        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(140, 270, 113, 26));
        lineEdit_3 = new QLineEdit(page);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(150, 350, 113, 26));
        comboBox = new QComboBox(page);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(140, 190, 76, 26));
        lineEdit_2 = new QLineEdit(page);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(140, 310, 113, 26));
        checkBox = new QCheckBox(page);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(110, 430, 181, 24));
        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(370, 90, 381, 31));
        timeEdit = new QTimeEdit(page);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(130, 230, 118, 26));
        label_6 = new QLabel(page);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(70, 230, 63, 20));
        label_5 = new QLabel(page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 310, 63, 20));
        label_7 = new QLabel(page);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(70, 270, 63, 20));
        label_4 = new QLabel(page);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 190, 51, 20));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(400, 0, 381, 51));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 28px;            /* Larger font size for emphasis */\n"
"    color: #4CAF50;             /* Green color for a fresh look */\n"
"    font-weight: bold;          /* Make the text bold */\n"
"    padding: 10px 20px;         /* Add padding around the text */\n"
"    background-color: #e8f5e9;  /* Light green background to match the color scheme */\n"
"    border-radius: 8px;         /* Rounded corners */\n"
"    text-align: center;         /* Center-align the text */\n"
"}\n"
""));
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 80, 311, 51));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 25px;\n"
"    color: #333333;   /* Dark gray color for the text */\n"
"    padding: 5px;\n"
"    font-weight: normal;  /* Regular weight */\n"
"    text-align: left;     /* Align the text to the left */\n"
"}\n"
""));
        label_9 = new QLabel(page);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(70, 360, 63, 20));
        Save1 = new QPushButton(page);
        Save1->setObjectName("Save1");
        Save1->setGeometry(QRect(280, 470, 93, 29));
        Back1 = new QPushButton(page);
        Back1->setObjectName("Back1");
        Back1->setGeometry(QRect(80, 470, 93, 29));
        label_12 = new QLabel(page);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(70, 390, 51, 20));
        dateEdit = new QDateEdit(page);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(150, 390, 110, 26));
        GoToNextPage = new QPushButton(page);
        GoToNextPage->setObjectName("GoToNextPage");
        GoToNextPage->setGeometry(QRect(920, 270, 121, 29));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        Save2 = new QPushButton(page_2);
        Save2->setObjectName("Save2");
        Save2->setGeometry(QRect(510, 440, 93, 29));
        label_10 = new QLabel(page_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(200, 160, 63, 20));
        label_11 = new QLabel(page_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(380, 20, 501, 91));
        label_11->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 32px;            /* Larger font size for emphasis */\n"
"    color: #4CAF50;             /* Green color for a fresh look */\n"
"    font-weight: bold;          /* Make the text bold */\n"
"    padding: 10px 20px;         /* Add padding around the text */\n"
"    background-color: #e8f5e9;  /* Light green background to match the color scheme */\n"
"    border-radius: 8px;         /* Rounded corners */\n"
"    text-align: center;         /* Center-align the text */\n"
"}\n"
""));
        lineEdit_4 = new QLineEdit(page_2);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(290, 120, 231, 26));
        Back2 = new QPushButton(page_2);
        Back2->setObjectName("Back2");
        Back2->setGeometry(QRect(210, 440, 93, 29));
        label_13 = new QLabel(page_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(210, 110, 81, 31));
        calendarWidget_2 = new QCalendarWidget(page_2);
        calendarWidget_2->setObjectName("calendarWidget_2");
        calendarWidget_2->setGeometry(QRect(280, 160, 392, 236));
        timeEdit_2 = new QTimeEdit(page_2);
        timeEdit_2->setObjectName("timeEdit_2");
        timeEdit_2->setGeometry(QRect(280, 400, 118, 26));
        GoToPreviousPage = new QPushButton(page_2);
        GoToPreviousPage->setObjectName("GoToPreviousPage");
        GoToPreviousPage->setGeometry(QRect(892, 250, 161, 29));
        label_15 = new QLabel(page_2);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(220, 400, 51, 20));
        stackedWidget->addWidget(page_2);
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(450, 10, 271, 41));
        label_14->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 25px;            /* Larger font size for emphasis */\n"
"    color: #4CAF50;             /* Green color for a fresh look */\n"
"    font-weight: bold;          /* Make the text bold */\n"
"    padding: 10px 20px;         /* Add padding around the text */\n"
"    background-color: #e8f5e9;  /* Light green background to match the color scheme */\n"
"    border-radius: 8px;         /* Rounded corners */\n"
"    text-align: center;         /* Center-align the text */\n"
"}\n"
""));
        acedemic->setCentralWidget(centralwidget);
        menubar = new QMenuBar(acedemic);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1258, 26));
        acedemic->setMenuBar(menubar);
        statusbar = new QStatusBar(acedemic);
        statusbar->setObjectName("statusbar");
        acedemic->setStatusBar(statusbar);

        retranslateUi(acedemic);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(acedemic);
    } // setupUi

    void retranslateUi(QMainWindow *acedemic)
    {
        acedemic->setWindowTitle(QCoreApplication::translate("acedemic", "MainWindow", nullptr));
        label_8->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("acedemic", "Sunday", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("acedemic", "Monday", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("acedemic", "Tuesday", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("acedemic", "Wednesday", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("acedemic", "Thursday", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("acedemic", "Saturday", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("acedemic", "Friday", nullptr));

        checkBox->setText(QCoreApplication::translate("acedemic", "add this for every week", nullptr));
        label_3->setText(QCoreApplication::translate("acedemic", "Enter this details one by one and submit one by one", nullptr));
        label_6->setText(QCoreApplication::translate("acedemic", "time", nullptr));
        label_5->setText(QCoreApplication::translate("acedemic", "subject", nullptr));
        label_7->setText(QCoreApplication::translate("acedemic", "hours", nullptr));
        label_4->setText(QCoreApplication::translate("acedemic", "day", nullptr));
        label->setText(QCoreApplication::translate("acedemic", "Basic Acedemic Schedule", nullptr));
        label_2->setText(QCoreApplication::translate("acedemic", "Enter your lecture details:", nullptr));
        label_9->setText(QCoreApplication::translate("acedemic", "venue", nullptr));
        Save1->setText(QCoreApplication::translate("acedemic", "save", nullptr));
        Back1->setText(QCoreApplication::translate("acedemic", "back", nullptr));
        label_12->setText(QCoreApplication::translate("acedemic", "Date", nullptr));
        GoToNextPage->setText(QCoreApplication::translate("acedemic", "go to next page", nullptr));
        Save2->setText(QCoreApplication::translate("acedemic", "save", nullptr));
        label_10->setText(QCoreApplication::translate("acedemic", "deadline:", nullptr));
        label_11->setText(QCoreApplication::translate("acedemic", "Advanced Acedemic Schedule", nullptr));
        Back2->setText(QCoreApplication::translate("acedemic", "back", nullptr));
        label_13->setText(QCoreApplication::translate("acedemic", "Description", nullptr));
        GoToPreviousPage->setText(QCoreApplication::translate("acedemic", "go to previous page", nullptr));
        label_15->setText(QCoreApplication::translate("acedemic", "Time", nullptr));
        label_14->setText(QCoreApplication::translate("acedemic", "Acedemic schedule", nullptr));
    } // retranslateUi

};

namespace Ui {
    class acedemic: public Ui_acedemic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACEDEMIC_H
