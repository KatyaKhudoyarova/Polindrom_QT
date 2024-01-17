#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow:: Checker(std::wstring &str){

    int d=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==str[str.length()-1-i]){
            d++;
        }
    }
    if(d == str.length()){
        ui->label_3->setText("Полиндром");
    }else{
        ui->label_3->setText("Не полиндром");
    }
}

void MainWindow::on_pushButton_clicked()
{
    QString qstr = ui->lineEdit->text();
    std::wstring str = qstr.toStdWString();
    Checker(str);

}

