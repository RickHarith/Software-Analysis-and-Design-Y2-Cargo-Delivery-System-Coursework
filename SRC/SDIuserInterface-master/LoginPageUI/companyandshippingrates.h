#ifndef COMPANYANDSHIPPINGRATES_H
#define COMPANYANDSHIPPINGRATES_H

#include <QDialog>

namespace Ui {
class companyandshippingrates;
}

class companyandshippingrates : public QDialog
{
    Q_OBJECT

public:
    explicit companyandshippingrates(QWidget *parent = nullptr);
    ~companyandshippingrates();
    static int callback(void *data, int argc, char **argv, char **azColName);
    int selectedDriverId = -1;

private slots:
    void on_BackButton_clicked();

    void on_calcCompanyCommissionButton_clicked();

    void on_viewFeedbackButton_clicked();

    void on_viewFeedbackButton_2_clicked();

private:
    Ui::companyandshippingrates *ui;
    int selectedOrderId = -1;
};

#endif // COMPANYANDSHIPPINGRATES_H
