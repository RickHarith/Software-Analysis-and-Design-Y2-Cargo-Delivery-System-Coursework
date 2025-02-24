/********************************************************************************
** Form generated from reading UI file 'companysmainpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPANYSMAINPAGE_H
#define UI_COMPANYSMAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_companysMainPage
{
public:
    QPushButton *LogoutButton;
    QPushButton *assignDriverButton;
    QTableWidget *clientOrdersTable;
    QLabel *clientorderLabel;
    QPushButton *calculateOrderButton;
    QLabel *label;

    void setupUi(QDialog *companysMainPage)
    {
        if (companysMainPage->objectName().isEmpty())
            companysMainPage->setObjectName(QString::fromUtf8("companysMainPage"));
        companysMainPage->resize(800, 600);
        companysMainPage->setMinimumSize(QSize(0, 0));
        LogoutButton = new QPushButton(companysMainPage);
        LogoutButton->setObjectName(QString::fromUtf8("LogoutButton"));
        LogoutButton->setGeometry(QRect(690, 10, 80, 25));
        assignDriverButton = new QPushButton(companysMainPage);
        assignDriverButton->setObjectName(QString::fromUtf8("assignDriverButton"));
        assignDriverButton->setGeometry(QRect(310, 550, 181, 41));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(assignDriverButton->sizePolicy().hasHeightForWidth());
        assignDriverButton->setSizePolicy(sizePolicy);
        assignDriverButton->setMinimumSize(QSize(40, 25));
        clientOrdersTable = new QTableWidget(companysMainPage);
        clientOrdersTable->setObjectName(QString::fromUtf8("clientOrdersTable"));
        clientOrdersTable->setGeometry(QRect(10, 80, 771, 461));
        clientorderLabel = new QLabel(companysMainPage);
        clientorderLabel->setObjectName(QString::fromUtf8("clientorderLabel"));
        clientorderLabel->setGeometry(QRect(20, 50, 126, 25));
        calculateOrderButton = new QPushButton(companysMainPage);
        calculateOrderButton->setObjectName(QString::fromUtf8("calculateOrderButton"));
        calculateOrderButton->setGeometry(QRect(620, 550, 161, 41));
        label = new QLabel(companysMainPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 20, 151, 31));

        retranslateUi(companysMainPage);

        QMetaObject::connectSlotsByName(companysMainPage);
    } // setupUi

    void retranslateUi(QDialog *companysMainPage)
    {
        companysMainPage->setWindowTitle(QApplication::translate("companysMainPage", "Dialog", nullptr));
        LogoutButton->setText(QApplication::translate("companysMainPage", "Log Out", nullptr));
        assignDriverButton->setText(QApplication::translate("companysMainPage", "Assign Driver", nullptr));
        clientorderLabel->setText(QApplication::translate("companysMainPage", "Client Orders", nullptr));
        calculateOrderButton->setText(QApplication::translate("companysMainPage", "View Completed\n"
"Orders", nullptr));
        label->setText(QApplication::translate("companysMainPage", "Company Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class companysMainPage: public Ui_companysMainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPANYSMAINPAGE_H
