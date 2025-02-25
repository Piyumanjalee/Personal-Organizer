#include "expencetable.h"
#include "ui_expencetable.h"
#include "financialreport.h"
//#include "expence.h"


expenceTable::expenceTable(const QString &userEmail,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::expenceTable)
    , userEmail(userEmail)
{
    ui->setupUi(this);
    loadExpenseData();
}

expenceTable::~expenceTable()
{
    delete ui;
}

void expenceTable::on_Back_clicked()
{
    hide();
    expence2 = new expence(userEmail,this);
    expence2->show();
}
void expenceTable::loadExpenseData()
{
    // Connect to the database
    Database db;
    QSqlQuery query;
    query.prepare("SELECT category, amount, description, date FROM expenses WHERE userEmail = :userEmail");
    query.bindValue(":userEmail", userEmail); // Use the userEmail member variable

    double totalExpense = 0.0;
    double totalFood = 0.0;
    double totalEntertainment = 0.0;
    double totalTravel = 0.0;
    double totalClothing = 0.0;
    double totalEducation = 0.0;
    double totalUniversityFees = 0.0;
    double totalOther = 0.0;

    if (query.exec()) {
        int row = 0;
        while (query.next()) {
            // Add a new row in the table
            ui->tableWidget->insertRow(row);

            // Get the category and amount for each record
            QString category = query.value("category").toString();
            double amount = query.value("amount").toDouble();

            // Add the amount to the relevant category total
            if (category == "Food") {
                totalFood += amount;
            } else if (category == "Entertainment") {
                totalEntertainment += amount;
            } else if (category == "Traveling") {
                totalTravel += amount;
            } else if (category == "Clothing") {
                totalClothing += amount;
            } else if (category == "Education Equipment") {
                totalEducation += amount;
            } else if (category == "University Fees") {
                totalUniversityFees += amount;
            } else if (category == "Other") {
                totalOther += amount;
            }

            // Add values to the table
            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(category)); // Category
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(amount, 'f', 2)));   // Amount
            ui->tableWidget->setItem(row, 2, new QTableWidgetItem(query.value("description").toString())); // Description
            ui->tableWidget->setItem(row, 3, new QTableWidgetItem(query.value("date").toString()));     // Date

            // Sum the total expenses
            totalExpense += amount;

            row++;
        }

        // Set the category totals in the line edits
        ui->label_11->setText(QString::number(totalFood, 'f', 2));
        ui->label_12->setText(QString::number(totalEntertainment, 'f', 2));
        ui->label_13->setText(QString::number(totalTravel, 'f', 2));
        ui->label_14->setText(QString::number(totalClothing, 'f', 2));
        ui->label_15->setText(QString::number(totalEducation, 'f', 2));
        ui->label_16->setText(QString::number(totalUniversityFees, 'f', 2));
        ui->label_17->setText(QString::number(totalOther, 'f', 2));

        // Set the total expenses of all categories
        ui->label_10->setText(QString::number(totalExpense, 'f', 2));

        // Calculate percentages
        totalFoodPercentage = (totalFood / totalExpense) * 100;
        totalEntertainmentPercentage = (totalEntertainment / totalExpense) * 100;
        totalTravelPercentage = (totalTravel / totalExpense) * 100;
        totalClothingPercentage = (totalClothing / totalExpense) * 100;
        totalEducationPercentage = (totalEducation / totalExpense) * 100;
        totalUniversityFeesPercentage = (totalUniversityFees / totalExpense) * 100;
        totalOtherPercentage = (totalOther / totalExpense) * 100;

        // Optional: Display percentages in line edits (if needed)
       // ui->lineEdit_9->setText(QString::number(totalFoodPercentage, 'f', 2) + "%");
       // ui->lineEdit_10->setText(QString::number(totalEntertainmentPercentage, 'f', 2) + "%");
       // ui->lineEdit_11->setText(QString::number(totalTravelPercentage, 'f', 2) + "%");
       // ui->lineEdit_12->setText(QString::number(totalClothingPercentage, 'f', 2) + "%");
      //  ui->lineEdit_13->setText(QString::number(totalEducationPercentage, 'f', 2) + "%");
      //  ui->lineEdit_14->setText(QString::number(totalUniversityFeesPercentage, 'f', 2) + "%");
      //  ui->lineEdit_15->setText(QString::number(totalOtherPercentage, 'f', 2) + "%");

    } else {
        qDebug() << "Error fetching data: " << query.lastError().text();
        ui->label_10->setText("0.00");
    }
}


void expenceTable::on_FinalReport_clicked()
{
    hide();
    FinancialReport *reportWindow = new FinancialReport(this);
    reportWindow->setCategoryPercentages(totalFoodPercentage, totalEntertainmentPercentage, totalTravelPercentage,
                                 totalClothingPercentage, totalEducationPercentage, totalUniversityFeesPercentage, totalOtherPercentage);
    reportWindow->show();
}

