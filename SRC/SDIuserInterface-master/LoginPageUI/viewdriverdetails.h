#ifndef VIEWDRIVERDETAILS_H
#define VIEWDRIVERDETAILS_H

#include <QDialog>

namespace Ui {
class viewdriverdetails;
}

class viewdriverdetails : public QDialog
{
    Q_OBJECT

public:
    explicit viewdriverdetails(QWidget *parent = nullptr);
    ~viewdriverdetails();
    static int callback(void *data, int argc, char **argv, char **azColName);


private slots:
    void on_backButton_clicked();

private:
    Ui::viewdriverdetails *ui;
};

#endif // VIEWDRIVERDETAILS_H
