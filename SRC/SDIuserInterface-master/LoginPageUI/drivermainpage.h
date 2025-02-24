#ifndef DRIVERMAINPAGE_H
#define DRIVERMAINPAGE_H

#include <QDialog>

namespace Ui {
class drivermainpage;
}

class drivermainpage : public QDialog
{
    Q_OBJECT

public:
    explicit drivermainpage(QWidget *parent = nullptr);
    ~drivermainpage();
    int static callback(void *data, int argc, char **argv, char **azColName);

private slots:

    void on_acceptOrderButton_clicked();

    void on_rejectOrderButton_clicked();

    void on_editDetailsButton_clicked();

    void on_logoutButton_clicked();

    void on_viewDetailsButton_clicked();

    void on_viewAOrdersButton_clicked();

    void on_viewSHButton_clicked();

private:
    Ui::drivermainpage *ui;
    int selectedOrderId = -1;
};

#endif // DRIVERMAINPAGE_H
