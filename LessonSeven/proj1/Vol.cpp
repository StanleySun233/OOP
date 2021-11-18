#include "Vol.h"

double re::getL()
{
    return this->l;
}

double re::getW()
{
    return this->w;
}

double res::getH()
{
    return this->h;
}

double res::cacuV()
{
    return this->getH()*this->getL()*this->getW();
}

re::re(double l,double w)
{
    this->l = l;
    this->w = w;
}

res::res(double l, double w, double h) : re(l, w) {
    this->h = h;
}