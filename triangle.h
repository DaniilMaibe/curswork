#include "figure.h"
#ifndef TRIANGLE_H
#define TRIANGLE_H


class Triangle : public Figure
{
public:
    Triangle();
    Triangle(double a, double h);


    void setA(double a){a_ = a;}
    void setB(double b){b_ = b;}
    void setC(double c){c_ = c;}
    void setR1(double r1){r1_ = r1;}
    void setR2(double r2){r2_ = r2;}
    void setH(double h){h_ = h;}

    double findAreaAH(){return a_*h_/2;}

private:
    int a_;
    int b_;
    int c_;
    int r1_;
    int r2_;
    int h_;
};

#endif // TRIANGLE_H
