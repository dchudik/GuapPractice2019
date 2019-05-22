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
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextBrowser *textBrowser;
    QLabel *label;
    QLabel *label_2;
    QPushButton *printResult;
    QPushButton *crearLabels;
    QLineEdit *distance;
    QLineEdit *time;
    QLabel *resultLabel;
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
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 10, 351, 71));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 90, 91, 18));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 140, 91, 18));
        printResult = new QPushButton(centralWidget);
        printResult->setObjectName(QString::fromUtf8("printResult"));
        printResult->setGeometry(QRect(300, 90, 80, 26));
        crearLabels = new QPushButton(centralWidget);
        crearLabels->setObjectName(QString::fromUtf8("crearLabels"));
        crearLabels->setGeometry(QRect(300, 130, 80, 26));
        distance = new QLineEdit(centralWidget);
        distance->setObjectName(QString::fromUtf8("distance"));
        distance->setGeometry(QRect(140, 90, 113, 26));
        time = new QLineEdit(centralWidget);
        time->setObjectName(QString::fromUtf8("time"));
        time->setGeometry(QRect(140, 130, 113, 26));
        resultLabel = new QLabel(centralWidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(30, 160, 201, 71));
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
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\262\321\213\321\207\320\270\321\201\320\273\320\270\321\202  \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214, \321\201 \320\272\320\276\321\202\320\276\321\200\320\276\320\271 \321\201\320\277\320\276\321\200\321\202\321\201\320\274\320\265\320\275 \320\277\321\200\320\276\320\261\320\265\320\266\320\260\320\273 \320\264\320\270\321\201\321\202\320\260\320\275\321\206\320\270\321\216</p></body></html>", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\224\320\270\321\201\321\202\320\260\320\275\321\206\320\270\321\217 (\320\274)", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 (\321\201\320\265\320\272)", nullptr));
        printResult->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214", nullptr));
        crearLabels->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        resultLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
