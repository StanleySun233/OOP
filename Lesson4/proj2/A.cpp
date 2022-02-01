#include "A.h"

A::A()
{
    this->x = 0;
    this->y = 0;
}

A::A(double _x, double _y)
{
    this->x = _x;
    this->y = _y;
}

A A::operator+(const A &p)
{
    A temp;
    temp.x = this->x + p.x;
    temp.y = this->y + p.y;
    return temp;
}

A A::operator-(const A &p)
{
    A temp;
    temp.x = this->x - p.x;
    temp.y = this->y - p.y;
    return temp;
}

A &A::operator=(const A &p)
{
    this->x = p.x;
    this->y = p.y;
    return *this;
}

void A::pr()
{
    cout << "x\t" << this->x << "\ty\t" << this->y << endl;
}


