/********************************************************************************
** Form generated from reading UI file 'charge.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARGE_H
#define UI_CHARGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CHARGE
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_mob;
    QLineEdit *lineEdit_charge;
    QFrame *frame;

    void setupUi(QDialog *CHARGE)
    {
        if (CHARGE->objectName().isEmpty())
            CHARGE->setObjectName(QStringLiteral("CHARGE"));
        CHARGE->resize(400, 300);
        buttonBox = new QDialogButtonBox(CHARGE);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(0, 200, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(CHARGE);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(91, 41, 187, 85));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit_name = new QLineEdit(layoutWidget);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        verticalLayout_2->addWidget(lineEdit_name);

        lineEdit_mob = new QLineEdit(layoutWidget);
        lineEdit_mob->setObjectName(QStringLiteral("lineEdit_mob"));

        verticalLayout_2->addWidget(lineEdit_mob);

        lineEdit_charge = new QLineEdit(layoutWidget);
        lineEdit_charge->setObjectName(QStringLiteral("lineEdit_charge"));

        verticalLayout_2->addWidget(lineEdit_charge);


        horizontalLayout->addLayout(verticalLayout_2);

        frame = new QFrame(CHARGE);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(80, 20, 211, 121));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        retranslateUi(CHARGE);
        QObject::connect(buttonBox, SIGNAL(accepted()), CHARGE, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CHARGE, SLOT(reject()));

        QMetaObject::connectSlotsByName(CHARGE);
    } // setupUi

    void retranslateUi(QDialog *CHARGE)
    {
        CHARGE->setWindowTitle(QApplication::translate("CHARGE", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("CHARGE", "Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("CHARGE", "Mobile", Q_NULLPTR));
        label_3->setText(QApplication::translate("CHARGE", "Charges", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CHARGE: public Ui_CHARGE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARGE_H
