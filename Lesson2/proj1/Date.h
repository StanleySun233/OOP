#include "iostream"
#define elif else if
using namespace std;

class Date
{
private:
    int yy;
    int mm;
    int dd;
public:
    Date();                     //Construct trend one
    Date(int x,int y,int z);    //Construct trend two
    ~Date();                    //Destruct trend
    void SetDateIO();
    int Callyy();
    int Callmm();
    int Calldd();
    bool isLeap();
    void PrintFormat();
};