#ifndef USERREGISTRATION_H
#define USERREGISTRATION_H

#include <QDialog>

namespace Ui {
class userRegistration;
}

class userRegistration : public QDialog
{
    Q_OBJECT

public:
    explicit userRegistration(QWidget *parent = nullptr);
    ~userRegistration();

private slots:
    void on_pushButton_6_clicked();
    bool CargoSignUp();

    void on_pushButton_2_clicked();

private:
    Ui::userRegistration *ui;
};

#endif // USERREGISTRATION_H
