/*
CH08-320142
fraction.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

	// Implement GCD of two numbers;

	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

void Fraction::print()
{
	std::cout << num << "/" << den;
}

//overloaded operator <<
ostream& operator<<(ostream& out, const Fraction& fraction)
{
	out << fraction.num << "/" << fraction.den << endl;
	return out;
}

//overloaded operator >>
istream& operator>>(istream& in, Fraction& fraction)
{
	in >> fraction.num;
	in >> fraction.den;

	//checking the validity of the input

	if(fraction.den == 0)
	{
		cout << "Error 228. Denominator cannot be 0" << endl;
		cout << "Setting denominator to 1" << endl;

		fraction.den = 1;
		return in;
	}
	else
	{
		return in;
	}
}

//overloaded operator *
Fraction Fraction::operator*(const Fraction& fraction)
{
	Fraction temp;
	temp.num = this->num * fraction.num;
	temp.den = this->den * fraction.den;
	return temp;
}

//overloaded operator /
Fraction Fraction::operator/(const Fraction& fraction)
{
	Fraction temp;
	temp.num = this->num * fraction.den;
	temp.den = this->den * fraction.num;
	return temp;
}
