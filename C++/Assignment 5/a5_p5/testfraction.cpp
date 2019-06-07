/*
CH08-320142
testfraction.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
	//creating instances of class Fraction
	Fraction a,b;
    cout << "Enter the numerator and the denominator of first fraction" << endl;
    cin >> a;
    cout << "Enter the numerator and the denominator of second fraction" << endl;
    cin >> b;

    cout << "Product of the two fractions: " << a * b;
	cout << "Division of the two fractions: " << a / b;

	return 0;
}
