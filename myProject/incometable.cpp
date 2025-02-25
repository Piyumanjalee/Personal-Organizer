#include "incometable.h"
#include "ui_incometable.h"

incomeTable::incomeTable(const QString &userEmail,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::incomeTable)
    , userEmail(userEmail)
{
    ui->setupUi(this);
    loadIncomeData();
}

incomeTable::~incomeTable()
{
    delete ui;
}

void incomeTable::on_Back_clicked()
{
    hide();
    income1 = new income(userEmail,this);
    income1->show();
}

void incomeTable::loadIncomeData()
{
    // Connect to the database
    Database db;
    QSqlQuery query;
    query.prepare("SELECT income_source, amount, description, date FROM income_tracker WHERE userEmail = :userEmail");
    query.bindValue(":userEmail", userEmail); // Use the userEmail member variable

    double totalIncome = 0.0;

    if (query.exec()) {
        int row = 0;
        while (query.next()) {
            // Add a new row in the table
            ui->tableWidget->insertRow(row);

            // Set values for each column
            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(query.value("income_source").toString())); // Income Source
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(query.value("amount").toString()));        // Amount
            ui->tableWidget->setItem(row, 2, new QTableWidgetItem(query.value("description").toString()));   // Description
            ui->tableWidget->setItem(row, 3, new QTableWidgetItem(query.value("date").toString()));          // Date

            totalIncome += query.value("amount").toDouble();

            row++;
        }

        ui->label_4->setText(QString::number(totalIncome, 'f', 2));

    } else {
        qDebug() << "Error fetching income data: " << query.lastError().text();
        ui->label_4->setText("0.00");
    }
}



