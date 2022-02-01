#include "Student.h"

int Student::count = 0;

int main()
{
    int t = 10;
    while(t)
    {
        char a[MAXSIZE];
        cin>>a;
        Student student(a);
        cout << "the number of the admit students is " << Student::pr() << endl;
        t--;
    }
    return 0;
}