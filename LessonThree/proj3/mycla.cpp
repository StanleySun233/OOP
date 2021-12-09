#include "mycla.h"

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
    cout<<"pointer y is deleted."<<endl;
}