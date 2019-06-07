/*
CH08-320142
a1_p2.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include <iostream>
using namespace std;

int main()
{
	int i, n;
	double x;
	string s;

	cout << "Enter the integer number: ";
	cin >> n;
	cout << "Enter the double number: ";
	cin >> x;
	cout << "Enter the string: ";
	cin >> s;

	for (i = 1; i <= n; i++)
		cout << s << ":" << x << endl;

	return 0;
}