#include "iostream"
#define elif else if
using namespace std;

class Student
{
private:
    char StuId[20];
    char StuName[20];
    char StuSex[5];
    char StuMajor[25];
    char StuClass[10];
public:
    void SetStudent();
    char *CallStuId();
    char *CallStuName();
    char *CallStuSex();
    char *CallStuMajor();
    char *CallStuClass();
    void PrintAll();
};