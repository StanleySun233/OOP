#include "Student.h"

int main()
{
    Student stu1 = Student(); // 构造函数1
    stu1.print();
    Student stu2(202010311230,"StanleySun2","Pudong,Shanghai");// 构造函数2
    stu2.print();
    return 0;
}
