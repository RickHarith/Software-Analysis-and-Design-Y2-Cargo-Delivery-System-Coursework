/********************************************************************************
** Form generated from reading UI file 'driverlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVERLOGIN_H
#define UI_DRIVERLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_driverlogin
{
public:
    QVBoxLayout *verticalLayout_3;
    QMenuBar *menubar;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QWidget *loginForm;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *NameField;
    QLabel *label_3;
    QLineEdit *userName;
    QHBoxLayout *passField;
    QLabel *label_2;
    QLineEdit *Password;
    QSpacerItem *verticalSpacer_2;
    QPushButton *loginButton;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QWidget *otherLogins;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *customerLoginButton;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *CompanyLoginButton;

    void setupUi(QDialog *driverlogin)
    {
        if (driverlogin->objectName().isEmpty())
            driverlogin->setObjectName(QString::fromUtf8("driverlogin"));
        driverlogin->resize(800, 600);
        verticalLayout_3 = new QVBoxLayout(driverlogin);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        menubar = new QMenuBar(driverlogin);
        menubar->setObjectName(QString::fromUtf8("menubar"));

        verticalLayout_3->addWidget(menubar);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(driverlogin);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(150, 150));
        label->setStyleSheet(QString::fromUtf8("border: 1px solid;"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        loginForm = new QWidget(driverlogin);
        loginForm->setObjectName(QString::fromUtf8("loginForm"));
        sizePolicy.setHeightForWidth(loginForm->sizePolicy().hasHeightForWidth());
        loginForm->setSizePolicy(sizePolicy);
        loginForm->setMinimumSize(QSize(350, 200));
        loginForm->setStyleSheet(QString::fromUtf8("#loginForm{ border: 1px solid; }"));
        verticalLayout_2 = new QVBoxLayout(loginForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(35, 35, 35, 35);
        NameField = new QHBoxLayout();
        NameField->setObjectName(QString::fromUtf8("NameField"));
        label_3 = new QLabel(loginForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        NameField->addWidget(label_3);

        userName = new QLineEdit(loginForm);
        userName->setObjectName(QString::fromUtf8("userName"));

        NameField->addWidget(userName);


        verticalLayout_2->addLayout(NameField);

        passField = new QHBoxLayout();
        passField->setObjectName(QString::fromUtf8("passField"));
        label_2 = new QLabel(loginForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        passField->addWidget(label_2);

        Password = new QLineEdit(loginForm);
        Password->setObjectName(QString::fromUtf8("Password"));

        passField->addWidget(Password);


        verticalLayout_2->addLayout(passField);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        loginButton = new QPushButton(loginForm);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));

        verticalLayout_2->addWidget(loginButton);

        pushButton_3 = new QPushButton(loginForm);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);


        horizontalLayout_3->addWidget(loginForm);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        otherLogins = new QWidget(driverlogin);
        otherLogins->setObjectName(QString::fromUtf8("otherLogins"));
        sizePolicy.setHeightForWidth(otherLogins->sizePolicy().hasHeightForWidth());
        otherLogins->setSizePolicy(sizePolicy);
        otherLogins->setMinimumSize(QSize(350, 100));
        otherLogins->setStyleSheet(QString::fromUtf8("#otherLogins{ border: 1px solid; }"));
        verticalLayout_4 = new QVBoxLayout(otherLogins);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(25, 25, 25, 25);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        customerLoginButton = new QPushButton(otherLogins);
        customerLoginButton->setObjectName(QString::fromUtf8("customerLoginButton"));

        horizontalLayout_8->addWidget(customerLoginButton);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        CompanyLoginButton = new QPushButton(otherLogins);
        CompanyLoginButton->setObjectName(QString::fromUtf8("CompanyLoginButton"));

        horizontalLayout_6->addWidget(CompanyLoginButton);


        verticalLayout_4->addLayout(horizontalLayout_6);


        horizontalLayout_5->addWidget(otherLogins);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout);


        retranslateUi(driverlogin);

        QMetaObject::connectSlotsByName(driverlogin);
    } // setupUi

    void retranslateUi(QDialog *driverlogin)
    {
        driverlogin->setWindowTitle(QApplication::translate("driverlogin", "Dialog", nullptr));
        label->setText(QApplication::translate("driverlogin", "Driver\n"
"Login", nullptr));
        label_3->setText(QApplication::translate("driverlogin", "Username:", nullptr));
        label_2->setText(QApplication::translate("driverlogin", "Password: ", nullptr));
        loginButton->setText(QApplication::translate("driverlogin", "Login", nullptr));
        pushButton_3->setText(QApplication::translate("driverlogin", "Create New Account", nullptr));
        customerLoginButton->setText(QApplication::translate("driverlogin", "Customer Login", nullptr));
        CompanyLoginButton->setText(QApplication::translate("driverlogin", "Company Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class driverlogin: public Ui_driverlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVERLOGIN_H
