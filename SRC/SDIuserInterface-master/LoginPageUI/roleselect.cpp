#include "roleselect.h"
#include "ui_roleselect.h"
#include "userregistration.h"
#include "mainwindow.h"
#include <QMessageBox>
#include "driverregistration.h"
#include "companyregistration.h"

roleSelect::roleSelect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::roleSelect)
{
    ui->setupUi(this);
}

roleSelect::~roleSelect()
{
    delete ui;
}

void roleSelect::on_CustomerRoleButton_clicked()
{
    this -> hide();
    userRegistration user;
    user.setModal(true);
    user.exec();
}

void roleSelect::on_DriverRoleButton_clicked()
{
    this -> hide();
   driverRegistration driver;
    driver.setModal(true);
    driver.exec();

}

void roleSelect::on_CompanyRoleButton_clicked()
{
    this -> hide();
   companyRegistration company;
    company.setModal(true);
    company.exec();
}

void roleSelect::on_pushButton_2_clicked()
{
    this -> hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}
