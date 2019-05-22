#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <ctime>
#include <cmath>
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
    QString n = ui->nLine->text();
    QString m = ui->mLine->text();

    int b[n.toInt()][m.toInt()];
    int c[n.toInt()][m.toInt()];
    srand(time(NULL));

    for(int i=1;i<n.toInt();i++){
        for(int k=0;k<m.toInt();k++){
            b[i][k] = 1+rand()%10;
            c[i][k] = 1+rand()%10;
        }
    }
    double result=0;
    double sum=0;
    for(int i=1;i<n.toInt();i++){
        for(int k=0;k<m.toInt();k++){
            sum = sum+(pow(tan(b[i][k]),2)+c[i][k]);
        }
    }
    std::cout << "Полученная сумма" << std::endl;
    std::cout << sum << std::endl;
    result = sqrt(abs(sum));
    QString resultStr;
    resultStr.setNum(result);
    ui->sResultLabel->setText(resultStr);
}

void MainWindow::on_pushButton_2_clicked()
{
      //Task 2
//    QString kMin = ui->kMinLine->text();
    QString kMax = ui->kMaxLine->text();

    float c[kMax.toInt()];
    float a[10][10];

    for(int i=0;i<10;i++){
        for(int k=0;k<10;k++){
            a[i][k] =1+rand()%10;
            std::cout << a[i][k] << "  ";
        }
        std::cout << std::endl;
    }
    float sum;
    sum=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            sum=sum+a[i][j];
        }
    }

    std::cout << "Сумма: " << sum << std::endl;
    for(int k=1;k<=kMax.toInt();k++){
        c[k-1] = cos(sum)/log(k+2);
    }
    QString massive;
    int k=0;
    for(int i=0;i<kMax.toInt();i++){
        massive += QString::number(c[i])+"   ";
        k++;
        if(k==2)    {k=0;massive += "\n";}
    }

    ui->massiveResultLabel->setText(massive);
}

void MainWindow::on_pushButton_3_clicked()
{
    //Task 3
    QString quantityColumns = ui->quantityColumns->text();
    QString quantityStrings = ui->quantityStrings->text();

    int strings = quantityStrings.toInt();
    int columns = quantityColumns.toInt();

    int c[strings][columns];
    std::cout << "Сгенерированный массив" << std::endl;
    for(int i=0;i<strings;i++){
        for(int j=0;j<columns;j++){
            c[i][j] = 1+rand()%10;
        }
    }
    for(int i=0;i<strings;i++){
        for(int j=0;j<columns;j++){
            std::cout << c[i][j] << "  ";
        }
        std::cout << std::endl;
    }
    int indexMin;
    int elementMin = c[0][0];

    for(int i=0;i<strings;i++){
        for(int j=0;j<columns;j++){
            if(c[i][j]<elementMin){
                elementMin = c[i][j];
                indexMin = j;
            }
        }
    }
    int elementTmp;
    for(int i=0;i<strings-1;i++){
        for(int j=0;j<strings-i-1;j++){
            if(c[j][indexMin]<c[j+1][indexMin]){
                elementTmp = c[j][indexMin];
                c[j][indexMin] = c[j+1][indexMin];
                c[j+1][indexMin] = elementTmp;
            }
        }
    }
    QString output;
    std::cout << "Миннимальный элемент" <<std::endl;
    std::cout << elementMin << std::endl;
    std::cout << "Миннимальный индекс" <<std::endl;
    std::cout << indexMin << std::endl;
    std::cout << "Результирующий массив" <<std::endl;
    for(int i=0;i<strings;i++){
        for(int j=0;j<columns;j++){
            std::cout << c[i][j] << "  ";
            output += QString::number(c[i][j])+"  ";
        }
        output += "\n";
        std::cout << std::endl;
    }
    ui->resultTask4Label->setText(output);
}

void MainWindow::on_pushButton_4_clicked()
{
    QString quantityStrings = ui->quantityStrings_1->text();
    QString quantityColumns = ui->quantityColumns_1->text();
    int big=0;
    if(quantityStrings.toInt()>quantityColumns.toInt()) big = quantityStrings.toInt();
    else    big  = quantityColumns.toInt();
    std::cout << big << std::endl;
    int x[big];

    for(int i=0;i<(sizeof(x)/sizeof(*x));i++){
        x[i] = 1+rand()%10;
        std::cout << x[i] << "  ";
    }
    float y[quantityStrings.toInt()][quantityColumns.toInt()];
    for(int i=0;i<quantityStrings.toInt();i++){
        for(int j=0;j<quantityColumns.toInt();j++){
            if(x[i]>x[j])   y[i][j] = sqrt(x[i]-x[j]);
            else y[i][j] = pow(cos(x[i]-pow(x[j],2)), 3);
        }
    }
    std::cout << std::endl;
    QString output;
    for(int i=0;i<quantityStrings.toInt();i++){
        for(int j=0;j<quantityColumns.toInt();j++){
            std::cout << y[i][j] << "  ";
            output += QString::number(y[i][j])+"  ";
        }
        output += "\n";
        std::cout << std::endl;
    }
    ui->resultTask1Label->setText(output);
}
