#include "userregistration.h"
#include "ui_userregistration.h"
#include "customerorderpage.h"
#include <iostream>
#include <sqlite3.h>
#include <regex>
#include <QtWidgets/QMessageBox>
#include "mainwindow.h"


userRegistration::userRegistration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::userRegistration)
{
    ui->setupUi(this);
}

//Function to sign up as cargo owner
bool userRegistration::CargoSignUp() {
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

    std::string email = ui->lineEdit_3->text().toStdString();
    std::string address = ui->lineEdit_4->text().toStdString();
    std::string name = ui->lineEdit->text().toStdString();
    std::string username = ui->lineEdit_6->text().toStdString();
    std::string password = ui->lineEdit_2->text().toStdString();
    std::string phoneNumber = ui->lineEdit_5->text().toStdString();

    std::regex email_regex("^([a-zA-Z0-9\\._]+)@([a-zA-Z0-9])+\\.([a-zA-Z]{2,})(\\.[a-zA-Z]{2,})?$");
    std::regex password_regex("^(?=.*[A-Z])(?=.*[0-9]).{6,}$");
    std::regex name_regex("^[a-zA-Z\\s]*$");

    if (email.empty()) {
        QMessageBox::critical(nullptr, "Error","\nEmail cannot be empty!");
        email.clear();
        ErrorCaught = true;
    }

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


    if (!std::all_of(phoneNumber.begin(), phoneNumber.end(), ::isdigit)) {
        QMessageBox::critical(nullptr, "Error","\nPhone number must contain numbers only!");
        phoneNumber.clear();
        ErrorCaught = true;
    }

    if (phoneNumber.length() < 11) {
        QMessageBox::critical(nullptr, "Error","\nPhone number must be at least 11 digits long!");
        phoneNumber.clear();
        ErrorCaught = true;
    }



    if (!ErrorCaught){
        std::string sql = "INSERT INTO CargoOwner (Email, Address, Name, Username, Password, MobileNumber) VALUES ('" +
                            email + "', '" + address + "', '" + name + "', '" + username + "', '" + password + "', '" +
                            phoneNumber + "')";

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
                }
                if (ErrorMessage.find("Username") != std::string::npos) {
                    QMessageBox::critical(nullptr, "Error","Username is already in use!");
                    email.clear();
                    address.clear();
                    name.clear();
                    username.clear();
                    password.clear();
                    phoneNumber.clear();
                }
                if (ErrorMessage.find("MobileNumber") != std::string::npos) {
                    QMessageBox::critical(nullptr, "Error","Phone number is already in use!");
                    email.clear();
                    address.clear();
                    name.clear();
                    username.clear();
                    password.clear();
                    phoneNumber.clear();
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

userRegistration::~userRegistration()
{
    delete ui;
}

void userRegistration::on_pushButton_6_clicked()
{
    bool signUpSuccess = CargoSignUp();
    if (signUpSuccess) {
        QMessageBox::information(nullptr, "Success","Sign Up Successful!");
        //to take the user to the mainwindow to login after registration
        this -> hide();
        MainWindow *mainWindow = new MainWindow();
        mainWindow->show();
    }
    else{
        QMessageBox::critical(nullptr, "Error","Sign Up Failed!");
        return;
    }
}

void userRegistration::on_pushButton_2_clicked()
{
    this -> hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}
