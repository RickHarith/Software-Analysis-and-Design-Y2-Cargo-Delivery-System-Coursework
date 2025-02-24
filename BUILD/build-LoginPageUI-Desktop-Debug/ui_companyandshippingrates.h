/********************************************************************************
** Form generated from reading UI file 'companyandshippingrates.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPANYANDSHIPPINGRATES_H
#define UI_COMPANYANDSHIPPINGRATES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_companyandshippingrates
{
public:
    QLabel *OrderLabel;
    QPushButton *viewFeedbackButton;
    QPushButton *calcCompanyCommissionButton;
    QPushButton *BackButton;
    QTableWidget *compOrderHistory;
    QTextEdit *viewFeedbackField;
    QLineEdit *commissionField;
    QPushButton *viewFeedbackButton_2;
    QTextEdit *viewFeedbackField_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *companyandshippingrates)
    {
        if (companyandshippingrates->objectName().isEmpty())
            companyandshippingrates->setObjectName(QString::fromUtf8("companyandshippingrates"));
        companyandshippingrates->resize(800, 600);
        companyandshippingrates->setMinimumSize(QSize(0, 0));
        OrderLabel = new QLabel(companyandshippingrates);
        OrderLabel->setObjectName(QString::fromUtf8("OrderLabel"));
        OrderLabel->setGeometry(QRect(10, 50, 382, 17));
        viewFeedbackButton = new QPushButton(companyandshippingrates);
        viewFeedbackButton->setObjectName(QString::fromUtf8("viewFeedbackButton"));
        viewFeedbackButton->setGeometry(QRect(480, 540, 141, 51));
        calcCompanyCommissionButton = new QPushButton(companyandshippingrates);
        calcCompanyCommissionButton->setObjectName(QString::fromUtf8("calcCompanyCommissionButton"));
        calcCompanyCommissionButton->setGeometry(QRect(110, 560, 261, 25));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(calcCompanyCommissionButton->sizePolicy().hasHeightForWidth());
        calcCompanyCommissionButton->setSizePolicy(sizePolicy);
        BackButton = new QPushButton(companyandshippingrates);
        BackButton->setObjectName(QString::fromUtf8("BackButton"));
        BackButton->setGeometry(QRect(10, 10, 80, 25));
        compOrderHistory = new QTableWidget(companyandshippingrates);
        compOrderHistory->setObjectName(QString::fromUtf8("compOrderHistory"));
        compOrderHistory->setGeometry(QRect(10, 80, 471, 421));
        viewFeedbackField = new QTextEdit(companyandshippingrates);
        viewFeedbackField->setObjectName(QString::fromUtf8("viewFeedbackField"));
        viewFeedbackField->setGeometry(QRect(490, 80, 291, 211));
        viewFeedbackField->setReadOnly(true);
        commissionField = new QLineEdit(companyandshippingrates);
        commissionField->setObjectName(QString::fromUtf8("commissionField"));
        commissionField->setGeometry(QRect(10, 510, 471, 25));
        viewFeedbackButton_2 = new QPushButton(companyandshippingrates);
        viewFeedbackButton_2->setObjectName(QString::fromUtf8("viewFeedbackButton_2"));
        viewFeedbackButton_2->setGeometry(QRect(650, 540, 141, 51));
        viewFeedbackField_2 = new QTextEdit(companyandshippingrates);
        viewFeedbackField_2->setObjectName(QString::fromUtf8("viewFeedbackField_2"));
        viewFeedbackField_2->setGeometry(QRect(490, 320, 291, 211));
        viewFeedbackField_2->setReadOnly(true);
        label_2 = new QLabel(companyandshippingrates);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(490, 80, 64, 17));
        label_3 = new QLabel(companyandshippingrates);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(490, 60, 181, 17));
        label_4 = new QLabel(companyandshippingrates);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(490, 300, 151, 17));

        retranslateUi(companyandshippingrates);

        QMetaObject::connectSlotsByName(companyandshippingrates);
    } // setupUi

    void retranslateUi(QDialog *companyandshippingrates)
    {
        companyandshippingrates->setWindowTitle(QApplication::translate("companyandshippingrates", "Dialog", nullptr));
        OrderLabel->setText(QApplication::translate("companyandshippingrates", "Company Order History", nullptr));
        viewFeedbackButton->setText(QApplication::translate("companyandshippingrates", "View Cargo Owner\n"
" Feedback", nullptr));
        calcCompanyCommissionButton->setText(QApplication::translate("companyandshippingrates", "Calculate Company Commission", nullptr));
        BackButton->setText(QApplication::translate("companyandshippingrates", "Back", nullptr));
        viewFeedbackButton_2->setText(QApplication::translate("companyandshippingrates", "View Driver\n"
"Feedback", nullptr));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("companyandshippingrates", "Cargo Owner Feedback", nullptr));
        label_4->setText(QApplication::translate("companyandshippingrates", "Driver Feedback", nullptr));
    } // retranslateUi

};

namespace Ui {
    class companyandshippingrates: public Ui_companyandshippingrates {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPANYANDSHIPPINGRATES_H
