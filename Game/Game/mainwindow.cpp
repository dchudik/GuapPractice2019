#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QGraphicsScene *PalletScene = new QGraphicsScene(0,0,900,150,this);
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}
