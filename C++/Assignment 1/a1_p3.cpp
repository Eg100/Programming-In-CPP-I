/*
CH08-320142
a1_p3.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/
#include <iostream>
using namespace std;

//prototype declaration
float absolute(float x);

int main()
{
	float x;

	cout << "Enter a number: ";
	cin >> x;

	cout << absolute(x) << endl; //calling the function

	return 0;
}

/*
	@brief the absolute value of the number
	@param x - float number
	@returns x - returns the absolute value of a float parameter
*/

float absolute(float x)
{
	if (x < 0)
		x *= -1;
	return x;
}