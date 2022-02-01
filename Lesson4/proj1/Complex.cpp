#include "Complex.h"

complex::complex()
{
    this->r = 0;
    this->i = 0;
}

complex::complex(double _r, double _i)
{
    this->r = _r;
    this->i = _i;
}

void complex::pr() const
{
    cout<<this->r;
    if (this->i<0)
        cout<<this->i;
    else
        cout<<"+"<<this->i;
    cout<<"i"<<endl;
}

complex complex::operator+(const complex &obj)
{
    this->i +=obj.i;
    this->r +=obj.r;
    return *this;
}

complex operator-(const complex &obj1, const complex &obj2)
{
    complex temp;
    temp.r = obj1.r - obj2.r;
    temp.i = obj1.i - obj2.i;
    return temp;
}

complex operator*(const complex &obj1, const complex &obj2)
{
    complex temp;
    temp.r = obj1.r * obj2.r - obj1.i * obj2.i;
    temp.i = obj1.r * obj2.i + obj1.i * obj2.r;
    return temp;
}