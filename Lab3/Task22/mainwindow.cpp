#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <iostream>
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

void MainWindow::on_pushButton_clicked()
{
    char arr_letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int upperLetters=0;
    QString mainString = ui->inpString->text();
    for(int i=0;i<mainString.size();i++){
        for(int j=0;j<int(sizeof(arr_letters)/sizeof(*arr_letters));j++){
            if(mainString[i] == arr_letters[j]) upperLetters++;
        }
    }
    QString res;
    res.setNum(upperLetters);
     ui->resUpperLetter->setText(res);
}

void MainWindow::on_pushButton_2_clicked()
{
    int num;
    int seq=0;
    int sum=0;
    QString mainString = ui->inpNum->text();
    //std::cout << mainString[0].digitValue() << std::endl;
    for(int i=0;i<mainString.length();i++) seq++;
    for(int i=0;i<mainString.length();i++){
        num = mainString[i].digitValue();
        num = pow(num, seq);
        sum=sum+num;
    }
    std::cout << sum << std::endl;
    std::cout << seq << std::endl;
    std::cout << mainString.toInt() << std::endl;
    if( sum == mainString.toInt() ){
        ui->isArmstrong->setText("Является числом Армстронга");
    }else if( sum != mainString.toInt() ){
         ui->isArmstrong->setText("Не является числом Армстронга");
    }
}
