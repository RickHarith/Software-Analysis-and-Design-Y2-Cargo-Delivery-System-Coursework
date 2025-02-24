#ifndef CUSTOMERINVOICE_H
#define CUSTOMERINVOICE_H

#include <QDialog>

namespace Ui {
class customerinvoice;
}

class customerinvoice : public QDialog
{
    Q_OBJECT

public:
    explicit customerinvoice(int orderId, QWidget *parent = nullptr);
    ~customerinvoice();

private:
    Ui::customerinvoice *ui;
    int orderId;

};

#endif // CUSTOMERINVOICE_H
