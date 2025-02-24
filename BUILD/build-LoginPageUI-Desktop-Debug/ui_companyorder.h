/********************************************************************************
** Form generated from reading UI file 'companyorder.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPANYORDER_H
#define UI_COMPANYORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_companyorder
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QTableWidget *driverViewTable;
    QPushButton *assignDriverButton;
    QPushButton *backButton;

    void setupUi(QDialog *companyorder)
    {
        if (companyorder->objectName().isEmpty())
            companyorder->setObjectName(QString::fromUtf8("companyorder"));
        companyorder->resize(836, 479);
        label = new QLabel(companyorder);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 0, 151, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        groupBox = new QGroupBox(companyorder);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 70, 541, 381));
        driverViewTable = new QTableWidget(groupBox);
        driverViewTable->setObjectName(QString::fromUtf8("driverViewTable"));
        driverViewTable->setGeometry(QRect(10, 30, 521, 341));
        assignDriverButton = new QPushButton(companyorder);
        assignDriverButton->setObjectName(QString::fromUtf8("assignDriverButton"));
        assignDriverButton->setGeometry(QRect(620, 220, 151, 71));
        backButton = new QPushButton(companyorder);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(30, 10, 61, 21));

        retranslateUi(companyorder);

        QMetaObject::connectSlotsByName(companyorder);
    } // setupUi

    void retranslateUi(QDialog *companyorder)
    {
        companyorder->setWindowTitle(QApplication::translate("companyorder", "Dialog", nullptr));
        label->setText(QApplication::translate("companyorder", "Find Driver", nullptr));
        groupBox->setTitle(QApplication::translate("companyorder", "Driver Search", nullptr));
        assignDriverButton->setText(QApplication::translate("companyorder", "Assign to This Driver", nullptr));
        backButton->setText(QApplication::translate("companyorder", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class companyorder: public Ui_companyorder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPANYORDER_H
