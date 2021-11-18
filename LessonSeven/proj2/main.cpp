#include "Poi.h"


int main() {
    double l,y,r;
    cout<<"Input l y r,split by space."<<endl;
    cin>>l>>y>>r;
    Circle c(l,y,r);
    cout<<c;
    return 0;
}
