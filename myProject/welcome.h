#ifndef WELCOME_H
#define WELCOME_H

//#include "mainwindow.h"
#include "home.h"
#include "mainwindow.h"

#include <QMainWindow>

class MainWindow;
namespace Ui {
class welcome;
}

class welcome : public QMainWindow
{
    Q_OBJECT

public:
    explicit welcome(const QString &userEmail,QWidget *parent = nullptr);
    ~welcome();

private slots:
    void on_Logout_clicked();

    void on_GoToHome_clicked();

private:
    Ui::welcome *ui;
    QString userEmail;
    home *hm;
  //  MainWindow *goMain;
    MainWindow* goMain;

};

#endif // WELCOME_H
