#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMessageBox msgBox;
    MainWindow w;
    w.show();

    return a.exec();
}
