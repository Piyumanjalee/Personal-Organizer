#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signup.h"
#include "database.h"
#include "welcome.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::on_pushButton_3_clicked);
    connect(ui->Cancel,SIGNAL(clicked()),this,SLOT(pushButton_2()));
    ui->lineEdit->setPlaceholderText("Enter Your Username");
    ui->lineEdit_2->setPlaceholderText("Enter Your password");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_SignUp_clicked()
{
    hide();
    SignUpWindow = new signUp(this);
    SignUpWindow->show();
}


void MainWindow::on_Cancel_clicked()
{
    this->close();
}


void MainWindow::on_Login_clicked()
{
    QString email = ui->lineEdit->text();  // Ensure this matches your UI design
    QString password = ui->lineEdit_2->text(); // Ensure this matches your UI design

    if (db.userExists(email, password)) {
        userEmail=email;
        QMessageBox::information(this, "Login", "Login successful");
        hide();
        wlcm = new welcome(userEmail,this);
        wlcm->show();
    }
    else {
        QMessageBox::warning(this, "Login", "Invalid email or password");
    }
}

