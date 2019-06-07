/*
CH08-320142
a2_p4.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

//Prototype Declaration
void replacing_vowels(string &str);
void picking_random_word(string &str);

string words[17] = {"computer", "television", "keyboard", "laptop", "mouse",
					  "motherboard", "monitor", "processor", "printer", "touchpad",
					  "speaker", "phone", "programming", "engineering", "code",
					  "science", "software"};

char vowels[10] = {'a', 'e', 'u', 'i', 'o', 'A', 'E', 'U', 'I', 'O'};

int main()
{
	//random number generator and picking random word from the array
	string selected_word, selected_word_without_vowels; 
	picking_random_word(selected_word); 
	picking_random_word(selected_word_without_vowels);

	//replacing all vowels by underscore
	replacing_vowels(selected_word_without_vowels); //calling the function

	cout << "WORD GUESSING ..." << endl;
	cout << selected_word_without_vowels << endl;

	int number_of_tries = 0;
	string user_string;

	while(1)
	{
		//while true increase the number of tries and ask to enter the string
		number_of_tries++;
		cin >> user_string;

		if (user_string == "quit")
		{
			//if entered string is equal to quit it stops immediately
			break; 
		}
		else if (user_string == selected_word)
		{
			//if user guessed it corecctly
			cout << "Your word is correct!" << endl;
			cout << "The number of tries = " << number_of_tries << endl;
			cout << "Do you want to quit?(type quit). Otherwise press any key" << endl;

			string exit;
			cin >> exit;
			if (exit == "quit")
			{
				break;
			}
			else 
			{
				//random number generator and picking random word from the array
				picking_random_word(selected_word);
				picking_random_word(selected_word_without_vowels);

				//replacing all vowels by underscore
				replacing_vowels(selected_word_without_vowels);

				number_of_tries = 0;
				cout << selected_word_without_vowels << endl;
			}
		}
		else
		{
			cout << "Your word is not correct. Keep going!" << endl;
		}
	}

	cout << "Thank you for playing" << endl;

	return 0;
}

/*
	passing by the reference
	@brief - replace all vowels in the word by the underscore
	@param &str
*/

void replacing_vowels(string &str)
{
	int length_of_word = str.length();

	for (int i = 0; i < length_of_word; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (str[i] == vowels[j])
				str[i] = '_';
		}
	}	
}

/*
	passing by the reference
	@brief - generate random number and pick the random word the from the array of words
	@param - &str
*/
	
void picking_random_word(string &str)
{
	srand(static_cast<unsigned int>(time(0)));
	int random_number = rand() % 17; //random numbers from 0 to 16
	str = words[random_number]; //picking word from the array 
}