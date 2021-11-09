#include <iostream>
using namespace std;
class complex{
private:
    double r;
    double i;
public:
    complex()
    {
        this->r = 0;
        this->i = 0;
    }

    complex(double _r,double _i)
    {
        this->r = _r;
        this->i = _i;
    }

    void pr() const
    {
        cout<<this->r;
        if (this->i<0)
            cout<<this->i;
        else
            cout<<"+"<<this->i;
        cout<<"i"<<endl;
    }
    complex operator+(const complex &obj)
    {
        this->i +=obj.i;
        this->r +=obj.r;
        return *this;
    }

    friend complex operator -(const complex &obj1,const complex &obj2)
    {
        complex temp;
        temp.r = obj1.r - obj2.r;
        temp.i = obj1.i - obj2.i;
        return temp;
    }
};

int main()
{
    complex c1(2,-3),c2(3,4);
    c1.pr();
    c2.pr();

    complex c3;
    c3 = c1-c2;
    c3.pr();
    return 0;
}