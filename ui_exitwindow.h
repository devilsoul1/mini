/********************************************************************************
** Form generated from reading UI file 'exitwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXITWINDOW_H
#define UI_EXITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_exitwindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *exitwindow)
    {
        if (exitwindow->objectName().isEmpty())
            exitwindow->setObjectName(QStringLiteral("exitwindow"));
        exitwindow->resize(515, 261);
        verticalLayout_2 = new QVBoxLayout(exitwindow);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(exitwindow);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(exitwindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(exitwindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(exitwindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), exitwindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), exitwindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(exitwindow);
    } // setupUi

    void retranslateUi(QDialog *exitwindow)
    {
        exitwindow->setWindowTitle(QApplication::translate("exitwindow", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("exitwindow", "SPOT NUMBER", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class exitwindow: public Ui_exitwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXITWINDOW_H
