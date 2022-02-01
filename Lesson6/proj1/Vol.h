#include <iostream>
using namespace std;

class re{
private:
    double l;
    double w;
public:
    double getL();
    double getW();
    re(double _l, double _w);
};

class res:private re
{
private:
    double h;
public:
    double getH();
    double cacuV();
    res(double _l, double _w, double _h);
};
