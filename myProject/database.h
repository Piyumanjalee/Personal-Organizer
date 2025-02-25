#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QDate>
#include <QVariant>


class Database
{
public:
    Database();
    bool createConnection();
    bool createUser(const QString &full_name, const QString &email, const QString &phone, const QString &password);
    bool userExists(const QString &email, const QString &password);

    bool AddAcademicSchedule(const QString &day, const QString &time, int hours, const QString &subject, const QString &venue, const QString &date, bool weekly,const QString &email);
    bool AddTask(const QString &description, const QString &deadlineDate, const QString &deadlineTime,const QString &email);
    bool AddIncome(const QString &incomeSource, double amount, const QString &description, const QString &date,const QString &email);
    bool AddExpense(const QString &category, double amount, const QString &description, const QString &date,const QString &email);
    bool AddCategoryBudget(const QString &category, double amount, const QString &description,int month, int year,const QString &email);

    double GetCategoryBudget(const QString &category, const QString &userEmail);
    bool CheckCategoryExists(const QString &category,int month,int year,const QString &userEmail);
};


#endif // DATABASE_H
