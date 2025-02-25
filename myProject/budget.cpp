#include "budget.h"
#include "ui_budget.h"
#include "database.h"
#include "budgettable.h"

#include<QMessageBox>

class budgetTable;

budget::budget(const QString &userEmail,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::budget)
    , userEmail(userEmail)
{
    ui->setupUi(this);
}

budget::~budget()
{
    delete ui;
}

void budget::on_Save_clicked()
{
    QString category = ui->comboBox->currentText();
    double amount = ui->lineEdit->text().toDouble();
    QString description = ui->lineEdit_2->text();
    QDate selectedDate = ui->calendarWidget->selectedDate(); // Get the selected date
    int month = selectedDate.month(); // Extract the month
    int year = selectedDate.year();


    // Validate inputs
    if (category.isEmpty() || amount <= 0 || description.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter a valid category, amount, and description, and select a date.");
        return;
    }

    // Save to the database
    Database db;

    // Check if the category already exists for this user
    if (db.CheckCategoryExists(category,month,year, userEmail)) {
        QMessageBox::critical(this, "Error", "You cannot add this month's budget; it's already added.");
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->calendarWidget->setSelectedDate(QDate::currentDate());
        return;

    }


    if (db.AddCategoryBudget(category, amount, description,month,year,userEmail)) {
        QMessageBox::information(this, "Success", "Category budget saved successfully!");

    } else {
        QMessageBox::critical(this, "Error", "Failed to save the category budget.");
    }

    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->calendarWidget->setSelectedDate(QDate::currentDate());
}


void budget::on_Back_clicked()
{
    hide();
    home4 = new home(userEmail,this);
    home4->show();
}


void budget::on_AllBudgetPlan_clicked()
{
    hide();
    budgetTable1 = new budgetTable(userEmail,this);
    budgetTable1->show();
}

