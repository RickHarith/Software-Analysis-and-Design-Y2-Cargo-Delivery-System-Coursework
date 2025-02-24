#ifndef COMPANYLOGIN_H
#define COMPANYLOGIN_H

#include <QDialog>
#include <QMainWindow>
#include "CompanySession.h"

namespace Ui {
class companylogin;
}

class companylogin : public QDialog
{
    Q_OBJECT

public:
    explicit companylogin(QWidget *parent = nullptr);
    ~companylogin();

private slots:
    void on_customerLoginButton_clicked();

    void on_loginButton_clicked();

    bool CompanyLoginFunction(std::string username, std::string password, CompanySession& companysession);

    void on_driverLoginButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::companylogin *ui;
};

#endif // COMPANYLOGIN_H
