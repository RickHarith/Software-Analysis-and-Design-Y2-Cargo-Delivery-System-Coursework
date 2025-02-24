#include "companyregistration.h"
#include "ui_companyregistration.h"
#include "mainwindow.h"
#include "companyorder.h"
#include <sqlite3.h>
#include <regex>
#include <QtWidgets/QMessageBox>
#include <iostream>
#include "companylogin.h"
#include "companysmainpage.h"

companyRegistration::companyRegistration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::companyRegistration)
{
    ui->setupUi(this);
}


bool companyRegistration::CompanySignUp() {
    sqlite3 *db;
    char *ErrorMsg = nullptr;
    int database;
    bool ErrorCaught = false;

    database = sqlite3_open("../SDI TEST/Databases/Users.db", &db);

    if (database != SQLITE_OK) {
        std::cerr << "Error opening database: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_close(db);
        return false;
    }

    std::string email = ui->emailField->text().toStdString();
    std::string address = ui->addressField->text().toStdString();
    std::string name = ui->nameField->text().toStdString();
    std::string username = ui->usernameField->text().toStdString();
    std::string password = ui->passwordField->text().toStdString();
    std::string phoneNumber = ui->numberField->text().toStdString();
    std::string companyName = ui->companyNameField->text().toStdString();
    std::string companyAddress  = ui->compAddressField->text().toStdString();
    std::string companyEmployee = ui->NoOfEmployField->text().toStdString();


    //Regex to make sure users type the correct format for each field
    std::regex email_regex("^([a-zA-Z0-9\\._]+)@([a-zA-Z0-9])+\\.([a-zA-Z]{2,})(\\.[a-zA-Z]{2,})?$");
    std::regex password_regex("^(?=.*[A-Z])(?=.*[0-9]).{6,}$");
    std::regex name_regex("^[a-zA-Z\\s]*$");

    //ERROR HANDLING BELOW

    //Checks if email is empty
    if (email.empty()) {
        QMessageBox::critical(nullptr, "Error","\nEmail cannot be empty!");
        email.clear();
        ErrorCaught = true;
    }
    //Checks if email matches the regex
    if (!std::regex_match(email, email_regex)) {
         QMessageBox::critical(nullptr, "Error","\nInvalid email format!");
         email.clear();
         ErrorCaught = true;
    }

    if (address.empty()) {
        QMessageBox::critical(nullptr, "Error","\nAddress cannot be empty!");
        address.clear();
        ErrorCaught = true;
    }

    if (name.empty()) {
       QMessageBox::critical(nullptr, "Error","\nName cannot be empty");
       name.clear();
       ErrorCaught = true;
    }

    if (!std::regex_match(name, name_regex)) {
        QMessageBox::critical(nullptr, "Error","\nInvalid name, only spaces and letters allowed!");
        name.clear();
        ErrorCaught = true;
    }


    if (username.empty()) {
        QMessageBox::critical(nullptr, "Error","\nUsername cannot be empty!");
        username.clear();
        ErrorCaught = true;
    }

    if (username.length() <= 5) {
        QMessageBox::critical(nullptr, "Error","\nUsername must be longer than 5 characters!");
        username.clear();
        ErrorCaught = true;
    }

    if (password.empty()) {
       QMessageBox::critical(nullptr, "Error","\nPassword cannot be empty!");
       password.clear();
       ErrorCaught = true;
    }

    if (!std::regex_match(password, password_regex)) {
        QMessageBox::critical(nullptr, "Error","\nInvalid password format!\nNeeds at least:\nOne capital letter\nOne number");
        password.clear();
        ErrorCaught = true;
    }

    if (phoneNumber.empty()) {
        QMessageBox::critical(nullptr, "Error","\nPhone number cannot be empty!");
        phoneNumber.clear();
        ErrorCaught = true;
    }

    //Checks that the inputs are all numbers
    if (!std::all_of(phoneNumber.begin(), phoneNumber.end(), ::isdigit)) {
        QMessageBox::critical(nullptr, "Error","\nPhone number must contain numbers only!");
        phoneNumber.clear();
        ErrorCaught = true;
    }
    //Checks the length of the input
    if (phoneNumber.length() < 11) {
        QMessageBox::critical(nullptr, "Error","\nPhone number must be at least 11 digits long!");
        phoneNumber.clear();
        ErrorCaught = true;
    }

    if (companyName.empty()) {
        QMessageBox::critical(nullptr, "Error","\nCompany name cannot be empty!");
        companyName.clear();
        ErrorCaught = true;
    }

    if (companyName.length() <= 2) {
        QMessageBox::critical(nullptr, "Error","\nCompany name must be longer than 2 characters!");
        companyName.clear();
        ErrorCaught = true;
    }


    if (companyAddress.empty()) {
        QMessageBox::critical(nullptr, "Error","\nCompany address cannot be empty!");
        companyAddress.clear();
        ErrorCaught = true;
    }

    if (companyEmployee.empty()) {
        QMessageBox::critical(nullptr, "Error","\nNo. of employees cannot be empty!");
        companyEmployee.clear();
        ErrorCaught = true;
    }

    if (!std::all_of(companyEmployee.begin(), companyEmployee.end(), ::isdigit)) {
        QMessageBox::critical(nullptr, "Error","No. of employees must contain numbers only!");
        companyEmployee.clear();
        ErrorCaught = true;
    }



    //If ErrorCaught = false, execult an SQL statement that inserts all the inputs into my SQLite database
    if (!ErrorCaught){
        std::string sql = "INSERT INTO TransportationCompany (Email, Address, Name, Username, Password, MobileNumber, CompanyName, CompanyAddress, NumOfEmployees) VALUES ('" +
                            email + "', '" + address + "', '" + name + "', '" + username + "', '" + password + "', '" +
                            phoneNumber + "', '" + companyName + "',  '" + companyAddress + "',  '" + companyEmployee + "')";

        database = sqlite3_exec(db, sql.c_str(), nullptr, nullptr, &ErrorMsg);

        if (database != SQLITE_OK) {
            std::string ErrorMessage = ErrorMsg;
            if (ErrorMessage.find("UNIQUE constraint failed") != std::string::npos) {
                if (ErrorMessage.find("Email") != std::string::npos) {
                    QMessageBox::critical(nullptr, "Error","Email address is already in use!");
                    email.clear();
                    address.clear();
                    name.clear();
                    username.clear();
                    password.clear();
                    phoneNumber.clear();
                    companyName.clear();
                    companyAddress.clear();
                    companyEmployee.clear(); //Clears all inputs if unique constraint in the SQL database is violated
                }
                if (ErrorMessage.find("Username") != std::string::npos) {
                    QMessageBox::critical(nullptr, "Error","Username is already in use!");
                    email.clear();
                    address.clear();
                    name.clear();
                    username.clear();
                    password.clear();
                    phoneNumber.clear();
                    companyName.clear();
                    companyAddress.clear();
                    companyEmployee.clear();
                }
                if (ErrorMessage.find("MobileNumber") != std::string::npos) {
                    QMessageBox::critical(nullptr, "Error","Phone number is already in use!");
                    email.clear();
                    address.clear();
                    name.clear();
                    username.clear();
                    password.clear();
                    phoneNumber.clear();
                    companyName.clear();
                    companyAddress.clear();
                    companyEmployee.clear();
                }
                if (ErrorMessage.find("CompanyName") != std::string::npos) {
                   QMessageBox::critical(nullptr, "Error","Company name is already in use!");
                   email.clear();
                   address.clear();
                   name.clear();
                   username.clear();
                   password.clear();
                   phoneNumber.clear();
                   companyName.clear();
                   companyAddress.clear();
                   companyEmployee.clear();
                }
            } else {
                std::cerr << "Error executing SQL statement: " << ErrorMsg << std::endl;
                QMessageBox::critical(nullptr, "Error","Error executing SQL statement");
            }
            sqlite3_free(ErrorMsg);
            sqlite3_close(db);
            return false;
        }

        std::cout << "Successfully signed up!" << std::endl;

        sqlite3_close(db);
        return true;
    }

    else{
        return false;
    }

}
companyRegistration::~companyRegistration()
{
    delete ui;
}

void companyRegistration::on_pushButton_3_clicked()
{
    bool signUpSuccess = CompanySignUp(); //The function company sign up returns a bool of true and false, so if the return is true, then sign up is successful
    if (signUpSuccess) {
        QMessageBox::information(nullptr, "Success","Sign Up Successful!");
        //code to take company to login after registration
        this -> hide();
        companylogin login;
        login.setModal(true);
        login.exec();
    }
    else{
        QMessageBox::critical(nullptr, "Error","Sign Up Failed!");
        return;
    }

}

void companyRegistration::on_pushButton_2_clicked()
{
    this -> hide();
    companylogin login;
    login.setModal(true);
    login.exec();
}
