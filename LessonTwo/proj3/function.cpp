#include "df.h"
void Student::SetStudent()
{
    char Id[20];
    char Name[20];
    char Sex[5];
    char Major[25];
    char Class[10];
    cin>>Id>>Name>>Sex>>Major>>Class;
    strcpy_s(this->StuId ,Id);
    strcpy_s(this->StuName,Name);
    strcpy_s(this->StuSex,Sex);
    strcpy_s(this->StuMajor,Major);
    strcpy_s(this->StuClass,Class);
}
char *Student::CallStuId()
{
    return this->StuId;
}
char *Student::CallStuName()
{
    return this->StuName;
}
char *Student::CallStuSex()
{
    return this->StuSex;
}
char *Student::CallStuMajor()
{
    return this->StuMajor;
}
char *Student::CallStuClass()
{
    return this->StuClass;
}
void  Student::PrintAll()
{
    cout<<"The student id is\t"<<CallStuId()<<endl;
    cout<<"The student name is\t"<<CallStuName()<<endl;
    cout<<"The student sex is\t"<<CallStuSex()<<endl;
    cout<<"The student major is\t"<<CallStuMajor()<<endl;
    cout<<"The student class is\t"<<CallStuClass()<<endl;
}