#include "driveracceptedorders.h"
#include "ui_driveracceptedorders.h"
#include <QMessageBox>
#include <sqlite3.h>
#include <string>
#include <iostream>
#include "DriverSession.h"
#include <QtWidgets>
#include "drivermainpage.h"


//This code below displays all the orders that the driver accepted, they can change the status of the delivery
driveracceptedorders::driveracceptedorders(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::driveracceptedorders)
{
    ui->setupUi(this);

    ui->acceptedOrders->insertColumn(0);
    ui->acceptedOrders->setHorizontalHeaderItem(0, new QTableWidgetItem());
    ui->acceptedOrders->setColumnCount(12); // Increase column count to include the new column
    ui->acceptedOrders->setHorizontalHeaderLabels({"","Company", "Order Status", "Order ID","Customer Name","Customer H/P", "Item Name", "Distance", "Destination", "Item Condition", "Shipping Rate", "Fee"});

    // Add code here to show user information in the table widget
    sqlite3 *db;
    char *errorMsg = nullptr;
    int rc = sqlite3_open("../SDI TEST/Databases/Users.db", &db);
    if (rc != SQLITE_OK) {
        std::cerr << "Error opening database: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_close(db);
        return;
    }
    std::string selectSql = "SELECT TransportationCompany.CompanyName, Orders.OrderStatus, Orders.OrderID, CargoOwner.Name, CargoOwner.MobileNumber, Orders.OrderName, Orders.OrderDistance, Orders.OrderDestination, Orders.OrderCondition, Orders.ShippingRates, Orders.FinalPrice "
                            "FROM CargoOwner "
                            "JOIN Orders ON CargoOwner.CargoOwnerID = Orders.CargoOwnerID "
                            "JOIN TransportationCompany ON Orders.TransportID = TransportationCompany.TransportID "
                            "WHERE Orders.IsAccepted = 2 AND Orders.DriverID = " + std::to_string(driversession.GetLoggedInID());

    rc = sqlite3_exec(db, selectSql.c_str(), callback, (void*)this, &errorMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "Error executing SQL statement: " << errorMsg << std::endl;
        sqlite3_free(errorMsg);
        sqlite3_close(db);
        return;
    }
    sqlite3_close(db);
}


//Callback function that creates a checkbox for the driver to select an order
int driveracceptedorders::callback(void *data, int argc, char **argv, char **azColName){
    driveracceptedorders* page = (driveracceptedorders*)data;
    QTableWidget* acceptedOrders = page->ui->acceptedOrders;
    int row = acceptedOrders->rowCount();
    acceptedOrders->setRowCount(row + 1);

    // Create a checkbox in the first column
    QCheckBox *checkBox = new QCheckBox();
    checkBox->setCheckState(Qt::Unchecked);
    acceptedOrders->setCellWidget(row, 0, checkBox);

    // Set the rest of the items in the row
    for(int i=0; i<argc; i++){
        QTableWidgetItem *item = new QTableWidgetItem(QString(argv[i]));
        acceptedOrders->setItem(row, i+1, item);
    }

    // Connect the stateChanged signal of the checkbox to a slot
    checkBox = qobject_cast<QCheckBox*>(acceptedOrders->cellWidget(row, 0)); // Remove the type declaration here
    connect(checkBox, &QCheckBox::stateChanged, [=](int state) {
        if (state == Qt::Checked) {
            // Uncheck all other checkboxes
            for (int i = 0; i < acceptedOrders->rowCount(); i++) {
                if (i != row) {
                    QCheckBox *checkBox = qobject_cast<QCheckBox*>(acceptedOrders->cellWidget(i, 0));
                    if (checkBox->isChecked()) {
                        checkBox->setChecked(false);
                    }
                }
            }
            // Save the ID of the selected row
            page->selectedOrderId = acceptedOrders->item(row, 3)->text().toInt();
            qDebug() << "Selected Order ID: " << page->selectedOrderId;
        }
    });
    return 0;
}

driveracceptedorders::~driveracceptedorders()
{
    delete ui;
}

//Changes the status of the order to On Road
void driveracceptedorders::on_onRoadButton_clicked() {
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
        rc = sqlite3_prepare_v2(db, "UPDATE Orders SET OrderStatus = 'On Road' WHERE OrderID = ?;", -1, &stmt, &tail);
        if (rc != SQLITE_OK) {
            sqlite3_finalize(stmt);
            QMessageBox::critical(nullptr, "Error","Error preparing query.");
            return;
        }

        // Bind the parameter to the query
        sqlite3_bind_int(stmt, 1, selectedOrderId);

        // Execute the query
        rc = sqlite3_step(stmt);
        if (rc != SQLITE_DONE) {
            sqlite3_finalize(stmt);
            QMessageBox::critical(nullptr, "Error","Error updating database.");
            return;
        }
        sqlite3_finalize(stmt);

        QMessageBox::information(nullptr, "Success","Order on the road.");
        // Close the database connection
        sqlite3_close(db);
        this -> hide();
        driveracceptedorders mainpage;
        mainpage.setModal(true);
        mainpage.exec();

    }
    else{
        QMessageBox::critical(nullptr, "Error","No order selected.");
        return;
    }
}


//Changes the order status to delivered
void driveracceptedorders::on_deliveredButton_clicked() {
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
        rc = sqlite3_prepare_v2(db, "UPDATE Orders SET OrderStatus = 'Delivered', isAccepted = 3 WHERE OrderID = ?;", -1, &stmt, &tail);
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

        QMessageBox::information(nullptr, "Success","Order delivered.");
        // Close the database connection
        sqlite3_close(db);
        this -> hide();
        driveracceptedorders mainpage;
        mainpage.setModal(true);
        mainpage.exec();
    }
}

void driveracceptedorders::on_backButton_clicked(){
    this -> hide();
    drivermainpage status;
    status.setModal(true);
    status.exec();
}
