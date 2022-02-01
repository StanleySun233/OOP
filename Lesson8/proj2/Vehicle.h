#ifndef PROJ2_VEHICLE_H
#define PROJ2_VEHICLE_H

#include "iostream"
#include "string"
using namespace std;

class Vehicle
{
public:
    virtual void pr();
};

class Car:public Vehicle
{
public:
    void pr();
};

class Truck:public Vehicle
{
public:
    void pr();
};

class Boat:public Vehicle
{
public:
    void pr();
};
#endif //PROJ2_VEHICLE_H
