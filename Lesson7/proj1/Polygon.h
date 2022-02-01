#define PI 3.1415
#include "iostream"
#include "math.h"
using namespace std;

class Polygon
{
public:
    virtual float getArea() = 0;
};

class Cycle:public Polygon
{
private:
    float r;
public:
    float getArea() override
    {
        return this->r * this->r * PI;
    }

    void setR(float _r)
    {
        this->r = _r;
    }
};

class Tan:public Polygon
{
private:
    float a;
    float b;
    float c;
public:
    float getArea() override
    {
        float p = (this->a+ this->b+ this->c)/2;
        float pa = p - a;
        float pb = p - b;
        float pc = p - c;
        return sqrt(p*pa*pb*pc);
    }

    void setSide(float _a,float _b,float _c)
    {
        this->a = _a;
        this->b = _b;
        this->c = _c;
    }
};