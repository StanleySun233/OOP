#include "cla.h"

int main()
{
    cla *p = new cla[SIZE];
    for (int i =0;i<SIZE;i++)
    {
        p->PutX(1*i);
        p->PutY(2*i);
        cout<<"p points to  "<<i<<"  x = "<<p->GetX()<<"  y = "<<p->GetY()<<endl;
    }

    return 0;
}
