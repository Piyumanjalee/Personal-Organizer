/********************************************************************************
** Form generated from reading UI file 'expence.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPENCE_H
#define UI_EXPENCE_H

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

class Ui_expence
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QCalendarWidget *calendarWidget;
    QPushButton *Save;
    QPushButton *Back;
    QPushButton *AllExpence;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *expence)
    {
        if (expence->objectName().isEmpty())
            expence->setObjectName("expence");
        expence->resize(1012, 757);
        expence->setStyleSheet(QString::fromUtf8("background-color:#d3ffc5;   /* Mint green */"));
        centralwidget = new QWidget(expence);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 120, 71, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 180, 63, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 240, 91, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 300, 63, 20));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(110, 120, 181, 26));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(110, 180, 113, 26));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(120, 240, 113, 26));
        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(90, 290, 392, 236));
        Save = new QPushButton(centralwidget);
        Save->setObjectName("Save");
        Save->setGeometry(QRect(470, 550, 93, 29));
        Back = new QPushButton(centralwidget);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(80, 550, 93, 29));
        AllExpence = new QPushButton(centralwidget);
        AllExpence->setObjectName("AllExpence");
        AllExpence->setGeometry(QRect(590, 630, 281, 29));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(290, 0, 391, 71));
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
        expence->setCentralWidget(centralwidget);
        menubar = new QMenuBar(expence);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1012, 26));
        expence->setMenuBar(menubar);
        statusbar = new QStatusBar(expence);
        statusbar->setObjectName("statusbar");
        expence->setStatusBar(statusbar);

        retranslateUi(expence);

        QMetaObject::connectSlotsByName(expence);
    } // setupUi

    void retranslateUi(QMainWindow *expence)
    {
        expence->setWindowTitle(QCoreApplication::translate("expence", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("expence", "Category", nullptr));
        label_2->setText(QCoreApplication::translate("expence", "Amount", nullptr));
        label_3->setText(QCoreApplication::translate("expence", "Description", nullptr));
        label_4->setText(QCoreApplication::translate("expence", "Date", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("expence", "Food", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("expence", "Entertainment", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("expence", "Traveling", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("expence", "Clothing", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("expence", "Education Equipment", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("expence", "University fees", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("expence", "Other", nullptr));

        Save->setText(QCoreApplication::translate("expence", "Save", nullptr));
        Back->setText(QCoreApplication::translate("expence", "Back", nullptr));
        AllExpence->setText(QCoreApplication::translate("expence", "See all expence details", nullptr));
        label_5->setText(QCoreApplication::translate("expence", "Expence Tracker", nullptr));
    } // retranslateUi

};

namespace Ui {
    class expence: public Ui_expence {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPENCE_H
