#include "iostream"
using namespace std;
#define elif else if

class Complex
{
    private:
        float real;
        float imag;

    public:
        void SetComplex();
        float GetReal();
        float GetImag();
        void PrintReal();
        void PrintImag();
        void PrintComplex();
        void AddComplex(Complex c1, Complex c2);
        void SubComplex(Complex c1, Complex c2);
        void MulComplex(Complex c1, Complex c2);
};