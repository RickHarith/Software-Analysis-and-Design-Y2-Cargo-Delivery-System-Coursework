#ifndef COMPANYREGISTRATION_H
#define COMPANYREGISTRATION_H

#include <QDialog>

namespace Ui {
class companyRegistration;
}

class companyRegistration : public QDialog
{
    Q_OBJECT

public:
    explicit companyRegistration(QWidget *parent = nullptr);
    ~companyRegistration();

private slots:
    void on_pushButton_3_clicked();
    bool CompanySignUp();
    void on_pushButton_2_clicked();

private:
    Ui::companyRegistration *ui;
};

#endif // COMPANYREGISTRATION_H
