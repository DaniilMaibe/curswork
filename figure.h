#ifndef FIGURE_H
#define FIGURE_H


class Figure
{
public:
    Figure();



    double getPerimeter(){return perimeter_;}
    double getArea(){return area_;}
    void setPerimeter(double perimeter){perimeter_=perimeter;}
    void setArea(double area){area_=area;}



private:
    double perimeter_;
    double area_;


};

#endif // FIGURE_H
