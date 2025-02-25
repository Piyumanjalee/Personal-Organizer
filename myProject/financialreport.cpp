#include "financialreport.h"
#include "ui_financialreport.h"
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QValueAxis>
#include <QtCharts/QBarCategoryAxis>
#include "expencetable.h"


FinancialReport::FinancialReport(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FinancialReport)
{
    ui->setupUi(this);
    expenceTableWindow = qobject_cast<expenceTable*>(parent);

}

FinancialReport::~FinancialReport()
{
    delete ui;
}

void FinancialReport::setCategoryPercentages(double food, double entertainment, double travel,
                                             double clothing, double education, double universityFees, double other)
{
    totalFoodPercentage = food;
    totalEntertainmentPercentage = entertainment;
    totalTravelPercentage = travel;
    totalClothingPercentage = clothing;
    totalEducationPercentage = education;
    totalUniversityFeesPercentage = universityFees;
    totalOtherPercentage = other;

    // Call a method to update the display with the percentages (e.g., a chart update)
    updatePercentageDisplay();
    displayBarChart();
}
void FinancialReport::updatePercentageDisplay()
{
    ui->label_2->setText(QString::number(totalFoodPercentage, 'f', 2) + "%");
    ui->label_3->setText(QString::number(totalEntertainmentPercentage, 'f', 2) + "%");
    ui->label_4->setText(QString::number(totalTravelPercentage, 'f', 2) + "%");
    ui->label_5->setText(QString::number(totalClothingPercentage, 'f', 2) + "%");
    ui->label_6->setText(QString::number(totalEducationPercentage, 'f', 2) + "%");
    ui->label_7->setText(QString::number(totalUniversityFeesPercentage, 'f', 2) + "%");
    ui->label_8->setText(QString::number(totalOtherPercentage, 'f', 2) + "%");
}
void FinancialReport::displayBarChart()
{
    // Create a QBarSet to hold the data for each category
    QBarSet *foodSet = new QBarSet("Food");
    QBarSet *entertainmentSet = new QBarSet("Entertainment");
    QBarSet *travelSet = new QBarSet("Travel");
    QBarSet *clothingSet = new QBarSet("Clothing");
    QBarSet *educationSet = new QBarSet("Education");
    QBarSet *universityFeesSet = new QBarSet("University Fees");
    QBarSet *otherSet = new QBarSet("Other");

    // Set the data for each bar
    *foodSet << totalFoodPercentage;
    *entertainmentSet << totalEntertainmentPercentage;
    *travelSet << totalTravelPercentage;
    *clothingSet << totalClothingPercentage;
    *educationSet << totalEducationPercentage;
    *universityFeesSet << totalUniversityFeesPercentage;
    *otherSet << totalOtherPercentage;

    // Create a QBarSeries and add the bar sets
    QBarSeries *barSeries = new QBarSeries();
    barSeries->append(foodSet);
    barSeries->append(entertainmentSet);
    barSeries->append(travelSet);
    barSeries->append(clothingSet);
    barSeries->append(educationSet);
    barSeries->append(universityFeesSet);
    barSeries->append(otherSet);

    // Create a QChart and set the bar series
    QChart *chart = new QChart();
    chart->addSeries(barSeries);
    chart->setTitle("Expense Category Percentages");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    // Set up the category axis for the x-axis (category names)
    QStringList categories;
    categories << "Food" << "Entertainment" << "Travel" << "Clothing"
               << "Education" << "University Fees" << "Other";
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append("spends and remains");
    chart->setAxisX(axisX, barSeries);

    // Set the value axis for the y-axis (percentages)
    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, 100); // Percentages from 0 to 100
    axisY->setTitleText("Percentage");
    chart->setAxisY(axisY, barSeries);


    // Set the chart to the QChartView in the UI
    ui->chartView->setChart(chart);
    ui->chartView->setRenderHint(QPainter::Antialiasing);
}

void FinancialReport::on_Back_clicked()
{
    this->hide();
    expenceTableWindow->show();

}

