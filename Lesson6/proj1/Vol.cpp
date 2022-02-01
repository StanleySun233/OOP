#include "Vol.h"

double re::getL()
{
    return this->l;
}

double re::getW()
{
    return this->w;
}

re::re(double _l, double _w)
{
    this->l = _l;
    this->w = _w;
}

double res::getH()
{
    return this->h;
}

double res::cacuV()
{
    return this->getH()*this->getL()*this->getW();
}

res::res(double _l, double _w, double _h) : re(_l, _w) {
    this->h = _h;
}