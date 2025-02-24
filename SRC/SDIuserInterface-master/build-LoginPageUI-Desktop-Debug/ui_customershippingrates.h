/********************************************************************************
** Form generated from reading UI file 'customershippingrates.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERSHIPPINGRATES_H
#define UI_CUSTOMERSHIPPINGRATES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customershippingrates
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QWidget *notificationsForm;
    QVBoxLayout *verticalLayout_5;
    QLabel *notificationsLabel;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *customershippingrates)
    {
        if (customershippingrates->objectName().isEmpty())
            customershippingrates->setObjectName(QString::fromUtf8("customershippingrates"));
        customershippingrates->resize(800, 600);
        verticalLayout = new QVBoxLayout(customershippingrates);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        backButton = new QPushButton(customershippingrates);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy);
        backButton->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(backButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        label_2 = new QLabel(customershippingrates);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(150, 150));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("border: 1px solid;"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        notificationsForm = new QWidget(customershippingrates);
        notificationsForm->setObjectName(QString::fromUtf8("notificationsForm"));
        notificationsForm->setStyleSheet(QString::fromUtf8("#notificationsForm{ border: 1px solid; }"));
        verticalLayout_5 = new QVBoxLayout(notificationsForm);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        notificationsLabel = new QLabel(notificationsForm);
        notificationsLabel->setObjectName(QString::fromUtf8("notificationsLabel"));
        notificationsLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(notificationsLabel);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);


        horizontalLayout_3->addWidget(notificationsForm);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(customershippingrates);

        QMetaObject::connectSlotsByName(customershippingrates);
    } // setupUi

    void retranslateUi(QDialog *customershippingrates)
    {
        customershippingrates->setWindowTitle(QApplication::translate("customershippingrates", "Dialog", nullptr));
        backButton->setText(QApplication::translate("customershippingrates", "Back", nullptr));
        label_2->setText(QApplication::translate("customershippingrates", "Shipping Rates", nullptr));
        notificationsLabel->setText(QApplication::translate("customershippingrates", "Rates", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customershippingrates: public Ui_customershippingrates {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERSHIPPINGRATES_H
