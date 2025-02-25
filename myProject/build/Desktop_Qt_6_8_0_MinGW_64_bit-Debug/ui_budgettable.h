/********************************************************************************
** Form generated from reading UI file 'budgettable.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUDGETTABLE_H
#define UI_BUDGETTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_budgetTable
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *Back;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QComboBox *monthComboBox;
    QPushButton *showDetailsButton;
    QLabel *label_4;
    QComboBox *yearComboBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *budgetTable)
    {
        if (budgetTable->objectName().isEmpty())
            budgetTable->setObjectName("budgetTable");
        budgetTable->resize(687, 682);
        budgetTable->setStyleSheet(QString::fromUtf8("background-color:#d3ffc5;   /* Mint green */"));
        centralwidget = new QWidget(budgetTable);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 10, 301, 71));
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
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(150, 260, 381, 261));
        Back = new QPushButton(centralwidget);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(30, 590, 93, 29));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 550, 131, 20));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(250, 550, 291, 26));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 150, 231, 20));
        monthComboBox = new QComboBox(centralwidget);
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->setObjectName("monthComboBox");
        monthComboBox->setGeometry(QRect(330, 150, 211, 26));
        showDetailsButton = new QPushButton(centralwidget);
        showDetailsButton->setObjectName("showDetailsButton");
        showDetailsButton->setGeometry(QRect(290, 200, 111, 29));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 100, 231, 20));
        yearComboBox = new QComboBox(centralwidget);
        yearComboBox->addItem(QString());
        yearComboBox->addItem(QString());
        yearComboBox->addItem(QString());
        yearComboBox->addItem(QString());
        yearComboBox->addItem(QString());
        yearComboBox->addItem(QString());
        yearComboBox->addItem(QString());
        yearComboBox->setObjectName("yearComboBox");
        yearComboBox->setGeometry(QRect(330, 100, 211, 26));
        budgetTable->setCentralWidget(centralwidget);
        menubar = new QMenuBar(budgetTable);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 687, 26));
        budgetTable->setMenuBar(menubar);
        statusbar = new QStatusBar(budgetTable);
        statusbar->setObjectName("statusbar");
        budgetTable->setStatusBar(statusbar);

        retranslateUi(budgetTable);

        QMetaObject::connectSlotsByName(budgetTable);
    } // setupUi

    void retranslateUi(QMainWindow *budgetTable)
    {
        budgetTable->setWindowTitle(QCoreApplication::translate("budgetTable", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("budgetTable", "All Budgeing Plans", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("budgetTable", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("budgetTable", "Amount", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("budgetTable", "Description", nullptr));
        Back->setText(QCoreApplication::translate("budgetTable", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("budgetTable", "Total budget plan:", nullptr));
        label_3->setText(QCoreApplication::translate("budgetTable", "Select month for You want view :", nullptr));
        monthComboBox->setItemText(0, QCoreApplication::translate("budgetTable", "1", nullptr));
        monthComboBox->setItemText(1, QCoreApplication::translate("budgetTable", "2", nullptr));
        monthComboBox->setItemText(2, QCoreApplication::translate("budgetTable", "3", nullptr));
        monthComboBox->setItemText(3, QCoreApplication::translate("budgetTable", "4", nullptr));
        monthComboBox->setItemText(4, QCoreApplication::translate("budgetTable", "5", nullptr));
        monthComboBox->setItemText(5, QCoreApplication::translate("budgetTable", "6", nullptr));
        monthComboBox->setItemText(6, QCoreApplication::translate("budgetTable", "7", nullptr));
        monthComboBox->setItemText(7, QCoreApplication::translate("budgetTable", "8", nullptr));
        monthComboBox->setItemText(8, QCoreApplication::translate("budgetTable", "9", nullptr));
        monthComboBox->setItemText(9, QCoreApplication::translate("budgetTable", "10", nullptr));
        monthComboBox->setItemText(10, QCoreApplication::translate("budgetTable", "11", nullptr));
        monthComboBox->setItemText(11, QCoreApplication::translate("budgetTable", "12", nullptr));

        showDetailsButton->setText(QCoreApplication::translate("budgetTable", "Show Details", nullptr));
        label_4->setText(QCoreApplication::translate("budgetTable", "Select year for You want view :", nullptr));
        yearComboBox->setItemText(0, QCoreApplication::translate("budgetTable", "2024", nullptr));
        yearComboBox->setItemText(1, QCoreApplication::translate("budgetTable", "2025", nullptr));
        yearComboBox->setItemText(2, QCoreApplication::translate("budgetTable", "2026", nullptr));
        yearComboBox->setItemText(3, QCoreApplication::translate("budgetTable", "2027", nullptr));
        yearComboBox->setItemText(4, QCoreApplication::translate("budgetTable", "2028", nullptr));
        yearComboBox->setItemText(5, QCoreApplication::translate("budgetTable", "2029", nullptr));
        yearComboBox->setItemText(6, QCoreApplication::translate("budgetTable", "2030", nullptr));

    } // retranslateUi

};

namespace Ui {
    class budgetTable: public Ui_budgetTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUDGETTABLE_H
