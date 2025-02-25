#ifndef SIGNUP_H
#define SIGNUP_H

//#include "mainwindow.h"

#include <QMainWindow>


namespace Ui {
class signUp;
}

class signUp : public QMainWindow
{
    Q_OBJECT

public:
    explicit signUp(QWidget *parent = nullptr);
    ~signUp();

private slots:
    void on_Login_clicked();

    void on_clear_clicked();

    void on_Sign_Up_clicked();

private:
    Ui::signUp *ui;
    QMainWindow *mainW;
};

#endif // SIGNUP_H
