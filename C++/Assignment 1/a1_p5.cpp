/*
CH08-320142
a1_p5.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include <iostream>
using namespace std;

int main()
{
	string s, w;
	bool IsQuit = true;

	while(IsQuit)
	{
		getline(cin, s);
		if (s != "quit")
			w += s;
		else 
			IsQuit = false;
	}

	cout << w << endl;

	return 0;
}