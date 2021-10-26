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

mycla::mycla(int x1, int y1)
{
    this->x = x1;
    y = new int;
    *this->y = y1;
}

void mycla::pr() {
    cout<<"x =\t"<< this->x<<endl;
    cout<<"y =\t"<< *this->y<<endl;
}

mycla::mycla(mycla &m) {
    this->x = m.x;
    y = new int;
    this->y = m.y;
}

mycla::~mycla() {
    delete y;
    cout<<"pointer y is deleted."<<endl;
}

int main()
{
    mycla m1(10,5);
    m1.pr();
    cout<<"Create a new clas named m2 copyed by m1."<<endl;
    mycla m2(m1);
    m2.pr();
    return 0;
}