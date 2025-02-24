#include "customerinvoice.h"
#include "ui_customerinvoice.h"
#include "sqlite3.h"
#include <sstream>
#include <qdebug.h>
#include <iomanip>

//This code creates a mockup invoice by taking some columns of information in my Orders table and styles it a specific way
customerinvoice::customerinvoice(int orderId, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerinvoice),
    orderId(orderId)
{
    ui->setupUi(this);

    sqlite3* db;
    int rc = sqlite3_open_v2("../SDI TEST/Databases/Users.db", &db, SQLITE_OPEN_READONLY, nullptr);
    if (rc != SQLITE_OK) {
        // Handle error
        return;
    }

    // Execute the query to retrieve the invoice details
    // Prepare the SQL query statement to fetch the details of an order with the given order ID
    sqlite3_stmt* stmt;
    const char* query = "SELECT CargoOwner.Name, Orders.OrderName, Orders.OrderDestination, Orders.OrderConditionName, TransportationCompany.CompanyName, Driver.Name, Orders.ShippingRates, Orders.FinalPrice FROM Orders "
                        "INNER JOIN CargoOwner ON Orders.CargoOwnerID = CargoOwner.CargoOwnerID "
                        "INNER JOIN TransportationCompany ON Orders.TransportID = TransportationCompany.TransportID "
                        "INNER JOIN Driver ON Orders.DriverID = Driver.DriverID "
                        "WHERE Orders.OrderID = ?";
    rc = sqlite3_prepare_v2(db, query, -1, &stmt, nullptr);

    // Handle any error that occurred while preparing the statement
    if (rc != SQLITE_OK) {
        const char* errMsg = sqlite3_errmsg(db);
        qDebug() << "SQL error: " << errMsg;
        sqlite3_finalize(stmt);
        sqlite3_close(db);
        return;
    }

    // Bind the order ID parameter to the prepared statement
    sqlite3_bind_int(stmt, 1, orderId);

    // Execute the statement to fetch the details of the order
    rc = sqlite3_step(stmt);

    // Handle any error that occurred while executing the statement
    if (rc != SQLITE_ROW) {
        sqlite3_finalize(stmt);
        sqlite3_close(db);
        return;
    }

    // Format the invoice details as a string
    std::stringstream ss;
    ss << "INVOICE\n"
       << "----------------------------------------------------------------------------------------------\n"
       << "ITEM DETAILS:\n"
       << "----------------------------------------------------------------------------------------------\n"
       << "Customer Name: " << sqlite3_column_text(stmt, 0) << "\n" << "\n"
       << "Cargo Order: " << sqlite3_column_text(stmt, 1) << "\n" << "\n"
       << "Destination: " << sqlite3_column_text(stmt, 2) << "\n" << "\n"
       << "Condition: " << sqlite3_column_text(stmt, 3) << "\n" << "\n"
       << "Company: " << sqlite3_column_text(stmt, 4) << "\n" << "\n"
       << "Driver: " << sqlite3_column_text(stmt, 5) << "\n" << "\n"
       << "----------------------------------------------------------------------------------------------\n"
       << "FEES\n"
       << "----------------------------------------------------------------------------------------------\n"
       << "Shipping Rates: £" << std::fixed << std::setprecision(2) << sqlite3_column_double(stmt, 6) << "\n" << "\n"
       << "Total Fee: £" << std::fixed << std::setprecision(2) << sqlite3_column_double(stmt, 7) << "\n" << "\n";
    std::string invoiceText = ss.str();

    // Set the formatted string as the text of the QTextEdit field
    ui->invoiceField->setText(QString::fromStdString(invoiceText));

    // Clean up by finalizing the statement and closing the database connection
    sqlite3_finalize(stmt);
    sqlite3_close(db);

}

customerinvoice::~customerinvoice()
{
    delete ui;
}
