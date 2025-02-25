#ifndef EXPENCETABLE_H
#define EXPENCETABLE_H

#include "expence.h"
#include "financialreport.h"
#include <QMainWindow>

class expence;
namespace Ui {
class expenceTable;
class FinancialReport;
}

class expenceTable : public QMainWindow
{
    Q_OBJECT

public:
    explicit expenceTable(const QString &userEmail,QWidget *parent = nullptr);
    ~expenceTable();

    void setCategoryPercentages(double food, double entertainment, double travel,
                                double clothing, double education, double universityFees, double other);


private slots:
    void on_Back_clicked();
    //void updateCategoryTotals(const QMap<QString, double>& categoryTotals);

    void on_FinalReport_clicked();

private:
    Ui::expenceTable *ui;
    expence *expence2;
    QString userEmail;
    void loadExpenseData();
//    FinancialReport *reportWindow;

    double totalFoodPercentage;
    double totalEntertainmentPercentage;
    double totalTravelPercentage;
    double totalClothingPercentage;
    double totalEducationPercentage;
    double totalUniversityFeesPercentage;
    double totalOtherPercentage;
   // void passPercentagesToFinancialReport();
};

#endif // EXPENCETABLE_H
