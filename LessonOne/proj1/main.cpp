#include "iostream"
#include "df.h"
#define elif else if
using namespace std;

int main()
{
    int i;
    Complex c1, c2, add, mul, sub;
    c1.SetComplex();
    c1.PrintReal();
    c1.PrintImag();
    c1.PrintComplex();
    c2.SetComplex();
    c2.PrintReal();
    c2.PrintImag();
    c2.PrintComplex();
    cout << "Input 1 to do add, 2 to do sub ,3 to do mul ,4 to close." << endl;

    while (true)
    {
        cin>>i;
        if (i<1 || i >4)
        {
            cout << "<WARING>Please input the numbers from 1 to 4." << endl;
        }
        elif (i == 1)
        {
            add.AddComplex(c1, c2);
            cout << "The result of add is ";
            add.PrintComplex();
        }   
        elif (i == 2)
        {
            sub.SubComplex(c1, c2);
            cout << "The result of sub is ";
            sub.PrintComplex();
        }
        elif (i == 3)
        {
            mul.MulComplex(c1, c2);
            cout << "The result of mul is ";
            mul.PrintComplex();
        }
        elif (i == 4) break;
    }
    return 0;
}
