#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <iostream>
#include <string>

#include "figure.h"
#include "triangle.h"

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


void MainWindow::on_comboBox_activated(const QString &arg1)
{
    if (arg1 == "Треугольник"){

        ui->lineEdit->setEnabled(true);
        ui->lineEdit_2->setEnabled(true);
        ui->lineEdit->setText("0");
        ui->lineEdit_2->setText("0");
    }

}

void MainWindow::on_pushButton_clicked()
{
    QString text = ui->lineEdit->text();
    int a = text.toInt();
    text = ui->lineEdit_2->text();
    int h = text.toInt();

    Triangle tr(a,h);
    double s = tr.findAreaAH();
    std::cout<<s;

    std::string str = std::to_string(s);
    text = QString::fromStdString(str);

    ui->textEdit->setText(text);
}

