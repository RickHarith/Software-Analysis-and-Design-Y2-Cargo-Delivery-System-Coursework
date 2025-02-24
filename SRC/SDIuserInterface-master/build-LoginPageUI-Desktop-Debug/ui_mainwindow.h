/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
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
    QHBoxLayout *horizontalLayout_4;
    QWidget *otherLogins;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *companyLoginButton;
    QHBoxLayout *driverLoginButton;
    QPushButton *DriverLoginButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(centralwidget);
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
        loginForm = new QWidget(centralwidget);
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

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        otherLogins = new QWidget(centralwidget);
        otherLogins->setObjectName(QString::fromUtf8("otherLogins"));
        sizePolicy.setHeightForWidth(otherLogins->sizePolicy().hasHeightForWidth());
        otherLogins->setSizePolicy(sizePolicy);
        otherLogins->setMinimumSize(QSize(350, 100));
        otherLogins->setStyleSheet(QString::fromUtf8("#otherLogins{ border: 1px solid; }"));
        verticalLayout_3 = new QVBoxLayout(otherLogins);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(25, 25, 25, 25);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        companyLoginButton = new QPushButton(otherLogins);
        companyLoginButton->setObjectName(QString::fromUtf8("companyLoginButton"));

        horizontalLayout_5->addWidget(companyLoginButton);


        verticalLayout_3->addLayout(horizontalLayout_5);

        driverLoginButton = new QHBoxLayout();
        driverLoginButton->setObjectName(QString::fromUtf8("driverLoginButton"));
        DriverLoginButton = new QPushButton(otherLogins);
        DriverLoginButton->setObjectName(QString::fromUtf8("DriverLoginButton"));

        driverLoginButton->addWidget(DriverLoginButton);


        verticalLayout_3->addLayout(driverLoginButton);


        horizontalLayout_4->addWidget(otherLogins);


        verticalLayout->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Cargo\n"
"Login", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Username:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Password: ", nullptr));
        loginButton->setText(QApplication::translate("MainWindow", "Login", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Create New Account", nullptr));
        companyLoginButton->setText(QApplication::translate("MainWindow", "Company Login", nullptr));
        DriverLoginButton->setText(QApplication::translate("MainWindow", "Driver Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
