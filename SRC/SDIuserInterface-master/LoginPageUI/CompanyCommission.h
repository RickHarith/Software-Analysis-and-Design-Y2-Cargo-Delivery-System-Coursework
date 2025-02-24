#ifndef COMPANYCOMMISSION_H
#define COMPANYCOMMISSION_H

#include <QtWidgets/QMessageBox>
#include <sqlite3.h>

class CompanyCommission {
public:
    CompanyCommission() {
        // Open the database connection
        int rc = sqlite3_open("../SDI TEST/Databases/Users.db", &db);
        if (rc) {
            // Show an error message if the database connection failed
            QMessageBox::critical(nullptr, "Error", "Failed to open database.");
        }
    }

    ~CompanyCommission() {
        // Close the database connection
        sqlite3_close(db);
    }

    double getFinalPrice(int orderId) {
        // Prepare the SELECT statement to retrieve the FinalPrice for the selected order
        sqlite3_stmt *stmt;
        const char *selectSql = "SELECT FinalPrice FROM Orders WHERE OrderID = ?";
        int rc = sqlite3_prepare_v2(db, selectSql, -1, &stmt, nullptr);
        if (rc) {
            // Show an error message if the SELECT statement failed to prepare
            QMessageBox::critical(nullptr, "Error", "Failed to prepare SELECT statement.");
            return 0;
        }

        // Bind the orderId parameter to the SELECT statement
        sqlite3_bind_int(stmt, 1, orderId);

        // Execute the SELECT statement and retrieve the FinalPrice value
        double finalPrice = 0;
        rc = sqlite3_step(stmt);
        if (rc == SQLITE_ROW) {
            finalPrice = sqlite3_column_double(stmt, 0);
        } else {
            // Show an error message if the SELECT statement failed to execute or didn't return any rows
            QMessageBox::critical(nullptr, "Error", "Failed to retrieve FinalPrice for selected order.");
        }

        // Finalize the SELECT statement
        sqlite3_finalize(stmt);

        return finalPrice;
    }

private:
    sqlite3 *db;
};


#endif // COMPANYCOMMISSION_H
