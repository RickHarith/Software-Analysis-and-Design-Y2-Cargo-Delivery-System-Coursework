#include "viewdriverdetails.h"
#include "ui_viewdriverdetails.h"
#include "drivermainpage.h"
#include <QMessageBox>
#include <sqlite3.h>
#include <string>
#include <iostream>
#include "DriverSession.h"
#include <QtWidgets>
#include <regex>
#include <QPixmap>


//Function to view driver details
viewdriverdetails::viewdriverdetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewdriverdetails)
{
    ui->setupUi(this);
    ui->driverInfoTable->setColumnCount(16);
    ui->driverInfoTable->setHorizontalHeaderLabels({"Email", "Address", "Name", "Username", "Password", "MobileNumber", "NINumber", "DrivingLicenseID", "LorryType", "LorryReg", "LorryLength", "LorryWidth", "LorryHeight", "LorryWeight", "CPCNum", "Image"});

    sqlite3 *db;
    char *errorMsg = nullptr;
    int rc = sqlite3_open("../SDI TEST/Databases/Users.db", &db);
    if (rc != SQLITE_OK) {
        std::cerr << "Error opening database: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_close(db);
        return;
    }
    std::string selectSql = "SELECT Email, Address, Name, Username, Password, MobileNumber, NINumber, DrivingLicenseID, LorryType, LorryReg, LorryLength, LorryWidth, LorryHeight, LorryWeight, CPCNum, Image FROM Driver WHERE DriverID = " + std::to_string(driversession.GetLoggedInID()) + ";";
    rc = sqlite3_exec(db, selectSql.c_str(), callback, (void*)ui->driverInfoTable, &errorMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "Error executing SQL statement: " << errorMsg << std::endl;
        sqlite3_free(errorMsg);
        sqlite3_close(db);
        return;
    }
    sqlite3_close(db);

    // Add code here to show the user's image in the imageLabel
    sqlite3 *dbImage;
    rc = sqlite3_open("../SDI TEST/Databases/Users.db", &dbImage);
    if (rc != SQLITE_OK) {
        std::cerr << "Error opening database: " << sqlite3_errmsg(dbImage) << std::endl;
        sqlite3_close(dbImage);
        return;
    }
    std::string selectImageSql = "SELECT Image FROM Driver WHERE DriverID = " + std::to_string(driversession.GetLoggedInID()) + ";";
    sqlite3_stmt *stmt;
    rc = sqlite3_prepare_v2(dbImage, selectImageSql.c_str(), -1, &stmt, NULL);
    if (rc != SQLITE_OK) {
        std::cerr << "Error preparing SQL statement: " << sqlite3_errmsg(dbImage) << std::endl;
        sqlite3_close(dbImage);
        return;
    }
    rc = sqlite3_step(stmt);
    if (rc != SQLITE_ROW) {
        std::cerr << "Error getting image from database" << std::endl;
        sqlite3_finalize(stmt);
        sqlite3_close(dbImage);
        return;
    }
    const void *imageBlob = sqlite3_column_blob(stmt, 0);
    int imageSize = sqlite3_column_bytes(stmt, 0);
    QByteArray imageData(reinterpret_cast<const char*>(imageBlob), imageSize);
    QPixmap image;
    image.loadFromData(imageData);
    ui->imageLabel->setPixmap(image);
    sqlite3_finalize(stmt);
    sqlite3_close(dbImage);
}

int viewdriverdetails::callback(void *data, int argc, char **argv, char **azColName){
    QTableWidget* driverInfoTable = (QTableWidget*)data;
    driverInfoTable->setRowCount(1);
    for(int i=0; i<argc; i++){
        QTableWidgetItem *item = new QTableWidgetItem(QString(argv[i]));
        driverInfoTable->setItem(0, i, item);
    }
    return 0;
}

viewdriverdetails::~viewdriverdetails()
{
    delete ui;
}

void viewdriverdetails::on_backButton_clicked()
{
    this -> hide ();
    drivermainpage main;
    main.setModal(true);
    main.exec();
}
