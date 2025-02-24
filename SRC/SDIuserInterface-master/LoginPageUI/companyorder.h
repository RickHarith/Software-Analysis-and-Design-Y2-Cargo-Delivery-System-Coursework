#ifndef COMPANYORDER_H
#define COMPANYORDER_H

#include <QDialog>
#include <QCheckBox>

namespace Ui {
class companyorder;
}

class companyorder : public QDialog
{
    Q_OBJECT

public:
    explicit companyorder(QWidget *parent = nullptr);
    ~companyorder();
    static int callback(void *data, int argc, char **argv, char **azColName);

private slots:
    void on_backButton_clicked();
    void on_assignDriverButton_clicked();

private:
    Ui::companyorder *ui;
    int selectedDriverId = -1;
};

#endif // COMPANYORDER_H
