#include <iostream>
using namespace std;

class A{
private:
    double x;
    double y;
public:
    A(double _x, double _y)
    {
        this->x = _x;
        this->y = _y;
    }

    A()
    {
        this->x = 0;
        this->y = 0;
    }

    A operator+(const A &p)
    {
        A temp;
        temp.x = this->x + p.x;
        temp.y = this->y + p.y;
        return temp;
    }

    A operator-(const A &p)
    {
        A temp;
        temp.x = this->x - p.x;
        temp.y = this->y - p.y;
        return temp;
    }

    A &operator=(const A &p)
    {
        this->x = p.x;
        this->y = p.y;
        return *this;
    }

    void pr()
    {
        cout << "x\t" << this->x << "\ty\t" << this->y << endl;
    }
};

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