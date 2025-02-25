/********************************************************************************
** Form generated from reading UI file 'budget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUDGET_H
#define UI_BUDGET_H

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

class Ui_budget
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QPushButton *Back;
    QPushButton *Save;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QPushButton *AllBudgetPlan;
    QLabel *label_5;
    QCalendarWidget *calendarWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *budget)
    {
        if (budget->objectName().isEmpty())
            budget->setObjectName("budget");
        budget->resize(905, 716);
        budget->setStyleSheet(QString::fromUtf8("background-color:#d3ffc5;   /* Mint green */"));
        centralwidget = new QWidget(budget);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 10, 461, 71));
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
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 130, 63, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 190, 63, 20));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(120, 130, 221, 26));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(120, 190, 221, 26));
        Back = new QPushButton(centralwidget);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(30, 590, 93, 29));
        Save = new QPushButton(centralwidget);
        Save->setObjectName("Save");
        Save->setGeometry(QRect(270, 590, 93, 29));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 240, 81, 20));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(120, 240, 221, 26));
        AllBudgetPlan = new QPushButton(centralwidget);
        AllBudgetPlan->setObjectName("AllBudgetPlan");
        AllBudgetPlan->setGeometry(QRect(570, 500, 261, 29));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 300, 41, 20));
        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(110, 280, 392, 236));
        budget->setCentralWidget(centralwidget);
        menubar = new QMenuBar(budget);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 905, 26));
        budget->setMenuBar(menubar);
        statusbar = new QStatusBar(budget);
        statusbar->setObjectName("statusbar");
        budget->setStatusBar(statusbar);

        retranslateUi(budget);

        QMetaObject::connectSlotsByName(budget);
    } // setupUi

    void retranslateUi(QMainWindow *budget)
    {
        budget->setWindowTitle(QCoreApplication::translate("budget", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("budget", "Category Based Budgeting", nullptr));
        label_2->setText(QCoreApplication::translate("budget", "Category", nullptr));
        label_3->setText(QCoreApplication::translate("budget", "Amount", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("budget", "Food", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("budget", "Buy educational things", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("budget", "Entertainment", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("budget", "Univercity fee", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("budget", "Mobile", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("budget", "Trip", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("budget", "Others", nullptr));

        Back->setText(QCoreApplication::translate("budget", "Back", nullptr));
        Save->setText(QCoreApplication::translate("budget", "Save", nullptr));
        label_4->setText(QCoreApplication::translate("budget", "Description", nullptr));
        AllBudgetPlan->setText(QCoreApplication::translate("budget", "See all Budgeting plans-------->", nullptr));
        label_5->setText(QCoreApplication::translate("budget", "Date", nullptr));
    } // retranslateUi

};

namespace Ui {
    class budget: public Ui_budget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUDGET_H
