/********************************************************************************
** Form generated from reading UI file 'expencetable.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPENCETABLE_H
#define UI_EXPENCETABLE_H

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

class Ui_expenceTable
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *Back;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *FinalReport;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *expenceTable)
    {
        if (expenceTable->objectName().isEmpty())
            expenceTable->setObjectName("expenceTable");
        expenceTable->resize(1088, 725);
        centralwidget = new QWidget(expenceTable);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 10, 391, 71));
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
        Back = new QPushButton(centralwidget);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(120, 580, 93, 29));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 490, 101, 20));
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
        tableWidget->setGeometry(QRect(30, 90, 511, 361));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(650, 140, 151, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(650, 210, 151, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(650, 250, 151, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(620, 290, 191, 20));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(600, 170, 201, 20));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(630, 340, 191, 20));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(690, 380, 111, 20));
        FinalReport = new QPushButton(centralwidget);
        FinalReport->setObjectName("FinalReport");
        FinalReport->setGeometry(QRect(750, 560, 171, 29));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(230, 490, 161, 20));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(800, 140, 101, 20));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(800, 170, 91, 20));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(800, 210, 101, 20));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(800, 250, 91, 20));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(810, 290, 101, 20));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(830, 340, 81, 20));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(780, 380, 101, 20));
        expenceTable->setCentralWidget(centralwidget);
        menubar = new QMenuBar(expenceTable);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1088, 26));
        expenceTable->setMenuBar(menubar);
        statusbar = new QStatusBar(expenceTable);
        statusbar->setObjectName("statusbar");
        expenceTable->setStatusBar(statusbar);

        retranslateUi(expenceTable);

        QMetaObject::connectSlotsByName(expenceTable);
    } // setupUi

    void retranslateUi(QMainWindow *expenceTable)
    {
        expenceTable->setWindowTitle(QCoreApplication::translate("expenceTable", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("expenceTable", "Expence Table", nullptr));
        Back->setText(QCoreApplication::translate("expenceTable", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("expenceTable", "Total Expence ", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("expenceTable", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("expenceTable", "Amount", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("expenceTable", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("expenceTable", "Date", nullptr));
        label_3->setText(QCoreApplication::translate("expenceTable", "Total food category", nullptr));
        label_4->setText(QCoreApplication::translate("expenceTable", "Total travel category", nullptr));
        label_5->setText(QCoreApplication::translate("expenceTable", "Total cloths category", nullptr));
        label_6->setText(QCoreApplication::translate("expenceTable", "Total educational category", nullptr));
        label_7->setText(QCoreApplication::translate("expenceTable", "Total entertainment category", nullptr));
        label_8->setText(QCoreApplication::translate("expenceTable", "Total univercity fee category", nullptr));
        label_9->setText(QCoreApplication::translate("expenceTable", "other", nullptr));
        FinalReport->setText(QCoreApplication::translate("expenceTable", "See financial report", nullptr));
        label_10->setText(QCoreApplication::translate("expenceTable", "TextLabel", nullptr));
        label_11->setText(QCoreApplication::translate("expenceTable", "TextLabel", nullptr));
        label_12->setText(QCoreApplication::translate("expenceTable", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("expenceTable", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("expenceTable", "TextLabel", nullptr));
        label_15->setText(QCoreApplication::translate("expenceTable", "TextLabel", nullptr));
        label_16->setText(QCoreApplication::translate("expenceTable", "TextLabel", nullptr));
        label_17->setText(QCoreApplication::translate("expenceTable", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class expenceTable: public Ui_expenceTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPENCETABLE_H
