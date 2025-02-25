#include "budgettable.h"
#include "ui_budgettable.h"
#include "budget.h"
#include "database.h"

budgetTable::budgetTable(const QString &userEmail,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::budgetTable)
    , userEmail(userEmail)
{
    ui->setupUi(this);
    int month = ui->monthComboBox->currentIndex() + 1; // +1 to adjust from 0-based index
    int year = ui->yearComboBox->currentText().toInt();  // Assuming year is in a QComboBox and converting to int

    // Call loadBudgetData with the retrieved month and year
}

budgetTable::~budgetTable()
{
    delete ui;
}

void budgetTable::on_Back_clicked()
{
    hide();
    budget1 = new budget(userEmail,this);
    budget1->show();
}

void budgetTable::on_showDetailsButton_clicked()
{
    // Retrieve the selected month and year from the UI (ComboBox or SpinBox)
    int month = ui->monthComboBox->currentIndex() + 1;  // Adding 1 as ComboBox is 0-indexed
    int year = ui->yearComboBox->currentText().toInt();  // Assuming year is a ComboBox

    // Connect to the database
    Database db;
    QSqlQuery query;
    query.prepare("SELECT category, amount, description FROM category_budgeting "
                  "WHERE userEmail = :userEmail AND month = :month AND year = :year");
    query.bindValue(":userEmail", userEmail);
    query.bindValue(":month", month);
    query.bindValue(":year", year);

    double totalAmount = 0.0;

    if (query.exec()) {
        int row = 0;
        ui->tableWidget->clearContents();  // Clear previous data in table
        ui->tableWidget->setRowCount(0);  // Reset row count to 0 (in case of previous entries)

        while (query.next()) {
            // Add a new row in the table for each record
            ui->tableWidget->insertRow(row);

            // Set values for each column (category, amount, description)
            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(query.value("category").toString()));
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(query.value("amount").toString()));
            ui->tableWidget->setItem(row, 2, new QTableWidgetItem(query.value("description").toString()));

            // Add the amount to the total
            totalAmount += query.value("amount").toDouble();
            row++;
        }

        // Display total amount in the lineEdit
        ui->lineEdit->setText(QString::number(totalAmount, 'f', 2));
    } else {
        qDebug() << "Error fetching data: " << query.lastError().text();
        ui->lineEdit->setText("0.00");
    }
}


