#include "home.h"
#include "ui_home.h"
#include "acedemic.h"
#include "budget.h"


home::home(const QString &userEmail,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::home)
    , userEmail(userEmail)
{
    ui->setupUi(this);
    qDebug() << "User Email: " << userEmail;


}

home::~home()
{
    delete ui;
}

void home::on_Acedemic_clicked()
{
    hide();
    acd = new acedemic(userEmail,this);
    acd->show();
}


void home::on_IncomeTracker_clicked()
{
    hide();
    income1 = new income(userEmail,this);
    income1->show();
}


void home::on_Logout_clicked()
{
    hide();
    mainwindow1 = new MainWindow(this);
    mainwindow1->show();
}


void home::on_ExpenceTracker_clicked()
{
    hide();
    expence1= new expence(userEmail,this);
    expence1->show();
}


void home::on_Budgeting_clicked()
{
    hide();
    budget1 = new budget(userEmail,this);
    budget1->show();
}


void home::on_FinancialReport_clicked()
{

}


void home::on_Setting_clicked()
{

}


