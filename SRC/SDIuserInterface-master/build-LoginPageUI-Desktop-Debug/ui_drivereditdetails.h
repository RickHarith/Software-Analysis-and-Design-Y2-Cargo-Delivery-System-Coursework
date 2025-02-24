/********************************************************************************
** Form generated from reading UI file 'drivereditdetails.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVEREDITDETAILS_H
#define UI_DRIVEREDITDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_drivereditdetails
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *CurrentDate;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QWidget *driverRegistrationForm;
    QVBoxLayout *verticalLayout_2;
    QLabel *driverDetailsLabel;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *driverDetailsscrollArea;
    QWidget *scrollAreaWidgetContents_4;
    QGridLayout *gridLayout;
    QLineEdit *numberLineEdit;
    QLineEdit *emailLineEdit;
    QLineEdit *namelineEdit;
    QLineEdit *addressLineEdit;
    QLineEdit *usernameLineEdit;
    QLabel *passwordLabel;
    QLabel *emailLabel;
    QLabel *addressLabel;
    QLabel *numberLabel_2;
    QLineEdit *niNumberField;
    QLabel *nameLabel;
    QLabel *usernameLabel;
    QLabel *numberLabel;
    QLineEdit *passwordLineEdit;
    QLineEdit *licenseField;
    QLabel *numberLabel_3;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *drivereditdetails)
    {
        if (drivereditdetails->objectName().isEmpty())
            drivereditdetails->setObjectName(QString::fromUtf8("drivereditdetails"));
        drivereditdetails->resize(800, 600);
        verticalLayout = new QVBoxLayout(drivereditdetails);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        CurrentDate = new QLabel(drivereditdetails);
        CurrentDate->setObjectName(QString::fromUtf8("CurrentDate"));

        horizontalLayout->addWidget(CurrentDate);

        backButton = new QPushButton(drivereditdetails);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        horizontalLayout->addWidget(backButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(drivereditdetails);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        driverRegistrationForm = new QWidget(drivereditdetails);
        driverRegistrationForm->setObjectName(QString::fromUtf8("driverRegistrationForm"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(driverRegistrationForm->sizePolicy().hasHeightForWidth());
        driverRegistrationForm->setSizePolicy(sizePolicy);
        driverRegistrationForm->setMinimumSize(QSize(350, 300));
        driverRegistrationForm->setStyleSheet(QString::fromUtf8("#driverRegistrationForm{ border: 1px solid; }"));
        verticalLayout_2 = new QVBoxLayout(driverRegistrationForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, -1);
        driverDetailsLabel = new QLabel(driverRegistrationForm);
        driverDetailsLabel->setObjectName(QString::fromUtf8("driverDetailsLabel"));

        verticalLayout_2->addWidget(driverDetailsLabel);

        label = new QLabel(driverRegistrationForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(239, 41, 41)"));

        verticalLayout_2->addWidget(label);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        driverDetailsscrollArea = new QScrollArea(driverRegistrationForm);
        driverDetailsscrollArea->setObjectName(QString::fromUtf8("driverDetailsscrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(driverDetailsscrollArea->sizePolicy().hasHeightForWidth());
        driverDetailsscrollArea->setSizePolicy(sizePolicy1);
        driverDetailsscrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 478, 260));
        gridLayout = new QGridLayout(scrollAreaWidgetContents_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        numberLineEdit = new QLineEdit(scrollAreaWidgetContents_4);
        numberLineEdit->setObjectName(QString::fromUtf8("numberLineEdit"));

        gridLayout->addWidget(numberLineEdit, 5, 1, 1, 1);

        emailLineEdit = new QLineEdit(scrollAreaWidgetContents_4);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));

        gridLayout->addWidget(emailLineEdit, 2, 1, 1, 1);

        namelineEdit = new QLineEdit(scrollAreaWidgetContents_4);
        namelineEdit->setObjectName(QString::fromUtf8("namelineEdit"));

        gridLayout->addWidget(namelineEdit, 0, 1, 1, 1);

        addressLineEdit = new QLineEdit(scrollAreaWidgetContents_4);
        addressLineEdit->setObjectName(QString::fromUtf8("addressLineEdit"));

        gridLayout->addWidget(addressLineEdit, 3, 1, 1, 1);

        usernameLineEdit = new QLineEdit(scrollAreaWidgetContents_4);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));

        gridLayout->addWidget(usernameLineEdit, 1, 1, 1, 1);

        passwordLabel = new QLabel(scrollAreaWidgetContents_4);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));

        gridLayout->addWidget(passwordLabel, 4, 0, 1, 1);

        emailLabel = new QLabel(scrollAreaWidgetContents_4);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));

        gridLayout->addWidget(emailLabel, 2, 0, 1, 1);

        addressLabel = new QLabel(scrollAreaWidgetContents_4);
        addressLabel->setObjectName(QString::fromUtf8("addressLabel"));

        gridLayout->addWidget(addressLabel, 3, 0, 1, 1);

        numberLabel_2 = new QLabel(scrollAreaWidgetContents_4);
        numberLabel_2->setObjectName(QString::fromUtf8("numberLabel_2"));

        gridLayout->addWidget(numberLabel_2, 6, 0, 1, 1);

        niNumberField = new QLineEdit(scrollAreaWidgetContents_4);
        niNumberField->setObjectName(QString::fromUtf8("niNumberField"));

        gridLayout->addWidget(niNumberField, 6, 1, 1, 1);

        nameLabel = new QLabel(scrollAreaWidgetContents_4);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout->addWidget(nameLabel, 0, 0, 1, 1);

        usernameLabel = new QLabel(scrollAreaWidgetContents_4);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));

        gridLayout->addWidget(usernameLabel, 1, 0, 1, 1);

        numberLabel = new QLabel(scrollAreaWidgetContents_4);
        numberLabel->setObjectName(QString::fromUtf8("numberLabel"));

        gridLayout->addWidget(numberLabel, 5, 0, 1, 1);

        passwordLineEdit = new QLineEdit(scrollAreaWidgetContents_4);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));

        gridLayout->addWidget(passwordLineEdit, 4, 1, 1, 1);

        licenseField = new QLineEdit(scrollAreaWidgetContents_4);
        licenseField->setObjectName(QString::fromUtf8("licenseField"));

        gridLayout->addWidget(licenseField, 8, 1, 1, 1);

        numberLabel_3 = new QLabel(scrollAreaWidgetContents_4);
        numberLabel_3->setObjectName(QString::fromUtf8("numberLabel_3"));

        gridLayout->addWidget(numberLabel_3, 8, 0, 1, 1);

        driverDetailsscrollArea->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_3->addWidget(driverDetailsscrollArea);


        verticalLayout_2->addLayout(verticalLayout_3);


        horizontalLayout_3->addWidget(driverRegistrationForm);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton = new QPushButton(drivereditdetails);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(drivereditdetails);

        QMetaObject::connectSlotsByName(drivereditdetails);
    } // setupUi

    void retranslateUi(QDialog *drivereditdetails)
    {
        drivereditdetails->setWindowTitle(QApplication::translate("drivereditdetails", "Dialog", nullptr));
        CurrentDate->setText(QString());
        backButton->setText(QApplication::translate("drivereditdetails", "Back", nullptr));
        label_5->setText(QApplication::translate("drivereditdetails", "Edit Driver Details", nullptr));
        driverDetailsLabel->setText(QApplication::translate("drivereditdetails", "Driver Details", nullptr));
        label->setText(QApplication::translate("drivereditdetails", "Username, Email, Mobile Number, NI Number and License ID are UNIQUE!", nullptr));
        numberLineEdit->setPlaceholderText(QApplication::translate("drivereditdetails", "11 numbers", nullptr));
        namelineEdit->setPlaceholderText(QApplication::translate("drivereditdetails", "Letters and spaces only", nullptr));
        usernameLineEdit->setPlaceholderText(QApplication::translate("drivereditdetails", "At least 5 characters", nullptr));
        passwordLabel->setText(QApplication::translate("drivereditdetails", "Password:", nullptr));
        emailLabel->setText(QApplication::translate("drivereditdetails", "Email:", nullptr));
        addressLabel->setText(QApplication::translate("drivereditdetails", "Address:", nullptr));
        numberLabel_2->setText(QApplication::translate("drivereditdetails", "NI Number:", nullptr));
        niNumberField->setPlaceholderText(QApplication::translate("drivereditdetails", "e.g. AB123456C", nullptr));
        nameLabel->setText(QApplication::translate("drivereditdetails", "Name:", nullptr));
        usernameLabel->setText(QApplication::translate("drivereditdetails", "Username:", nullptr));
        numberLabel->setText(QApplication::translate("drivereditdetails", "H/P No:", nullptr));
        passwordLineEdit->setPlaceholderText(QApplication::translate("drivereditdetails", "1 Caps Letter, 1 Number", nullptr));
        licenseField->setPlaceholderText(QApplication::translate("drivereditdetails", "9 - 16 characters", nullptr));
        numberLabel_3->setText(QApplication::translate("drivereditdetails", "License ID:", nullptr));
        pushButton->setText(QApplication::translate("drivereditdetails", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class drivereditdetails: public Ui_drivereditdetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVEREDITDETAILS_H
