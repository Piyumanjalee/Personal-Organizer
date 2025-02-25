#ifndef INCOMETABLE_H
#define INCOMETABLE_H

#include "income.h"
#include <QMainWindow>

class income;
namespace Ui {
class incomeTable;
}

class incomeTable : public QMainWindow
{
    Q_OBJECT

public:
    explicit incomeTable(const QString &userEmail,QWidget *parent = nullptr);
    ~incomeTable();

private slots:
    void on_Back_clicked();



private:
    Ui::incomeTable *ui;
    income *income1;
    QString userEmail;
    void loadIncomeData();
};

#endif // INCOMETABLE_H
