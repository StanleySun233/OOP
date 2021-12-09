#include "Complex.h"
#include "iostream"
using namespace std;

float Complex::GetReal()
{
    return real;
}

float Complex::GetImag()
{
    return imag;
}

void Complex::SetComplex()
{
    float a, b;
    cin >> a >> b;
    real = a;
    imag = b;
}

void Complex::PrintReal()
{
    cout << "The real is " << GetReal() << endl;
}

void Complex::PrintImag()
{
    cout << "The imag is " << GetImag() << endl;
}

void Complex::PrintComplex()
{
    if (imag > 0)
        cout << GetReal() << " + " << GetImag() << "i" << endl;
    else
        cout << GetReal() << " - " << -GetImag() << "i" << endl;
}

void Complex::AddComplex(Complex c1,Complex c2)
{
    real = c1.GetReal() + c2.GetReal();
    imag = c1.GetImag() + c2.GetImag();
}

void Complex::SubComplex(Complex c1,Complex c2)
{
    real = c1.GetReal() - c2.GetReal();
    imag = c1.GetImag() - c2.GetImag();
}

void Complex::MulComplex(Complex c1,Complex c2)
{
    real = c1.GetReal() * c2.GetReal() - c1.GetImag() * c2.GetImag();
    imag = c1.GetReal() * c2.GetImag() + c1.GetImag() * c2.GetReal();
}