/********************************************************************************
** Form generated from reading UI file 'incometable.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCOMETABLE_H
#define UI_INCOMETABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_incomeTable
{
public:
    QWidget *centralwidget;
    QPushButton *Back;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *incomeTable)
    {
        if (incomeTable->objectName().isEmpty())
            incomeTable->setObjectName("incomeTable");
        incomeTable->resize(958, 704);
        centralwidget = new QWidget(incomeTable);
        centralwidget->setObjectName("centralwidget");
        Back = new QPushButton(centralwidget);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(80, 570, 93, 29));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 480, 101, 20));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(150, 80, 511, 361));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 0, 391, 71));
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
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(190, 480, 151, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(180, 480, 221, 20));
        incomeTable->setCentralWidget(centralwidget);
        menubar = new QMenuBar(incomeTable);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 958, 26));
        incomeTable->setMenuBar(menubar);
        statusbar = new QStatusBar(incomeTable);
        statusbar->setObjectName("statusbar");
        incomeTable->setStatusBar(statusbar);

        retranslateUi(incomeTable);

        QMetaObject::connectSlotsByName(incomeTable);
    } // setupUi

    void retranslateUi(QMainWindow *incomeTable)
    {
        incomeTable->setWindowTitle(QCoreApplication::translate("incomeTable", "MainWindow", nullptr));
        Back->setText(QCoreApplication::translate("incomeTable", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("incomeTable", "Total Income ", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("incomeTable", "Income Source", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("incomeTable", "Amount", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("incomeTable", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("incomeTable", "Date", nullptr));
        label->setText(QCoreApplication::translate("incomeTable", "Income Table", nullptr));
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("incomeTable", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class incomeTable: public Ui_incomeTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCOMETABLE_H
