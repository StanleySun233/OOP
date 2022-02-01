#include "iostream"

using namespace std;

#define SIZE 10

class cla {
    private:
        int X,Y;
    public:
        int GetX();
        int GetY();
        void PutX(int x);
        void PutY(int y);
};