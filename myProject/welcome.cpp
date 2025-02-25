#include "welcome.h"
#include "ui_welcome.h"
#include "mainwindow.h"
#include "home.h"


welcome::welcome(const QString &userEmail,QWidget *parent)
    :QMainWindow(parent)
    , ui(new Ui::welcome),userEmail(userEmail)


{
    ui->setupUi(this);
    ui->emaillabel->setText("Hi "+userEmail);
}

welcome::~welcome()
{
    delete ui;
}

void welcome::on_Logout_clicked()
{
    hide();
    MainWindow* goMain = new MainWindow(this);
    goMain->show();


}


void welcome::on_GoToHome_clicked()
{

    hm = new home(userEmail,this);
    hm->show();
    hide();

}

