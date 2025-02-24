/********************************************************************************
** Form generated from reading UI file 'drivermainpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVERMAINPAGE_H
#define UI_DRIVERMAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_drivermainpage
{
public:
    QPushButton *logoutButton;
    QPushButton *viewDetailsButton;
    QPushButton *editDetailsButton;
    QTableWidget *driverOrderTable;
    QLabel *orderLabel;
    QPushButton *acceptOrderButton;
    QPushButton *rejectOrderButton;
    QPushButton *viewAOrdersButton;
    QLabel *label;
    QPushButton *viewSHButton;

    void setupUi(QDialog *drivermainpage)
    {
        if (drivermainpage->objectName().isEmpty())
            drivermainpage->setObjectName(QString::fromUtf8("drivermainpage"));
        drivermainpage->resize(800, 600);
        logoutButton = new QPushButton(drivermainpage);
        logoutButton->setObjectName(QString::fromUtf8("logoutButton"));
        logoutButton->setGeometry(QRect(700, 10, 80, 25));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(logoutButton->sizePolicy().hasHeightForWidth());
        logoutButton->setSizePolicy(sizePolicy);
        logoutButton->setMinimumSize(QSize(0, 25));
        viewDetailsButton = new QPushButton(drivermainpage);
        viewDetailsButton->setObjectName(QString::fromUtf8("viewDetailsButton"));
        viewDetailsButton->setGeometry(QRect(100, 10, 101, 25));
        editDetailsButton = new QPushButton(drivermainpage);
        editDetailsButton->setObjectName(QString::fromUtf8("editDetailsButton"));
        editDetailsButton->setGeometry(QRect(10, 10, 83, 25));
        sizePolicy.setHeightForWidth(editDetailsButton->sizePolicy().hasHeightForWidth());
        editDetailsButton->setSizePolicy(sizePolicy);
        editDetailsButton->setMinimumSize(QSize(0, 25));
        driverOrderTable = new QTableWidget(drivermainpage);
        driverOrderTable->setObjectName(QString::fromUtf8("driverOrderTable"));
        driverOrderTable->setGeometry(QRect(10, 90, 631, 431));
        orderLabel = new QLabel(drivermainpage);
        orderLabel->setObjectName(QString::fromUtf8("orderLabel"));
        orderLabel->setGeometry(QRect(10, 50, 201, 31));
        acceptOrderButton = new QPushButton(drivermainpage);
        acceptOrderButton->setObjectName(QString::fromUtf8("acceptOrderButton"));
        acceptOrderButton->setGeometry(QRect(280, 540, 101, 41));
        rejectOrderButton = new QPushButton(drivermainpage);
        rejectOrderButton->setObjectName(QString::fromUtf8("rejectOrderButton"));
        rejectOrderButton->setGeometry(QRect(410, 540, 101, 41));
        viewAOrdersButton = new QPushButton(drivermainpage);
        viewAOrdersButton->setObjectName(QString::fromUtf8("viewAOrdersButton"));
        viewAOrdersButton->setGeometry(QRect(670, 240, 111, 41));
        label = new QLabel(drivermainpage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(370, 30, 131, 21));
        viewSHButton = new QPushButton(drivermainpage);
        viewSHButton->setObjectName(QString::fromUtf8("viewSHButton"));
        viewSHButton->setGeometry(QRect(670, 370, 111, 41));

        retranslateUi(drivermainpage);

        QMetaObject::connectSlotsByName(drivermainpage);
    } // setupUi

    void retranslateUi(QDialog *drivermainpage)
    {
        drivermainpage->setWindowTitle(QApplication::translate("drivermainpage", "Dialog", nullptr));
        logoutButton->setText(QApplication::translate("drivermainpage", "Log Out", nullptr));
        viewDetailsButton->setText(QApplication::translate("drivermainpage", "View Details", nullptr));
        editDetailsButton->setText(QApplication::translate("drivermainpage", "Edit Details", nullptr));
        orderLabel->setText(QApplication::translate("drivermainpage", "Orders sent by company", nullptr));
        acceptOrderButton->setText(QApplication::translate("drivermainpage", "Accept", nullptr));
        rejectOrderButton->setText(QApplication::translate("drivermainpage", "Reject", nullptr));
        viewAOrdersButton->setText(QApplication::translate("drivermainpage", "View Accepted\n"
"Orders", nullptr));
        label->setText(QApplication::translate("drivermainpage", "Driver Page", nullptr));
        viewSHButton->setText(QApplication::translate("drivermainpage", "Shipment\n"
"History", nullptr));
    } // retranslateUi

};

namespace Ui {
    class drivermainpage: public Ui_drivermainpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVERMAINPAGE_H
