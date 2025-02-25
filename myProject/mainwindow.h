#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "signup.h"
#include "database.h"
#include "welcome.h"


#include <QObject>
#include <QMainWindow>

class welcome;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_SignUp_clicked();

    void on_Cancel_clicked();

    void on_Login_clicked();


private:
    Ui::MainWindow *ui;
    signUp *SignUpWindow;
    Database db;
    welcome *wlcm;
    QString userEmail;


};
#endif // MAINWINDOW_H
