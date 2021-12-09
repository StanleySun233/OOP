#include "A.h"

int main()
{
    A a1(2,3);
    A a2 (3,4);
    A a3;
    a3 = a1 + a2;
    a3.pr();
    A a4;
    a4 = a3;
    a3.pr();
    return 0;
}