/*
CH08-320142
testcritter.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name, place, food;
	int hunger;
 
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	getchar();
	c.setHunger(hunger);

	cout << "Where to eat: ";
	getline(cin, place);
	c.setPlace(place);

	cout << "What to eat: ";
	getline(cin, food);
	c.setFood(food);

	cout << "You have created:" << endl;
	c.print();
    return 0;
}
