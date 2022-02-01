#include "Complex.h"

int main()
{
    complex c1(2,-3),c2(3,4);
    c1.pr();
    c2.pr();

    complex c3;
    c3 = c1 + c2;
    c3.pr();

    complex c4;
    c4 = c1 - c2;
    c4.pr();

    complex c5;
    c5 = c1 * c2;
    c5.pr();

    return 0;
}