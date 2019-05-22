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
    QLabel *label_2;
    QLineEdit *firstNum;
    QLineEdit *secondNum;
    QPushButton *plus;
    QPushButton *minus;
    QPushButton *pushButton_4;
    QLineEdit *resLabel;
    QPushButton *multiplication;
    QPushButton *division;
    QLabel *label_3;
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
        label->setGeometry(QRect(10, 10, 81, 18));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 100, 81, 18));
        firstNum = new QLineEdit(centralWidget);
        firstNum->setObjectName(QString::fromUtf8("firstNum"));
        firstNum->setGeometry(QRect(100, 10, 121, 26));
        secondNum = new QLineEdit(centralWidget);
        secondNum->setObjectName(QString::fromUtf8("secondNum"));
        secondNum->setGeometry(QRect(100, 100, 121, 26));
        plus = new QPushButton(centralWidget);
        plus->setObjectName(QString::fromUtf8("plus"));
        plus->setGeometry(QRect(10, 50, 31, 26));
        minus = new QPushButton(centralWidget);
        minus->setObjectName(QString::fromUtf8("minus"));
        minus->setGeometry(QRect(70, 50, 31, 26));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(280, 10, 80, 26));
        resLabel = new QLineEdit(centralWidget);
        resLabel->setObjectName(QString::fromUtf8("resLabel"));
        resLabel->setGeometry(QRect(12, 180, 211, 26));
        resLabel->setFrame(true);
        resLabel->setReadOnly(true);
        multiplication = new QPushButton(centralWidget);
        multiplication->setObjectName(QString::fromUtf8("multiplication"));
        multiplication->setGeometry(QRect(130, 50, 31, 26));
        division = new QPushButton(centralWidget);
        division->setObjectName(QString::fromUtf8("division"));
        division->setGeometry(QRect(190, 50, 31, 26));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 150, 91, 18));
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
        label->setText(QApplication::translate("MainWindow", "1-\320\276\320\265 \321\207\320\270\321\201\320\273\320\276", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "2-\320\276\320\265 \321\207\320\270\321\201\320\273\320\276", nullptr));
        plus->setText(QApplication::translate("MainWindow", "+", nullptr));
        minus->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        multiplication->setText(QApplication::translate("MainWindow", "*", nullptr));
        division->setText(QApplication::translate("MainWindow", "/", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
