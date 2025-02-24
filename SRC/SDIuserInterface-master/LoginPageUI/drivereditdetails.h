#ifndef DRIVEREDITDETAILS_H
#define DRIVEREDITDETAILS_H

#include <QDialog>
#include "DriverSession.h"

namespace Ui {
class drivereditdetails;
}

class drivereditdetails : public QDialog
{
    Q_OBJECT

public:
    explicit drivereditdetails(QWidget *parent = nullptr);
    ~drivereditdetails();

private slots:
    void on_backButton_clicked();

    void on_pushButton_clicked();

    bool updateDriver(DriverSession& driversession, std::string email, std::string address, std::string name, std::string username, std::string password, std::string mobileNumber, std::string niNumber, std::string license);

private:
    Ui::drivereditdetails *ui;
};

#endif // DRIVEREDITDETAILS_H
