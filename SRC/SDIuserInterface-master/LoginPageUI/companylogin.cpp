#include "companylogin.h"
#include "ui_companylogin.h"
#include "mainwindow.h"
#include "driverlogin.h"
#include <QMessageBox>
#include <sqlite3.h>
#include <string>
#include <iostream>
#include "CompanySession.h"
#include "companyregistration.h"
#include "companysmainpage.h"
#include "companylogin.h"

companylogin::companylogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::companylogin)
{
    ui->setupUi(this);
}

// Create a CompanySession object
CompanySession companysession;

// Function to verify company login and set company session
bool companylogin::CompanyLoginFunction(std::string username, std::string password, CompanySession& companysession){

    // Open a connection to the Users database
    sqlite3* db;
    char* errorMsg = nullptr;
    int result = sqlite3_open("../SDI TEST/Databases/Users.db", &db);

    // Check for errors opening the database
    if (result != SQLITE_OK) {
      std::cerr << "Error opening database: " << sqlite3_errmsg(db) << std::endl;
      sqlite3_close(db);
      return false;
    }

    // Construct SQL statement to retrieve the number of matching login credentials
    std::string sql = "SELECT COUNT(*) FROM TransportationCompany WHERE Username = '" + username + "' AND Password = '" + password + "';";

    // Initialize a count variable to hold the number of matching login credentials
    int count = 0;

    // Execute the SQL statement and retrieve the count
    result = sqlite3_exec(db, sql.c_str(), [](void* data, int argc, char** argv, char** azColName) -> int {
      // Cast data to int pointer to store count
      int* count = static_cast<int*>(data);
      // Convert the count value from a string to an int
      *count = std::stoi(argv[0]);
      return 0;
    }, &count, &errorMsg);

    // Check for errors executing the SQL statement
    if (result != SQLITE_OK) {
      std::cerr << "Error executing SQL statement: " << errorMsg << std::endl;
      sqlite3_free(errorMsg);
      sqlite3_close(db);
      return false;
    }

    // Construct SQL statement to retrieve the company's ID
    sql = "SELECT TransportID FROM TransportationCompany WHERE Username = '" + username + "' AND Password = '" + password + "';";

    // Initialize a variable to hold the company's ID
    int TransportID = -1;

    // Execute the SQL statement and retrieve the company's ID
    result = sqlite3_exec(db, sql.c_str(), [](void* data, int argc, char** argv, char** azColName) -> int {
        // Cast data to int pointer to store company's ID
        int* TransportID = static_cast<int*>(data);
        // Convert the company's ID value from a string to an int
        *TransportID = std::stoi(argv[0]);
        return 0;
    }, &TransportID, &errorMsg);

    // Check for errors executing the SQL statement
    if (result != SQLITE_OK) {
        std::cerr << "Error executing SQL statement: " << errorMsg << std::endl;
        sqlite3_free(errorMsg);
        sqlite3_close(db);
        return false;
    }

    // Close the database connection
    sqlite3_close(db);

    // If there is exactly one match and a valid company ID is found, set the company session as logged in and return true
    if (count == 1 && TransportID != -1) {
        companysession.SetIsLoggedIn(true);
        companysession.SetLoggedInID(TransportID);
        return true;
    }
    // Otherwise, return false
    else {
        return false;
    }
}


companylogin::~companylogin()
{
    delete ui;
}

void companylogin::on_loginButton_clicked()
{
    std::string username = ui->userName->text().toStdString();//Connect LineEdit to variables
    std::string password = ui->Password->text().toStdString();
    bool loginSuccess = CompanyLoginFunction(username, password, companysession);
    if (loginSuccess) {
        QMessageBox::information(nullptr, "Success","Log In Successful!");

        //code to take company to main page after login
        this -> hide();
        companysMainPage company;
        company.setModal(true);
        company.exec();

    }
    else {
        QMessageBox::critical(nullptr, "Error","Login Error");
    }
}

void companylogin::on_customerLoginButton_clicked()
{
    this -> hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

void companylogin::on_driverLoginButton_clicked()
{
    this -> hide();
    driverlogin login;
    login.setModal(true);
    login.exec();
}

void companylogin::on_pushButton_3_clicked()
{
    this -> hide();
    companyRegistration company;
    company.setModal(true);
    company.exec();
}

void companylogin::on_pushButton_2_clicked()
{
    this -> hide();
    companylogin roles;
    roles.setModal(true);
    roles.exec();
}
