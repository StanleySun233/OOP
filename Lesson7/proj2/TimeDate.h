#include "iostream"
using namespace std;

class Date
{
private:
    int d;
public:
    int getD()
    {
        return this->d;
    }

    void setD(int _d)
    {
        this->d = _d;
    }
};

class Time
{
private:
    int h;
    int m;
public:
    int getH()
    {
        return this->h;
    }

    int getM()
    {
        return this->m;
    }

    void setH(int _h)
    {
        this->h = _h;
    }

    void setM(int _m)
    {
        this->m = _m;
    }

};

class TimeDate:public Date,Time
{
public:
    void set(int _h,int _m,int _d)
    {
        setM(_m);
        setH(_h);
        setD(_d);
    }

    void print()
    {
        cout<<"The date is "<<((this->getD()<10)?"0":"")<<this->getD()<<endl;
        cout<<"The time is "<<((this->getH()<10)?"0":"")<<this->getH()<<":"<<((this->getM()<10)?"0":"")<<this->getM()<<endl;
    }
};
