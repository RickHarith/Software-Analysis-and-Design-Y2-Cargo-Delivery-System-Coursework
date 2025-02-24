/********************************************************************************
** Form generated from reading UI file 'customerorderpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERORDERPAGE_H
#define UI_CUSTOMERORDERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerOrderPage
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QWidget *orderForm;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *pickupForm;
    QLabel *pickupLabel;
    QComboBox *DeliveryComboBox;
    QHBoxLayout *dimentionsForm_4;
    QLabel *dimentionsLabel_3;
    QLineEdit *lengthField;
    QHBoxLayout *dimentionsForm_2;
    QLabel *dimentionsLabel_2;
    QLineEdit *widthField;
    QHBoxLayout *dimentionsForm;
    QLabel *dimentionsLabel;
    QLineEdit *heightField;
    QHBoxLayout *weightForm;
    QLabel *weightLabel;
    QLineEdit *weightField;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *ConditionComboBox;
    QHBoxLayout *weightForm_5;
    QLabel *weightLabel_5;
    QLineEdit *itemNameField;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *dimentionsLabel_4;
    QLineEdit *shippingRateField;
    QPushButton *calculateButton;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *CustomerOrderPage)
    {
        if (CustomerOrderPage->objectName().isEmpty())
            CustomerOrderPage->setObjectName(QString::fromUtf8("CustomerOrderPage"));
        CustomerOrderPage->resize(800, 600);
        verticalLayout = new QVBoxLayout(CustomerOrderPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        backButton = new QPushButton(CustomerOrderPage);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        horizontalLayout->addWidget(backButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        label_2 = new QLabel(CustomerOrderPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(150, 150));
        label_2->setStyleSheet(QString::fromUtf8("border: 1px solid;"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        orderForm = new QWidget(CustomerOrderPage);
        orderForm->setObjectName(QString::fromUtf8("orderForm"));
        sizePolicy.setHeightForWidth(orderForm->sizePolicy().hasHeightForWidth());
        orderForm->setSizePolicy(sizePolicy);
        orderForm->setMinimumSize(QSize(350, 350));
        orderForm->setStyleSheet(QString::fromUtf8("#orderForm{ border: 1px solid; }"));
        verticalLayout_2 = new QVBoxLayout(orderForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 20, -1, -1);
        pickupForm = new QHBoxLayout();
        pickupForm->setObjectName(QString::fromUtf8("pickupForm"));
        pickupLabel = new QLabel(orderForm);
        pickupLabel->setObjectName(QString::fromUtf8("pickupLabel"));
        sizePolicy.setHeightForWidth(pickupLabel->sizePolicy().hasHeightForWidth());
        pickupLabel->setSizePolicy(sizePolicy);

        pickupForm->addWidget(pickupLabel);

        DeliveryComboBox = new QComboBox(orderForm);
        DeliveryComboBox->addItem(QString());
        DeliveryComboBox->addItem(QString());
        DeliveryComboBox->addItem(QString());
        DeliveryComboBox->setObjectName(QString::fromUtf8("DeliveryComboBox"));

        pickupForm->addWidget(DeliveryComboBox);


        verticalLayout_2->addLayout(pickupForm);

        dimentionsForm_4 = new QHBoxLayout();
        dimentionsForm_4->setObjectName(QString::fromUtf8("dimentionsForm_4"));
        dimentionsLabel_3 = new QLabel(orderForm);
        dimentionsLabel_3->setObjectName(QString::fromUtf8("dimentionsLabel_3"));

        dimentionsForm_4->addWidget(dimentionsLabel_3);

        lengthField = new QLineEdit(orderForm);
        lengthField->setObjectName(QString::fromUtf8("lengthField"));

        dimentionsForm_4->addWidget(lengthField);


        verticalLayout_2->addLayout(dimentionsForm_4);

        dimentionsForm_2 = new QHBoxLayout();
        dimentionsForm_2->setObjectName(QString::fromUtf8("dimentionsForm_2"));
        dimentionsLabel_2 = new QLabel(orderForm);
        dimentionsLabel_2->setObjectName(QString::fromUtf8("dimentionsLabel_2"));

        dimentionsForm_2->addWidget(dimentionsLabel_2);

        widthField = new QLineEdit(orderForm);
        widthField->setObjectName(QString::fromUtf8("widthField"));

        dimentionsForm_2->addWidget(widthField);


        verticalLayout_2->addLayout(dimentionsForm_2);

        dimentionsForm = new QHBoxLayout();
        dimentionsForm->setObjectName(QString::fromUtf8("dimentionsForm"));
        dimentionsLabel = new QLabel(orderForm);
        dimentionsLabel->setObjectName(QString::fromUtf8("dimentionsLabel"));

        dimentionsForm->addWidget(dimentionsLabel);

        heightField = new QLineEdit(orderForm);
        heightField->setObjectName(QString::fromUtf8("heightField"));

        dimentionsForm->addWidget(heightField);


        verticalLayout_2->addLayout(dimentionsForm);

        weightForm = new QHBoxLayout();
        weightForm->setObjectName(QString::fromUtf8("weightForm"));
        weightLabel = new QLabel(orderForm);
        weightLabel->setObjectName(QString::fromUtf8("weightLabel"));

        weightForm->addWidget(weightLabel);

        weightField = new QLineEdit(orderForm);
        weightField->setObjectName(QString::fromUtf8("weightField"));

        weightForm->addWidget(weightField);


        verticalLayout_2->addLayout(weightForm);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(orderForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_3);

        ConditionComboBox = new QComboBox(orderForm);
        ConditionComboBox->addItem(QString());
        ConditionComboBox->addItem(QString());
        ConditionComboBox->addItem(QString());
        ConditionComboBox->addItem(QString());
        ConditionComboBox->addItem(QString());
        ConditionComboBox->setObjectName(QString::fromUtf8("ConditionComboBox"));

        horizontalLayout_4->addWidget(ConditionComboBox);


        verticalLayout_2->addLayout(horizontalLayout_4);

        weightForm_5 = new QHBoxLayout();
        weightForm_5->setObjectName(QString::fromUtf8("weightForm_5"));
        weightLabel_5 = new QLabel(orderForm);
        weightLabel_5->setObjectName(QString::fromUtf8("weightLabel_5"));

        weightForm_5->addWidget(weightLabel_5);

        itemNameField = new QLineEdit(orderForm);
        itemNameField->setObjectName(QString::fromUtf8("itemNameField"));

        weightForm_5->addWidget(itemNameField);


        verticalLayout_2->addLayout(weightForm_5);


        horizontalLayout_3->addWidget(orderForm);

        verticalWidget = new QWidget(CustomerOrderPage);
        verticalWidget->setObjectName(QString::fromUtf8("verticalWidget"));
        verticalWidget->setStyleSheet(QString::fromUtf8("#verticalLayout_3{ border: 1px solid; }"));
        verticalLayout_3 = new QVBoxLayout(verticalWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        dimentionsLabel_4 = new QLabel(verticalWidget);
        dimentionsLabel_4->setObjectName(QString::fromUtf8("dimentionsLabel_4"));
        dimentionsLabel_4->setStyleSheet(QString::fromUtf8("#dimentionsLabel_4{ border: 1px solid; }"));
        dimentionsLabel_4->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(dimentionsLabel_4);

        shippingRateField = new QLineEdit(verticalWidget);
        shippingRateField->setObjectName(QString::fromUtf8("shippingRateField"));
        shippingRateField->setReadOnly(true);

        verticalLayout_3->addWidget(shippingRateField);

        calculateButton = new QPushButton(verticalWidget);
        calculateButton->setObjectName(QString::fromUtf8("calculateButton"));

        verticalLayout_3->addWidget(calculateButton);


        horizontalLayout_3->addWidget(verticalWidget);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton_3 = new QPushButton(CustomerOrderPage);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(CustomerOrderPage);

        QMetaObject::connectSlotsByName(CustomerOrderPage);
    } // setupUi

    void retranslateUi(QDialog *CustomerOrderPage)
    {
        CustomerOrderPage->setWindowTitle(QApplication::translate("CustomerOrderPage", "Dialog", nullptr));
        backButton->setText(QApplication::translate("CustomerOrderPage", "Back", nullptr));
        label_2->setText(QApplication::translate("CustomerOrderPage", "Customer Order", nullptr));
        pickupLabel->setText(QApplication::translate("CustomerOrderPage", "Delivery Locations", nullptr));
        DeliveryComboBox->setItemText(0, QApplication::translate("CustomerOrderPage", "London to Edinburgh", nullptr));
        DeliveryComboBox->setItemText(1, QApplication::translate("CustomerOrderPage", "Nottingham to Coventry", nullptr));
        DeliveryComboBox->setItemText(2, QApplication::translate("CustomerOrderPage", "Leicester to Cardiff", nullptr));

        dimentionsLabel_3->setText(QApplication::translate("CustomerOrderPage", "Length:", nullptr));
        lengthField->setPlaceholderText(QApplication::translate("CustomerOrderPage", "Less than 5 meters", nullptr));
        dimentionsLabel_2->setText(QApplication::translate("CustomerOrderPage", "Width:", nullptr));
        widthField->setPlaceholderText(QApplication::translate("CustomerOrderPage", "Less than 2.5 meters", nullptr));
        dimentionsLabel->setText(QApplication::translate("CustomerOrderPage", "Height:", nullptr));
        heightField->setPlaceholderText(QApplication::translate("CustomerOrderPage", "Less than 2.4 meters", nullptr));
        weightLabel->setText(QApplication::translate("CustomerOrderPage", "Weight:", nullptr));
        weightField->setPlaceholderText(QApplication::translate("CustomerOrderPage", "Less than 2000 kg", nullptr));
        label_3->setText(QApplication::translate("CustomerOrderPage", "Conditions:", nullptr));
        ConditionComboBox->setItemText(0, QApplication::translate("CustomerOrderPage", "No condition", nullptr));
        ConditionComboBox->setItemText(1, QApplication::translate("CustomerOrderPage", "Frozen", nullptr));
        ConditionComboBox->setItemText(2, QApplication::translate("CustomerOrderPage", "Fragile", nullptr));
        ConditionComboBox->setItemText(3, QApplication::translate("CustomerOrderPage", "Hazardous", nullptr));
        ConditionComboBox->setItemText(4, QApplication::translate("CustomerOrderPage", "Perishable", nullptr));

        weightLabel_5->setText(QApplication::translate("CustomerOrderPage", "Item Name:", nullptr));
        itemNameField->setPlaceholderText(QApplication::translate("CustomerOrderPage", "Required", nullptr));
        dimentionsLabel_4->setText(QApplication::translate("CustomerOrderPage", "Shipping Rate Calculation:\n"
"\n"
"Calculate your order's shipping rate\n"
"after you insert the values on the left\n"
"\n"
"Do not submit if you wish to see your shipping rate\n"
"\n"
"Shipping rate calculations do not have proper validation", nullptr));
        shippingRateField->setPlaceholderText(QApplication::translate("CustomerOrderPage", "Result", nullptr));
        calculateButton->setText(QApplication::translate("CustomerOrderPage", "Calculate", nullptr));
        pushButton_3->setText(QApplication::translate("CustomerOrderPage", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerOrderPage: public Ui_CustomerOrderPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERORDERPAGE_H
