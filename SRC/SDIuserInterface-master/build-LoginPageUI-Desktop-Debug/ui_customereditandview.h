/********************************************************************************
** Form generated from reading UI file 'customereditandview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMEREDITANDVIEW_H
#define UI_CUSTOMEREDITANDVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customereditandview
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QWidget *accountForm;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_9;
    QLabel *userNameLabel;
    QLineEdit *userNameLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *passordLabel;
    QLineEdit *passwordLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *emailLabel;
    QLineEdit *emailLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *addressLabel;
    QLineEdit *addressLineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *phoneNumberLabel;
    QLineEdit *PhoneNumberLineEdit;
    QPushButton *editButton;
    QSpacerItem *verticalSpacer_2;
    QWidget *viewDetailsForm;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_16;
    QTableWidget *userInfoTable;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QDialog *customereditandview)
    {
        if (customereditandview->objectName().isEmpty())
            customereditandview->setObjectName(QString::fromUtf8("customereditandview"));
        customereditandview->resize(800, 600);
        verticalLayout_3 = new QVBoxLayout(customereditandview);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_2 = new QPushButton(customereditandview);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(55, 25));

        horizontalLayout_2->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 30, -1, 30);
        label = new QLabel(customereditandview);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        accountForm = new QWidget(customereditandview);
        accountForm->setObjectName(QString::fromUtf8("accountForm"));
        sizePolicy.setHeightForWidth(accountForm->sizePolicy().hasHeightForWidth());
        accountForm->setSizePolicy(sizePolicy);
        accountForm->setMinimumSize(QSize(350, 300));
        accountForm->setStyleSheet(QString::fromUtf8("#accountForm{ border: 1px solid; }"));
        verticalLayout_2 = new QVBoxLayout(accountForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, 10, 10, 5);
        label_2 = new QLabel(accountForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(accountForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(239, 41, 41);"));

        verticalLayout_2->addWidget(label_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        nameLabel = new QLabel(accountForm);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        horizontalLayout_7->addWidget(nameLabel);

        nameLineEdit = new QLineEdit(accountForm);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        horizontalLayout_7->addWidget(nameLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        userNameLabel = new QLabel(accountForm);
        userNameLabel->setObjectName(QString::fromUtf8("userNameLabel"));

        horizontalLayout_9->addWidget(userNameLabel);

        userNameLineEdit = new QLineEdit(accountForm);
        userNameLineEdit->setObjectName(QString::fromUtf8("userNameLineEdit"));

        horizontalLayout_9->addWidget(userNameLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        passordLabel = new QLabel(accountForm);
        passordLabel->setObjectName(QString::fromUtf8("passordLabel"));

        horizontalLayout_6->addWidget(passordLabel);

        passwordLineEdit = new QLineEdit(accountForm);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));

        horizontalLayout_6->addWidget(passwordLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        emailLabel = new QLabel(accountForm);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));

        horizontalLayout_5->addWidget(emailLabel);

        emailLineEdit = new QLineEdit(accountForm);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));

        horizontalLayout_5->addWidget(emailLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        addressLabel = new QLabel(accountForm);
        addressLabel->setObjectName(QString::fromUtf8("addressLabel"));

        horizontalLayout_4->addWidget(addressLabel);

        addressLineEdit = new QLineEdit(accountForm);
        addressLineEdit->setObjectName(QString::fromUtf8("addressLineEdit"));

        horizontalLayout_4->addWidget(addressLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        phoneNumberLabel = new QLabel(accountForm);
        phoneNumberLabel->setObjectName(QString::fromUtf8("phoneNumberLabel"));

        horizontalLayout_8->addWidget(phoneNumberLabel);

        PhoneNumberLineEdit = new QLineEdit(accountForm);
        PhoneNumberLineEdit->setObjectName(QString::fromUtf8("PhoneNumberLineEdit"));

        horizontalLayout_8->addWidget(PhoneNumberLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_8);

        editButton = new QPushButton(accountForm);
        editButton->setObjectName(QString::fromUtf8("editButton"));

        verticalLayout_2->addWidget(editButton);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_3->addWidget(accountForm);

        viewDetailsForm = new QWidget(customereditandview);
        viewDetailsForm->setObjectName(QString::fromUtf8("viewDetailsForm"));
        sizePolicy.setHeightForWidth(viewDetailsForm->sizePolicy().hasHeightForWidth());
        viewDetailsForm->setSizePolicy(sizePolicy);
        viewDetailsForm->setMinimumSize(QSize(350, 300));
        viewDetailsForm->setStyleSheet(QString::fromUtf8("#viewDetailsForm{ border: 1px solid; }"));
        verticalLayout_4 = new QVBoxLayout(viewDetailsForm);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(viewDetailsForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(label_4);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        userInfoTable = new QTableWidget(viewDetailsForm);
        userInfoTable->setObjectName(QString::fromUtf8("userInfoTable"));

        horizontalLayout_16->addWidget(userInfoTable);


        verticalLayout_4->addLayout(horizontalLayout_16);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_3);


        horizontalLayout_3->addWidget(viewDetailsForm);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout);

        menubar = new QMenuBar(customereditandview);
        menubar->setObjectName(QString::fromUtf8("menubar"));

        verticalLayout_3->addWidget(menubar);

        statusbar = new QStatusBar(customereditandview);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));

        verticalLayout_3->addWidget(statusbar);


        retranslateUi(customereditandview);

        QMetaObject::connectSlotsByName(customereditandview);
    } // setupUi

    void retranslateUi(QDialog *customereditandview)
    {
        customereditandview->setWindowTitle(QApplication::translate("customereditandview", "Dialog", nullptr));
        pushButton_2->setText(QApplication::translate("customereditandview", "Back", nullptr));
        label->setText(QApplication::translate("customereditandview", "Cargo Owner Details", nullptr));
        label_2->setText(QApplication::translate("customereditandview", "Edit Details", nullptr));
        label_3->setText(QApplication::translate("customereditandview", "Username, Email and Phone number is UNIQUE!", nullptr));
        nameLabel->setText(QApplication::translate("customereditandview", "Name:      ", nullptr));
        nameLineEdit->setPlaceholderText(QApplication::translate("customereditandview", "Letters and Spaces only", nullptr));
        userNameLabel->setText(QApplication::translate("customereditandview", "Username:", nullptr));
        userNameLineEdit->setPlaceholderText(QApplication::translate("customereditandview", "At least 5 characters", nullptr));
        passordLabel->setText(QApplication::translate("customereditandview", "Password:", nullptr));
        passwordLineEdit->setPlaceholderText(QApplication::translate("customereditandview", "1 Caps Letter, 1 Number", nullptr));
        emailLabel->setText(QApplication::translate("customereditandview", "Email:     ", nullptr));
        addressLabel->setText(QApplication::translate("customereditandview", "Address:", nullptr));
        phoneNumberLabel->setText(QApplication::translate("customereditandview", "Phone:  ", nullptr));
        PhoneNumberLineEdit->setPlaceholderText(QApplication::translate("customereditandview", "11 numbers", nullptr));
        editButton->setText(QApplication::translate("customereditandview", "Edit", nullptr));
        label_4->setText(QApplication::translate("customereditandview", "Current Details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customereditandview: public Ui_customereditandview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMEREDITANDVIEW_H
