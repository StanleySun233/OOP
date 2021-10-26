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

int main()
{
    Student stu1 = Student(); // 构造函数1
    stu1.print();
    Student stu2(202010311230,"StanleySun2","Pudong,Shanghai");// 构造函数2
    stu2.print();
    return 0;
}
