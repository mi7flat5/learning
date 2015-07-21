#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <boost/rational.hpp>
#include<iostream>
#include<string>
#include<sstream>
using boost::rational;

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
void MainWindow:: on_multiply_clicked()
{
    int num1 = ui->Numer1->value();
    int denom1 = ui->denom1->value();
    int num2 = ui->Numer2->value();
    int denom2 = ui->denom2->value();
    rational<int> frac1(num1,denom1);
    rational<int> frac2(num2,denom2);
    rational<int> frac3= frac1*frac2;
    std::stringstream ss;
    ss << frac3;
    std::string result;
    ss >> result;
    QString qstr = QString::fromStdString(result);
    ui->fracout->setText(qstr);

}
void MainWindow::on_add_clicked()
{
    int num1 = ui->Numer1->value();
    int denom1 = ui->denom1->value();
    int num2 = ui->Numer2->value();
    int denom2 = ui->denom2->value();
    rational<int> frac1(num1, denom1);
    rational<int> frac2(num2, denom2);
    rational<int> frac3 = frac1+frac2;
    std::stringstream ss;
    ss << frac3;
    std::string result;
    ss >> result;
    QString qstr = QString::fromStdString(result);
    ui->fracout->setText(qstr);
}
void MainWindow::on_subtract_clicked()
{
    int num1 = ui->Numer1->value();
    int denom1 = ui->denom1->value();
    int num2 = ui->Numer2->value();
    int denom2 = ui->denom2->value();
    rational<int> frac1(num1, denom1);
    rational<int> frac2(num2, denom2);
    rational<int> frac3 = frac1-frac2;
    std::stringstream ss;
    ss << frac3;
    std::string result;
    ss >> result;
    QString qstr = QString::fromStdString(result);
    ui->fracout->setText(qstr);
}
void MainWindow::on_divide_clicked()
{
    int num1 = ui->Numer1->value();
    int denom1 = ui->denom1->value();
    int num2 = ui->Numer2->value();
    int denom2 = ui->denom2->value();
    rational<int> frac1(num1, denom1);
    rational<int> frac2(denom2, num2);
    rational<int> frac3 = frac1*frac2;
    std::stringstream ss;
    ss << frac3;
    std::string result;
    ss >> result;
    QString qstr = QString::fromStdString(result);
    ui->fracout->setText(qstr);
}
