#ifndef CUSTOMERCOMPLETEDORDER_H
#define CUSTOMERCOMPLETEDORDER_H
#include "customerinvoice.h"
#include <QDialog>

namespace Ui {
class customercompletedorder;
}

class customercompletedorder : public QDialog
{
    Q_OBJECT

public:
    explicit customercompletedorder(QWidget *parent = nullptr);
    ~customercompletedorder();
    int static callback(void *data, int argc, char **argv, char **azColName);
    int getSelectedOrderId() const {
        return selectedOrderId;
    }


private slots:
    void on_backButton_clicked();
    void on_invoiceButton_clicked();
    void on_sendFeedbackButton_clicked();


private:
    Ui::customercompletedorder *ui;
    int selectedOrderId = -1;
};

#endif // CUSTOMERCOMPLETEDORDER_H
