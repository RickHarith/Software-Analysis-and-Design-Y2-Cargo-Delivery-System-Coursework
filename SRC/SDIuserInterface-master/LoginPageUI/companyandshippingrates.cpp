#include "companyandshippingrates.h"
#include "ui_companyandshippingrates.h"
#include "companysmainpage.h"
#include <QMessageBox>
#include <sqlite3.h>
#include <QtWidgets>
#include <iostream>
#include <CompanySession.h>
#include <CompanyCommission.h>


//Initializes the companyandshippingrates dialog with the given parent and sets up the UI
companyandshippingrates::companyandshippingrates(QWidget *parent) :
QDialog(parent),
ui(new Ui::companyandshippingrates)
{
ui->setupUi(this);

// Adds a column to the table widget and sets its horizontal header items
ui->compOrderHistory->insertColumn(0);
ui->compOrderHistory->setHorizontalHeaderItem(0, new QTableWidgetItem());
ui->compOrderHistory->setColumnCount(7); // Increase column count to include the new column
ui->compOrderHistory->setHorizontalHeaderLabels({"", "Cargo Owner ID", "Order ID", "Item Name", "Destination", "Shipping Rate", "Total Fee"});

// Opens a connection to the SQLite database
sqlite3 *db;
char *errorMsg = nullptr;
int rc = sqlite3_open("../SDI TEST/Databases/Users.db", &db);
if (rc != SQLITE_OK) {
    // Prints an error message if the database fails to open
    std::cerr << "Error opening database: " << sqlite3_errmsg(db) << std::endl;
    sqlite3_close(db);
    return;
}
// Selects specific columns from the Orders table where the IsAccepted column is equal to 3 and the TransportID is equal to the logged-in company ID
std::string selectSql = "SELECT CargoOwnerID, OrderID, OrderName, OrderDestination, ShippingRates, FinalPrice FROM Orders WHERE IsAccepted = 3 AND TransportID = " + std::to_string(companysession.GetLoggedInID());
// Executes the SQL statement and calls the callback function for each row returned by the statement
rc = sqlite3_exec(db, selectSql.c_str(), callback, (void*)this, &errorMsg);
if (rc != SQLITE_OK) {
    // Prints an error message if the SQL statement fails to execute
    std::cerr << "Error executing SQL statement: " << errorMsg << std::endl;
    sqlite3_free(errorMsg);
    sqlite3_close(db);
    return;
}
// Closes the database connection
sqlite3_close(db);
}

//Callback function to populates the QWidgetTable
int companyandshippingrates::callback(void *data, int argc, char **argv, char **azColName){
    companyandshippingrates* page = (companyandshippingrates*)data;
    QTableWidget* compOrderHistory = page->ui->compOrderHistory;
    int row = compOrderHistory->rowCount();
    compOrderHistory->setRowCount(row + 1);

    // Create a checkbox in the first column
    QCheckBox *checkBox = new QCheckBox();
    checkBox->setCheckState(Qt::Unchecked);
    compOrderHistory->setCellWidget(row, 0, checkBox);

    // Set the rest of the items in the row
    for(int i=0; i<argc; i++){
        QTableWidgetItem *item = new QTableWidgetItem(QString(argv[i]));
        compOrderHistory->setItem(row, i+1, item);
    }

    // Connect the stateChanged signal of the checkbox to a slot
    checkBox = qobject_cast<QCheckBox*>(compOrderHistory->cellWidget(row, 0)); // Remove the type declaration here
    connect(checkBox, &QCheckBox::stateChanged, [=](int state) {
        if (state == Qt::Checked) {
            // Uncheck all other checkboxes
            for (int i = 0; i < compOrderHistory->rowCount(); i++) {
                if (i != row) {
                    QCheckBox *checkBox = qobject_cast<QCheckBox*>(compOrderHistory->cellWidget(i, 0));
                    if (checkBox->isChecked()) {
                        checkBox->setChecked(false);
                    }
                }
            }
            // Save the ID of the selected row
            page->selectedOrderId = compOrderHistory->item(row, 2)->text().toInt(); //When the checkbox is checked, the selectedOrderId grabs the value in that row's 3rd column and saves it
        }
    });
    return 0;
}


companyandshippingrates::~companyandshippingrates()
{
    delete ui;
}

void companyandshippingrates::on_calcCompanyCommissionButton_clicked()
{
    if (selectedOrderId == -1) {
        // Show an error message if no order is selected
        QMessageBox::warning(this, "Error", "Please select an order to calculate the commission for.");
        return;
    }

    // Create an OrderDatabase object to handle database operations
    CompanyCommission companycommission;

    // Retrieve the final price for the selected order
    double finalPrice = companycommission.getFinalPrice(selectedOrderId);

    // Calculate the commission and display it
    double commission = finalPrice * 0.1;
    ui->commissionField->setText("£" + QString::number(commission, 'f', 2));
}




void companyandshippingrates::on_viewFeedbackButton_clicked() {
    if (selectedOrderId == -1) {
        // Show an error message if no order is selected
        QMessageBox::warning(this, "Error", "Please select an order to view feedback for.");
        return;
    }

    sqlite3 *db;
    char *errMsg = nullptr;
    int rc = sqlite3_open("../SDI TEST/Databases/Users.db", &db);

    if (rc != SQLITE_OK) {
        qDebug() << "Error opening database: " << sqlite3_errmsg(db);
        sqlite3_close(db);
        return;
    }

    std::string selectSql = "SELECT COFeedback FROM Orders WHERE OrderID = " + std::to_string(selectedOrderId);
    std::string feedback;

    rc = sqlite3_exec(db, selectSql.c_str(), [](void *data, int argc, char **argv, char **azColName) -> int {
            // Retrieve the COFeedback data
            std::string* feedback = reinterpret_cast<std::string*>(data);
            if (argc > 0 && argv[0] != nullptr) {
                *feedback = argv[0];
            }
            return 0;
        }, &feedback, &errMsg);


    if (rc != SQLITE_OK) {
        qDebug() << "Error executing SELECT statement: " << errMsg;
        sqlite3_free(errMsg);
    }

    sqlite3_close(db);

    ui->viewFeedbackField->setText(QString::fromStdString(feedback));
}

void companyandshippingrates::on_BackButton_clicked()
{
  this ->hide(); //Hides the current window and executes a new window instance for the next page
  companysMainPage rates;
  rates.setModal(true);
  rates.exec();
}


void companyandshippingrates::on_viewFeedbackButton_2_clicked()
{
    // Check if an order is selected
    if (selectedOrderId == -1) {
        // Show an error message if no order is selected
        QMessageBox::warning(this, "Error", "Please select an order to view feedback for.");
        return;
    }

    sqlite3 *db;
    char *errMsg = nullptr;

    // Open the database
    int rc = sqlite3_open("../SDI TEST/Databases/Users.db", &db);

    // Check if the database was opened successfully
    if (rc != SQLITE_OK) {
        qDebug() << "Error opening database: " << sqlite3_errmsg(db);
        sqlite3_close(db);
        return;
    }

    // Build the SELECT statement to retrieve feedback for the selected order
    std::string selectSql = "SELECT DFeedback FROM Orders WHERE OrderID = " + std::to_string(selectedOrderId);
    std::string feedback;

    // Execute the SELECT statement and retrieve the feedback (if any)
    rc = sqlite3_exec(db, selectSql.c_str(), [](void *data, int argc, char **argv, char **azColName) -> int {
            // Retrieve the COFeedback data
            std::string* feedback = reinterpret_cast<std::string*>(data);
            if (argc > 0 && argv[0] != nullptr) {
                *feedback = argv[0];
            }
            return 0;
        }, &feedback, &errMsg);

    // Check if the SELECT statement was executed successfully
    if (rc != SQLITE_OK) {
        qDebug() << "Error executing SELECT statement: " << errMsg;
        sqlite3_free(errMsg);
    }

    // Close the database
    sqlite3_close(db);

    // Display the feedback (if any) in the viewFeedbackField_2 widget
    ui->viewFeedbackField_2->setText(QString::fromStdString(feedback));
}

