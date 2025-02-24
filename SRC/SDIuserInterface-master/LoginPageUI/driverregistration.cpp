#include "driverregistration.h"
#include "ui_driverregistration.h"
#include "mainwindow.h"
#include <sqlite3.h>
#include <regex>
#include <QtWidgets/QMessageBox>
#include <iostream>
#include "driverlogin.h"
#include "driverlogin.h"
#include <QFileDialog>
#include <QPixmap>
#include <QByteArray>
#include <QDebug>
#include <vector>
#include <cstdint>

driverRegistration::driverRegistration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::driverRegistration)
{
    ui->setupUi(this);
}

driverRegistration::~driverRegistration()
{
    delete ui;
}

//Selects an image for saving into the database for the driver
void driverRegistration::on_selectImage_clicked()
{
    // Open a file dialog for the user to select an image file
    QString imagePath = QFileDialog::getOpenFileName(this, tr("Open Image"), "", tr("Image Files (*.png *.jpg *.bmp *.jpeg)"));

    // If the user canceled the dialog or didn't select a file, return
    if (imagePath.isEmpty()) {
        return;
    }

    // Load the selected image file into a QPixmap and set it as the image for the imageLabel
    QPixmap pixmap(imagePath);
    ui->imageLabel->setPixmap(pixmap.scaled(ui->imageLabel->width(), ui->imageLabel->height(), Qt::KeepAspectRatio));

    // Store the image path in a member variable for later use
    selectedImagePath = imagePath;
}
//Function for DriverSignUp
bool driverRegistration::DriverSignUp() {
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
    std::string niNumber = ui->niNumberField->text().toStdString();
    std::string license = ui->idField->text().toStdString();
    std::string lorryReg = ui->lorryRegNoField->text().toStdString();
    std::string lorryLength = ui->lengthField->text().toStdString();
    std::string lorryWidth = ui->widthField->text().toStdString();
    std::string lorryHeight = ui->heightField->text().toStdString();
    std::string lorryWeight = ui->weightField->text().toStdString();
    std::string cpcNum = ui->cpcField->text().toStdString();

    std::regex email_regex("^([a-zA-Z0-9\\._]+)@([a-zA-Z0-9])+\\.([a-zA-Z]{2,})(\\.[a-zA-Z]{2,})?$");
    std::regex password_regex("^(?=.*[A-Z])(?=.*[0-9]).{6,}$");
    std::regex name_regex("^[a-zA-Z\\s]*$");
    std::regex ninumber_regex ("^[A-CEGHJ-PR-TW-Z]{1}[A-CEGHJ-NPR-TW-Z]{0,1}\\d{6}[A-D\\s]{0,1}$");
    std::regex lorryreg_regex ("^[A-Z]{2}\\d{2}[A-Z]{3}$");

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


    if (niNumber.empty()){
        QMessageBox::critical(nullptr, "Error","\nNI Number is required!");
        niNumber.clear();
        ErrorCaught = true;
    }

    if (!std::regex_match(niNumber, ninumber_regex)){
        QMessageBox::critical(nullptr, "Error","\nInvalid NI number format\nThe first letter must be A, B, C, D, E, F, G, or H, or one of the letters J, K, L, M, N, P, or Q, or one of the letters R, S, T, U, V, W, X, Y, or Z.\nThe second letter can be any letter except I, O, Q, U, or V.\nThe next 6 digits are numbers.\nThe last letter can be any letter except I, O, Q, or Z, or a space.");
        niNumber.clear();
        ErrorCaught = true;
    }


    if (license.empty()){
        QMessageBox::critical(nullptr, "Error","\nDriving license ID is required!");
        license.clear();
        ErrorCaught = true;
    }

    if (license.length() < 9 && license.length() > 16){
        QMessageBox::critical(nullptr, "Error","\nLicense be at least 9 to 16 digits long!");
        license.clear();
        ErrorCaught = true;
    }

    if (lorryReg.empty()){
        QMessageBox::critical(nullptr, "Error","\nLorry registration number is required!");
        lorryReg.clear();
        ErrorCaught = true;
    }

    if(!std::regex_match(lorryReg, lorryreg_regex)){
         QMessageBox::critical(nullptr, "Error", "\nThe lorry registration number consists of 7 characters.\nThe first 2 characters are uppercase letters.\nThe next 2 characters are digits.\nThe last 3 characters are uppercase letters.");
         lorryReg.clear();
         ErrorCaught = true;
    }

    //LORRY LENGTH
    if (lorryLength.empty()){
        QMessageBox::critical(nullptr, "Error","Lorry length cannot be empty!");
        lorryLength.clear();
        ErrorCaught = true;
    }

    int decimalCount = std::count(lorryLength.begin(), lorryLength.end(), '.');
    if (decimalCount > 1 || std::find_if(lorryLength.begin(), lorryLength.end(), [](char c) { return !std::isdigit(c) && c != '.'; }) != lorryLength.end()) {
        QMessageBox::critical(nullptr, "Error","\nLorry length only accepts numbers and one decimal point!");
        lorryLength.clear();
        ErrorCaught = true;
    }

    if (!lorryLength.empty()){
        float length = std::stof(lorryLength);
        if (length < 6 || length > 16.5) {
            QMessageBox::critical(nullptr, "Error","Lorry length must be between 6 and 16.5!");
            lorryLength.clear();
            ErrorCaught = true;
        }
    }

    //LORRY WIDTH
    if (lorryWidth.empty()){
        QMessageBox::critical(nullptr, "Error","Lorry width cannot be empty!");
        lorryWidth.clear();
        ErrorCaught = true;
    }

    decimalCount = std::count(lorryWidth.begin(), lorryWidth.end(), '.');
    if (decimalCount > 1 || std::find_if(lorryWidth.begin(), lorryWidth.end(), [](char c) { return !std::isdigit(c) && c != '.'; }) != lorryWidth.end()) {
        QMessageBox::critical(nullptr, "Error","\nLorry width only accepts numbers and one decimal point!");
        lorryWidth.clear();
        ErrorCaught = true;
    }

    if (!lorryWidth.empty()){
        float width = std::stof(lorryWidth);
        if (width < 2.4 || width > 2.9) {
            QMessageBox::critical(nullptr, "Error","Lorry width must be between 2.4 and 2.9!");
            lorryWidth.clear();
            ErrorCaught = true;
        }
    }

    //LORRY HEIGHT
    if (lorryHeight.empty()){
        QMessageBox::critical(nullptr, "Error","Lorry height cannot be empty!");
        lorryHeight.clear();
        ErrorCaught = true;
    }

    decimalCount = std::count(lorryHeight.begin(), lorryHeight.end(), '.');
    if (decimalCount > 1 || std::find_if(lorryHeight.begin(), lorryHeight.end(), [](char c) { return !std::isdigit(c) && c != '.'; }) != lorryHeight.end()) {
        QMessageBox::critical(nullptr, "Error","\nLorry height only accepts numbers and one decimal point!");
        lorryHeight.clear();
        ErrorCaught = true;
    }

    if (!lorryHeight.empty()){
        float height = std::stof(lorryHeight);
        if (height < 2.4 || height > 4.95) {
            QMessageBox::critical(nullptr, "Error","Lorry height must be between 2.4 and 4.95!");
            lorryHeight.clear();
            ErrorCaught = true;
        }
    }



    //LORRY WEIGHT
    if (lorryWeight.empty()){
        QMessageBox::critical(nullptr, "Error","Lorry weight cannot be empty!");
        lorryWeight.clear();
        ErrorCaught = true;
    }

    decimalCount = std::count(lorryWeight.begin(), lorryWeight.end(), '.');
    if (decimalCount > 1 || std::find_if(lorryWeight.begin(), lorryWeight.end(), [](char c) { return !std::isdigit(c) && c != '.'; }) != lorryWeight.end()) {
        QMessageBox::critical(nullptr, "Error","\nLorry weight only accepts numbers and one decimal point!");
        lorryWeight.clear();
        ErrorCaught = true;
    }

    if (!lorryWeight.empty()){
        float weight = std::stof(lorryWeight);
        if (weight < 400 || weight > 360000) {
            QMessageBox::critical(nullptr, "Error","Lorry weight must be between 400 and 360000!");
            lorryWeight.clear();
            ErrorCaught = true;
        }
    }


    if (cpcNum.empty()){
        QMessageBox::critical(nullptr, "Error","CPC Number cannot be empty");
        cpcNum.clear();
        ErrorCaught = true;
    }

    if (cpcNum.length() < 8) {
        QMessageBox::critical(nullptr, "Error","\nCPC number must be at least 8 digits long!");
        cpcNum.clear();
        ErrorCaught = true;
    }

    if (!std::all_of(cpcNum.begin(), cpcNum.end(), ::isdigit)) {
        QMessageBox::critical(nullptr, "Error","\nCPC number only accepts numbers!");
        cpcNum.clear();
        ErrorCaught = true;
    }

    std::string lorryType;

    if (ui->axle_2->isChecked()) {
        lorryType = "2 Axles";
    }
    else if (ui->axle_3->isChecked()) {
        lorryType = "3 Axles";
    }
    else if (ui->axle_4->isChecked()) {
        lorryType = "4 Axles";
    }
    else if (ui->axle_5->isChecked()) {
        lorryType = "5 Axles";
    }
    else if (ui->axle_6->isChecked()) {
        lorryType = "6 Axles";
    }
    else if (ui->axle_5_6->isChecked()) {
        lorryType = "5 or 6 Axles Artic";
    }
    else if (ui->axle_6_drawbar->isChecked()) {
        lorryType = "6 Axles Draw-bar";
    }
    else {
        QMessageBox::critical(nullptr, "Error", "Please select a vehicle type!");
        return false;
    }

    QFile file(selectedImagePath);
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::critical(nullptr, "Error", "Failed to open image file!");
        return false;
    }
    QByteArray imageData = file.readAll();
    file.close();

    // Insert the data into the database


    if (!ErrorCaught){
        std::string sql = "INSERT INTO Driver (Email, Address, Name, Username, Password, MobileNumber, NINumber, DrivingLicenseID, LorryType, LorryReg, LorryLength, LorryWidth, LorryHeight, LorryWeight, CPCNum, Image) VALUES ('" + email + "', '" + address + "', '" + name + "', '" + username + "', '" + password + "', '" + phoneNumber + "','" + niNumber + "', '" + license + "', '" + lorryType + "', '" + lorryReg + "', '" + lorryLength + "', '" + lorryWidth + "', '" + lorryHeight + "', '" + lorryWeight + "', '" + cpcNum + "', ?)";
        sqlite3_stmt* statement;
            if (sqlite3_prepare_v2(db, sql.c_str(), -1, &statement, NULL) != SQLITE_OK) {
                QMessageBox::critical(nullptr, "Error", "Failed to prepare SQL statement!");
                return false;
            }
            if (sqlite3_bind_blob(statement, 1, imageData.constData(), imageData.size(), SQLITE_TRANSIENT) != SQLITE_OK) {
                QMessageBox::critical(nullptr, "Error", "Failed to bind blob data to statement!");
                return false;
            }
            if (sqlite3_step(statement) != SQLITE_DONE) {
                QMessageBox::critical(nullptr, "Error", "Failed to insert data into database!");
                return false;
            }


        sqlite3_finalize(statement);

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
                    niNumber.clear();
                    license.clear();
                    lorryType.clear();
                    lorryReg.clear();
                    lorryLength.clear();
                    lorryWidth.clear();
                    lorryHeight.clear();
                    lorryWeight.clear();
                    cpcNum.clear();
                }
                if (ErrorMessage.find("Username") != std::string::npos) {
                    QMessageBox::critical(nullptr, "Error","Username is already in use!");
                    email.clear();
                    address.clear();
                    name.clear();
                    username.clear();
                    password.clear();
                    phoneNumber.clear();
                    niNumber.clear();
                    license.clear();
                    lorryType.clear();
                    lorryReg.clear();
                    lorryLength.clear();
                    lorryWidth.clear();
                    lorryHeight.clear();
                    lorryWeight.clear();
                    cpcNum.clear();
                }
                if (ErrorMessage.find("MobileNumber") != std::string::npos) {
                    QMessageBox::critical(nullptr, "Error","Phone number is already in use!");
                    email.clear();
                    address.clear();
                    name.clear();
                    username.clear();
                    password.clear();
                    phoneNumber.clear();
                    niNumber.clear();
                    license.clear();
                    lorryType.clear();
                    lorryReg.clear();
                    lorryLength.clear();
                    lorryWidth.clear();
                    lorryHeight.clear();
                    lorryWeight.clear();
                    cpcNum.clear();
                }
                if (ErrorMessage.find("DrivingLicenseID") != std::string::npos) {
                    QMessageBox::critical(nullptr, "Error","Driver's ID is already in use!");
                    email.clear();
                    address.clear();
                    name.clear();
                    username.clear();
                    password.clear();
                    phoneNumber.clear();
                    niNumber.clear();
                    license.clear();
                    lorryType.clear();
                    lorryReg.clear();
                    lorryLength.clear();
                    lorryWidth.clear();
                    lorryHeight.clear();
                    lorryWeight.clear();
                    cpcNum.clear();
                }
                if (ErrorMessage.find("NINumber") != std::string::npos) {
                    QMessageBox::critical(nullptr, "Error","National insurance number is already in use!");
                    email.clear();
                    address.clear();
                    name.clear();
                    username.clear();
                    password.clear();
                    phoneNumber.clear();
                    niNumber.clear();
                    license.clear();
                    lorryType.clear();
                    lorryReg.clear();
                    lorryLength.clear();
                    lorryWidth.clear();
                    lorryHeight.clear();;
                    lorryWeight.clear();
                    cpcNum.clear();
                }
                if (ErrorMessage.find("LorryReg") != std::string::npos) {
                    QMessageBox::critical(nullptr, "Error","Lorry registration number is already in use!");
                    email.clear();
                    address.clear();
                    name.clear();
                    username.clear();
                    password.clear();
                    phoneNumber.clear();
                    niNumber.clear();
                    license.clear();
                    lorryType.clear();
                    lorryReg.clear();
                    lorryLength.clear();
                    lorryWidth.clear();
                    lorryHeight.clear();
                    lorryWeight.clear();
                    cpcNum.clear();
                }
                if (ErrorMessage.find("CPCNum") != std::string::npos) {
                    QMessageBox::critical(nullptr, "Error","CPC number is already in use!");
                    email.clear();
                    address.clear();
                    name.clear();
                    username.clear();
                    password.clear();
                    phoneNumber.clear();
                    niNumber.clear();
                    license.clear();
                    lorryType.clear();
                    lorryReg.clear();
                    lorryLength.clear();
                    lorryWidth.clear();
                    lorryHeight.clear();
                    lorryWeight.clear();
                    cpcNum.clear();
                }
            }
            else {
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


void driverRegistration::on_pushButton_2_clicked()
{
    this -> hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

void driverRegistration::on_backButton_clicked()
{
    this -> hide();
    driverlogin login;
    login.setModal(true);
    login.exec();

}

void driverRegistration::on_pushButton_3_clicked(){
    bool signUpSuccess = DriverSignUp();
    if (signUpSuccess) {
        QMessageBox::information(nullptr, "Success","Sign Up Successful!");
        //To take driver to driverlogin
        this -> hide();
        driverlogin login;
        login.setModal(true);
        login.exec();

    }
    else{
        QMessageBox::critical(nullptr, "Error","Sign Up Failed!");
        return;
    }
}
