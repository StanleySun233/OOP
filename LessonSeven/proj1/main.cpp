#include "Polygon.h"

int main()
{
    float a,b,c;
    Cycle C;
    Tan T;

    cout<<"Input the r of cycle"<<endl;
    cin>>a;
    C.setR(a);
    cout<<"The square is:\t"<<C.getArea()<<endl;

    cout<<"Input the a,b,c of tangle"<<endl;
    cin>>a>>b>>c;
    T.setSide(a,b,c);
    cout<<"The square is:\t"<<T.getArea()<<endl;

    return 0;
}
