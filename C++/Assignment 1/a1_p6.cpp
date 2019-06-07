/*
CH08-320142
a1_p6.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	cout << "GUESSING GAME" << endl;

	string name;
	cout << "Enter your name: ";
	getline(cin, name);

	srand(static_cast<unsigned int>(time(NULL))); //init random number generator
	int random_number;
	random_number = rand() % 100 + 1; //assign random number from 1 to 100

	int player_number;
	cout << "Now guess the number kiddo" << endl;

	bool guessed_number = false;
	int counter = 0; //number of tries
	while (!guessed_number)
	{	
		cout << "Enter any number: ";
		cin >> player_number;

		if (player_number == random_number)
			guessed_number = true;
		else if (player_number > random_number)
			cout << "Your number is too high" << endl;
		else if (player_number < random_number)
			cout << "Your number is too low" << endl;

		counter++;
	}

	cout << endl;
	cout << "Congrats " << name << "!" << endl;
	cout << "The number of tries = " << counter << endl;

	return 0;
}