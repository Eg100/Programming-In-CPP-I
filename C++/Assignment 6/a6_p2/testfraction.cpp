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
	Fraction fraction_1, fraction_2;
    cout << "Enter the numerator and the denominator of first fraction" << endl;
    cin >> fraction_1;
    cout << "Enter the numerator and the denominator of second fraction" << endl;
    cin >> fraction_2;

	cout << "determining the greater fraction" << endl;

	//determining the greater fraction
	if (fraction_1 > fraction_2)
	{
		cout << "1st fraction is greater than the 2nd" << endl;
		cout << fraction_1 << endl;
	}
	else if (fraction_1 < fraction_2)
	{
		cout << "2nd fraction is greater that the 1st" << endl;
		cout << fraction_2 << endl;
	}
	else
	{
		cout << "1st fraction is equal to the 2nd" << endl;
	}

	//creating instances of Fraction class
	//storing the result in other objects
	Fraction sum, diff, mult, division;

	sum = fraction_1 + fraction_2;
	diff = fraction_1 - fraction_2;
	mult = fraction_1 * fraction_2;
	division = fraction_1 / fraction_2;

	cout << "Sum of the two fractions: " << sum;
	cout << "Difference of the two fractons: " << diff;
    cout << "Product of the two fractions: " << mult;
	cout << "Division of the two fractions: " << division;

	return 0;
}
