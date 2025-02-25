#ifndef FINANCIALREPORT_H
#define FINANCIALREPORT_H

#include "expencetable.h"
#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QValueAxis>
#include <QtCharts/QBarCategoryAxis>


#include <QMainWindow>
class expenceTable;


namespace Ui {
class FinancialReport;
}

class FinancialReport : public QMainWindow
{
    Q_OBJECT

public:
    explicit FinancialReport(QWidget *parent = nullptr);
    ~FinancialReport();

    void setCategoryPercentages(double food, double entertainment, double travel,
                                double clothing, double education, double universityFees, double other);

private slots:


    void on_Back_clicked();

private:
    Ui::FinancialReport *ui;

    expenceTable *expenceTableWindow;

    double totalFoodPercentage;
    double totalEntertainmentPercentage;
    double totalTravelPercentage;
    double totalClothingPercentage;
    double totalEducationPercentage;
    double totalUniversityFeesPercentage;
    double totalOtherPercentage;
    void updatePercentageDisplay();
    void displayBarChart();
};

#endif // FINANCIALREPORT_H
