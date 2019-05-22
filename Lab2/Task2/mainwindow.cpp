#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <ctype.h>
#include <string>
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
    char arr_nums[] = "1234567890";
    char arr_letters[] = "abcdefghijklmnopqrstuvwxyz";
    int letters=0;
    int nums=0;
    QString mainString = ui->inpString->text();
    for(int i=0;i<mainString.size();i++){
        for(int j=0;j<int(sizeof(arr_nums)/sizeof(*arr_nums));j++){
            if(mainString[i] == arr_nums[j]) nums++;
        }
        for(int j=0;j<int(sizeof(arr_letters)/sizeof(*arr_letters));j++){
            if(mainString[i] == arr_letters[j]) letters++;
        }
    }
    QString n;
    n.setNum(nums);
    ui->resNum->setText(n);

    n.setNum(letters);
    ui->resLetter->setText(n);
}
