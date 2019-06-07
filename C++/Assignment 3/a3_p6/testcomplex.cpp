/*
CH08-320142
testcomplex.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    double real, imaginary;

    cout << "Complex numbers" << endl;
    cout << "Re(z) + Im(z)" << endl;

    Complex complex_1;
    //first complex number
    cout << "Enter the real part for first complex number: ";
    cin >> real;
    complex_1.setReal(real); //setter method

    cout << "Enter the imaginary part for first complex number: ";
    cin >> imaginary;
    complex_1.setImaginary(imaginary); //setter method

    Complex complex_2;
    //second complex number
    cout << "Enter the real part for second complex number: ";
    cin >> real;
    complex_2.setReal(real); //setter method

    cout << "Enter the imaginary part for second complex number: ";
    cin >> imaginary;
    complex_2.setImaginary(imaginary); //setter method

    //printing complex numbers
    cout << "#1 Complex number: ";
    complex_1.print();
    cout << "#2 Complex number: ";
    complex_2.print();

    cout << "------------------------------------------------" << endl;

    //printing conjugate of complex numbers
    cout << "#1 Conjugate: ";
    complex_1.conjugate();
    cout << "#2 Conjugate: ";
    complex_2.conjugate();

    Complex complex_3;
    //The sum of two complex numbers
    complex_3 = complex_1.add(complex_2);
    cout << "The sum of two complex numbers: ";
    complex_3.print();

    //the difference between second and first complex number
    complex_3 = complex_2.sub(complex_1);
    cout << "The difference between second and first complex number: ";
    complex_3.print();

    //the multiplication of the two complex numbers
    complex_3 = complex_1.mult(complex_2);
    cout << "the multiplication of the two complex numbers: ";
    complex_3.print();

    return 0;
}
