#include "acedemic.h"
#include "ui_acedemic.h"
#include "database.h"
#include <QMessageBox>
#include <QTimer>
#include <QDateTime>


class home;
acedemic::acedemic(const QString &userEmail,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::acedemic)
    , userEmail(userEmail)
{
    ui->setupUi(this);
    ui->stackedWidget->setVisible(true);

}

acedemic::~acedemic()
{
    delete ui;
}

void acedemic::on_Save1_clicked()
{
    // Get data from form
    QString day = ui->comboBox->currentText();
    QString time = ui->timeEdit->time().toString("hh:mm AP");
    int hours = ui->lineEdit->text().toInt();
    QString subject = ui->lineEdit_2->text();
    QString venue = ui->lineEdit_3->text();
    QString date = ui->dateEdit->date().toString("yyyy-MM-dd");
    bool weekly = ui->checkBox->isChecked();

    // Create a Database object and add academic schedule
    Database db;
    if (db.AddAcademicSchedule(day, time, hours, subject, venue, date, weekly,userEmail))
    {
        QMessageBox::information(this, "Success", "Academic schedule added successfully");

        QDateTime eventTime = QDateTime::fromString(date + " " + time, "yyyy-MM-dd hh:mm AP");
        scheduleAlert(eventTime);
    }
    else
    {
        QMessageBox::warning(this, "Error", "Failed to add academic schedule");
    }
}

void acedemic::on_Back1_clicked()
{
    hide();
    home1 = new home(userEmail,this);
    home1->show();
}


void acedemic::on_Back2_clicked()
{
    hide();
    home1 = new home(userEmail,this);
    home1->show();
}


void acedemic::on_stackedWidget_currentChanged(int arg1)
{

    switch (arg1) {
    case 0:
        // Action for the first page
        qDebug() << "First page selected";
        break;
    case 1:
        // Action for the second page
        qDebug() << "Second page selected";
        break;
    }
}


void acedemic::on_GoToNextPage_clicked()
{
    int currentIndex = ui->stackedWidget->currentIndex();
    if (currentIndex == 0) {
        ui->stackedWidget->setCurrentIndex(1);  // Go to the second page
    } else {
        ui->stackedWidget->setCurrentIndex(0);
    }

}


void acedemic::on_GoToPreviousPage_clicked()
{
    int currentIndex = ui->stackedWidget->currentIndex();

    // Switch to the previous page
    if (currentIndex == 1) {
        ui->stackedWidget->setCurrentIndex(0);  // Go back to the first page
    } else {
        ui->stackedWidget->setCurrentIndex(1);
    }
}


void acedemic::on_Save2_clicked()
{
    QString description = ui->lineEdit_4->text();
    QDate deadlineDate = ui->calendarWidget_2->selectedDate();
    QTime deadlineTime = ui->timeEdit_2->time();

    if (description.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Description cannot be empty!");
        return;
    }

    // Convert date and time to QString for database storage
    QString dateStr = deadlineDate.toString("yyyy-MM-dd");
    QString timeStr = deadlineTime.toString("HH:mm:ss");

    // Save to the database
    Database db;
    if (db.AddTask(description, dateStr, timeStr,userEmail)) {  // db is my Database object
        QMessageBox::information(this, "Success", "Task saved successfully!");
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->lineEdit_3->clear();
        QDateTime taskTime = QDateTime::fromString(dateStr + " " + timeStr, "yyyy-MM-dd HH:mm:ss");
        scheduleAlert(taskTime);
    } else {
        QMessageBox::critical(this, "Database Error", "Failed to save the task!");
    }

}
void acedemic::scheduleAlert(const QDateTime &eventTime) {
    QDateTime alertTime = eventTime.addSecs(-600); // 600 seconds = 10 minutes

    if (alertTime > QDateTime::currentDateTime()) {
        int timeToAlert = QDateTime::currentDateTime().secsTo(alertTime);

        // Start a timer to trigger the alert at the scheduled time
        QTimer::singleShot(timeToAlert * 1000, this, &acedemic::showAlert);
    } else {
        QMessageBox::warning(this, "Alert", "Event time is in the past, no alert set.");
    }
}
void acedemic::showAlert() {
    QMessageBox::information(this, "Reminder", "Your scheduled event is about to start in 10 minutes.");
}
