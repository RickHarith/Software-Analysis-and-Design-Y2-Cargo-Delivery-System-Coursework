#include "customerorderpage.h"
#include "ui_customerorderpage.h"
#include "mainwindow.h"
#include "userregistration.h"
#include <QMessageBox>
#include "customeroderstatus.h"
#include <sqlite3.h>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>



CustomerOrderPage::CustomerOrderPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomerOrderPage)
{
    ui->setupUi(this);


}

CustomerOrderPage::~CustomerOrderPage()
{
    delete ui;
}
//This page functions as the page for customers to place their orders to be appended to the SQL Database
// Function to insert order into the "Order" table in Users.db
bool CustomerOrderPage::insertOrder() {
    bool ErrorCaught = false;
    sqlite3* db;
    char* errMsg;
    std::string sql;
    int rc;

    // Open database
    rc = sqlite3_open("../SDI TEST/Databases/Users.db", &db);

    if (rc) {
        std::cerr << "Error opening database: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_close(db);
        return false;
    }

    std::string orderName = ui->itemNameField->text().toStdString();
    std::string orderLength = ui->lengthField->text().toStdString();
    std::string orderWidth = ui->widthField->text().toStdString();
    std::string orderHeight = ui->heightField->text().toStdString();
    std::string orderWeight = ui->weightField->text().toStdString();
    std::string orderDistance;
    std::string orderCondition;
    std::string orderDestination;
    std::string orderConditionName;
    std::string orderStatus = "Order Made";

    if (orderName.empty()) {
       QMessageBox::critical(nullptr, "Error","\nItem name cannot be empty");
       orderName.clear();
       ErrorCaught = true;
    }

    //ORDER LENGTH
    if (orderLength.empty()){
        QMessageBox::critical(nullptr, "Error","Order length cannot be empty!");
        orderLength.clear();
        ErrorCaught = true;
    }

    int decimalCount = std::count(orderLength.begin(), orderLength.end(), '.');
    if (decimalCount > 1 || std::find_if(orderLength.begin(), orderLength.end(), [](char c) { return !std::isdigit(c) && c != '.'; }) != orderLength.end()) {
        QMessageBox::critical(nullptr, "Error","\nOrder length only accepts numbers and one decimal point!");
        orderLength.clear();
        ErrorCaught = true;
    }

    if (!orderLength.empty()){
        float length = std::stof(orderLength);
        if (length > 5) {
            QMessageBox::critical(nullptr, "Error","Order length must be below 5!");
            orderLength.clear();
            ErrorCaught = true;
        }
    }

    //ORDER WIDTH
    if (orderWidth.empty()){
        QMessageBox::critical(nullptr, "Error","Order width cannot be empty!");
        orderWidth.clear();
        ErrorCaught = true;
    }

    decimalCount = std::count(orderWidth.begin(), orderWidth.end(), '.');
    if (decimalCount > 1 || std::find_if(orderWidth.begin(), orderWidth.end(), [](char c) { return !std::isdigit(c) && c != '.'; }) != orderWidth.end()) {
        QMessageBox::critical(nullptr, "Error","\nOrder width only accepts numbers and one decimal point!");
        orderWidth.clear();
        ErrorCaught = true;
    }

    if (!orderWidth.empty()){
        float width = std::stof(orderWidth);
        if (width > 2.5) {
            QMessageBox::critical(nullptr, "Error","Order width must be below 2.5!");
            orderWidth.clear();
            ErrorCaught = true;
        }
    }

    //ORDER HEIGHT
    if (orderHeight.empty()){
        QMessageBox::critical(nullptr, "Error","Order height cannot be empty!");
        orderHeight.clear();
        ErrorCaught = true;
    }

    decimalCount = std::count(orderHeight.begin(), orderHeight.end(), '.');
    if (decimalCount > 1 || std::find_if(orderHeight.begin(), orderHeight.end(), [](char c) { return !std::isdigit(c) && c != '.'; }) != orderHeight.end()) {
        QMessageBox::critical(nullptr, "Error","\nOrder height only accepts numbers and one decimal point!");
        orderHeight.clear();
        ErrorCaught = true;
    }

    if (!orderHeight.empty()){
        float height = std::stof(orderHeight);
        if (height > 2.4) {
            QMessageBox::critical(nullptr, "Error","Order height must be below 2.4!");
            orderHeight.clear();
            ErrorCaught = true;
        }
    }



    //LORRY WEIGHT
    if (orderWeight.empty()){
        QMessageBox::critical(nullptr, "Error","Order weight cannot be empty!");
        orderWeight.clear();
        ErrorCaught = true;
    }

    decimalCount = std::count(orderWeight.begin(), orderWeight.end(), '.');
    if (decimalCount > 1 || std::find_if(orderWeight.begin(), orderWeight.end(), [](char c) { return !std::isdigit(c) && c != '.'; }) != orderWeight.end()) {
        QMessageBox::critical(nullptr, "Error","\nOrder weight only accepts numbers and one decimal point!");
        orderWeight.clear();
        ErrorCaught = true;
    }

    if (!orderWeight.empty()){
        float weight = std::stof(orderWeight);
        if (weight > 2000) {
            QMessageBox::critical(nullptr, "Error","Order weight must be below 2000");
            orderWeight.clear();
            ErrorCaught = true;
        }
    }

    QString deliveryOption = ui->DeliveryComboBox->currentText();
    if (deliveryOption == "London to Edinburgh") {
        orderDistance = "530";
        orderDestination = "London to Edinburgh";
    } else if (deliveryOption == "Nottingham to Coventry") {
        orderDistance = "82";
        orderDestination = "Nottingham to Coventry";
    } else if (deliveryOption == "Leicester to Cardiff") {
        orderDistance = "247";
        orderDestination = "Leicester to Cardiff";
    } else {
        QMessageBox::critical(nullptr, "Error","Invalid delivery option selected");
        ErrorCaught = true;
    }

    QString conditionOption = ui->ConditionComboBox->currentText();
    if (conditionOption == "No condition") {
        orderCondition = "1";
        orderConditionName = "No condition";
    }
    else if (conditionOption == "Frozen") {
        orderCondition = "1.4";
        orderConditionName = "Frozen";
    }
    else if (conditionOption == "Fragile") {
        orderCondition = "1.2";
        orderConditionName = "Fragile";
    }
    else if (conditionOption == "Hazardous") {
        orderCondition = "1.5";
        orderConditionName = "Hazardous";
    }
    else if (conditionOption == "Perishable") {
        orderCondition = "1.3";
        orderConditionName = "Perishable";
    }
    else {
        QMessageBox::critical(nullptr, "Error","Invalid condition option selected");
        ErrorCaught = true;
    }

    double distance, length, width, height, weight, condition;
       try {
           distance = std::stod(orderDistance);
           length = std::stod(orderLength);
           width = std::stod(orderWidth);
           height = std::stod(orderHeight);
           weight = std::stod(orderWeight);
           condition = std::stod(orderCondition);
       } catch (std::invalid_argument& e) {
           // Handle the exception here, for example:
           QMessageBox::critical(nullptr, "Error", "Invalid input: " + QString::fromStdString(e.what()));
           ErrorCaught = true;
       }

    double shippingRate = (distance * length * width * height * weight) * 0.001 * condition;

    std::ostringstream streamObj;
    streamObj << std::fixed;
    streamObj.precision(2);
    streamObj << shippingRate;
    std::string shippingRateStr = streamObj.str();

   if (!ErrorCaught){
       std::string isAccepted = "0";
       sql = "INSERT INTO Orders (CargoOwnerID, OrderName, OrderDistance, OrderDestination, OrderLength, OrderWidth, OrderHeight, OrderWeight, OrderCondition, OrderConditionName, ShippingRates, OrderStatus, isAccepted) VALUES ('"
               + std::to_string(usersession.GetLoggedInID()) + "', '" + orderName + "', '" + orderDistance + "', '" + orderDestination + "', '" + orderLength + "', '" + orderWidth + "', '" + orderHeight + "', '" + orderWeight + "', '" + orderCondition + "', '" + orderConditionName + "','" + shippingRateStr + "','" + orderStatus + "','" + isAccepted +"')";


       // Execute SQL statement
       rc = sqlite3_exec(db, sql.c_str(), NULL, 0, &errMsg);

       if (rc != SQLITE_OK) {
           std::cerr << "Error inserting order: " << errMsg << std::endl;
           sqlite3_free(errMsg);
           sqlite3_close(db);
           return false;
       }

       // Close database
       sqlite3_close(db);
       return true;
   }
   else{
       return false;
   }
}


void CustomerOrderPage::on_pushButton_3_clicked()
{
    bool orderSuccess = insertOrder();
    if (orderSuccess){
        QMessageBox::information(nullptr, "Success","Cargo order made!");
        this -> hide();
        customeroderstatus status;
        status.setModal(true);
        status.exec();
    }
    else{
        QMessageBox::critical(nullptr, "Error","Cargo order not made.");
        return;
    }
}

void CustomerOrderPage::on_calculateButton_clicked(){
    std::string orderLength = ui->lengthField->text().toStdString();
    std::string orderWidth = ui->widthField->text().toStdString();
    std::string orderHeight = ui->heightField->text().toStdString();
    std::string orderWeight = ui->weightField->text().toStdString();
    std::string orderDistance;
    std::string orderCondition;

    QString deliveryOption = ui->DeliveryComboBox->currentText();
    if (deliveryOption == "London to Edinburgh") {
        orderDistance = "530";
    } else if (deliveryOption == "Nottingham to Coventry") {
        orderDistance = "82";
    } else if (deliveryOption == "Leicester to Cardiff") {
        orderDistance = "247";
    } else {
        std::cerr << "Invalid delivery option selected" << std::endl;
    }

    QString conditionOption = ui->ConditionComboBox->currentText();
    if (conditionOption == "No condition") {
        orderCondition = "1";
    }
    else if (conditionOption == "Frozen") {
        orderCondition = "1.4";
    }
    else if (conditionOption == "Fragile") {
        orderCondition = "1.2";
    }
    else if (conditionOption == "Hazardous") {
        orderCondition = "1.5";
    }
    else if (conditionOption == "Perishable") {
        orderCondition = "1.3";
    }
    else {
        std::cerr << "Invalid condition option selected" << std::endl;
    }

    double distance, length, width, height, weight, condition, shippingRate;
    try {
        distance = std::stod(orderDistance);
        length = std::stod(orderLength);
        width = std::stod(orderWidth);
        height = std::stod(orderHeight);
        weight = std::stod(orderWeight);
        condition = std::stod(orderCondition);

        shippingRate = (distance * length * width * height * weight) * 0.001 * condition;

        std::ostringstream stream;
        stream << "£" << std::fixed << std::setprecision(2) << shippingRate;
        std::string shippingRateStr = stream.str();

        ui->shippingRateField->setText(QString::fromStdString(shippingRateStr));
    }
    catch (std::invalid_argument& e) {
        QMessageBox::critical(nullptr, "Error","Not a number");
    }
    catch (std::out_of_range& e) {
        QMessageBox::critical(nullptr, "Error","Not a number");
    }
}



void CustomerOrderPage::on_backButton_clicked(){
    this -> hide();
    customeroderstatus status;
    status.setModal(true);
    status.exec();
}




void CustomerOrderPage::on_pushButton_clicked()
{

}

void CustomerOrderPage::on_pushButton_2_clicked()
{

}

