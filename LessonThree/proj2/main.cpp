#include<iostream>
#include<string>
using namespace std;
#define PI 3.1415


class Circle {
private:
    double r;
public:

    void put(double x);
    double push();
    double caculateS();
    double caculateL();
    Circle(double x);
    ~Circle();
};

void Circle::put(double x) {
    this->r = x;
}

double Circle::push() {
    return this->r;
}

double Circle::caculateS()
{
    return push() * push() * PI;
}

double Circle::caculateL()
{
    return push()* 2 * PI;
}
Circle::Circle(double x)
{
    put(x);
}

Circle::~Circle()
{
    cout<<"Construct function has been run."<<endl;
}

int main()
{
    double r1;
    cin>>r1;
    Circle *c1 = new Circle(r1);
    cout<<"r =\t"<<c1->push()<<endl;
    cout<<"l =\t"<<c1->caculateL()<<endl;
    cout<<"s =\t"<<c1->caculateS()<<endl;
    delete c1;
    return 0;
}
