#include "Integer.h"

Ten::Ten(int _n)
{
    this->n = _n;
    this->x = 10;
}

void Ten::pr()
{
    int res[100],c,i=0,num = getN(),_x = getX();
    while (num)
    {
        c = (num % _x);
        res[i] = c;
        num = num / _x;
        i++;
    }
    while (i--)
    {
        cout<<res[i];
    }
    cout<<endl;
}

int Ten::getX()
{
    return this->x;
}

int Ten::getN() {
    return this->n;
}

void Ten::setX(int _x)
{
    this->x =_x;
}

void Ten::setN(int _n)
{
    this->n = _n;
}

Eight::Eight(int _n) : Ten(_n)
{
    this->n = _n;
    this->x = 8;
}

Two::Two(int _n) : Ten(_n)
{
    this->n = _n;
    this->x = 2;
}
