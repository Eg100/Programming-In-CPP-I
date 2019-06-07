/*
CH08-320142
a1_p4.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include <iostream>
using namespace std;

//Prototype Declaration
int mycount(int a, int b);
int mycount(char a, string b);

int main()
{
	int a, b;
	char c;
	string s;

	cout << "Enter a first number: ";
	cin >> a;
	cout << "Enter a second number: ";
	cin >> b;

	cout << mycount(a, b) << endl; //calling the function

	cout << "Enter a char: ";
	cin >> c;
	getchar();
	cout << "Enter a string: ";
	getline(cin, s);

	cout << mycount(c, s) << endl; //calling the function

	return 0;
}

/*
	@brief - computes the difference between the second and the first parameters
	@param a - first number
	@param b - second number
	@returns b - a  - difference
*/

int mycount(int a, int b)
{
	return b - a;
}

/*
	@brief - counts the number of occurrences of a character 
	@param a - char 
	@param b - string
	@returns counter - the number of occurences
*/

int mycount(char a, string b)
{
	int counter = 0; // number of occurences
	char *p;
	p = &b[0]; //assign the address of the pointer to first element of the string

	//check each character until the end of a string
	for (;*p != '\0';p++)
	{
		if (*p == a)
			counter++;
	}
	return counter;
}