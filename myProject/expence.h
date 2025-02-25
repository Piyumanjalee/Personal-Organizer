#ifndef EXPENCE_H
#define EXPENCE_H

#include "home.h"
#include "expencetable.h"
#include <QMainWindow>

class expenceTable;
namespace Ui {
class expence;
}

class expence : public QMainWindow
{
    Q_OBJECT

public:
    explicit expence(const QString &userEmail,QWidget *parent = nullptr);
    ~expence();

private slots:
    void on_Save_clicked();

    void on_Back_clicked();

    void on_AllExpence_clicked();

private:
    Ui::expence *ui;
    home *home3;
    QString userEmail;
    expenceTable *expencetable1;
};

#endif // EXPENCE_H
