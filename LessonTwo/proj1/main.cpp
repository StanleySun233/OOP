#include "df.h"

int main()
{
    // use different trends to create a class.
    Date d1 = Date();                       //Use trend one to construct an obj.
    d1.PrintFormat();
    cout<<"If leap:\t"<<d1.isLeap()<<endl;

    d1.SetDateIO();                         //Set value by I/O.
    d1.PrintFormat();                       //After I/O , obj sets new value.
    cout<<"If leap:\t"<<d1.isLeap()<<endl;

    Date d2 = Date(2020,8,28);      //Use trend two to construct an obj.
    d2.PrintFormat();
    cout<<"If leap:\t"<<d2.isLeap()<<endl;

    Date *d3 = new Date();                  //Use new to create an obj, while it is coupled with delete.
    cout<<"d3 's destruct function will be worked."<<endl;
    delete d3;                               //Destruct function works.

    cout<<"d1 and d2 's destruct functions will be worked."<<endl;
    return 0;
}