#ifndef BUDGETTABLE_H
#define BUDGETTABLE_H

#include "budget.h"

#include <QMainWindow>

namespace Ui {
class budgetTable;
}

class budgetTable : public QMainWindow
{
    Q_OBJECT

public:
    explicit budgetTable(const QString &userEmail,QWidget *parent = nullptr);
    ~budgetTable();

private slots:
    void on_Back_clicked();



    void on_showDetailsButton_clicked();

private:
    Ui::budgetTable *ui;
    budget *budget1;
    QString userEmail;
    void loadBudgetData(int month, int year);
};

#endif // BUDGETTABLE_H
