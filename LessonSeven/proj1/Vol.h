#include <iostream>
using namespace std;

class re{
private:
    double l;
    double w;
public:
    double getL();
    double getW();
    re(double l,double w);
};

class res:private re
{
private:
    double h;
public:
    double getH();
    double cacuV();
    res(double l, double w, double h);
};