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

ostream &operator<<(ostream &os, Poi c) {
    os << c.getX() << " " << c.getY() << " ";
    return os;
};

double Circle::getR()
{
    return this->r;
}

Circle::Circle(double _x, double _y, double _r) : Poi(_x, _y) {
    this->r = _r;
}

ostream &operator<<(ostream &os, Circle c) {
    os << c.getX() << " " << c.getY() << " " << c.getR();
    return os;
}
