#include "income.h"
#include "ui_income.h"
#include "database.h"
#include "home.h"
#include "acedemic.h"

#include<QMessageBox>

income::income(const QString &userEmail,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::income)
    , userEmail(userEmail)
{
    ui->setupUi(this);
}

income::~income()
{
    delete ui;
}

void income::on_Save_clicked()
{
    QString incomeSource = ui->comboBox->currentText();  // QLineEdit or ComboBox
    double amount = ui->lineEdit_2->text().toDouble();     // Assuming a QLineEdit for amount
    QString description = ui->lineEdit->text();    // QLineEdit for description
    QString date = ui->calendarWidget->selectedDate().toString("yyyy-MM-dd"); // Assuming QDateEdit for date

    // Validate inputs
    if (incomeSource.isEmpty() || description.isEmpty() || amount <= 0 || date.isEmpty()) {
        QMessageBox::warning(this, "Invalid Input", "Please fill in all fields correctly.");
        return;
    }

    // Call the database function to add the income record
    Database db;
    bool success = db.AddIncome(incomeSource, amount, description, date,userEmail);

    if (success) {
        QMessageBox::information(this, "Success", "Income has been saved.");
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
    } else {
        QMessageBox::warning(this, "Error", "Failed to save income.");
    }
}


void income::on_Back_clicked()
{
    hide();
    home2 = new home(userEmail,this);
    home2->show();
}


void income::on_AllIncome_clicked()
{
    hide();
    incomeTable1 = new incomeTable(userEmail,this);
    incomeTable1->show();
}

