#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <QMessageBox>
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

void MainWindow::on_calculate_clicked()
{
    QMessageBox msgBox;
    msgBox.setIcon(QMessageBox::Warning);
    QString angle = ui->angle->text();
    QString speed = ui->speed->text();
    QString width = ui->width->text();
    QString height = ui->height->text();
    bool isError=false;
    if((angle.toFloat()>90)||(angle.toFloat()<0)){
        isError=true;
        //ui->resultLabel->setText("Угол введен не корректно!");
        msgBox.setText("Угол введен не корректно!");
        msgBox.exec();
    }else if ((speed.toFloat()>1000)||(speed.toFloat()<0)) {
        isError=true;
        //ui->resultLabel->setText("Скорость введена не корректно!");
        msgBox.setText("Скорость введена не корректно!");
        msgBox.exec();
    }else if (width.toFloat()<0) {
        isError=true;
        //ui->resultLabel->setText("Расстояние не может быть отрицательным!");
        msgBox.setText("Расстояние не может быть отрицательным!");
        msgBox.exec();
    }else if (height.toFloat()<0) {
        isError=true;
        //ui->resultLabel->setText("Высота не может быть отрицательной!");
        msgBox.setText("Высота не может быть отрицательной!");
        msgBox.exec();
    }else if (!isError) {
        float g = 9.8f;
        float angleRadian = angle.toFloat() * 3.14/180;
        float l = height.toFloat() * tan(angleRadian) - g*pow(height.toFloat(), 2)/(2*pow(speed.toFloat(), 2)*pow(cos(angleRadian),2));
        if((l>0)&&(l<height.toFloat())){
            ui->resultLabel->setText("Попал");
        }else if(l<0){
            ui->resultLabel->setText("Не долёт");
        }else if(l>height.toFloat()){
            ui->resultLabel->setText("перелёт");
    }
}
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->angle->setText("");
    ui->speed->setText("");
    ui->width->setText("");
    ui->height->setText("");
}
