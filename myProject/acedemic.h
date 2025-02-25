#ifndef ACEDEMIC_H
#define ACEDEMIC_H

#include "home.h"

#include <QMainWindow>

class home;

namespace Ui {
class acedemic;
}

class acedemic : public QMainWindow
{
    Q_OBJECT

public:
    explicit acedemic(const QString &userEmail,QWidget *parent = nullptr);
    ~acedemic();

private slots:
    void on_Save1_clicked();

    void on_Back1_clicked();

    void on_Back2_clicked();

    void on_stackedWidget_currentChanged(int arg1);

    void on_GoToNextPage_clicked();

    void on_GoToPreviousPage_clicked();

    void on_Save2_clicked();
    void scheduleAlert(const QDateTime &eventTime);
    void showAlert();

private:
    Ui::acedemic *ui;
    home *home1;
    QString userEmail;

};

#endif // ACEDEMIC_H
