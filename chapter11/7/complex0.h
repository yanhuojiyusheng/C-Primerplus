#pragma once
#include <iostream>

class Complex
{
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0, double i = 0);
    Complex operator+(const Complex& pl) const;
    Complex operator-(const Complex& pl) const;
    Complex operator*(const Complex& pl) const;
    Complex operator*(double n) const;
    Complex operator~() const;

    friend Complex operator*(double n, const Complex& pl);
    friend std::ostream& operator<<(std::ostream& os, const Complex& pl);
    friend std::istream& operator>>(std::istream& is, Complex& pl);
};
