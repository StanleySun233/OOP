#include "iostream"
using namespace std;

class Ten
{
protected:
    int n;
    int x;
public:
    Ten(int _n);
    virtual void pr();
    int getX();
    int getN();
    void setX(int _x);
    void setN(int _n);
};

class Eight:public Ten
{
public:
    Eight(int _n);
};

class Two:public Ten
{
public:
    Two(int _n);
};