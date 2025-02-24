#include "customereditandview.h"
#include "ui_customereditandview.h"
#include "customeroderstatus.h"
#include <QMessageBox>
#include <sqlite3.h>
#include <string>
#include <iostream>
#include "UserSession.h"
#include <QtWidgets>
#include <regex>
customereditandview::customereditandview(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customereditandview)
{
    ui->setupUi(this);

    // Set the number of columns and column labels for the user info table
    ui->userInfoTable->setColumnCount(6);
    ui->userInfoTable->setHorizontalHeaderLabels({"Email", "Address", "Name", "Username", "Password", "MobileNumber"});

    // Open the user database
    sqlite3 *db;
    char *errorMsg = nullptr;
    int rc = sqlite3_open("../SDI TEST/Databases/Users.db", &db);
    if (rc != SQLITE_OK) {
        // If there's an error, print the error message and return
        std::cerr << "Error opening database: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_close(db);
        return;
    }

    // Select the user information from the database using the logged-in user's ID
    std::string selectSql = "SELECT Email, Address, Name, Username, Password, MobileNumber FROM CargoOwner WHERE CargoOwnerID = " + std::to_string(usersession.GetLoggedInID()) + ";";
    rc = sqlite3_exec(db, selectSql.c_str(), callback, (void*)ui->userInfoTable, &errorMsg);
    if (rc != SQLITE_OK) {
        // If there's an error, print the error message and return
        std::cerr << "Error executing SQL statement: " << errorMsg << std::endl;
        sqlite3_free(errorMsg);
        sqlite3_close(db);
        return;
    }

    // Close the user database
    sqlite3_close(db);
}


// This function is a callback used to display user information in a QTableWidget.
// The QTableWidget pointer is passed as the 'data' parameter, which is then cast to the appropriate type.
// The function sets the number of rows in the table to 1 and adds the user information to the first row.
// Each user attribute is added to a QTableWidgetItem and inserted into the appropriate column.
int customereditandview::callback(void *data, int argc, char **argv, char **azColName){
    QTableWidget* userInfoTable = (QTableWidget*)data;
    userInfoTable->setRowCount(1);
    for(int i=0; i<argc; i++){
        QTableWidgetItem *item = new QTableWidgetItem(QString(argv[i]));
        userInfoTable->setItem(0, i, item);
    }
    return 0;
}

//This is the editing account function that edits the SQL data of the user based on the userssession object, the class is located in UserSession.h
bool customereditandview::updateCargoOwner(UserSession& usersession, std::string email, std::string address, std::string name, std::string username, std::string password, std::string mobileNumber) {
    sqlite3 *db;
    bool ErrorCaught = false;
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


    std::string updateSql = "UPDATE CargoOwner SET ";
    if (!email.empty()) {
        if (std::regex_match(email, email_regex)){
                updateSql += "Email = '" + email + "', ";
        }
        else {
            QMessageBox::critical(nullptr, "Error","\nInvalid email format!");
            ErrorCaught = true;
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
           ErrorCaught = true;
           name.clear();
        }
    }

    if (!username.empty()) {
        if(username.length() >= 5){
            updateSql += "Username = '" + username + "', ";
        }
        else {
            QMessageBox::critical(nullptr, "Error","\nUsername must be longer than 5 characters!");
            ErrorCaught = true;
            username.clear();
        }
    }


    if (!password.empty()) {
        if (std::regex_match(password, password_regex)){
            updateSql += "Password = '" + password + "', ";
        }
        else {
            QMessageBox::critical(nullptr, "Error","\nInvalid password format!\nNeeds at least:\nOne capital letter\nOne number");
            ErrorCaught = true;
            password.clear();
        }
    }



    if (!mobileNumber.empty())  {
        if (std::all_of(mobileNumber.begin(), mobileNumber.end(), ::isdigit) && mobileNumber.length() == 11){
            updateSql += "MobileNumber = '" + mobileNumber + "', ";
        }
        else {
            QMessageBox::critical(nullptr, "Error","\nPhone number must contain numbers only!\nMust be 11 digits long!");
            ErrorCaught = true;
            mobileNumber.clear();
        }

    }

    updateSql = updateSql.substr(0, updateSql.length() - 2);  // Remove last comma and space
    updateSql += " WHERE CargoOwnerID = " + std::to_string(usersession.GetLoggedInID()) + ";";
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

void customereditandview::on_editButton_clicked(){
    std::string email = ui->emailLineEdit->text().toStdString();
    std::string address = ui->addressLineEdit->text().toStdString();
    std::string name = ui->nameLineEdit->text().toStdString();
    std::string username = ui->userNameLineEdit->text().toStdString();
    std::string password = ui->passwordLineEdit->text().toStdString();
    std::string mobileNumber = ui->PhoneNumberLineEdit->text().toStdString();
    bool editSuccess = updateCargoOwner(usersession, email, address, name, username, password, mobileNumber);
    if (editSuccess){
        QMessageBox::information(nullptr, "Success","Edit Successful!");
        this -> hide();
        customereditandview status;
        status.setModal(true);
        status.exec();
        return;
    }
}

customereditandview::~customereditandview()
{
    delete ui;
}

void customereditandview::on_pushButton_2_clicked()
{
    this -> hide();
    customeroderstatus status;
    status.setModal(true);
    status.exec();
}
