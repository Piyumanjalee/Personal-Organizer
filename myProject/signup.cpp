#include "signup.h"
#include "ui_signup.h"
#include "mainwindow.h"
#include <QMessageBox>

signUp::signUp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::signUp)
{
    ui->setupUi(this);
    ui->lineEdit->setPlaceholderText("Enter Your Full Name");
    ui->lineEdit_2->setPlaceholderText("Enter Your Email");
    ui->lineEdit_3->setPlaceholderText("Enter Your Phone Number");
    ui->lineEdit_4->setPlaceholderText("Enter Password");
    ui->lineEdit_5->setPlaceholderText("Confirm Password");
}

signUp::~signUp()
{
    delete ui;
}


void signUp::on_Login_clicked()
{
    hide();
    mainW = new MainWindow(this);
    mainW->show();
}


void signUp::on_clear_clicked()
{
    ui->lineEdit->clear();       // Clears the full name field
    ui->lineEdit_2->clear();     // Clears the email field
    ui->lineEdit_3->clear();     // Clears the phone field
    ui->lineEdit_4->clear();     // Clears the password field
    ui->lineEdit_5->clear();     // Clears the confirm password field
}


void signUp::on_Sign_Up_clicked()
{
    QString fullName = ui->lineEdit->text();
    QString email = ui->lineEdit_2->text();
    QString phone = ui->lineEdit_3->text();
    QString password = ui->lineEdit_4->text();
    QString confirmPassword = ui->lineEdit_5->text();

    if (fullName.isEmpty() || email.isEmpty() || phone.isEmpty() ||
        password.isEmpty() || confirmPassword.isEmpty())
    {
        QMessageBox::warning(this, "Input Error", "Please fill all fields.");
        return;
    }

    // Check if passwords match
    if (password != confirmPassword)
    {
        QMessageBox::warning(this, "Password Mismatch", "Passwords do not match.");
        return;
    }

    // Query to check if the email already exists
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM users WHERE email = :email");
    checkQuery.bindValue(":email", email);
    checkQuery.exec();
    checkQuery.next();
    int count = checkQuery.value(0).toInt();

    if (count > 0)
    {
        QMessageBox::warning(this, "Email Already Taken", "This email is already associated with an account.");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO users (full_name, email, phone, password) "
                  "VALUES (:full_name, :email, :phone, :password)");
    query.bindValue(":full_name", fullName);
    query.bindValue(":email", email);
    query.bindValue(":phone", phone);
    query.bindValue(":password", password);

    if (query.exec())
    {
        QMessageBox::information(this, "Registration Successful", "Account created successfully. You can now log in.");
        hide();
        parentWidget()->show();
    }
    else
    {
        QMessageBox::critical(this, "Registration Failed", query.lastError().text());
    }
}



