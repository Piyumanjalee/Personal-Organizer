#include "database.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>


Database::Database()
{
    createConnection();
}
bool Database::createConnection()
{
    // Create and open the database connection
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("PODB.db");  // Ensure this is the correct name for your database

    if (!db.open()) {
        qDebug() << "Error: connection with database failed";
        return false;
    } else {
        qDebug() << "Database: connection ok";


        // Create the users table if it doesn't exist
        QSqlQuery query;
        query.exec("CREATE TABLE IF NOT EXISTS users ("
                   "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                   "full_name TEXT NOT NULL, "
                   "email TEXT UNIQUE NOT NULL, "
                   "phone TEXT NOT NULL, "
                   "password TEXT NOT NULL)");


        query.exec("CREATE TABLE IF NOT EXISTS academic_schedule ("
                   "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                   "day TEXT NOT NULL, "
                   "time TEXT NOT NULL, "
                   "hours INTEGER NOT NULL, "
                   "subject TEXT NOT NULL, "
                   "venue TEXT NOT NULL, "
                   "date TEXT NOT NULL, "
                   "weekly BOOLEAN NOT NULL, "
                   "userEmail TEXT NOT NULL)");

        query.exec("CREATE TABLE IF NOT EXISTS tasks ("
                   "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                   "description TEXT NOT NULL, "
                   "deadline_date TEXT NOT NULL, "
                   "deadline_time TEXT NOT NULL, "
                   "userEmail TEXT NOT NULL)");

        query.exec("CREATE TABLE IF NOT EXISTS income_tracker ("
                   "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                   "income_source TEXT NOT NULL, "
                   "amount REAL NOT NULL, "
                   "description TEXT, "
                   "date TEXT NOT NULL, "
                   "userEmail TEXT NOT NULL)");

        query.exec("CREATE TABLE IF NOT EXISTS expenses ("
                   "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                   "category TEXT NOT NULL, "
                   "amount REAL NOT NULL, "
                   "description TEXT, "
                   "date TEXT NOT NULL, "
                   "userEmail TEXT NOT NULL)");

        query.exec("CREATE TABLE IF NOT EXISTS category_budgeting ("
                   "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                   "category TEXT NOT NULL,"
                   "amount REAL NOT NULL, "
                   "description TEXT, "
                   "userEmail TEXT NOT NULL,"
                   "month INTEGER NOT NULL,"
                   "year INTEGER NOT NULL)");


        return true;
    }
}


bool Database::createUser(const QString &fullName, const QString &email, const QString &phone, const QString &password)
{
    QSqlQuery query;
    query.prepare("INSERT INTO users (full_name, email, phone, password) "
                  "VALUES (:full_name, :email, :phone, :password)");
    query.bindValue(":full_name", fullName);
    query.bindValue(":email", email);
    query.bindValue(":phone", phone);
    query.bindValue(":password", password); // Note: Hash this password for security

    if (query.exec()) {
        return true;
    } else {
        qDebug() << "Error creating user: " << query.lastError().text();
        return false;
    }
}

bool Database::userExists(const QString &email, const QString &password)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM users WHERE email = :email AND password = :password");
    query.bindValue(":email", email);
    query.bindValue(":password", password);

    if (query.exec() && query.next()) {
        return true;
    } else {
        qDebug() << "Error checking user: " << query.lastError().text();
        return false;
    }
}

bool Database::AddAcademicSchedule(const QString &day, const QString &time, int hours, const QString &subject, const QString &venue, const QString &date, bool weekly,const QString &email)
{
    if (day.isEmpty() || time.isEmpty() || subject.isEmpty() || venue.isEmpty() || date.isEmpty() || hours <= 0) {
        qDebug() << "Error: All fields must be filled, and hours must be greater than zero.";
        return false;  // Return false if any field is empty or hours are not valid
    }
    QSqlQuery query;
    query.prepare("INSERT INTO academic_schedule (day, time, hours, subject, venue, date, weekly,userEmail) "
                  "VALUES (:day, :time, :hours, :subject, :venue, :date, :weekly, :userEmail)");
    query.bindValue(":day", day);
    query.bindValue(":time", time);
    query.bindValue(":hours", hours);
    query.bindValue(":subject", subject);
    query.bindValue(":venue", venue);
    query.bindValue(":date", date);
    query.bindValue(":weekly", weekly);
    query.bindValue(":userEmail",email);

    if (query.exec()) {
        qDebug() << "Academic schedule entry added successfully.";
        return true;
    } else {
        qDebug() << "Error adding academic schedule entry:" << query.lastError().text();
        return false;
    }
}

bool Database::AddTask(const QString &description, const QString &deadlineDate, const QString &deadlineTime,const QString &email)
{
    if (description.isEmpty() || deadlineDate.isEmpty() || deadlineTime.isEmpty()) {
        qDebug() << "Error: All fields must be filled.";
        return false;
    }
    QSqlQuery query;
    query.prepare("INSERT INTO tasks (description, deadline_date, deadline_time,userEmail) "
                  "VALUES (:description, :deadline_date, :deadline_time, :userEmail)");
    query.bindValue(":description", description);
    query.bindValue(":deadline_date", deadlineDate);
    query.bindValue(":deadline_time", deadlineTime);
    query.bindValue(":userEmail",email);

    if (query.exec()) {
        qDebug() << "Task added successfully.";
        return true;
    } else {
        qDebug() << "Error adding task:" << query.lastError().text();
        return false;
    }
}
bool Database::AddIncome(const QString &incomeSource, double amount, const QString &description, const QString &date,const QString &email)
{
    if (incomeSource.isEmpty() || amount <= 0 || date.isEmpty()) {
        qDebug() << "Error: Income source, amount, and date must be provided.";
        return false;
    }
    QSqlQuery query;
    query.prepare("INSERT INTO income_tracker (income_source, amount, description, date,userEmail) "
                  "VALUES (:income_source, :amount, :description, :date, :userEmail)");
    query.bindValue(":income_source", incomeSource);
    query.bindValue(":amount", amount);
    query.bindValue(":description", description);
    query.bindValue(":date", date);
    query.bindValue(":userEmail",email);

    if (query.exec()) {
        qDebug() << "Income entry added successfully.";
        return true;
    } else {
        qDebug() << "Error adding income entry:" << query.lastError().text();
        return false;
    }
}

bool Database::AddExpense(const QString &category, double amount, const QString &description, const QString &date,const QString &email)
{
    if (category.isEmpty() || amount <= 0 || date.isEmpty()) {
        qDebug() << "Error: Category, amount, and date must be provided.";
        return false;
    }
    QSqlQuery query;
    query.prepare("INSERT INTO expenses (category, amount, description, date,userEmail) "
                  "VALUES (:category, :amount, :description, :date, :userEmail)");
    query.bindValue(":category", category);
    query.bindValue(":amount", amount);
    query.bindValue(":description", description);
    query.bindValue(":date", date);
    query.bindValue(":userEmail",email);

    if (query.exec()) {
        qDebug() << "Expense entry added successfully.";
        return true;
    } else {
        qDebug() << "Error adding expense entry:" << query.lastError().text();
        return false;
    }
}
bool Database::AddCategoryBudget(const QString &category, double amount, const QString &description,int month,int year, const QString &email)
{

    QSqlQuery query;
    query.prepare("INSERT INTO category_budgeting (category, amount, description,month, year,userEmail) VALUES (:category, :amount, :description, :month, :year, :userEmail)");
    query.bindValue(":category", category);
    query.bindValue(":amount", amount);
    query.bindValue(":description", description);
    query.bindValue(":month", month);
    query.bindValue(":year", year);
    query.bindValue(":userEmail",email);


    if (query.exec()) {
        qDebug() << "Category budget added successfully.";
        return true;
    } else {
        qDebug() << "Error adding category budget:" << query.lastError().text();
        return false;
    }
}

//
double Database::GetCategoryBudget(const QString &category, const QString &userEmail)
{
    QSqlQuery query;
    query.prepare("SELECT amount FROM category_budgeting WHERE LOWER(category) = LOWER(:category) AND userEmail = :userEmail");
    query.bindValue(":category", category);
    query.bindValue(":userEmail", userEmail);

    if (query.exec() && query.next()) {
        return query.value(0).toDouble();
    } else {
        qDebug() << "Error fetching category budget:" << query.lastError().text();
    }

    return 0.0; // Return 0 if no budget is found for the category
}

bool Database::CheckCategoryExists(const QString &category,int month,int year,const QString &userEmail)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM category_budgeting WHERE LOWER(category) = LOWER(:category) AND userEmail = :userEmail AND month =:month AND year =:year" );
    query.bindValue(":category", category);
    query.bindValue(":month", month); // Bind month
    query.bindValue(":year", year);
    query.bindValue(":userEmail", userEmail);

    if (query.exec() && query.next()) {
        return query.value(0).toInt() > 0; // Returns true if category exists
    } else {
        qDebug() << "Error checking category existence:" << query.lastError().text();
    }

    return false;
}

