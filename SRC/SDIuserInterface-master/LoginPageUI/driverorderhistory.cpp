#include "driverorderhistory.h"
#include "ui_driverorderhistory.h"
#include "drivermainpage.h"
#include "sqlite3.h"
#include "DriverSession.h"
#include <iostream>
#include <QtWidgets>

//Displays all the order history for drivers, delivered orders
driverorderhistory::driverorderhistory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::driverorderhistory)
{
    ui->setupUi(this);
    ui->orderHistoryTable->insertColumn(0);
    ui->orderHistoryTable->setHorizontalHeaderItem(0, new QTableWidgetItem());
    ui->orderHistoryTable->setColumnCount(7); // Increase column count to include the new column
    ui->orderHistoryTable->setHorizontalHeaderLabels({"", "ItemID", "Item Name", "Destination", "Shipping Rate", "Total Fee", "Status"});

    // Add code here to show user information in the table widget
    sqlite3 *db;
    char *errorMsg = nullptr;
    int rc = sqlite3_open("../SDI TEST/Databases/Users.db", &db);
    if (rc != SQLITE_OK) {
        std::cerr << "Error opening database: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_close(db);
        return;
    }
    std::string selectSql = "SELECT OrderID, OrderName, OrderDestination, ShippingRates, FinalPrice, OrderStatus FROM Orders WHERE IsAccepted = 3 AND DriverID = " + std::to_string(driversession.GetLoggedInID());
    rc = sqlite3_exec(db, selectSql.c_str(), callback, (void*)this, &errorMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "Error executing SQL statement: " << errorMsg << std::endl;
        sqlite3_free(errorMsg);
        sqlite3_close(db);
        return;
    }
    sqlite3_close(db);
}

int driverorderhistory::callback(void *data, int argc, char **argv, char **azColName){
    driverorderhistory* page = (driverorderhistory*)data;
    QTableWidget* orderHistoryTable = page->ui->orderHistoryTable;
    int row = orderHistoryTable->rowCount();
    orderHistoryTable->setRowCount(row + 1);

    // Create a checkbox in the first column
    QCheckBox *checkBox = new QCheckBox();
    checkBox->setCheckState(Qt::Unchecked);
    orderHistoryTable->setCellWidget(row, 0, checkBox);

    // Set the rest of the items in the row
    for(int i=0; i<argc; i++){
        QTableWidgetItem *item = new QTableWidgetItem(QString(argv[i]));
        orderHistoryTable->setItem(row, i+1, item);
    }

    // Connect the stateChanged signal of the checkbox to a slot
    checkBox = qobject_cast<QCheckBox*>(orderHistoryTable->cellWidget(row, 0)); // Remove the type declaration here
    connect(checkBox, &QCheckBox::stateChanged, [=](int state) {
        if (state == Qt::Checked) {
            // Uncheck all other checkboxes
            for (int i = 0; i < orderHistoryTable->rowCount(); i++) {
                if (i != row) {
                    QCheckBox *checkBox = qobject_cast<QCheckBox*>(orderHistoryTable->cellWidget(i, 0));
                    if (checkBox->isChecked()) {
                        checkBox->setChecked(false);
                    }
                }
            }
            // Save the ID of the selected row
            page->selectedOrderId = orderHistoryTable->item(row, 1)->text().toInt();
        }
    });
    return 0;
}

driverorderhistory::~driverorderhistory()
{
    delete ui;
}

void driverorderhistory::on_backButton_clicked()
{
    this -> hide();
    drivermainpage main;
    main.setModal(true);
    main.exec();
}

//Sends feedback to the transport company
void driverorderhistory::on_sendFeedbackButton_clicked()
{
    if (selectedOrderId != -1) {
        // Get the feedback from the feedback edit field
        std::string feedback = ui->feedbackField->toPlainText().toStdString();

        // Update the Order table with the feedback
        if (!feedback.empty()){
            sqlite3 *db;
            char *errorMsg = nullptr;
            int rc = sqlite3_open("../SDI TEST/Databases/Users.db", &db);
            if (rc != SQLITE_OK) {
                std::cerr << "Error opening database: " << sqlite3_errmsg(db) << std::endl;
                sqlite3_close(db);
                return;
            }
            std::string updateSql = "UPDATE Orders SET DFeedback = '" + feedback + "' WHERE OrderID = " + std::to_string(selectedOrderId);
            rc = sqlite3_exec(db, updateSql.c_str(), nullptr, nullptr, &errorMsg);
            if (rc != SQLITE_OK) {
                std::cerr << "Error executing SQL statement: " << errorMsg << std::endl;
                sqlite3_free(errorMsg);
                sqlite3_close(db);
                return;
            }
            sqlite3_close(db);

            // Display a success message
            QMessageBox::information(nullptr, "Success", "Feedback sent!");

            this -> hide();
            driverorderhistory mainpage;
            mainpage.setModal(true);
            mainpage.exec();
        }
        else {
            QMessageBox::critical(nullptr, "Error","No feedback written.");
            return;
        }

    }
    else{
        QMessageBox::critical(nullptr, "Error","No order selected.");
        return;
    }
}
