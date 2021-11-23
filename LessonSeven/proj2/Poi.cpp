//
// Created by 70929 on 2021/11/23.
//

#include "Poi.h"

double Poi::getX()
{
    return this->x;
}

double Poi::getY()
{
    return this->y;
}

Poi::Poi(double _x,double _y)
{
    this->x = _x;
    this->y = _y;
}

ostream &operator<<(ostream &os, Poi c)
{
    os << c.getX() << " " << c.getY() << endl;
    return os;
}

istream &operator>>(istream &is,Poi &c)
{
    is >> c.x>>c.y;
    return is;
}

void Poi::set()
{
    double _x,_y;
    cin>>_x>>_y;
    this->x = _x;
    this->y = _y;
}

double Circle::getR()
{
    return this->r;
}

Circle::Circle(double _x, double _y, double _r) : Poi(_x, _y)
{
    this->r = _r;
}

ostream &operator<<(ostream &os, Circle c)
{
    os << "x = "<<c.getX() << " y = " << c.getY() << " z = " << c.getR() << endl;
    return os;
}

istream &operator>>(istream &is, Circle &c)
{
    c.set();
    is >> c.r;
    return is;
}
