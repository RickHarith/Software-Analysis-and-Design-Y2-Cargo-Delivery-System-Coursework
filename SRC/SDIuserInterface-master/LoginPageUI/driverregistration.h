#ifndef DRIVERREGISTRATION_H
#define DRIVERREGISTRATION_H

#include <QDialog>

namespace Ui {
class driverRegistration;
}

class driverRegistration : public QDialog
{
    Q_OBJECT

public:
    explicit driverRegistration(QWidget *parent = nullptr);
    ~driverRegistration();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_backButton_clicked();

    bool DriverSignUp();

    void on_selectImage_clicked();

private:
    Ui::driverRegistration *ui;
    QString selectedImagePath;
};

#endif // DRIVERREGISTRATION_H
