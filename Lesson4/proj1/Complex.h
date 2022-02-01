#include <iostream>
using namespace std;

class complex{
private:
    double r;
    double i;
public:
    complex();
    complex(double _r,double _i);
    void pr() const;
    complex operator+(const complex &obj);
    friend complex operator -(const complex &obj1,const complex &obj2);
    friend complex operator *(const complex &obj1,const complex &obj2);

};