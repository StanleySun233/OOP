#include "Vol.h"

int main()
{
    double l,w,h;
    cout<<"Input the l w h, split by space."<<endl;
    cin>>l>>w>>h;
    res *rs = new res(l,w,h);
    cout << "The result is:" << rs->cacuV() << endl;
    delete rs;
    return 0;
}