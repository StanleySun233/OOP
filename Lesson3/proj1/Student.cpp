#include "Student.h"

Student::Student()
{
    this->id = 202010311229;
    this->name = "StanleySun1";
    this->address = "Shanghai Maritime University";
}

void Student::print() {
    cout << "The student's id is\t\t" << id << endl ;
    cout << "The student's name is\t\t" << name << endl ;
    cout << "The student's address is\t" << address<< endl;
}

Student::Student(ll x, string y, string z) {
    this->id = x;
    this->name = y;
    this->address = z;
}

Student::~Student()
{
    cout<<"Destruct function has been run."<<endl;
}