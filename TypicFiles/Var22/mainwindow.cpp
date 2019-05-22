#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

class Student{
public:
    std::string group;
    std::string surname;
    int exam1;
    int exam2;
    int exam3;
    int exam4;
    int exam5;
    int socWork;
    Student(std::string g, std::string s, int e1, int e2, int e3, int e4, int e5, int sw): group(g), surname(s),
    exam1(e1),exam2(e2),exam3(e3),exam4(e4),exam5(e5),socWork(sw){}
    Student(){}
};
std::ostream& operator << (std::ostream &os, const Student &s){
    return os << s.group << "\t" << s.surname << "\t" << s.exam1 << "\t"
              << s.exam2 << "\t" << s.exam3 << "\t" << s.exam4 << "\t" << s.exam5 << "\t" << s.socWork << "\n";
}
std::istream& operator >> (std::istream& in, Student& s){
    in >> s.group >> s.surname >> s.exam1 >> s.exam2 >> s.exam3 >> s.exam4 >> s.exam5 >> s.socWork;
    if(!in){
        std::cout<<"Input error"<<std::endl;
    }
    return in;
}
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    std::vector<Student> students = {
//      Student("C724", "Chudinov", 4,4,5,5,5,1),
//      Student("C724", "Manulenko", 2,3,4,4,5,0),
//      Student("C723", "Lapin", 5,5,5,5,5,1),
//        Student("C723", "Lapin", 5,5,5,5,5,1),
//        Student("C723", "Lukianov", 5,5,5,5,5,1),
//        Student("C723", "Tovstagan", 5,5,5,5,5,1),
//        Student("C723", "Maerov", 5,5,5,5,5,1),
//        Student("C723", "Menshikov", 5,5,5,5,5,1),
//        Student("C723", "Dubinin", 5,5,5,5,5,1),
//        Student("C723", "Novenkov", 5,5,5,5,5,1),
//      Student("C723", "Lenin", 5,5,5,5,5,1)
//    };
//    std::vector<Student> students;
//    std::string groups[3] = {"C656", "C724", "C723"};
//    std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//    for(int i=0;i<30;i++){
//        std::string surname="";
//        for(int i=0;i<8;i++){
//            surname += alphabet[rand()%25];
//        }
//        std::string group=groups[rand()%2];
//        int ex1=2+rand()%4;
//        int ex2=2+rand()%4;
//        int ex3=2+rand()%4;
//        int ex4=2+rand()%4;
//        int ex5=2+rand()%4;
//        int sw=0+rand()%2;
//        students.push_back(Student(groups[0], surname, ex1,ex2,ex3,ex4,ex5, sw));
//    }
//    std::ofstream out("Students.txt");
//    if(out.is_open()){
//        for(int i=0;i<students.size();i++){
//            out<<students[i];
//        }
//    }
//    out.close();

//    std::vector<Student> users_in;
//    std::ifstream in("Students.txt");
//    if(in.is_open()){
//        Student s;
//        while(in>>s){
//            users_in.push_back(s);
//        }
//    }
//    in.close();
//    std:: cout << "All Students: "<< std::endl;
//    for(int i=0;i<users_in.size();i++){
//        std::cout<<users_in[i];
//    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    struct Debtor{ //Должник
      std::string numberGroup;
      std::string surname;
      int countExams;
    };
    std::vector<Debtor> debtors;
    std::ifstream in("Students.txt");
    if(in.is_open()){
        Student s;
        Debtor d;
        while(in>>s){
            d.countExams = 0;
            d.numberGroup = s.group;
            d.surname = s.surname;
            if(s.exam1<3){
                d.countExams++;
            }
            if(s.exam2<3){
                d.countExams++;
            }
            if(s.exam3<3){
                d.countExams++;
            }
            if(s.exam4<3){
                d.countExams++;
            }
            if(s.exam5<3){
                d.countExams++;
            }
            //std::cout << d.numberGroup << "\t" << d.surname << "\t" << d.countExams << "\n";
            if(d.countExams>0){
                debtors.push_back(d);
            }
    }
    }
    in.close();
    std::string debator;
    std:: cout << "All Debtors: "<< std::endl;
    ui->resultBox->setText("All Debtors:");
    for(int i=0;i<debtors.size();i++){
        std::cout << debtors[i].numberGroup << "\t" << debtors[i].surname << "\t" << debtors[i].countExams << "\n";
        debator = debtors[i].numberGroup+"\t"+debtors[i].surname+"\t"+std::to_string(debtors[i].countExams);
        ui->resultBox->append(QString::fromStdString(debator));
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    struct Activity{
      std::string surname;
    };
    std::vector<Activity> activities;
    std::ifstream in("Students.txt");
    if(in.is_open()){
        Student s;
        Activity a;
        while(in>>s){
            //std::cout << d.numberGroup << "\t" << d.surname << "\t" << d.countExams << "\n";
            a.surname = s.surname;
            if(s.socWork>0){
                activities.push_back(a);
            }
    }
    }
    in.close();
    std::string activ;
    std:: cout << "All Debtors: "<< std::endl;
    ui->resultBox->setText("All Activity:");
    for(int i=0;i<activities.size();i++){
        std::cout << activities[i].surname << "\n";
        activ = activities[i].surname;
        ui->resultBox->append(QString::fromStdString(activ));
//        activ = "\n";
//        ui->resultBox->append(QString::fromStdString(activ));
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    struct StudentWithAVG{
        std::string group;
        std::string surname;
        float avgBall;
    };
    QString inpGroup = ui->groupInput->text();
    QString groupStr;
    std::vector<StudentWithAVG> students;
    std::ifstream in("Students.txt");
    if(in.is_open()){
        Student s;
        StudentWithAVG sAvg;
        while(in>>s){
            float countBall =0;
            if(s.group == inpGroup.toUtf8().constData()){
            countBall = ((s.exam1+s.exam2+s.exam3+s.exam4+s.exam5)/(float)5);
            //std::cout << (countBall/(float)5) << std::endl;
            sAvg.group = s.group;
            sAvg.surname = s.surname;
            sAvg.avgBall = countBall;
            students.push_back(sAvg);
        }
        }
    }
    in.close();
    int countStudents=0;
    float allAvg=0;
    std::cout << "All Students with AVG: "<< std::endl;
    for(int i=0;i<students.size();i++){
        std::cout << students[i].surname << "\n";
        std::cout << students[i].avgBall << "\n";
        countStudents++;
        allAvg += students[i].avgBall;
    }
    std::cout << "All AVG: "<< std::endl;
    ui->resultBox->setText("All AVG:");
    std::cout << allAvg/countStudents << std::endl;
    ui->resultBox->append(QString::fromStdString(std::to_string(allAvg/countStudents)));
    std::string result;
    if(students.size()>0){
        for(int i=0;i<students.size();i++){
            result = students[i].surname + "\t" + std::to_string(students[i].avgBall);
            ui->resultBox->append(QString::fromStdString(result));
        }
     }else {
        ui->resultBox->setText("Group Not Found");
    }
}
