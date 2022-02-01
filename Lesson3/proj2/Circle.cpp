#include "Circle.h"

void Circle::put(double x) {
    this->r = x;
}

double Circle::push() {
    return this->r;
}

double Circle::caculateS()
{
    return push() * push() * PI;
}

double Circle::caculateL()
{
    return push()* 2 * PI;
}
Circle::Circle(double x)
{
    put(x);
}

Circle::~Circle()
{
    cout<<"Construct function has been run."<<endl;
}