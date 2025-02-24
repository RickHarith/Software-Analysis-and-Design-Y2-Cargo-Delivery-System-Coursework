#ifndef DRIVERORDERHISTORY_H
#define DRIVERORDERHISTORY_H

#include <QDialog>

namespace Ui {
class driverorderhistory;
}

class driverorderhistory : public QDialog
{
    Q_OBJECT

public:
    explicit driverorderhistory(QWidget *parent = nullptr);
    ~driverorderhistory();
    int static callback(void *data, int argc, char **argv, char **azColName);
    int getSelectedOrderId() const {
        return selectedOrderId;
    }

private slots:
    void on_backButton_clicked();
    void on_sendFeedbackButton_clicked();

private:
    Ui::driverorderhistory *ui;
    int selectedOrderId = -1;
};

#endif // DRIVERORDERHISTORY_H
