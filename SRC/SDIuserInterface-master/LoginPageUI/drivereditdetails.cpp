#include "drivereditdetails.h"
#include "ui_drivereditdetails.h"
#include "drivermainpage.h"
#include "viewdriverdetails.h"
#include <QMessageBox>
#include <sqlite3.h>
#include <string>
#include <iostream>
#include "DriverSession.h"
#include <regex>

drivereditdetails::drivereditdetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::drivereditdetails)
{
    ui->setupUi(this);
}

//This function allows drivers to edit their details based on the DriverSession.h driversession object GetLoggedInID method
bool drivereditdetails::updateDriver(DriverSession& driversession, std::string email, std::string address, std::string name, std::string username, std::string password, std::string mobileNumber, std::string niNumber, std::string license) {
    sqlite3 *db;
    char *errorMsg = nullptr;
    int rc = sqlite3_open("../SDI TEST/Databases/Users.db", &db);
    if (rc != SQLITE_OK) {
        std::cerr << "Error opening database: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_close(db);
        return false;
    }


    std::regex email_regex("^([a-zA-Z0-9\\._]+)@([a-zA-Z0-9])+\\.([a-zA-Z]{2,})(\\.[a-zA-Z]{2,})?$");
    std::regex password_regex("^(?=.*[A-Z])(?=.*[0-9]).{6,}$");
    std::regex name_regex("^[a-zA-Z\\s]*$");
    std::regex ninumber_regex ("^[A-CEGHJ-PR-TW-Z]{1}[A-CEGHJ-NPR-TW-Z]{0,1}\\d{6}[A-D\\s]{0,1}$");


    std::string updateSql = "UPDATE Driver SET ";
    if (!email.empty()) {
        if (std::regex_match(email, email_regex)){
                updateSql += "Email = '" + email + "', ";
        }
        else {
            QMessageBox::critical(nullptr, "Error","\nInvalid email format!");
            email.clear();
        }
    }


    if (!address.empty()) {
        updateSql += "Address = '" + address + "', ";
    }

    if (!name.empty()) {
        if (std::regex_match(name, name_regex)){
            updateSql += "Name = '" + name + "', ";
        }
        else{
           QMessageBox::critical(nullptr, "Error","\nInvalid name, only spaces and letters allowed!");
           name.clear();
        }
    }

    if (!username.empty()) {
        if(username.length() >= 5){
            updateSql += "Username = '" + username + "', ";
        }
        else {
            QMessageBox::critical(nullptr, "Error","\nUsername must be longer than 5 characters!");
            username.clear();
        }
    }


    if (!password.empty()) {
        if (std::regex_match(password, password_regex)){
            updateSql += "Password = '" + password + "', ";
        }
        else {
            QMessageBox::critical(nullptr, "Error","\nInvalid password format!\nNeeds at least:\nOne capital letter\nOne number");
            password.clear();
        }
    }

    if (!mobileNumber.empty())  {
        if (std::all_of(mobileNumber.begin(), mobileNumber.end(), ::isdigit) && mobileNumber.length() == 11){
            updateSql += "MobileNumber = '" + mobileNumber + "', ";
        }
        else {
            QMessageBox::critical(nullptr, "Error","\nPhone number must contain numbers only!\nMust be 11 digits long!");
            mobileNumber.clear();
        }

    }

    if (!niNumber.empty()) {
        if (std::regex_match(niNumber, ninumber_regex)){
            updateSql += "NINumber = '" + niNumber + "', ";
        }
        else {
            QMessageBox::critical(nullptr, "Error","\nInvalid NI number format\nThe first letter must be A, B, C, D, E, F, G, or H, or one of the letters J, K, L, M, N, P, or Q, or one of the letters R, S, T, U, V, W, X, Y, or Z.\nThe second letter can be any letter except I, O, Q, U, or V.\nThe next 6 digits are numbers.\nThe last letter can be any letter except I, O, Q, or Z, or a space.");
            niNumber.clear();
        }
    }

    if (!license.empty()) {
        if (license.length() < 9 && license.length() > 16){
            updateSql += "DrivingLicenseID = '" + license + "', ";
        }
        else{
            QMessageBox::critical(nullptr, "Error","\nLicense be at least 9 to 16 digits long!");
            license.clear();
        }
    }



    updateSql = updateSql.substr(0, updateSql.length() - 2);  // Remove last comma and space
    updateSql += " WHERE DriverID = " + std::to_string(driversession.GetLoggedInID()) + ";";
    rc = sqlite3_exec(db, updateSql.c_str(), nullptr, nullptr, &errorMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "Error executing SQL statement: " << errorMsg << std::endl;
        sqlite3_free(errorMsg);
        sqlite3_close(db);
        return false;
    }
    sqlite3_close(db);
    return true;
}

drivereditdetails::~drivereditdetails()
{
    delete ui;
}

void drivereditdetails::on_backButton_clicked()
{
    this -> hide();
    drivermainpage main;
    main.setModal(true);
    main.exec();
}



//Edit button to take driver to view page
void drivereditdetails::on_pushButton_clicked()
{
    std::string email = ui->emailLineEdit->text().toStdString();
    std::string address = ui->addressLineEdit->text().toStdString();
    std::string name = ui->namelineEdit->text().toStdString();
    std::string username = ui->usernameLineEdit->text().toStdString();
    std::string password = ui->passwordLineEdit->text().toStdString();
    std::string mobileNumber = ui->numberLineEdit->text().toStdString();
    std::string niNumber = ui->niNumberField->text().toStdString();
    std::string license = ui->licenseField->text().toStdString();
    //the updateDriver function must return true
    bool editSuccess = updateDriver(driversession, email, address, name, username, password, mobileNumber, niNumber, license);
    if (editSuccess){
        QMessageBox::information(nullptr, "Success","Edit Successful!");
        this -> hide();
        viewdriverdetails view;
        view.setModal(true);
        view.exec();
        return;
    }
    else {
         QMessageBox::critical(nullptr, "Error","Edit Failed!");
    }
}
