#ifndef HOME_H
#define HOME_H

#include "acedemic.h"
#include "income.h"
#include "mainwindow.h"
#include "expence.h"


#include <QMainWindow>
class acedemic;
class income;
class MainWindow;
class expence;
class budget;

namespace Ui {
class home;
}

class home : public QMainWindow
{
    Q_OBJECT

public:
    explicit home(const QString &userEmail,QWidget *parent = nullptr);
    ~home();

private slots:
    void on_Acedemic_clicked();

    void on_IncomeTracker_clicked();

    void on_Logout_clicked();

    void on_ExpenceTracker_clicked();

    void on_Budgeting_clicked();

    void on_FinancialReport_clicked();

    void on_Setting_clicked();



private:
    Ui::home *ui;
    acedemic *acd;
    QString userEmail;
    income *income1;
    MainWindow *mainwindow1;
    expence *expence1;
    budget *budget1;

};

#endif // HOME_H
