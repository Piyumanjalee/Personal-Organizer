#ifndef BUDGET_H
#define BUDGET_H

#include "home.h"
#include "database.h"
#include "budgettable.h"

#include <QMainWindow>

class budgetTable;
namespace Ui {
class budget;
}

class budget : public QMainWindow
{
    Q_OBJECT

public:
    explicit budget(const QString &userEmail,QWidget *parent = nullptr);
    ~budget();

private slots:
    void on_Save_clicked();
    void on_Back_clicked();
    void on_AllBudgetPlan_clicked();


private:
    Ui::budget *ui;
    home *home4;
    QString userEmail;
    int userId;
    Database db;
    budgetTable *budgetTable1;


};

#endif // BUDGET_H
