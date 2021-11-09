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

int M::b = 10;

M::M(int a0)
{
    this->a = a0;
}

void M::fun(M &m)
{
    std::cout<<m.a<<" "<<M::b<<std::endl;
}

int main()
{
    M p(6),q(8);
    M::fun(p);
    M::fun(q);
    return 0;
}
