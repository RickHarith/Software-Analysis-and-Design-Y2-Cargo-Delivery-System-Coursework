#include "drivermainpage.h"
#include "ui_drivermainpage.h"
#include "drivereditdetails.h"
#include "driveracceptedorders.h"
#include "mainwindow.h"
#include "viewdriverdetails.h"
#include <QMessageBox>
#include <sqlite3.h>
#include <string>
#include <iostream>
#include "DriverSession.h"
#include <QtWidgets>
#include <driverorderhistory.h>


//Displays all orders sent by the the compan
drivermainpage::drivermainpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::drivermainpage)
{
    ui->setupUi(this);

    ui->driverOrderTable->insertColumn(0);
    ui->driverOrderTable->setHorizontalHeaderItem(0, new QTableWidgetItem());
    ui->driverOrderTable->setColumnCount(14); // Increase column count to include the new column
    ui->driverOrderTable->setHorizontalHeaderLabels({"","Company", "Order ID","Customer Name","Customer H/P", "Item Name", "Distance", "Destination", "Length", "Width", "Height", "Weight", "Item Condition", "Shipping Rate"});

    // Add code here to show user information in the table widget
    sqlite3 *db;
    char *errorMsg = nullptr;
    int rc = sqlite3_open("../SDI TEST/Databases/Users.db", &db);
    if (rc != SQLITE_OK) {
        std::cerr << "Error opening database: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_close(db);
        return;
    }
    std::string selectSql = "SELECT TransportationCompany.CompanyName, Orders.OrderID, CargoOwner.Name, CargoOwner.MobileNumber, Orders.OrderName, Orders.OrderDistance, Orders.OrderDestination, Orders.OrderLength, Orders.OrderWidth, Orders.OrderHeight, Orders.OrderWeight, Orders.OrderCondition, Orders.ShippingRates "
                            "FROM CargoOwner "
                            "JOIN Orders ON CargoOwner.CargoOwnerID = Orders.CargoOwnerID "
                            "JOIN TransportationCompany ON Orders.TransportID = TransportationCompany.TransportID "
                            "WHERE Orders.IsAccepted = 1 AND Orders.DriverID = " + std::to_string(driversession.GetLoggedInID());

    rc = sqlite3_exec(db, selectSql.c_str(), callback, (void*)this, &errorMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "Error executing SQL statement: " << errorMsg << std::endl;
        sqlite3_free(errorMsg);
        sqlite3_close(db);
        return;
    }
    sqlite3_close(db);
}

int drivermainpage::callback(void *data, int argc, char **argv, char **azColName){
    drivermainpage* page = (drivermainpage*)data;
    QTableWidget* driverOrderTable = page->ui->driverOrderTable;
    int row = driverOrderTable->rowCount();
    driverOrderTable->setRowCount(row + 1);

    // Create a checkbox in the first column
    QCheckBox *checkBox = new QCheckBox();
    checkBox->setCheckState(Qt::Unchecked);
    driverOrderTable->setCellWidget(row, 0, checkBox);

    // Set the rest of the items in the row
    for(int i=0; i<argc; i++){
        QTableWidgetItem *item = new QTableWidgetItem(QString(argv[i]));
        driverOrderTable->setItem(row, i+1, item);
    }

    // Connect the stateChanged signal of the checkbox to a slot
    checkBox = qobject_cast<QCheckBox*>(driverOrderTable->cellWidget(row, 0)); // Remove the type declaration here
    connect(checkBox, &QCheckBox::stateChanged, [=](int state) {
        if (state == Qt::Checked) {
            // Uncheck all other checkboxes
            for (int i = 0; i < driverOrderTable->rowCount(); i++) {
                if (i != row) {
                    QCheckBox *checkBox = qobject_cast<QCheckBox*>(driverOrderTable->cellWidget(i, 0));
                    if (checkBox->isChecked()) {
                        checkBox->setChecked(false);
                    }
                }
            }
            // Save the ID of the selected row
            page->selectedOrderId = driverOrderTable->item(row, 2)->text().toInt();
            qDebug() << "Selected Order ID: " << page->selectedOrderId;
        }
    });
    return 0;
}


drivermainpage::~drivermainpage()
{
    delete ui;
}


//This code changes a value in a column to determine if the driver accepts the order, on button clicked, the driver accepts the order
void drivermainpage::on_acceptOrderButton_clicked() {
    if (selectedOrderId != -1) {
        // Connect to the database
        sqlite3* db;
        int rc = sqlite3_open("../SDI TEST/Databases/Users.db", &db);
        if (rc != SQLITE_OK) {
            QMessageBox::critical(nullptr, "Error","Error opening database.");
            return;
        }

        // Prepare the parameterized query to fetch the required information from the Driver table
        sqlite3_stmt* stmt1;
        const char* tail;
        rc = sqlite3_prepare_v2(db, "SELECT Orders.ShippingRates, Driver.LorryWeight, Driver.LorryLength, Driver.LorryWidth, Driver.LorryHeight FROM Orders JOIN Driver ON Orders.DriverID = Driver.DriverID WHERE Orders.OrderID = ?", -1, &stmt1, &tail);
        sqlite3_bind_int(stmt1, 1, selectedOrderId);
        if (rc != SQLITE_OK) {
            sqlite3_finalize(stmt1);
            QMessageBox::critical(nullptr, "Error","Error preparing query.");
            return;
        }

        // Bind the parameter to the query
        sqlite3_bind_int(stmt1, 1, selectedOrderId);

        // Execute the query
        rc = sqlite3_step(stmt1);
        if (rc != SQLITE_ROW) {
            sqlite3_finalize(stmt1);
            QMessageBox::critical(nullptr, "Error","Error fetching data from database.");
            return;
        }

        // Retrieve the values from the query result
        double ShippingRates = sqlite3_column_double(stmt1, 0);
        double LorryWeight = sqlite3_column_double(stmt1, 1);
        double LorryLength = sqlite3_column_double(stmt1, 2);
        double LorryWidth = sqlite3_column_double(stmt1, 3);
        double LorryHeight = sqlite3_column_double(stmt1, 4);
        sqlite3_finalize(stmt1);

        // Calculate the final price
        double FinalPrice = ShippingRates * 2 + LorryWeight * 0.01 + LorryLength * 0.001 + LorryWidth * 0.05 + LorryHeight * 0.01 + ShippingRates * 0.01;

        // Prepare the parameterized query to update the Orders table with the final price
        sqlite3_stmt* stmt2;
        rc = sqlite3_prepare_v2(db, "UPDATE Orders SET isAccepted = 2, OrderStatus = 'Loading', FinalPrice = ? WHERE OrderID = ?;", -1, &stmt2, &tail);
        if (rc != SQLITE_OK) {
            sqlite3_finalize(stmt2);
            QMessageBox::critical(nullptr, "Error","Error preparing query.");
            return;
        }

        // Bind the parameters to the query
        sqlite3_bind_double(stmt2, 1, FinalPrice);
        sqlite3_bind_int(stmt2, 2, selectedOrderId);

        // Execute the query
        rc = sqlite3_step(stmt2);
        if (rc != SQLITE_DONE) {
            sqlite3_finalize(stmt2);
            QMessageBox::critical(nullptr, "Error","Error updating database.");
            return;
        }
        sqlite3_finalize(stmt2);

        QMessageBox::information(nullptr, "Success","Order Accepted.");
        // Close the database connection
        sqlite3_close(db);
        this -> hide();
        drivermainpage mainpage;
        mainpage.setModal(true);
        mainpage.exec();

    }
    else{
        QMessageBox::critical(nullptr, "Error","No order selected.");
        return;
    }
}


//Code that rejects the order
void drivermainpage::on_rejectOrderButton_clicked() {
    if (selectedOrderId != -1) {
        // Connect to the database
        sqlite3* db;
        int rc = sqlite3_open("../SDI TEST/Databases/Users.db", &db);
        if (rc != SQLITE_OK) {
            QMessageBox::critical(nullptr, "Error","Error opening database.");
            return;
        }

        // Prepare the parameterized query
        sqlite3_stmt* stmt;
        const char* tail;
        rc = sqlite3_prepare_v2(db, "UPDATE Orders SET TransportID = NULL, DriverID = NULL, isAccepted = 0 WHERE OrderID = ?;", -1, &stmt, &tail);
        if (rc != SQLITE_OK) {
            QMessageBox::critical(nullptr, "Error","Error preparing query.");
            return;
        }

        // Bind the parameter
        sqlite3_bind_int(stmt, 1, selectedOrderId);

        // Execute the query
        rc = sqlite3_step(stmt);
        if (rc != SQLITE_DONE) {
            QMessageBox::critical(nullptr, "Error","Error executing query.");
            return;
        }

        // Finalize the statement
        sqlite3_finalize(stmt);

        QMessageBox::information(nullptr, "Success","Order Rejected.");
        // Close the database connection
        sqlite3_close(db);
        this -> hide();
        drivermainpage mainpage;
        mainpage.setModal(true);
        mainpage.exec();
    }
    else{
        QMessageBox::critical(nullptr, "Error","No order selected.");
        return;
    }
}


void drivermainpage::on_editDetailsButton_clicked()
{
    this -> hide();
    drivereditdetails details;
    details.setModal(true);
    details.exec();
}


//Logs out the user by resetting the value within the driversession object of DriverSession.h
void drivermainpage::on_logoutButton_clicked()
{
    driversession.SetIsLoggedIn(false);
    driversession.SetLoggedInID(-1);
    QMessageBox::information(nullptr, "Success", "You have been logged out successfully!");
    this -> hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}
//Goes to view details page
void drivermainpage::on_viewDetailsButton_clicked()
{
    this -> hide();
    viewdriverdetails view;
    view.setModal(true);
    view.exec();
}
//Goes to view orders page
void drivermainpage::on_viewAOrdersButton_clicked()
{
    this -> hide();
    driveracceptedorders details;
    details.setModal(true);
    details.exec();
}

//Goes to shipment orders page
void drivermainpage::on_viewSHButton_clicked()
{
    this -> hide();
    driverorderhistory details;
    details.setModal(true);
    details.exec();
}
