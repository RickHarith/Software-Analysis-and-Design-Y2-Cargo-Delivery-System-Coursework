#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "UserSession.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_3_clicked();

    void on_loginButton_clicked();

    bool CargoLoginFunction(std::string username, std::string password, UserSession& session);

    void on_companyLoginButton_clicked();

    void on_DriverLoginButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
