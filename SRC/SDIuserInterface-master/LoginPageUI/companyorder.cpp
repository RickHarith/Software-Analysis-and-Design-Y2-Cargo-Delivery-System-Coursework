#include "companyorder.h"
#include "ui_companyorder.h"
#include "companysmainpage.h"
#include <QMessageBox>
#include <sqlite3.h>
#include <QtWidgets>
#include <iostream>
#include "companysmainpage.h"
#include <CompanySession.h>


companyorder::companyorder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::companyorder)
{
    ui->setupUi(this);

    // Insert a new column for the table widget to show order status
    ui->driverViewTable->insertColumn(0);
    ui->driverViewTable->setHorizontalHeaderItem(0, new QTableWidgetItem());
    ui->driverViewTable->setColumnCount(4); // Increase column count to include the new column
    ui->driverViewTable->setHorizontalHeaderLabels({"", "Driver ID", "Driver Name", "Mobile Number"});

    // Open the Users database and query for the list of drivers
    sqlite3 *db;
    char *errorMsg = nullptr;
    int rc = sqlite3_open("../SDI TEST/Databases/Users.db", &db);
    if (rc != SQLITE_OK) {
        std::cerr << "Error opening database: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_close(db);
        return;
    }

    // Construct SQL statement to select driver information
    std::string selectSql = "SELECT DriverID, Name, MobileNumber FROM Driver";

    // Execute the SQL statement and pass the result to the callback function
    rc = sqlite3_exec(db, selectSql.c_str(), callback, (void*)this, &errorMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "Error executing SQL statement: " << errorMsg << std::endl;
        sqlite3_free(errorMsg);
        sqlite3_close(db);
        return;
    }

    // Close the database connection
    sqlite3_close(db);

}


int companyorder::callback(void *data, int argc, char **argv, char **azColName) {
    // Cast the void pointer data back to the companyorder pointer type
    companyorder* page = (companyorder*)data;

    // Get the pointer to the QTableWidget object of the current page
    QTableWidget* driverViewTable = page->ui->driverViewTable;

    // Get the current row count and add a new row
    int row = driverViewTable->rowCount();
    driverViewTable->setRowCount(row + 1);

    // Create a new checkbox object and set it in the first column of the new row
    QCheckBox *checkBox = new QCheckBox();
    checkBox->setCheckState(Qt::Unchecked);
    driverViewTable->setCellWidget(row, 0, checkBox);

    // Set the rest of the items in the row using the argument values passed from the SELECT query
    for(int i=0; i<argc; i++){
        QTableWidgetItem *item = new QTableWidgetItem(QString(argv[i]));
        driverViewTable->setItem(row, i+1, item);
    }

    // Connect the stateChanged signal of the checkbox to a slot
    checkBox = qobject_cast<QCheckBox*>(driverViewTable->cellWidget(row, 0));
    connect(checkBox, &QCheckBox::stateChanged, [=](int state) {
        if (state == Qt::Checked) {
            // Uncheck all other checkboxes except for the current row
            for (int i = 0; i < driverViewTable->rowCount(); i++) {
                if (i != row) {
                    QCheckBox *checkBox = qobject_cast<QCheckBox*>(driverViewTable->cellWidget(i, 0));
                    if (checkBox->isChecked()) {
                        checkBox->setChecked(false);
                    }
                }
            }
            // Save the ID of the selected row to the page's selectedDriverId variable
            page->selectedDriverId = driverViewTable->item(row, 1)->text().toInt();
        }
    });
    return 0;
}

void companyorder::on_assignDriverButton_clicked()
{
    // Get the selected order ID from the main page
    companysMainPage* mainPage = qobject_cast<companysMainPage*>(this->parent());
    if (!mainPage) {
        qDebug() << "Could not get reference to companysMainPage object.";
        return;
    }
    int orderId = mainPage->getSelectedOrderId();

    // Make sure a driver is selected
    if (selectedDriverId == -1) {
        QMessageBox::warning(this, "No driver selected", "Please select a driver to assign to this order.");
        return;
    }

    // Update the Orders table with the selected driver's ID
    sqlite3 *db;
    char *errorMsg = nullptr;
    int rc = sqlite3_open("../SDI TEST/Databases/Users.db", &db);
    if (rc != SQLITE_OK) {
        std::cerr << "Error opening database: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_close(db);
        return;
    }
    std::string updateSql = "UPDATE Orders SET TransportID = " + std::to_string(companysession.GetLoggedInID()) + ", DriverID = " + std::to_string(selectedDriverId) + ", IsAccepted = 1 WHERE OrderID = " + std::to_string(orderId);
    rc = sqlite3_exec(db, updateSql.c_str(), nullptr, nullptr, &errorMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "Error executing SQL statement: " << errorMsg << std::endl;
        sqlite3_free(errorMsg);
        sqlite3_close(db);
        return;
    }
    sqlite3_close(db);
    QMessageBox::information(nullptr, "Success","Driver Assigned!");
    this->close();
}

companyorder::~companyorder()
{
    delete ui;
}


void companyorder::on_backButton_clicked()
{
    this -> hide();
    companysMainPage order;
    order.setModal(true);
    order.exec();
}
