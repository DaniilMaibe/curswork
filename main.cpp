#include "mainwindow.h"
#include <iostream>
#include "figure.h"
#include "triangle.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    std::cout<<"Hello world!"<<std::endl;

    return a.exec();
    //return 0;
}
