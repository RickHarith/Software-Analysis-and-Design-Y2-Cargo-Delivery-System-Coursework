#ifndef CUSTOMERORDERPAGE_H
#define CUSTOMERORDERPAGE_H

#include <QDialog>

namespace Ui {
class CustomerOrderPage;
}

class CustomerOrderPage : public QDialog
{
    Q_OBJECT

public:
    explicit CustomerOrderPage(QWidget *parent = nullptr);
    ~CustomerOrderPage();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    bool insertOrder();

    void on_pushButton_3_clicked();

    void on_calculateButton_clicked();

    void on_backButton_clicked();


private:
    Ui::CustomerOrderPage *ui;
};

#endif // CUSTOMERORDERPAGE_H
