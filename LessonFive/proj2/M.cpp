#include "M.h"

int M::b = 10;

M::M(int a0)
{
    this->a = a0;
}

void M::fun(M &m)
{
    std::cout<<m.a<<" "<<M::b<<std::endl;
}
