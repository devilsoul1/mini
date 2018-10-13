/********************************************************************************
** Form generated from reading UI file 'gf.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GF_H
#define UI_GF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GF
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_dbconn;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QRadioButton *radioButton_25;
    QRadioButton *radioButton_26;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_12;
    QCheckBox *checkBox_13;
    QCheckBox *checkBox_14;
    QCheckBox *checkBox_15;
    QCheckBox *checkBox_16;
    QCheckBox *checkBox_17;
    QCheckBox *checkBox_18;
    QCheckBox *checkBox_19;
    QCheckBox *checkBox_20;
    QCheckBox *checkBox_21;
    QCheckBox *checkBox_22;
    QCheckBox *checkBox_23;
    QCheckBox *checkBox_24;
    QLabel *label_spot;
    QLineEdit *lineEdit_spot;
    QFrame *frame;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label_pic;
    QLabel *label_pic2;
    QLabel *label_pic3;
    QLabel *label_pic4;

    void setupUi(QDialog *GF)
    {
        if (GF->objectName().isEmpty())
            GF->setObjectName(QStringLiteral("GF"));
        GF->resize(527, 436);
        buttonBox = new QDialogButtonBox(GF);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(265, 375, 181, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(GF);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(85, 240, 101, 31));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        font.setPointSize(17);
        font.setItalic(true);
        label->setFont(font);
        label_2 = new QLabel(GF);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(380, 28, 59, 31));
        label_2->setFont(font);
        label_dbconn = new QLabel(GF);
        label_dbconn->setObjectName(QStringLiteral("label_dbconn"));
        label_dbconn->setGeometry(QRect(80, 430, 181, 16));
        layoutWidget = new QWidget(GF);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 300, 192, 85));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setFamily(QStringLiteral("DejaVu Sans"));
        font1.setPointSize(18);
        label_3->setFont(font1);

        verticalLayout_4->addWidget(label_3);

        radioButton_25 = new QRadioButton(layoutWidget);
        radioButton_25->setObjectName(QStringLiteral("radioButton_25"));

        verticalLayout_4->addWidget(radioButton_25);

        radioButton_26 = new QRadioButton(layoutWidget);
        radioButton_26->setObjectName(QStringLiteral("radioButton_26"));

        verticalLayout_4->addWidget(radioButton_26);

        checkBox = new QCheckBox(GF);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(91, 31, 41, 21));
        checkBox_2 = new QCheckBox(GF);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(91, 58, 41, 21));
        checkBox_3 = new QCheckBox(GF);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(91, 85, 41, 21));
        checkBox_4 = new QCheckBox(GF);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(91, 112, 41, 21));
        checkBox_5 = new QCheckBox(GF);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setGeometry(QRect(91, 139, 41, 21));
        checkBox_6 = new QCheckBox(GF);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setGeometry(QRect(91, 166, 41, 21));
        checkBox_7 = new QCheckBox(GF);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));
        checkBox_7->setGeometry(QRect(91, 193, 41, 21));
        checkBox_8 = new QCheckBox(GF);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));
        checkBox_8->setGeometry(QRect(91, 220, 41, 21));
        checkBox_9 = new QCheckBox(GF);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));
        checkBox_9->setGeometry(QRect(231, 196, 41, 21));
        checkBox_10 = new QCheckBox(GF);
        checkBox_10->setObjectName(QStringLiteral("checkBox_10"));
        checkBox_10->setGeometry(QRect(231, 169, 41, 21));
        checkBox_11 = new QCheckBox(GF);
        checkBox_11->setObjectName(QStringLiteral("checkBox_11"));
        checkBox_11->setGeometry(QRect(231, 142, 41, 21));
        checkBox_12 = new QCheckBox(GF);
        checkBox_12->setObjectName(QStringLiteral("checkBox_12"));
        checkBox_12->setGeometry(QRect(231, 115, 41, 21));
        checkBox_13 = new QCheckBox(GF);
        checkBox_13->setObjectName(QStringLiteral("checkBox_13"));
        checkBox_13->setGeometry(QRect(231, 88, 41, 21));
        checkBox_14 = new QCheckBox(GF);
        checkBox_14->setObjectName(QStringLiteral("checkBox_14"));
        checkBox_14->setGeometry(QRect(231, 61, 41, 21));
        checkBox_15 = new QCheckBox(GF);
        checkBox_15->setObjectName(QStringLiteral("checkBox_15"));
        checkBox_15->setGeometry(QRect(170, 30, 85, 21));
        checkBox_16 = new QCheckBox(GF);
        checkBox_16->setObjectName(QStringLiteral("checkBox_16"));
        checkBox_16->setGeometry(QRect(280, 30, 85, 21));
        checkBox_17 = new QCheckBox(GF);
        checkBox_17->setObjectName(QStringLiteral("checkBox_17"));
        checkBox_17->setGeometry(QRect(371, 240, 41, 21));
        checkBox_18 = new QCheckBox(GF);
        checkBox_18->setObjectName(QStringLiteral("checkBox_18"));
        checkBox_18->setGeometry(QRect(371, 213, 41, 21));
        checkBox_19 = new QCheckBox(GF);
        checkBox_19->setObjectName(QStringLiteral("checkBox_19"));
        checkBox_19->setGeometry(QRect(371, 186, 41, 21));
        checkBox_20 = new QCheckBox(GF);
        checkBox_20->setObjectName(QStringLiteral("checkBox_20"));
        checkBox_20->setGeometry(QRect(371, 159, 41, 21));
        checkBox_21 = new QCheckBox(GF);
        checkBox_21->setObjectName(QStringLiteral("checkBox_21"));
        checkBox_21->setGeometry(QRect(371, 132, 41, 21));
        checkBox_22 = new QCheckBox(GF);
        checkBox_22->setObjectName(QStringLiteral("checkBox_22"));
        checkBox_22->setGeometry(QRect(371, 105, 41, 21));
        checkBox_23 = new QCheckBox(GF);
        checkBox_23->setObjectName(QStringLiteral("checkBox_23"));
        checkBox_23->setGeometry(QRect(371, 78, 41, 21));
        checkBox_24 = new QCheckBox(GF);
        checkBox_24->setObjectName(QStringLiteral("checkBox_24"));
        checkBox_24->setGeometry(QRect(371, 51, 41, 21));
        label_spot = new QLabel(GF);
        label_spot->setObjectName(QStringLiteral("label_spot"));
        label_spot->setGeometry(QRect(230, 280, 81, 20));
        lineEdit_spot = new QLineEdit(GF);
        lineEdit_spot->setObjectName(QStringLiteral("lineEdit_spot"));
        lineEdit_spot->setGeometry(QRect(310, 280, 121, 23));
        frame = new QFrame(GF);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(80, 20, 371, 251));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        line = new QFrame(GF);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(443, 265, 16, 141));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(GF);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(71, 270, 20, 141));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(GF);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(80, 400, 371, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_pic = new QLabel(GF);
        label_pic->setObjectName(QStringLiteral("label_pic"));
        label_pic->setGeometry(QRect(59, 20, 20, 391));
        label_pic2 = new QLabel(GF);
        label_pic2->setObjectName(QStringLiteral("label_pic2"));
        label_pic2->setGeometry(QRect(58, 0, 411, 20));
        label_pic3 = new QLabel(GF);
        label_pic3->setObjectName(QStringLiteral("label_pic3"));
        label_pic3->setGeometry(QRect(452, 20, 16, 391));
        label_pic4 = new QLabel(GF);
        label_pic4->setObjectName(QStringLiteral("label_pic4"));
        label_pic4->setGeometry(QRect(60, 410, 411, 20));

        retranslateUi(GF);
        QObject::connect(buttonBox, SIGNAL(accepted()), GF, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GF, SLOT(reject()));

        QMetaObject::connectSlotsByName(GF);
    } // setupUi

    void retranslateUi(QDialog *GF)
    {
        GF->setWindowTitle(QApplication::translate("GF", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("GF", "<font color=GREEN>ENTRY</font>", Q_NULLPTR));
        label_2->setText(QApplication::translate("GF", "<font color=GREEN>EXIT</font>", Q_NULLPTR));
        label_dbconn->setText(QString());
        label_3->setText(QApplication::translate("GF", "<b>VEHICLE TYPE", Q_NULLPTR));
        radioButton_25->setText(QApplication::translate("GF", "TWO WHEELER", Q_NULLPTR));
        radioButton_26->setText(QApplication::translate("GF", "FOUR WHEELER", Q_NULLPTR));
        checkBox->setText(QApplication::translate("GF", "01", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("GF", "02", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("GF", "03", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("GF", "04", Q_NULLPTR));
        checkBox_5->setText(QApplication::translate("GF", "05", Q_NULLPTR));
        checkBox_6->setText(QApplication::translate("GF", "06", Q_NULLPTR));
        checkBox_7->setText(QApplication::translate("GF", "07", Q_NULLPTR));
        checkBox_8->setText(QApplication::translate("GF", "08", Q_NULLPTR));
        checkBox_9->setText(QApplication::translate("GF", "09", Q_NULLPTR));
        checkBox_10->setText(QApplication::translate("GF", "10", Q_NULLPTR));
        checkBox_11->setText(QApplication::translate("GF", "11", Q_NULLPTR));
        checkBox_12->setText(QApplication::translate("GF", "12", Q_NULLPTR));
        checkBox_13->setText(QApplication::translate("GF", "13", Q_NULLPTR));
        checkBox_14->setText(QApplication::translate("GF", "14", Q_NULLPTR));
        checkBox_15->setText(QApplication::translate("GF", "15", Q_NULLPTR));
        checkBox_16->setText(QApplication::translate("GF", "16", Q_NULLPTR));
        checkBox_17->setText(QApplication::translate("GF", "17", Q_NULLPTR));
        checkBox_18->setText(QApplication::translate("GF", "18", Q_NULLPTR));
        checkBox_19->setText(QApplication::translate("GF", "19", Q_NULLPTR));
        checkBox_20->setText(QApplication::translate("GF", "20", Q_NULLPTR));
        checkBox_21->setText(QApplication::translate("GF", "21", Q_NULLPTR));
        checkBox_22->setText(QApplication::translate("GF", "22", Q_NULLPTR));
        checkBox_23->setText(QApplication::translate("GF", "23", Q_NULLPTR));
        checkBox_24->setText(QApplication::translate("GF", "24", Q_NULLPTR));
        label_spot->setText(QApplication::translate("GF", "<html><head/><body><p><font color=\"RED\"><b>YOUR SPOT</font></p></body></html>", Q_NULLPTR));
        label_pic->setText(QString());
        label_pic2->setText(QString());
        label_pic3->setText(QString());
        label_pic4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GF: public Ui_GF {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GF_H
