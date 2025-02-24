#ifndef DRIVERACCEPTEDORDERS_H
#define DRIVERACCEPTEDORDERS_H

#include <QDialog>

namespace Ui {
class driveracceptedorders;
}

class driveracceptedorders : public QDialog
{
    Q_OBJECT

public:
    explicit driveracceptedorders(QWidget *parent = nullptr);
    ~driveracceptedorders();
    int static callback(void *data, int argc, char **argv, char **azColName);

private slots:
    void on_backButton_clicked();

    void on_deliveredButton_clicked();

    void on_onRoadButton_clicked();

private:
    Ui::driveracceptedorders *ui;
    int selectedOrderId = -1;
};

#endif // DRIVERACCEPTEDORDERS_H
