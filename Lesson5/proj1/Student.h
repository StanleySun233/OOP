#include<iostream>
#define MAXSIZE 100
using namespace std;

class Student
{
private:
    static int count;
    char name[MAXSIZE];
public:
    Student(char n[]);
    static int pr();
};
