#include "driverlogin.h"
#include "ui_driverlogin.h"
#include "mainwindow.h"
#include "companylogin.h"
#include <QMessageBox>
#include <sqlite3.h>
#include <string>
#include <iostream>
#include "DriverSession.h"
#include "driverregistration.h"
#include "drivermainpage.h"

driverlogin::driverlogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::driverlogin)
{
    ui->setupUi(this);
}


DriverSession driversession;
//This function serves as the login that verifies the users information, it must match what is in the database
bool driverlogin::DriverLoginFunction(std::string username, std::string password, DriverSession& driversession){
    sqlite3* db;
    char* errorMsg = nullptr;
    int result = sqlite3_open("../SDI TEST/Databases/Users.db", &db);

    if (result != SQLITE_OK) {
      std::cerr << "Error opening database: " << sqlite3_errmsg(db) << std::endl;
      sqlite3_close(db);
      return false;
    }

    std::string sql = "SELECT COUNT(*) FROM Driver WHERE Username = '" + username + "' AND Password = '" + password + "';";
    int count = 0;
    result = sqlite3_exec(db, sql.c_str(), [](void* data, int argc, char** argv, char** azColName) -> int {
      int* count = static_cast<int*>(data);
      *count = std::stoi(argv[0]);
      return 0;
    }, &count, &errorMsg);

    if (result != SQLITE_OK) {
      std::cerr << "Error executing SQL statement: " << errorMsg << std::endl;
      sqlite3_free(errorMsg);
      sqlite3_close(db);
      return false;
    }

    sql = "SELECT DriverID FROM Driver WHERE Username = '" + username + "' AND Password = '" + password + "';";
    int DriverID = -1;
    result = sqlite3_exec(db, sql.c_str(), [](void* data, int argc, char** argv, char** azColName) -> int {
        int* DriverID = static_cast<int*>(data);
        *DriverID = std::stoi(argv[0]);
        return 0;
    }, &DriverID, &errorMsg);

    if (result != SQLITE_OK) {
        std::cerr << "Error executing SQL statement: " << errorMsg << std::endl;
        sqlite3_free(errorMsg);
        sqlite3_close(db);
        return false;
    }

    sqlite3_close(db);

    if (count == 1 && DriverID != -1) {
        driversession.SetIsLoggedIn(true);
        driversession.SetLoggedInID(DriverID);
        return true;
    } else {
        return false;
    }
}

driverlogin::~driverlogin()
{
    delete ui;
}


//Button that needs a return true to execute code to log you in
void driverlogin::on_loginButton_clicked()
{
    std::string username = ui->userName->text().toStdString();
    std::string password = ui->Password->text().toStdString();
    bool loginSuccess = DriverLoginFunction(username, password, driversession);
    if (loginSuccess) {
        QMessageBox::information(nullptr, "Success","Log In Successful!");
        //To take driver to Driver main page
        this -> hide();
        drivermainpage main;
        main.setModal(true);
        main.exec();

    }
    else {
        QMessageBox::critical(nullptr, "Error","Login Error");
    }
}

void driverlogin::on_customerLoginButton_clicked()
{
    this -> hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}



void driverlogin::on_CompanyLoginButton_clicked()
{
    this -> hide();
    companylogin login;
    login.setModal(true);
    login.exec();
}

void driverlogin::on_pushButton_3_clicked()
{
    this -> hide();
    driverRegistration driver;
    driver.setModal(true);
    driver.exec();
}

void driverlogin::on_pushButton_2_clicked()
{
    this -> hide();
    driverlogin driver;
    driver.setModal(true);
    driver.exec();
}
