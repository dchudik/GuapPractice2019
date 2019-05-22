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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
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
    QPushButton *calculate;
    QPushButton *pushButton_2;
    QLineEdit *angle;
    QLineEdit *speed;
    QLineEdit *width;
    QLineEdit *height;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *resultLabel;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        calculate = new QPushButton(centralWidget);
        calculate->setObjectName(QString::fromUtf8("calculate"));
        calculate->setGeometry(QRect(310, 10, 80, 26));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 50, 80, 26));
        angle = new QLineEdit(centralWidget);
        angle->setObjectName(QString::fromUtf8("angle"));
        angle->setGeometry(QRect(190, 10, 113, 26));
        speed = new QLineEdit(centralWidget);
        speed->setObjectName(QString::fromUtf8("speed"));
        speed->setGeometry(QRect(190, 50, 113, 26));
        width = new QLineEdit(centralWidget);
        width->setObjectName(QString::fromUtf8("width"));
        width->setGeometry(QRect(190, 90, 113, 26));
        height = new QLineEdit(centralWidget);
        height->setObjectName(QString::fromUtf8("height"));
        height->setGeometry(QRect(190, 130, 113, 26));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 171, 18));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(7, 50, 171, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 90, 181, 18));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 130, 171, 18));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 190, 71, 18));
        resultLabel = new QLabel(centralWidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(110, 180, 281, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Modelling", nullptr));
        calculate->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\203\320\263\320\276\320\273 (\320\262 \320\263\321\200\320\260\320\264\321\203\321\201\320\260\321\205)", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\207. \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \321\201\320\275\320\260\321\200\321\217\320\264\320\260(\320\274/c)", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\202-\320\270\320\265 \320\276\321\202 \320\277\321\203\321\210\320\272\320\270 \320\264\320\276 \321\201\321\202\320\265\320\275\321\213", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\201\320\276\321\202\320\260 \321\201\321\202\320\265\320\275\321\213", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        resultLabel->setText(QString());
        menu->setTitle(QApplication::translate("MainWindow", "\320\274\320\276\320\264\320\265\320\273\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
