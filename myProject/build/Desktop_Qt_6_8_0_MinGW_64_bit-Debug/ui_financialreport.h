/********************************************************************************
** Form generated from reading UI file 'financialreport.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINANCIALREPORT_H
#define UI_FINANCIALREPORT_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FinancialReport
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QChartView *chartView;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QPushButton *Back;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FinancialReport)
    {
        if (FinancialReport->objectName().isEmpty())
            FinancialReport->setObjectName("FinancialReport");
        FinancialReport->resize(994, 715);
        FinancialReport->setStyleSheet(QString::fromUtf8("background-color:#d3ffc5;   /* Mint green */"));
        centralwidget = new QWidget(FinancialReport);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 10, 271, 51));
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
        chartView = new QChartView(centralwidget);
        chartView->setObjectName("chartView");
        chartView->setGeometry(QRect(80, 80, 621, 451));
        chartView->setStyleSheet(QString::fromUtf8(""));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(720, 320, 151, 20));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(720, 280, 111, 20));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(720, 230, 111, 20));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(730, 420, 61, 20));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(710, 160, 151, 21));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(700, 200, 161, 20));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(730, 370, 161, 20));
        Back = new QPushButton(centralwidget);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(50, 600, 93, 29));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(850, 160, 91, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(870, 200, 81, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(850, 230, 91, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(850, 280, 81, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(880, 320, 71, 20));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(890, 370, 71, 20));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(820, 420, 81, 20));
        FinancialReport->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FinancialReport);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 994, 26));
        FinancialReport->setMenuBar(menubar);
        statusbar = new QStatusBar(FinancialReport);
        statusbar->setObjectName("statusbar");
        FinancialReport->setStatusBar(statusbar);

        retranslateUi(FinancialReport);

        QMetaObject::connectSlotsByName(FinancialReport);
    } // setupUi

    void retranslateUi(QMainWindow *FinancialReport)
    {
        FinancialReport->setWindowTitle(QCoreApplication::translate("FinancialReport", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("FinancialReport", "Financial Report", nullptr));
        label_9->setText(QCoreApplication::translate("FinancialReport", "Educational category", nullptr));
        label_10->setText(QCoreApplication::translate("FinancialReport", "Cloths category", nullptr));
        label_11->setText(QCoreApplication::translate("FinancialReport", "Travel category", nullptr));
        label_12->setText(QCoreApplication::translate("FinancialReport", "Other", nullptr));
        label_13->setText(QCoreApplication::translate("FinancialReport", " food category", nullptr));
        label_14->setText(QCoreApplication::translate("FinancialReport", "Entertainment category", nullptr));
        label_15->setText(QCoreApplication::translate("FinancialReport", "Univercity fee category", nullptr));
        Back->setText(QCoreApplication::translate("FinancialReport", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("FinancialReport", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("FinancialReport", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("FinancialReport", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("FinancialReport", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("FinancialReport", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("FinancialReport", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("FinancialReport", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FinancialReport: public Ui_FinancialReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINANCIALREPORT_H
