#include "complex0.h"

#include <iostream>
Complex::Complex(double r, double i)
{
    real = r;
    imaginary = i;
}
Complex Complex::operator+(const Complex& pl) const
{
    return Complex(real + pl.real, imaginary + pl.imaginary);
}
Complex Complex::operator-(const Complex& pl) const
{
    return Complex(real - pl.real, imaginary - pl.imaginary);
}
Complex Complex::operator*(const Complex& pl) const
{
    return Complex(real * pl.real - imaginary * pl.imaginary,
                   real * pl.imaginary + imaginary * pl.real);
}
Complex Complex::operator*(double n) const
{
    return Complex(n * real, n * imaginary);
}
Complex Complex::operator~() const { return Complex(real, -imaginary); }
Complex operator*(double n, const Complex& pl) { return pl * n; }
std::ostream& operator<<(std::ostream& os, const Complex& pl)
{
    os << "(" << pl.real << "," << pl.imaginary << "i)";
    return os;
}
std::istream& operator>>(std::istream& is, Complex& pl)
{
    std::cout << "real: ";
    if (!(is >> pl.real)) return is;
    std::cout << "imaginary: ";
    is >> pl.imaginary;
    return is;
}

