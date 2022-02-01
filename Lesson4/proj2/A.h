#include <iostream>
using namespace std;

class A{
private:
    double x;
    double y;
public:
    A();
    A(double _x, double _y);
    A operator+(const A &p);
    A operator-(const A &p);
    A &operator=(const A &p);
    void pr();
};