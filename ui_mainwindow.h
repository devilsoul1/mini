/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_dbconn;
    QComboBox *comboBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QComboBox *chooseSpot;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QLabel *label_pic;
    QToolBar *mainToolBar;
    QMenuBar *menuBar;
    QMenu *menuMALL;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(355, 330);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_dbconn = new QLabel(centralWidget);
        label_dbconn->setObjectName(QStringLiteral("label_dbconn"));
        label_dbconn->setGeometry(QRect(0, 250, 111, 16));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(180, 60, 141, 21));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 120, 119, 54));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        chooseSpot = new QComboBox(layoutWidget);
        chooseSpot->setObjectName(QStringLiteral("chooseSpot"));

        verticalLayout_2->addWidget(chooseSpot);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(180, 30, 141, 31));
        label_pic = new QLabel(centralWidget);
        label_pic->setObjectName(QStringLiteral("label_pic"));
        label_pic->setGeometry(QRect(30, 40, 141, 171));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, mainToolBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 355, 20));
        menuMALL = new QMenu(menuBar);
        menuMALL->setObjectName(QStringLiteral("menuMALL"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuMALL->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_dbconn->setText(QString());
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ENTRY", Q_NULLPTR)
         << QApplication::translate("MainWindow", "EXIT", Q_NULLPTR)
        );
        chooseSpot->clear();
        chooseSpot->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "CHOOSE SPOT", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Ground Floor", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Welcome", Q_NULLPTR));
        label_pic->setText(QString());
        menuMALL->setTitle(QApplication::translate("MainWindow", "Parking", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
