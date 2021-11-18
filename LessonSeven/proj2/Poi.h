//
// Created by 70929 on 2021/11/23.
//

#ifndef PROJ2_POI_H
#define PROJ2_POI_H
#include <iostream>
using namespace std;

class Poi
{
private:
    double x;
    double y;
public:
    double getX();
    double getY();
    Poi(double _x,double _y);
    friend ostream & operator<<(ostream &os,Poi c);
};

class Circle: public Poi
{
private:
    double r;
public:
    double getR();
    Circle(double _x, double _y, double _r);
    friend ostream & operator<<(ostream &os,Circle c);
};

#endif //PROJ2_POI_H
