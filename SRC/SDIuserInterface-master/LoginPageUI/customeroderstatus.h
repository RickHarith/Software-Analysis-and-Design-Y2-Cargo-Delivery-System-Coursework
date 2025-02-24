#ifndef CUSTOMERODERSTATUS_H
#define CUSTOMERODERSTATUS_H

#include <QDialog>
#include <QMainWindow>
#include "UserSession.h"

namespace Ui {
class customeroderstatus;
}

class customeroderstatus : public QDialog
{
    Q_OBJECT

public:
    explicit customeroderstatus(QWidget *parent = nullptr);
    ~customeroderstatus();
    static int callback(void *data, int argc, char **argv, char **azColName);

private slots:
    void on_logoutButton_clicked();

    void on_editDetailsButton_clicked();

    void on_makeOrderButton_clicked();

    void on_viewCompletedButton_clicked();

private:
    Ui::customeroderstatus *ui;
};

#endif // CUSTOMERODERSTATUS_H
