#include <iostream>

class M
{
private:
    int a;
    static int b;
public:
    M(int a0);
    static void fun(M &m);
};