/********************************************************************************
** Form generated from reading UI file 'customeroderstatus.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERODERSTATUS_H
#define UI_CUSTOMERODERSTATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_customeroderstatus
{
public:
    QTableWidget *orderViewTable;
    QPushButton *makeOrderButton;
    QPushButton *logoutButton;
    QPushButton *editDetailsButton;
    QLabel *label;
    QPushButton *viewCompletedButton;
    QLabel *label_2;

    void setupUi(QDialog *customeroderstatus)
    {
        if (customeroderstatus->objectName().isEmpty())
            customeroderstatus->setObjectName(QString::fromUtf8("customeroderstatus"));
        customeroderstatus->resize(800, 600);
        orderViewTable = new QTableWidget(customeroderstatus);
        orderViewTable->setObjectName(QString::fromUtf8("orderViewTable"));
        orderViewTable->setGeometry(QRect(10, 110, 781, 421));
        makeOrderButton = new QPushButton(customeroderstatus);
        makeOrderButton->setObjectName(QString::fromUtf8("makeOrderButton"));
        makeOrderButton->setGeometry(QRect(340, 550, 141, 31));
        logoutButton = new QPushButton(customeroderstatus);
        logoutButton->setObjectName(QString::fromUtf8("logoutButton"));
        logoutButton->setGeometry(QRect(700, 10, 80, 25));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(logoutButton->sizePolicy().hasHeightForWidth());
        logoutButton->setSizePolicy(sizePolicy);
        logoutButton->setMinimumSize(QSize(0, 25));
        editDetailsButton = new QPushButton(customeroderstatus);
        editDetailsButton->setObjectName(QString::fromUtf8("editDetailsButton"));
        editDetailsButton->setGeometry(QRect(10, 10, 83, 25));
        sizePolicy.setHeightForWidth(editDetailsButton->sizePolicy().hasHeightForWidth());
        editDetailsButton->setSizePolicy(sizePolicy);
        editDetailsButton->setMinimumSize(QSize(0, 25));
        label = new QLabel(customeroderstatus);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 70, 151, 31));
        viewCompletedButton = new QPushButton(customeroderstatus);
        viewCompletedButton->setObjectName(QString::fromUtf8("viewCompletedButton"));
        viewCompletedButton->setGeometry(QRect(610, 540, 171, 41));
        label_2 = new QLabel(customeroderstatus);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(340, 20, 131, 31));

        retranslateUi(customeroderstatus);

        QMetaObject::connectSlotsByName(customeroderstatus);
    } // setupUi

    void retranslateUi(QDialog *customeroderstatus)
    {
        customeroderstatus->setWindowTitle(QApplication::translate("customeroderstatus", "Dialog", nullptr));
        makeOrderButton->setText(QApplication::translate("customeroderstatus", "Make an Order", nullptr));
        logoutButton->setText(QApplication::translate("customeroderstatus", "Log Out", nullptr));
        editDetailsButton->setText(QApplication::translate("customeroderstatus", "Edit Details", nullptr));
        label->setText(QApplication::translate("customeroderstatus", "Cargo Orders", nullptr));
        viewCompletedButton->setText(QApplication::translate("customeroderstatus", "View Completed\n"
"Orders", nullptr));
        label_2->setText(QApplication::translate("customeroderstatus", "Cargo Owner Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customeroderstatus: public Ui_customeroderstatus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERODERSTATUS_H
