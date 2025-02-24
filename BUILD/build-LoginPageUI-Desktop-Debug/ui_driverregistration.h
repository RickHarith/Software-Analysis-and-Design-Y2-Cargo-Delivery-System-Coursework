/********************************************************************************
** Form generated from reading UI file 'driverregistration.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVERREGISTRATION_H
#define UI_DRIVERREGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_driverRegistration
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *CurrentDate;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *imageLabel;
    QPushButton *selectImage;
    QHBoxLayout *horizontalLayout_3;
    QWidget *driverRegistrationForm;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *driverDetailsscrollArea;
    QWidget *scrollAreaWidgetContents_4;
    QGridLayout *gridLayout;
    QLineEdit *usernameField;
    QLabel *niNumbrLabel;
    QLabel *PasswordLabel;
    QLabel *numberLabel;
    QLineEdit *addressField;
    QLabel *label_3;
    QLineEdit *niNumberField;
    QLineEdit *idField;
    QLabel *idLabel;
    QLineEdit *nameField;
    QLabel *addressLabel;
    QLineEdit *passwordField;
    QLineEdit *emailField;
    QLineEdit *numberField;
    QLabel *nameLabel;
    QLabel *emailLabel;
    QWidget *lorryDetailsForm;
    QVBoxLayout *LorryDetailsForm;
    QLabel *lorryDetailsLabel;
    QScrollArea *lorryDetailsscrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_3;
    QLineEdit *lorryRegNoField;
    QLineEdit *lengthField;
    QLabel *weightLabel;
    QLabel *lorryRegNoLabel;
    QLabel *heightLabel;
    QLabel *cpcLabel;
    QLineEdit *heightField;
    QLineEdit *weightField;
    QLineEdit *cpcField;
    QLabel *widthLabel;
    QLabel *lengthLabel;
    QLineEdit *widthField;
    QWidget *lorryButtonArea;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QRadioButton *axle_5_6;
    QRadioButton *axle_6;
    QRadioButton *axle_4;
    QRadioButton *axle_2;
    QRadioButton *axle_3;
    QLabel *label_2;
    QRadioButton *axle_5;
    QRadioButton *axle_6_drawbar;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_3;

    void setupUi(QDialog *driverRegistration)
    {
        if (driverRegistration->objectName().isEmpty())
            driverRegistration->setObjectName(QString::fromUtf8("driverRegistration"));
        driverRegistration->resize(800, 600);
        verticalLayout = new QVBoxLayout(driverRegistration);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        CurrentDate = new QLabel(driverRegistration);
        CurrentDate->setObjectName(QString::fromUtf8("CurrentDate"));

        horizontalLayout->addWidget(CurrentDate);

        backButton = new QPushButton(driverRegistration);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        horizontalLayout->addWidget(backButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(driverRegistration);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        imageLabel = new QLabel(driverRegistration);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(imageLabel->sizePolicy().hasHeightForWidth());
        imageLabel->setSizePolicy(sizePolicy);
        imageLabel->setMinimumSize(QSize(150, 150));
        imageLabel->setLayoutDirection(Qt::LeftToRight);
        imageLabel->setStyleSheet(QString::fromUtf8("border: 1px solid;"));
        imageLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(imageLabel);

        selectImage = new QPushButton(driverRegistration);
        selectImage->setObjectName(QString::fromUtf8("selectImage"));
        selectImage->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(selectImage);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        driverRegistrationForm = new QWidget(driverRegistration);
        driverRegistrationForm->setObjectName(QString::fromUtf8("driverRegistrationForm"));
        sizePolicy.setHeightForWidth(driverRegistrationForm->sizePolicy().hasHeightForWidth());
        driverRegistrationForm->setSizePolicy(sizePolicy);
        driverRegistrationForm->setMinimumSize(QSize(350, 300));
        driverRegistrationForm->setStyleSheet(QString::fromUtf8("#driverRegistrationForm{ border: 1px solid; }"));
        verticalLayout_2 = new QVBoxLayout(driverRegistrationForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, -1);
        label_4 = new QLabel(driverRegistrationForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

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
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 328, 264));
        gridLayout = new QGridLayout(scrollAreaWidgetContents_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        usernameField = new QLineEdit(scrollAreaWidgetContents_4);
        usernameField->setObjectName(QString::fromUtf8("usernameField"));

        gridLayout->addWidget(usernameField, 2, 1, 1, 1);

        niNumbrLabel = new QLabel(scrollAreaWidgetContents_4);
        niNumbrLabel->setObjectName(QString::fromUtf8("niNumbrLabel"));

        gridLayout->addWidget(niNumbrLabel, 3, 0, 1, 1);

        PasswordLabel = new QLabel(scrollAreaWidgetContents_4);
        PasswordLabel->setObjectName(QString::fromUtf8("PasswordLabel"));

        gridLayout->addWidget(PasswordLabel, 7, 0, 1, 1);

        numberLabel = new QLabel(scrollAreaWidgetContents_4);
        numberLabel->setObjectName(QString::fromUtf8("numberLabel"));

        gridLayout->addWidget(numberLabel, 8, 0, 1, 1);

        addressField = new QLineEdit(scrollAreaWidgetContents_4);
        addressField->setObjectName(QString::fromUtf8("addressField"));

        gridLayout->addWidget(addressField, 6, 1, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        niNumberField = new QLineEdit(scrollAreaWidgetContents_4);
        niNumberField->setObjectName(QString::fromUtf8("niNumberField"));

        gridLayout->addWidget(niNumberField, 3, 1, 1, 1);

        idField = new QLineEdit(scrollAreaWidgetContents_4);
        idField->setObjectName(QString::fromUtf8("idField"));

        gridLayout->addWidget(idField, 4, 1, 1, 1);

        idLabel = new QLabel(scrollAreaWidgetContents_4);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));

        gridLayout->addWidget(idLabel, 4, 0, 1, 1);

        nameField = new QLineEdit(scrollAreaWidgetContents_4);
        nameField->setObjectName(QString::fromUtf8("nameField"));

        gridLayout->addWidget(nameField, 1, 1, 1, 1);

        addressLabel = new QLabel(scrollAreaWidgetContents_4);
        addressLabel->setObjectName(QString::fromUtf8("addressLabel"));

        gridLayout->addWidget(addressLabel, 6, 0, 1, 1);

        passwordField = new QLineEdit(scrollAreaWidgetContents_4);
        passwordField->setObjectName(QString::fromUtf8("passwordField"));

        gridLayout->addWidget(passwordField, 7, 1, 1, 1);

        emailField = new QLineEdit(scrollAreaWidgetContents_4);
        emailField->setObjectName(QString::fromUtf8("emailField"));

        gridLayout->addWidget(emailField, 5, 1, 1, 1);

        numberField = new QLineEdit(scrollAreaWidgetContents_4);
        numberField->setObjectName(QString::fromUtf8("numberField"));

        gridLayout->addWidget(numberField, 8, 1, 1, 1);

        nameLabel = new QLabel(scrollAreaWidgetContents_4);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout->addWidget(nameLabel, 1, 0, 1, 1);

        emailLabel = new QLabel(scrollAreaWidgetContents_4);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));

        gridLayout->addWidget(emailLabel, 5, 0, 1, 1);

        driverDetailsscrollArea->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_3->addWidget(driverDetailsscrollArea);


        verticalLayout_2->addLayout(verticalLayout_3);


        horizontalLayout_3->addWidget(driverRegistrationForm);

        lorryDetailsForm = new QWidget(driverRegistration);
        lorryDetailsForm->setObjectName(QString::fromUtf8("lorryDetailsForm"));
        sizePolicy.setHeightForWidth(lorryDetailsForm->sizePolicy().hasHeightForWidth());
        lorryDetailsForm->setSizePolicy(sizePolicy);
        lorryDetailsForm->setMinimumSize(QSize(100, 300));
        lorryDetailsForm->setStyleSheet(QString::fromUtf8("#lorryDetailsForm{ border: 1px solid; }"));
        LorryDetailsForm = new QVBoxLayout(lorryDetailsForm);
        LorryDetailsForm->setObjectName(QString::fromUtf8("LorryDetailsForm"));
        lorryDetailsLabel = new QLabel(lorryDetailsForm);
        lorryDetailsLabel->setObjectName(QString::fromUtf8("lorryDetailsLabel"));

        LorryDetailsForm->addWidget(lorryDetailsLabel);

        lorryDetailsscrollArea_3 = new QScrollArea(lorryDetailsForm);
        lorryDetailsscrollArea_3->setObjectName(QString::fromUtf8("lorryDetailsscrollArea_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lorryDetailsscrollArea_3->sizePolicy().hasHeightForWidth());
        lorryDetailsscrollArea_3->setSizePolicy(sizePolicy2);
        lorryDetailsscrollArea_3->setMinimumSize(QSize(100, 275));
        lorryDetailsscrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 252, 273));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lorryRegNoField = new QLineEdit(scrollAreaWidgetContents_3);
        lorryRegNoField->setObjectName(QString::fromUtf8("lorryRegNoField"));

        gridLayout_3->addWidget(lorryRegNoField, 4, 1, 1, 1);

        lengthField = new QLineEdit(scrollAreaWidgetContents_3);
        lengthField->setObjectName(QString::fromUtf8("lengthField"));

        gridLayout_3->addWidget(lengthField, 7, 1, 1, 1);

        weightLabel = new QLabel(scrollAreaWidgetContents_3);
        weightLabel->setObjectName(QString::fromUtf8("weightLabel"));

        gridLayout_3->addWidget(weightLabel, 2, 0, 1, 1);

        lorryRegNoLabel = new QLabel(scrollAreaWidgetContents_3);
        lorryRegNoLabel->setObjectName(QString::fromUtf8("lorryRegNoLabel"));

        gridLayout_3->addWidget(lorryRegNoLabel, 4, 0, 1, 1);

        heightLabel = new QLabel(scrollAreaWidgetContents_3);
        heightLabel->setObjectName(QString::fromUtf8("heightLabel"));

        gridLayout_3->addWidget(heightLabel, 9, 0, 1, 1);

        cpcLabel = new QLabel(scrollAreaWidgetContents_3);
        cpcLabel->setObjectName(QString::fromUtf8("cpcLabel"));

        gridLayout_3->addWidget(cpcLabel, 10, 0, 1, 1);

        heightField = new QLineEdit(scrollAreaWidgetContents_3);
        heightField->setObjectName(QString::fromUtf8("heightField"));

        gridLayout_3->addWidget(heightField, 9, 1, 1, 1);

        weightField = new QLineEdit(scrollAreaWidgetContents_3);
        weightField->setObjectName(QString::fromUtf8("weightField"));

        gridLayout_3->addWidget(weightField, 2, 1, 1, 1);

        cpcField = new QLineEdit(scrollAreaWidgetContents_3);
        cpcField->setObjectName(QString::fromUtf8("cpcField"));

        gridLayout_3->addWidget(cpcField, 10, 1, 1, 1);

        widthLabel = new QLabel(scrollAreaWidgetContents_3);
        widthLabel->setObjectName(QString::fromUtf8("widthLabel"));

        gridLayout_3->addWidget(widthLabel, 8, 0, 1, 1);

        lengthLabel = new QLabel(scrollAreaWidgetContents_3);
        lengthLabel->setObjectName(QString::fromUtf8("lengthLabel"));

        gridLayout_3->addWidget(lengthLabel, 7, 0, 1, 1);

        widthField = new QLineEdit(scrollAreaWidgetContents_3);
        widthField->setObjectName(QString::fromUtf8("widthField"));

        gridLayout_3->addWidget(widthField, 8, 1, 1, 1);

        lorryDetailsscrollArea_3->setWidget(scrollAreaWidgetContents_3);

        LorryDetailsForm->addWidget(lorryDetailsscrollArea_3);


        horizontalLayout_3->addWidget(lorryDetailsForm);

        lorryButtonArea = new QWidget(driverRegistration);
        lorryButtonArea->setObjectName(QString::fromUtf8("lorryButtonArea"));
        sizePolicy.setHeightForWidth(lorryButtonArea->sizePolicy().hasHeightForWidth());
        lorryButtonArea->setSizePolicy(sizePolicy);
        lorryButtonArea->setMinimumSize(QSize(75, 300));
        lorryButtonArea->setStyleSheet(QString::fromUtf8("#lorryButtonArea{ border: 1px solid; }"));
        verticalLayout_6 = new QVBoxLayout(lorryButtonArea);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(lorryButtonArea);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(scrollArea_2->sizePolicy().hasHeightForWidth());
        scrollArea_2->setSizePolicy(sizePolicy3);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 147, 284));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        axle_5_6 = new QRadioButton(scrollAreaWidgetContents);
        axle_5_6->setObjectName(QString::fromUtf8("axle_5_6"));

        gridLayout_2->addWidget(axle_5_6, 8, 0, 1, 1);

        axle_6 = new QRadioButton(scrollAreaWidgetContents);
        axle_6->setObjectName(QString::fromUtf8("axle_6"));

        gridLayout_2->addWidget(axle_6, 6, 0, 1, 1);

        axle_4 = new QRadioButton(scrollAreaWidgetContents);
        axle_4->setObjectName(QString::fromUtf8("axle_4"));

        gridLayout_2->addWidget(axle_4, 4, 0, 1, 1);

        axle_2 = new QRadioButton(scrollAreaWidgetContents);
        axle_2->setObjectName(QString::fromUtf8("axle_2"));

        gridLayout_2->addWidget(axle_2, 1, 0, 1, 1);

        axle_3 = new QRadioButton(scrollAreaWidgetContents);
        axle_3->setObjectName(QString::fromUtf8("axle_3"));

        gridLayout_2->addWidget(axle_3, 3, 0, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(100, 25));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        axle_5 = new QRadioButton(scrollAreaWidgetContents);
        axle_5->setObjectName(QString::fromUtf8("axle_5"));

        gridLayout_2->addWidget(axle_5, 5, 0, 1, 1);

        axle_6_drawbar = new QRadioButton(scrollAreaWidgetContents);
        axle_6_drawbar->setObjectName(QString::fromUtf8("axle_6_drawbar"));

        gridLayout_2->addWidget(axle_6_drawbar, 9, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents);

        verticalLayout_6->addWidget(scrollArea_2);


        horizontalLayout_3->addWidget(lorryButtonArea);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        pushButton_3 = new QPushButton(driverRegistration);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        retranslateUi(driverRegistration);

        QMetaObject::connectSlotsByName(driverRegistration);
    } // setupUi

    void retranslateUi(QDialog *driverRegistration)
    {
        driverRegistration->setWindowTitle(QApplication::translate("driverRegistration", "Dialog", nullptr));
        CurrentDate->setText(QString());
        backButton->setText(QApplication::translate("driverRegistration", "Back", nullptr));
        label_5->setText(QApplication::translate("driverRegistration", "Driver Sign Up", nullptr));
        imageLabel->setText(QApplication::translate("driverRegistration", "Upload your\n"
"photo here\n"
"(Required)", nullptr));
        selectImage->setText(QApplication::translate("driverRegistration", "Select Image", nullptr));
        label_4->setText(QApplication::translate("driverRegistration", "Driver Details", nullptr));
        usernameField->setPlaceholderText(QApplication::translate("driverRegistration", "At least 5 characters", nullptr));
        niNumbrLabel->setText(QApplication::translate("driverRegistration", "NI Number", nullptr));
        PasswordLabel->setText(QApplication::translate("driverRegistration", "Password", nullptr));
        numberLabel->setText(QApplication::translate("driverRegistration", "H/P No", nullptr));
        label_3->setText(QApplication::translate("driverRegistration", "Username:", nullptr));
        niNumberField->setPlaceholderText(QApplication::translate("driverRegistration", "e.g: AB123456C", nullptr));
        idField->setPlaceholderText(QApplication::translate("driverRegistration", "9 - 16 characters", nullptr));
        idLabel->setText(QApplication::translate("driverRegistration", "Licence ID", nullptr));
        nameField->setPlaceholderText(QApplication::translate("driverRegistration", "Letters and spaces only", nullptr));
        addressLabel->setText(QApplication::translate("driverRegistration", "Address", nullptr));
        passwordField->setPlaceholderText(QApplication::translate("driverRegistration", "1 Caps Letter, 1 Number", nullptr));
        numberField->setPlaceholderText(QApplication::translate("driverRegistration", "11 numbers", nullptr));
        nameLabel->setText(QApplication::translate("driverRegistration", "Name", nullptr));
        emailLabel->setText(QApplication::translate("driverRegistration", "Email", nullptr));
        lorryDetailsLabel->setText(QApplication::translate("driverRegistration", "Lorry Details                     ", nullptr));
        lorryRegNoField->setPlaceholderText(QApplication::translate("driverRegistration", "e.g. KT07MZT", nullptr));
        lengthField->setPlaceholderText(QApplication::translate("driverRegistration", "6 - 16.5 meters", nullptr));
        weightLabel->setText(QApplication::translate("driverRegistration", "Weight:", nullptr));
        lorryRegNoLabel->setText(QApplication::translate("driverRegistration", "Lorry Reg No:", nullptr));
        heightLabel->setText(QApplication::translate("driverRegistration", "Height", nullptr));
        cpcLabel->setText(QApplication::translate("driverRegistration", "CPC Number:", nullptr));
        heightField->setPlaceholderText(QApplication::translate("driverRegistration", "2.4 - 4.95 meters", nullptr));
        weightField->setPlaceholderText(QApplication::translate("driverRegistration", "400 - 36000 (kg)", nullptr));
        cpcField->setText(QString());
        cpcField->setPlaceholderText(QApplication::translate("driverRegistration", "e,g 12345678", nullptr));
        widthLabel->setText(QApplication::translate("driverRegistration", "Width", nullptr));
        lengthLabel->setText(QApplication::translate("driverRegistration", "Length", nullptr));
        widthField->setPlaceholderText(QApplication::translate("driverRegistration", "2.4 - 2.9 meters", nullptr));
        axle_5_6->setText(QApplication::translate("driverRegistration", "5/6 axles artic", nullptr));
        axle_6->setText(QApplication::translate("driverRegistration", "6 axles", nullptr));
        axle_4->setText(QApplication::translate("driverRegistration", "4 axles", nullptr));
        axle_2->setText(QApplication::translate("driverRegistration", "2 axles", nullptr));
        axle_3->setText(QApplication::translate("driverRegistration", "3 axles", nullptr));
        label_2->setText(QApplication::translate("driverRegistration", "Lorry Type", nullptr));
        axle_5->setText(QApplication::translate("driverRegistration", "5 axles", nullptr));
        axle_6_drawbar->setText(QApplication::translate("driverRegistration", "6 axle draw-bar", nullptr));
        pushButton_3->setText(QApplication::translate("driverRegistration", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class driverRegistration: public Ui_driverRegistration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVERREGISTRATION_H
