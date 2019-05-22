#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_printResult_clicked()
{
    QString distance = ui->distance->text();
    QString time = ui->time->text();
    QString speed;
    float Fdistance = distance.toFloat();
    float Ftime = time.toFloat();
    float Fspeed;
    Fspeed = Fdistance/Ftime;
    QString result;
    distance.setNum(Fdistance);
    time.setNum(Ftime);
    speed.setNum(Fspeed);
    result = "Дистанция: " + distance + " м" + "\n" + "Время: " + time + " с" + "\n" + "Скорость: " + speed + " м/c";
    ui->resultLabel->setText(result);
}

