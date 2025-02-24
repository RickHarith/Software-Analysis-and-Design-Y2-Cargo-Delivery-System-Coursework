#ifndef DRIVERLOGIN_H
#define DRIVERLOGIN_H

#include <QDialog>
#include <QMainWindow>
#include "DriverSession.h"

namespace Ui {
class driverlogin;
}

class driverlogin : public QDialog
{
    Q_OBJECT

public:
    explicit driverlogin(QWidget *parent = nullptr);
    ~driverlogin();

private slots:
    void on_customerLoginButton_clicked();

    bool DriverLoginFunction(std::string username, std::string password, DriverSession& session);

    void on_loginButton_clicked();

    void on_CompanyLoginButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::driverlogin *ui;
};

#endif // DRIVERLOGIN_H
