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