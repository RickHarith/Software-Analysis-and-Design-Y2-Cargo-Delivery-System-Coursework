#ifndef CUSTOMEREDITANDVIEW_H
#define CUSTOMEREDITANDVIEW_H

#include <QDialog>
#include <QMainWindow>
#include "UserSession.h"

namespace Ui {
class customereditandview;
}

class customereditandview : public QDialog
{
    Q_OBJECT

public:
    explicit customereditandview(QWidget *parent = nullptr);
    ~customereditandview();
    static int callback(void *data, int argc, char **argv, char **azColName);


private slots:
    void on_pushButton_2_clicked();

    bool updateCargoOwner(UserSession& usersession, std::string email, std::string address, std::string name, std::string username, std::string password, std::string mobileNumber);

    void on_editButton_clicked();

private:
    Ui::customereditandview *ui;
};

#endif // CUSTOMEREDITANDVIEW_H
