#include "Circle.h"

int main()
{
    double r1;
    cin>>r1;
    Circle *c1 = new Circle(r1);
    cout<<"r =\t"<<c1->push()<<endl;
    cout<<"l =\t"<<c1->caculateL()<<endl;
    cout<<"s =\t"<<c1->caculateS()<<endl;
    delete c1;
    return 0;
}
