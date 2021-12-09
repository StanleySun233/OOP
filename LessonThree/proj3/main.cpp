#include "mycla.h"

int main()
{
    mycla m1(10,5);
    m1.pr();
    cout<<"Create a new clas named m2 copyed by m1."<<endl;
    mycla m2(m1);
    m2.pr();
    return 0;
}