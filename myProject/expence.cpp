#include "expence.h"
#include "ui_expence.h"
#include "database.h"


#include<QMessageBox>

expence::expence(const QString &userEmail,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::expence)
    , userEmail(userEmail)
{
    ui->setupUi(this);
}

expence::~expence()
{
    delete ui;
}

void expence::on_Save_clicked()
{
    QString category = ui->comboBox->currentText();
    double amount = ui->lineEdit->text().toDouble();
    QString description = ui->lineEdit_2->text();
    QString date = ui->calendarWidget->selectedDate().toString("yyyy-MM-dd");

    // Validate input fields
    if (category.isEmpty() || amount <= 0 || date.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all required fields correctly.");
        return;
    }

    // Retrieve the current budget for the category
    Database db;
    double currentBudget = db.GetCategoryBudget(category, userEmail);  // Assuming a method that retrieves the budget

    // Check if the expense exceeds the budget
    if (amount > currentBudget) {
        QMessageBox::warning(this, "Budget Exceeded", "The expense exceeds your budget for this category!");
        return;
    }

    // Save data to the database
    if (db.AddExpense(category, amount, description, date, userEmail)) {
        QMessageBox::information(this, "Success", "Expense saved successfully.");
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->calendarWidget->setSelectedDate(QDate::currentDate());
    } else {
        QMessageBox::critical(this, "Error", "Failed to save the expense. Please try again.");
    }
}



void expence::on_Back_clicked()
{
    hide();
    home3 = new home(userEmail,this);
    home3->show();
}


void expence::on_AllExpence_clicked()
{
    hide();
    expencetable1 = new expenceTable(userEmail,this);
    expencetable1->show();

}
