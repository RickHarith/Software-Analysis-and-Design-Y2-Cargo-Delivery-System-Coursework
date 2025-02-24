#include "customeroderstatus.h"
#include "ui_customeroderstatus.h"
#include "mainwindow.h"
#include "userregistration.h"
#include "customereditandview.h"
#include "UserSession.h"
#include <iostream>
#include <QMessageBox>
#include "customerorderpage.h"
#include <sqlite3.h>
#include <QtWidgets>
#include "customercompletedorder.h"

//This page is the main customer page where their orders are displayed
customeroderstatus::customeroderstatus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customeroderstatus)
{
    ui->setupUi(this);

    // Set the number of columns in the table to 4 and set the horizontal header labels
    ui->orderViewTable->setColumnCount(4);
    ui->orderViewTable->setHorizontalHeaderLabels({"Item Name", "Destination", "Shipping Rate", "Order Status", "Final Price"});

    // Open a connection to the database
    sqlite3 *db;
    char *errorMsg = nullptr;
    int rc = sqlite3_open("../SDI TEST/Databases/Users.db", &db);
    if (rc != SQLITE_OK) {
        // If there is an error opening the database, print an error message and return
        std::cerr << "Error opening database: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_close(db);
        return;
    }

    // Construct an SQL query to retrieve orders from the database
    std::string selectSql = "SELECT OrderName, OrderDestination, ShippingRates, OrderStatus, FinalPrice FROM Orders WHERE CargoOwnerID = " + std::to_string(usersession.GetLoggedInID()) + " AND IsAccepted BETWEEN 0 AND 2;";

    // Execute the SQL query and pass the table as a void pointer to the callback function
    rc = sqlite3_exec(db, selectSql.c_str(), callback, (void*)ui->orderViewTable, &errorMsg);
    if (rc != SQLITE_OK) {
        // If there is an error executing the SQL statement, print an error message and return
        std::cerr << "Error executing SQL statement: " << errorMsg << std::endl;
        sqlite3_free(errorMsg);
        sqlite3_close(db);
        return;
    }

    // Close the database connection
    sqlite3_close(db);
}


int customeroderstatus::callback(void *data, int argc, char **argv, char **azColName){
    // Cast the void* data pointer back to QTableWidget pointer
    QTableWidget* orderViewTable = (QTableWidget*)data;

    // Get the current row count and increment it by 1
    int row = orderViewTable->rowCount();
    orderViewTable->setRowCount(row + 1);

    // Loop through each column and create a new QTableWidgetItem with the data
    for(int i=0; i<argc; i++){
        QTableWidgetItem *item = new QTableWidgetItem(QString(argv[i]));
        orderViewTable->setItem(row, i, item);
    }

    // Return 0 to indicate success
    return 0;
}



customeroderstatus::~customeroderstatus()
{
    delete ui;
}

void customeroderstatus::on_makeOrderButton_clicked(){
    this -> hide();
    CustomerOrderPage status;
    status.setModal(true);
    status.exec();
}

void customeroderstatus::on_logoutButton_clicked()
{
    usersession.SetIsLoggedIn(false);
    usersession.SetLoggedInID(-1);
    std::cout << "IsLoggedIn: " << usersession.GetIsLoggedIn() << std::endl;
    std::cout << "LoggedInID: " << usersession.GetLoggedInID() << std::endl;
    QMessageBox::information(nullptr, "Success", "You have been logged out successfully!");
    this -> hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

void customeroderstatus::on_editDetailsButton_clicked()
{
    this -> hide();
    customereditandview roles;
    roles.setModal(true);
    roles.exec();
}


void customeroderstatus::on_viewCompletedButton_clicked()
{
    this -> hide();
    customercompletedorder roles;
    roles.setModal(true);
    roles.exec();
}


