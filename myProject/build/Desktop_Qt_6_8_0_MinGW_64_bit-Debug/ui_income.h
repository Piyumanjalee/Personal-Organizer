/********************************************************************************
** Form generated from reading UI file 'income.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCOME_H
#define UI_INCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_income
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QCalendarWidget *calendarWidget;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QPushButton *Back;
    QPushButton *Save;
    QLabel *label_5;
    QPushButton *AllIncome;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *income)
    {
        if (income->objectName().isEmpty())
            income->setObjectName("income");
        income->resize(800, 600);
        income->setStyleSheet(QString::fromUtf8("background-color:#d3ffc5;   /* Mint green */"));
        centralwidget = new QWidget(income);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 110, 111, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 200, 81, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 240, 81, 20));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(170, 200, 271, 26));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;  "));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(190, 110, 181, 26));
        comboBox->setStyleSheet(QString::fromUtf8("background-color:#61ffd8;   /* Mint green */"));
        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(160, 240, 392, 236));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(100, 160, 63, 20));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(170, 160, 271, 26));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:#ffffff; "));
        Back = new QPushButton(centralwidget);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(180, 500, 93, 29));
        Back->setStyleSheet(QString::fromUtf8("background-color:#61ffd8;  "));
        Save = new QPushButton(centralwidget);
        Save->setObjectName("Save");
        Save->setGeometry(QRect(430, 490, 93, 29));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(260, 0, 261, 51));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 28px;            /* Larger font size for emphasis */\n"
"    color: #4CAF50;             /* Green color for a fresh look */\n"
"    font-weight: bold;          /* Make the text bold */\n"
"    padding: 10px 20px;         /* Add padding around the text */\n"
"    background-color: #e8f5e9;  /* Light green background to match the color scheme */\n"
"    border-radius: 8px;         /* Rounded corners */\n"
"    text-align: center;         /* Center-align the text */\n"
"}\n"
""));
        AllIncome = new QPushButton(centralwidget);
        AllIncome->setObjectName("AllIncome");
        AllIncome->setGeometry(QRect(570, 520, 161, 29));
        income->setCentralWidget(centralwidget);
        menubar = new QMenuBar(income);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        income->setMenuBar(menubar);
        statusbar = new QStatusBar(income);
        statusbar->setObjectName("statusbar");
        income->setStatusBar(statusbar);

        retranslateUi(income);

        QMetaObject::connectSlotsByName(income);
    } // setupUi

    void retranslateUi(QMainWindow *income)
    {
        income->setWindowTitle(QCoreApplication::translate("income", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("income", "income source", nullptr));
        label_2->setText(QCoreApplication::translate("income", "description", nullptr));
        label_3->setText(QCoreApplication::translate("income", "date", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("income", "Job", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("income", "Allowance from parents", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("income", "Scholarships", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("income", "Student Aid", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("income", "Other", nullptr));

        label_4->setText(QCoreApplication::translate("income", "amount", nullptr));
        Back->setText(QCoreApplication::translate("income", "Back", nullptr));
        Save->setText(QCoreApplication::translate("income", "Save", nullptr));
        label_5->setText(QCoreApplication::translate("income", "Income Tracker", nullptr));
        AllIncome->setText(QCoreApplication::translate("income", "See All income details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class income: public Ui_income {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCOME_H
