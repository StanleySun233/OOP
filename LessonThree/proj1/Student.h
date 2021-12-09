#include<iostream>
#include<string>
using namespace std;
#define ll long long

class Student
{
private:
    ll id;
    string name;
    string address;
public:
    Student(ll x, string y, string z);
    void print();
    Student();
    ~Student();
};