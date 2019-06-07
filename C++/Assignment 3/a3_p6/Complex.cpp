/*
CH08-320142
Complex.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"
using namespace std;

//default constructor
Complex::Complex()
{
    real = 0;
    imaginary = 0;
}

//constructor for setting real and imaginary
Complex::Complex(double newreal, double newimaginary)
{
    real = newreal;
    imaginary = newimaginary;
}

//copy constructor
Complex::Complex(Complex& src)
{
    real = src.real;
    imaginary = src.imaginary;
}

//destructor
Complex::~Complex()
{}

//setter methods
void Complex::setReal(double newreal)
{
    real = newreal;
}

void Complex::setImaginary(double newimaginary)
{
    imaginary = newimaginary;
}

//getter methods
double Complex::getReal()
{
    return real;
}

double Complex::getImaginary()
{
    return imaginary;
}

//service method
void Complex::print()
{
    if (imaginary > 0)
        cout << real << "+" << imaginary << "i" << endl;
    else if (imaginary < 0)
        cout << real << imaginary << "i" << endl;
    else
        cout << real << endl;
}

//other methods
void Complex::conjugate()
{
    cout << "Conjugate: ";

    if (-imaginary > 0)
        cout << real << "+" << -imaginary << "i" << endl;
    else if (-imaginary < 0)
        cout << real << -imaginary << "i" << endl;
    else
        cout << real << endl;
}

//the sum of two numbers
Complex Complex::add(Complex complex)
{
    complex = Complex(this->real + complex.real, this->imaginary + complex.imaginary);
    return complex;
}

//the difference of two numbers
Complex Complex::sub(Complex complex)
{
    complex = Complex(this->real - complex.real, this->imaginary - complex.imaginary);
    return complex;
}

// the multiplication of the two complex numbers
Complex Complex::mult(Complex complex)
{
    complex = Complex(this->real * complex.real - this->imaginary * complex.imaginary,
                      this->imaginary * complex.real + this->real * complex.imaginary);

    return complex;
}
