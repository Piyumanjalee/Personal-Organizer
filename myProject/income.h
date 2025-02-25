#ifndef INCOME_H
#define INCOME_H

#include "home.h"
#include "incometable.h"

#include <QMainWindow>

class home;
class incomeTable;
namespace Ui {
class income;
}

class income : public QMainWindow
{
    Q_OBJECT

public:
    explicit income(const QString &userEmail,QWidget *parent = nullptr);
    ~income();

private slots:
    void on_Save_clicked();

    void on_Back_clicked();

    void on_AllIncome_clicked();

private:
    Ui::income *ui;
    home *home2;
    QString userEmail;
    incomeTable *incomeTable1;

};

#endif // INCOME_H
