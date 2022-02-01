#include "Add.h"

#include <utility>

Add::Add(int _n,string &_s)
{
    this->n = _n;
    this->s = _s;
}

void Add::add(int _n)
{
    this->n += _n;
}

void Add::add(string _s)
{
    this->s += _s;
}

void Add::prN()
{
    cout<<"n = "<< this->n<<endl;
}
void Add::prS()
{
    cout<<"s = "<< this->s<<endl;
}