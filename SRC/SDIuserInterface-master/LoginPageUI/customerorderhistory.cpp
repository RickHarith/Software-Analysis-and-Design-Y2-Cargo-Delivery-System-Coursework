#include "customerorderhistory.h"
#include "ui_customerorderhistory.h"
#include "userregistration.h"
#include "mainwindow.h"
#include "customeroderstatus.h"

customerorderhistory::customerorderhistory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerorderhistory)
{
    ui->setupUi(this);
}

customerorderhistory::~customerorderhistory()
{
    delete ui;
}

void customerorderhistory::on_editDetailsButton_clicked()
{
    this -> hide();
    userRegistration roles;
    roles.setModal(true);
    roles.exec();
}


void customerorderhistory::on_logoutButton_clicked()
{
    this -> hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}



void customerorderhistory::on_backButton_clicked()
{
    this -> hide();
    customeroderstatus status;
    status.setModal(true);
    status.exec();
}
