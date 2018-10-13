/********************************************************************************
** Form generated from reading UI file 'ff.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FF_H
#define UI_FF_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FF
{
public:
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QDialogButtonBox *buttonBox;
    QFrame *frame;

    void setupUi(QDialog *FF)
    {
        if (FF->objectName().isEmpty())
            FF->setObjectName(QStringLiteral("FF"));
        FF->resize(427, 352);
        label_3 = new QLabel(FF);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 90, 231, 161));
        layoutWidget = new QWidget(FF);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 20, 241, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout->addWidget(lineEdit);

        layoutWidget1 = new QWidget(FF);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(80, 60, 241, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget1);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        label_4 = new QLabel(FF);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(320, 170, 59, 15));
        buttonBox = new QDialogButtonBox(FF);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(75, 260, 291, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frame = new QFrame(FF);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(80, 90, 241, 151));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        retranslateUi(FF);

        QMetaObject::connectSlotsByName(FF);
    } // setupUi

    void retranslateUi(QDialog *FF)
    {
        FF->setWindowTitle(QApplication::translate("FF", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("FF", "<html><head/><body><table border=\"1\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"10\" cellpadding=\"6\"><tr><td colspan=\"2\"><p><span style=\" font-size:12pt; font-weight:600; color:#cc0000;\">Charges Per Hour</span></p></td></tr><tr><td><p><span style=\" font-size:10pt;\">Two wheeler </span></p></td><td><p><span style=\" font-size:10pt;\">Rs 5 </span></p></td></tr><tr><td><p><span style=\" font-size:10pt;\">Four wheeler </span></p></td><td><p><span style=\" font-size:10pt;\">Rs 10 </span></p></td></tr></table></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("FF", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600;\">Name</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("FF", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600;\">Mobile No</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FF: public Ui_FF {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FF_H
