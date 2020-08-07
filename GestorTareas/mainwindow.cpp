#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <string>
#include <iostream>
#include <QThread>

using namespace std;
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

//*************************************************************//



void MainWindow::on_iniciar1_clicked()
{
    int maximo=15;
    ui->estado->setText("C++ Activo");
    for (int temp=1;temp<maximo;temp++) {
        ui->gen->setValue(temp);
        system("sleep 60");
    }
     system("notify-send '15 MINUTOS MAS'");
     c1=c1+15;
     ui->progressBar->setValue(c1); // OK
     ui->gen->setValue(0);
     ui->estado->setText("Inactivo");
     total=total+15;
     ui->lcdNumber->display(total);
     system("mpg123 alarm.mp3");


}

void MainWindow::on_iniciar2_clicked()
{
    int maximo=15;
    ui->estado->setText("Coursera Activo");
    for (int temp=1;temp<maximo;temp++) {
        ui->gen->setValue(temp);
        system("sleep 60");
        }
     system("notify-send '15 MINUTOS MÁS'");
     ui->gen->setValue(0);
     c2=c2+15;
     ui->progressBar_2->setValue(c2); // OK
     ui->estado->setText("Inactivo");
     total=total+15;
     ui->lcdNumber->display(total);
     system("mpg123 alarm.mp3");

}


void MainWindow::on_iniciar3_clicked()
{
    int maximo=15;
    ui->estado->setText("Android Activo");
    for (int temp=1;temp<maximo;temp++) {
        ui->gen->setValue(temp);
        system("sleep 60");
        }
     system("notify-send '15 MINUTOS MÁS'");
     ui->gen->setValue(0);
     c3=c3+15;
     ui->progressBar_3->setValue(c3);
     ui->estado->setText("Inactivo");
     total=total+15;
     ui->lcdNumber->display(total);
     system("mpg123 alarm.mp3");

}

void MainWindow::on_iniciar4_clicked()
{
    int maximo=15;
    ui->estado->setText("POO Activo");
    for (int temp=1;temp<maximo;temp++) {
        ui->gen->setValue(temp);
        system("sleep 60");
        }
     system("notify-send '15 MINUTOS MÁS'");
     ui->gen->setValue(0);
     c4=c4+15;
     ui->progressBar_4->setValue(c4);
     ui->estado->setText("Inactivo");
     total=total+15;
     ui->lcdNumber->display(total);
     system("mpg123 alarm.mp3");

}


void MainWindow::on_pushButton_clicked()
{
    exit(0);
}
