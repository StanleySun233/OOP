#include "Student.h"

Student::Student(char *n)
{
    strcpy_s(this->name,n);
    count+=1;
}

int Student::pr()
{
    return count;
}
