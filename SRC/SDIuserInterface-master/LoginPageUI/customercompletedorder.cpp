#include "customercompletedorder.h"
#include "ui_customercompletedorder.h"
#include <QMessageBox>
#include <sqlite3.h>
#include <QtWidgets>
#include <iostream>
#include "UserSession.h"
#include "customeroderstatus.h"
#include "customerinvoice.h"

customercompletedorder::customercompletedorder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customercompletedorder)
{
    ui->setupUi(this);

    // Add a new column to the order history table widget and set its header label
    ui->coHistoryTable->insertColumn(0);
    ui->coHistoryTable->setHorizontalHeaderItem(0, new QTableWidgetItem());
    ui->coHistoryTable->setColumnCount(7); // Increase column count to include the new column
    ui->coHistoryTable->setHorizontalHeaderLabels({"", "ItemID", "Item Name", "Destination", "Shipping Rate", "Total Fee", "Status"});

    // Access the Users.db SQLite database and retrieve order history information
    sqlite3 *db;
    char *errorMsg = nullptr;
    int rc = sqlite3_open("../SDI TEST/Databases/Users.db", &db); // Open the Users.db database
    if (rc != SQLITE_OK) {
        std::cerr << "Error opening database: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_close(db);
        return;
    }

    // Construct the SQL query to retrieve order history information for the logged in user
    std::string selectSql = "SELECT OrderID, OrderName, OrderDestination, ShippingRates, FinalPrice, OrderStatus FROM Orders WHERE IsAccepted = 3 AND CargoOwnerID = " + std::to_string(usersession.GetLoggedInID());

    // Execute the SQL query and store the result in the table widget
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

int customercompletedorder::callback(void *data, int argc, char **argv, char **azColName){
    customercompletedorder* page = (customercompletedorder*)data;
    QTableWidget* coHistoryTable = page->ui->coHistoryTable;
    // Add a new row to the table widget
    int row = coHistoryTable->rowCount();
    coHistoryTable->setRowCount(row + 1);

    // Create a checkbox in the first column of the new row
    QCheckBox *checkBox = new QCheckBox();
    checkBox->setCheckState(Qt::Unchecked);
    coHistoryTable->setCellWidget(row, 0, checkBox);

    // Set the rest of the items in the row from the SQLite3 result
    for(int i=0; i<argc; i++){
        QTableWidgetItem *item = new QTableWidgetItem(QString(argv[i]));
        coHistoryTable->setItem(row, i+1, item);
    }

    // Connect the stateChanged signal of the checkbox to a slot
    checkBox = qobject_cast<QCheckBox*>(coHistoryTable->cellWidget(row, 0)); // Remove the type declaration here
    connect(checkBox, &QCheckBox::stateChanged, [=](int state) {
        if (state == Qt::Checked) {
            // Uncheck all other checkboxes except for the selected row
            for (int i = 0; i < coHistoryTable->rowCount(); i++) {
                if (i != row) {
                    QCheckBox *checkBox = qobject_cast<QCheckBox*>(coHistoryTable->cellWidget(i, 0));
                    if (checkBox->isChecked()) {
                        checkBox->setChecked(false);
                    }
                }
            }
            // Save the OrderID of the selected row
            page->selectedOrderId = coHistoryTable->item(row, 1)->text().toInt();
        }
    });
    return 0;

}

void customercompletedorder::on_invoiceButton_clicked(){
    if (selectedOrderId == -1) {
        QMessageBox::warning(this, "No Order Selected", "Please select an order to generate an invoice.");
        return;
    }

    // Create an instance of the next page and pass the selectedOrderId value
    customerinvoice *invoice = new customerinvoice(selectedOrderId, this);

    // Show the customerinvoice dialog
    invoice->setModal(true);
    invoice->exec();

    // Delete the invoice object when the dialog is closed
    delete invoice;
}



void customercompletedorder::on_sendFeedbackButton_clicked() {
    if (selectedOrderId != -1) {
        // Get the feedback from the feedback edit field
        std::string feedback = ui->feedbackEditField->toPlainText().toStdString();

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
            std::string updateSql = "UPDATE Orders SET COFeedback = '" + feedback + "' WHERE OrderID = " + std::to_string(selectedOrderId);
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
            customercompletedorder mainpage;
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


customercompletedorder::~customercompletedorder()
{
    delete ui;
}

void customercompletedorder::on_backButton_clicked(){
    this -> hide();
    customeroderstatus status;
    status.setModal(true);
    status.exec();
}
