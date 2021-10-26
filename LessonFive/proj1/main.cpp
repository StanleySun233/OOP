#include<iostream>
#define MAXSIZE 100
using namespace std;

class student
{
private:
    static int count;
    char name[MAXSIZE];
public:
    student(char n[])
    {
        strcpy_s(this->name,n);
        count+=1;
    }
    static int pr()
    {
        return count;
    }
};
int student::count = 0;
int main()
{
    int t = 10;
    while(t)
    {
        char a[MAXSIZE];
        cin>>a;
        student student(a);
        cout<<"the number of the admit students is "<<student::pr()<<endl;
        t--;
    }
    return 0;
}