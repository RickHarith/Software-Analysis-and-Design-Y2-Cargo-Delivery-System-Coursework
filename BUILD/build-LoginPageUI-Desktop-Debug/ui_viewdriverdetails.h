/********************************************************************************
** Form generated from reading UI file 'viewdriverdetails.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWDRIVERDETAILS_H
#define UI_VIEWDRIVERDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewdriverdetails
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
    QHBoxLayout *horizontalLayout_3;
    QWidget *lorryButtonArea;
    QVBoxLayout *verticalLayout_6;
    QTableWidget *driverInfoTable;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *viewdriverdetails)
    {
        if (viewdriverdetails->objectName().isEmpty())
            viewdriverdetails->setObjectName(QString::fromUtf8("viewdriverdetails"));
        viewdriverdetails->resize(800, 600);
        verticalLayout = new QVBoxLayout(viewdriverdetails);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        CurrentDate = new QLabel(viewdriverdetails);
        CurrentDate->setObjectName(QString::fromUtf8("CurrentDate"));

        horizontalLayout->addWidget(CurrentDate);

        backButton = new QPushButton(viewdriverdetails);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        horizontalLayout->addWidget(backButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(viewdriverdetails);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        imageLabel = new QLabel(viewdriverdetails);
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


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        lorryButtonArea = new QWidget(viewdriverdetails);
        lorryButtonArea->setObjectName(QString::fromUtf8("lorryButtonArea"));
        sizePolicy.setHeightForWidth(lorryButtonArea->sizePolicy().hasHeightForWidth());
        lorryButtonArea->setSizePolicy(sizePolicy);
        lorryButtonArea->setMinimumSize(QSize(700, 250));
        lorryButtonArea->setStyleSheet(QString::fromUtf8("#lorryButtonArea{ border: 1px solid; }"));
        verticalLayout_6 = new QVBoxLayout(lorryButtonArea);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        driverInfoTable = new QTableWidget(lorryButtonArea);
        driverInfoTable->setObjectName(QString::fromUtf8("driverInfoTable"));

        verticalLayout_6->addWidget(driverInfoTable);


        horizontalLayout_3->addWidget(lorryButtonArea);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(viewdriverdetails);

        QMetaObject::connectSlotsByName(viewdriverdetails);
    } // setupUi

    void retranslateUi(QDialog *viewdriverdetails)
    {
        viewdriverdetails->setWindowTitle(QApplication::translate("viewdriverdetails", "Dialog", nullptr));
        CurrentDate->setText(QString());
        backButton->setText(QApplication::translate("viewdriverdetails", "Return To Main", nullptr));
        label_5->setText(QApplication::translate("viewdriverdetails", "Current Driver Details", nullptr));
        imageLabel->setText(QApplication::translate("viewdriverdetails", "Driver \n"
" Image", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewdriverdetails: public Ui_viewdriverdetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWDRIVERDETAILS_H
