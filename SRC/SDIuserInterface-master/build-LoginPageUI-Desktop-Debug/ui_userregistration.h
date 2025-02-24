/********************************************************************************
** Form generated from reading UI file 'userregistration.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERREGISTRATION_H
#define UI_USERREGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userRegistration
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
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_6;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QDialog *userRegistration)
    {
        if (userRegistration->objectName().isEmpty())
            userRegistration->setObjectName(QString::fromUtf8("userRegistration"));
        userRegistration->resize(800, 605);
        verticalLayout_3 = new QVBoxLayout(userRegistration);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_2 = new QPushButton(userRegistration);
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
        label = new QLabel(userRegistration);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        accountForm = new QWidget(userRegistration);
        accountForm->setObjectName(QString::fromUtf8("accountForm"));
        sizePolicy.setHeightForWidth(accountForm->sizePolicy().hasHeightForWidth());
        accountForm->setSizePolicy(sizePolicy);
        accountForm->setMinimumSize(QSize(350, 300));
        accountForm->setStyleSheet(QString::fromUtf8("#accountForm{ border: 1px solid; }"));
        verticalLayout_2 = new QVBoxLayout(accountForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, 10, 10, 5);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_3 = new QLabel(accountForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_7->addWidget(label_3);

        lineEdit = new QLineEdit(accountForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_7->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_8 = new QLabel(accountForm);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_9->addWidget(label_8);

        lineEdit_6 = new QLineEdit(accountForm);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_9->addWidget(lineEdit_6);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(accountForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_6->addWidget(label_4);

        lineEdit_2 = new QLineEdit(accountForm);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_6->addWidget(lineEdit_2);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(accountForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_3 = new QLineEdit(accountForm);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_5->addWidget(lineEdit_3);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(accountForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        lineEdit_4 = new QLineEdit(accountForm);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_4->addWidget(lineEdit_4);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_7 = new QLabel(accountForm);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);

        lineEdit_5 = new QLineEdit(accountForm);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_8->addWidget(lineEdit_5);


        verticalLayout_2->addLayout(horizontalLayout_8);

        pushButton_6 = new QPushButton(accountForm);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout_2->addWidget(pushButton_6);


        horizontalLayout_3->addWidget(accountForm);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout);

        menubar = new QMenuBar(userRegistration);
        menubar->setObjectName(QString::fromUtf8("menubar"));

        verticalLayout_3->addWidget(menubar);

        statusbar = new QStatusBar(userRegistration);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));

        verticalLayout_3->addWidget(statusbar);


        retranslateUi(userRegistration);

        QMetaObject::connectSlotsByName(userRegistration);
    } // setupUi

    void retranslateUi(QDialog *userRegistration)
    {
        userRegistration->setWindowTitle(QApplication::translate("userRegistration", "Dialog", nullptr));
        pushButton_2->setText(QApplication::translate("userRegistration", "Back", nullptr));
        label->setText(QApplication::translate("userRegistration", "Cargo Owner Sign Up", nullptr));
        label_3->setText(QApplication::translate("userRegistration", "Name:      ", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("userRegistration", "Letters and Spaces only", nullptr));
        label_8->setText(QApplication::translate("userRegistration", "Username:", nullptr));
        lineEdit_6->setPlaceholderText(QApplication::translate("userRegistration", "At least 5 characters", nullptr));
        label_4->setText(QApplication::translate("userRegistration", "Password:", nullptr));
        lineEdit_2->setPlaceholderText(QApplication::translate("userRegistration", "1 Caps Letter, 1 Number", nullptr));
        label_5->setText(QApplication::translate("userRegistration", "Email:     ", nullptr));
        label_6->setText(QApplication::translate("userRegistration", "Address:", nullptr));
        label_7->setText(QApplication::translate("userRegistration", "Phone:  ", nullptr));
        lineEdit_5->setPlaceholderText(QApplication::translate("userRegistration", "11 numbers", nullptr));
        pushButton_6->setText(QApplication::translate("userRegistration", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userRegistration: public Ui_userRegistration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERREGISTRATION_H
