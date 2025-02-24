/********************************************************************************
** Form generated from reading UI file 'companyregistration.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPANYREGISTRATION_H
#define UI_COMPANYREGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_companyRegistration
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QWidget *companyRegistrationForm;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *nameLabel;
    QLineEdit *nameField;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_5;
    QLineEdit *usernameField;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QLineEdit *passwordField;
    QHBoxLayout *horizontalLayout_5;
    QLabel *emailLabel;
    QLineEdit *emailField;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QLineEdit *addressField;
    QHBoxLayout *horizontalLayout_4;
    QLabel *idLabel;
    QLineEdit *numberField;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_6;
    QLineEdit *companyNameField;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_9;
    QLineEdit *compAddressField;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_8;
    QLineEdit *NoOfEmployField;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *companyRegistration)
    {
        if (companyRegistration->objectName().isEmpty())
            companyRegistration->setObjectName(QString::fromUtf8("companyRegistration"));
        companyRegistration->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(companyRegistration->sizePolicy().hasHeightForWidth());
        companyRegistration->setSizePolicy(sizePolicy);
        companyRegistration->setMinimumSize(QSize(150, 150));
        verticalLayout = new QVBoxLayout(companyRegistration);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_2 = new QPushButton(companyRegistration);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(25, 25));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        label_2 = new QLabel(companyRegistration);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        companyRegistrationForm = new QWidget(companyRegistration);
        companyRegistrationForm->setObjectName(QString::fromUtf8("companyRegistrationForm"));
        sizePolicy.setHeightForWidth(companyRegistrationForm->sizePolicy().hasHeightForWidth());
        companyRegistrationForm->setSizePolicy(sizePolicy);
        companyRegistrationForm->setMinimumSize(QSize(350, 350));
        companyRegistrationForm->setStyleSheet(QString::fromUtf8("#companyRegistrationForm{ border: 1px solid; }"));
        verticalLayout_2 = new QVBoxLayout(companyRegistrationForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 20, -1, -1);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        nameLabel = new QLabel(companyRegistrationForm);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        horizontalLayout_6->addWidget(nameLabel);

        nameField = new QLineEdit(companyRegistrationForm);
        nameField->setObjectName(QString::fromUtf8("nameField"));

        horizontalLayout_6->addWidget(nameField);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_5 = new QLabel(companyRegistrationForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_10->addWidget(label_5);

        usernameField = new QLineEdit(companyRegistrationForm);
        usernameField->setObjectName(QString::fromUtf8("usernameField"));

        horizontalLayout_10->addWidget(usernameField);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_3 = new QLabel(companyRegistrationForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_7->addWidget(label_3);

        passwordField = new QLineEdit(companyRegistrationForm);
        passwordField->setObjectName(QString::fromUtf8("passwordField"));

        horizontalLayout_7->addWidget(passwordField);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        emailLabel = new QLabel(companyRegistrationForm);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));

        horizontalLayout_5->addWidget(emailLabel);

        emailField = new QLineEdit(companyRegistrationForm);
        emailField->setObjectName(QString::fromUtf8("emailField"));

        horizontalLayout_5->addWidget(emailField);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_4 = new QLabel(companyRegistrationForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_9->addWidget(label_4);

        addressField = new QLineEdit(companyRegistrationForm);
        addressField->setObjectName(QString::fromUtf8("addressField"));

        horizontalLayout_9->addWidget(addressField);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        idLabel = new QLabel(companyRegistrationForm);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));

        horizontalLayout_4->addWidget(idLabel);

        numberField = new QLineEdit(companyRegistrationForm);
        numberField->setObjectName(QString::fromUtf8("numberField"));

        horizontalLayout_4->addWidget(numberField);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_6 = new QLabel(companyRegistrationForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_11->addWidget(label_6);

        companyNameField = new QLineEdit(companyRegistrationForm);
        companyNameField->setObjectName(QString::fromUtf8("companyNameField"));

        horizontalLayout_11->addWidget(companyNameField);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(-1, 0, -1, -1);
        label_9 = new QLabel(companyRegistrationForm);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_14->addWidget(label_9);

        compAddressField = new QLineEdit(companyRegistrationForm);
        compAddressField->setObjectName(QString::fromUtf8("compAddressField"));

        horizontalLayout_14->addWidget(compAddressField);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));

        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_8 = new QLabel(companyRegistrationForm);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_13->addWidget(label_8);

        NoOfEmployField = new QLineEdit(companyRegistrationForm);
        NoOfEmployField->setObjectName(QString::fromUtf8("NoOfEmployField"));

        horizontalLayout_13->addWidget(NoOfEmployField);


        verticalLayout_2->addLayout(horizontalLayout_13);

        pushButton_3 = new QPushButton(companyRegistrationForm);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);


        horizontalLayout_3->addWidget(companyRegistrationForm);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(companyRegistration);

        QMetaObject::connectSlotsByName(companyRegistration);
    } // setupUi

    void retranslateUi(QDialog *companyRegistration)
    {
        companyRegistration->setWindowTitle(QApplication::translate("companyRegistration", "Dialog", nullptr));
        pushButton_2->setText(QApplication::translate("companyRegistration", "Back", nullptr));
        label_2->setText(QApplication::translate("companyRegistration", "Company Sign Up", nullptr));
        nameLabel->setText(QApplication::translate("companyRegistration", "Name:     ", nullptr));
        nameField->setPlaceholderText(QApplication::translate("companyRegistration", "Letters and spaces only", nullptr));
        label_5->setText(QApplication::translate("companyRegistration", "Username:", nullptr));
        usernameField->setPlaceholderText(QApplication::translate("companyRegistration", "At least 5 characters", nullptr));
        label_3->setText(QApplication::translate("companyRegistration", "Password:", nullptr));
        passwordField->setPlaceholderText(QApplication::translate("companyRegistration", "1 Caps Letter, 1 Number", nullptr));
        emailLabel->setText(QApplication::translate("companyRegistration", "Email:      ", nullptr));
        label_4->setText(QApplication::translate("companyRegistration", "Address:  ", nullptr));
        idLabel->setText(QApplication::translate("companyRegistration", "Phone No", nullptr));
        numberField->setPlaceholderText(QApplication::translate("companyRegistration", "11 numbers", nullptr));
        label_6->setText(QApplication::translate("companyRegistration", "Company Name:", nullptr));
        label_9->setText(QApplication::translate("companyRegistration", "Company Address:", nullptr));
        label_8->setText(QApplication::translate("companyRegistration", "No. of Employees:", nullptr));
        NoOfEmployField->setPlaceholderText(QApplication::translate("companyRegistration", "Numbers only", nullptr));
        pushButton_3->setText(QApplication::translate("companyRegistration", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class companyRegistration: public Ui_companyRegistration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPANYREGISTRATION_H
