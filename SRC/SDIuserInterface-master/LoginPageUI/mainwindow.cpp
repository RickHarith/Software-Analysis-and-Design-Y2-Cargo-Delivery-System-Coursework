#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "userregistration.h"
#include <QMessageBox>
#include <sqlite3.h>
#include <string>
#include <iostream>
#include "UserSession.h"
#include "companylogin.h"
#include "driverlogin.h"
#include "customeroderstatus.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
//UserSession.h UserSession class
UserSession usersession;

//Log in for CargoOwner user
bool MainWindow::CargoLoginFunction(std::string username, std::string password, UserSession& usersession){
    sqlite3* db;
    char* errorMsg = nullptr;
    int result = sqlite3_open("../SDI TEST/Databases/Users.db", &db);

    if (result != SQLITE_OK) {
      std::cerr << "Error opening database: " << sqlite3_errmsg(db) << std::endl;
      sqlite3_close(db);
      return false;
    }

    std::string sql = "SELECT COUNT(*) FROM CargoOwner WHERE Username = '" + username + "' AND Password = '" + password + "';";
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

    sql = "SELECT CargoOwnerID FROM CargoOwner WHERE Username = '" + username + "' AND Password = '" + password + "';";
    int CargoOwnerID = -1;
    result = sqlite3_exec(db, sql.c_str(), [](void* data, int argc, char** argv, char** azColName) -> int {
        int* CargoOwnerID = static_cast<int*>(data);
        *CargoOwnerID = std::stoi(argv[0]);
        return 0;
    }, &CargoOwnerID, &errorMsg);

    if (result != SQLITE_OK) {
        std::cerr << "Error executing SQL statement: " << errorMsg << std::endl;
        sqlite3_free(errorMsg);
        sqlite3_close(db);
        return false;
    }

    sqlite3_close(db);

    if (count == 1 && CargoOwnerID != -1) {
        usersession.SetIsLoggedIn(true);
        usersession.SetLoggedInID(CargoOwnerID);
        return true;
    } else {
        return false;
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    this -> hide();
    userRegistration user;
    user.setModal(true);
    user.exec();

}

void MainWindow::on_loginButton_clicked()
{
    std::string username = ui->userName->text().toStdString();
    std::string password = ui->Password->text().toStdString();
    bool loginSuccess = CargoLoginFunction(username, password, usersession);
    if (loginSuccess) {
        QMessageBox::information(nullptr, "Success","Log In Successful!");
        //Code to move user to order page
        this -> hide();
        customeroderstatus mainpage;
        mainpage.setModal(true);
        mainpage.exec();
    }
    else {
        QMessageBox::critical(nullptr, "Error","Login Error");
    }
}


void MainWindow::on_companyLoginButton_clicked()
{
    this -> hide();
    companylogin login;
    login.setModal(true);
    login.exec();
}

void MainWindow::on_DriverLoginButton_clicked()
{
    this -> hide();
    driverlogin login;
    login.setModal(true);
    login.exec();
}
