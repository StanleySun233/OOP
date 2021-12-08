#include "TimeDate.h"

int main()
{
    int a,b,c;
    TimeDate t;

    cin>>a>>b>>c;

    t.set(a,b,c);
    t.print();

    return 0;
}
