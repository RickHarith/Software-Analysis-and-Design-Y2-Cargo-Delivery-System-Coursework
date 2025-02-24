
#ifndef COMPANYSMAINPAGE_H
#define COMPANYSMAINPAGE_H

#include <QDialog>

namespace Ui {
class companysMainPage;
}

class companysMainPage : public QDialog
{
    Q_OBJECT

public:
    explicit companysMainPage(QWidget *parent = nullptr);
    ~companysMainPage();
    static int callback(void *data, int argc, char **argv, char **azColName);
    int getSelectedOrderId() const {
        return selectedOrderId;
    }

private slots:
    void on_calculateOrderButton_clicked();

    void on_assignDriverButton_clicked();

    void on_LogoutButton_clicked();

private:
    Ui::companysMainPage *ui;
    int selectedOrderId = -1;

};

#endif // COMPANYSMAINPAGE_H
