#include "iostream"
using namespace std;

class mycla
{
private:
    int x;
    int *y;
public:
    mycla(mycla &m);
    mycla(int x1,int y1);
    void pr();
    ~mycla();

};