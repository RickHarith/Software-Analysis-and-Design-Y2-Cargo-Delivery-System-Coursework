#include "companysmainpage.h"
#include "ui_companysmainpage.h"
#include "companyandshippingrates.h"
#include "companyorder.h"
#include "companyregistration.h"
#include "companylogin.h"
#include <QMessageBox>
#include <sqlite3.h>
#include <QtWidgets>
#include <iostream>


companysMainPage::companysMainPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::companysMainPage)
{
    // Setup the UI
    ui->setupUi(this);

    // Add a new column to the table widget
    ui->clientOrdersTable->insertColumn(0);

    // Set the horizontal header item for the first column
    ui->clientOrdersTable->setHorizontalHeaderItem(0, new QTableWidgetItem());

    // Increase the column count to include the new column
    ui->clientOrdersTable->setColumnCount(6);

    // Set the horizontal header labels for the table widget
    ui->clientOrdersTable->setHorizontalHeaderLabels({"", "Cargo Owner ID", "Order ID", "Item Name", "Destination", "Shipping Rate"});

    // Open the database
    sqlite3 *db;
    char *errorMsg = nullptr;
    int rc = sqlite3_open("../SDI TEST/Databases/Users.db", &db);
    if (rc != SQLITE_OK) {
        // Print an error message if the database failed to open
        std::cerr << "Error opening database: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_close(db);
        return;
    }

    // Select the required data from the database and execute the query
    std::string selectSql = "SELECT CargoOwnerID, OrderID, OrderName, OrderDestination, ShippingRates FROM Orders WHERE IsAccepted = 0";
    rc = sqlite3_exec(db, selectSql.c_str(), callback, (void*)this, &errorMsg);
    if (rc != SQLITE_OK) {
        // Print an error message if the query failed to execute
        std::cerr << "Error executing SQL statement: " << errorMsg << std::endl;
        sqlite3_free(errorMsg);
        sqlite3_close(db);
        return;
    }

    // Close the database
    sqlite3_close(db);
}


// This is a static callback function used to populate the QTableWidget with data from a SQLite database
int companysMainPage::callback(void *data, int argc, char **argv, char **azColName){

// Cast the data pointer to a companysMainPage* object and retrieve the QTableWidget instance
companysMainPage* page = (companysMainPage*)data;
QTableWidget* clientOrdersTable = page->ui->clientOrdersTable;

// Add a new row to the QTableWidget
int row = clientOrdersTable->rowCount();
clientOrdersTable->setRowCount(row + 1);

// Create a checkbox in the first column of the new row
QCheckBox *checkBox = new QCheckBox();
checkBox->setCheckState(Qt::Unchecked);
clientOrdersTable->setCellWidget(row, 0, checkBox);

// Set the rest of the items in the row using data from the SQLite database
for(int i=0; i<argc; i++){
    QTableWidgetItem *item = new QTableWidgetItem(QString(argv[i]));
    clientOrdersTable->setItem(row, i+1, item);
}

// Connect the stateChanged signal of the checkbox to a lambda slot
checkBox = qobject_cast<QCheckBox*>(clientOrdersTable->cellWidget(row, 0)); // Remove the type declaration here
connect(checkBox, &QCheckBox::stateChanged, [=](int state) {

    // When the checkbox state changes to Checked, uncheck all other checkboxes and save the ID of the selected row
    if (state == Qt::Checked) {
        for (int i = 0; i < clientOrdersTable->rowCount(); i++) {
            if (i != row) {
                QCheckBox *checkBox = qobject_cast<QCheckBox*>(clientOrdersTable->cellWidget(i, 0));
                if (checkBox->isChecked()) {
                    checkBox->setChecked(false);
                }
            }
        }
        page->selectedOrderId = clientOrdersTable->item(row, 2)->text().toInt();
    }
});
return 0;
}



companysMainPage::~companysMainPage()
{
    delete ui;
}

void companysMainPage::on_assignDriverButton_clicked()
{

    if (selectedOrderId == -1) {
        QMessageBox::warning(this, "No Order Selected", "Please select an order to assign to a driver.");
        return;
    }

    // Create a new companyorder object
    companyorder *order = new companyorder(this);

    // Show the companyorder dialog
    order->setModal(true);
    order->exec();

    // Delete the order object when the dialog is closed
    delete order;

}

void companysMainPage::on_calculateOrderButton_clicked()
{
    this -> hide();
    companyandshippingrates rates;
    rates.setModal(true);
    rates.exec();
}



void companysMainPage::on_LogoutButton_clicked()
{
    companysession.SetIsLoggedIn(false);
    companysession.SetLoggedInID(-1);
    QMessageBox::information(nullptr, "Success", "You have been logged out successfully!");
    this -> hide();
    companylogin roles;
    roles.setModal(true);
    roles.exec();
}

