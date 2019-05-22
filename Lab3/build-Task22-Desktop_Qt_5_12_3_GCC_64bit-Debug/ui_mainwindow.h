/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *inpString;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *resUpperLetter;
    QLabel *label_3;
    QLineEdit *inpNum;
    QLabel *label_4;
    QLabel *isArmstrong;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 101, 18));
        inpString = new QLineEdit(centralWidget);
        inpString->setObjectName(QString::fromUtf8("inpString"));
        inpString->setGeometry(QRect(10, 40, 281, 26));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 40, 80, 26));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 111, 18));
        resUpperLetter = new QLabel(centralWidget);
        resUpperLetter->setObjectName(QString::fromUtf8("resUpperLetter"));
        resUpperLetter->setGeometry(QRect(160, 80, 58, 18));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 190, 58, 18));
        inpNum = new QLineEdit(centralWidget);
        inpNum->setObjectName(QString::fromUtf8("inpNum"));
        inpNum->setGeometry(QRect(140, 150, 161, 26));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 150, 111, 18));
        isArmstrong = new QLabel(centralWidget);
        isArmstrong->setObjectName(QString::fromUtf8("isArmstrong"));
        isArmstrong->setGeometry(QRect(90, 190, 301, 18));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 150, 80, 26));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 120, 221, 18));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\321\202\321\200\320\276\320\272\321\203", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\264\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\320\273\320\260\320\262\320\275\321\213\321\205 \320\261\321\203\320\272\320\262:", nullptr));
        resUpperLetter->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276", nullptr));
        isArmstrong->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260 \320\275\320\260 \321\207\320\270\321\201\320\273\320\276 \320\260\321\200\320\274\321\201\321\202\321\200\320\276\320\275\320\263\320\260:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
