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


void MainWindow::on_plus_clicked()
{
    QString firstNumS = ui->firstNum->text();
    QString secondNumS = ui->secondNum->text();

    float firstNumber = firstNumS.toFloat();
    float seconNumber = secondNumS.toFloat();
    float resultNumber = firstNumber+seconNumber;

    QString result;
    result.setNum(resultNumber);
    ui->resLabel->setText(result);
}

void MainWindow::on_minus_clicked()
{
    QString firstNumS = ui->firstNum->text();
    QString secondNumS = ui->secondNum->text();

    float firstNumber = firstNumS.toFloat();
    float seconNumber = secondNumS.toFloat();
    float resultNumber = firstNumber-seconNumber;

    QString result;
    result.setNum(resultNumber);
    ui->resLabel->setText(result);
}

void MainWindow::on_multiplication_clicked()
{
    QString firstNumS = ui->firstNum->text();
    QString secondNumS = ui->secondNum->text();

    float firstNumber = firstNumS.toFloat();
    float seconNumber = secondNumS.toFloat();
    float resultNumber = firstNumber*seconNumber;

    QString result;
    result.setNum(resultNumber);
    ui->resLabel->setText(result);
}

void MainWindow::on_division_clicked()
{
    QString firstNumS = ui->firstNum->text();
    QString secondNumS = ui->secondNum->text();

    float firstNumber = firstNumS.toFloat();
    float seconNumber = secondNumS.toFloat();
    float resultNumber = firstNumber/seconNumber;

    QString result;
    result.setNum(resultNumber);
    ui->resLabel->setText(result);
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->resLabel->setText("");
    ui->firstNum->setText("");
    ui->secondNum->setText("");
}
