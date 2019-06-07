/*
CH08-320142
a2_p5.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/
#include <iostream>
#include <cstring>
using namespace std;

//Prototype Declaration
bool isPalindrome(string& s);

int main()
{
	string word;
	bool isExit = false;

	cout << "CHECKING WORDS FOR PALINDROME" << endl;

	while(!isExit)
	{
		/* 
			while the isExit is not true
			ask user for the string and call the function for checking 
			if the string is palindrome 
		*/

		cout << "Enter the string: ";
		cin >> word;

		if (word == "exit")
		{
			// if the user entered "exit" the isExit becomes true. 
			// this leads to false condition in while 
			isExit = true;
			break;
		}

		//calling the function
		if (isPalindrome(word) == true)
			cout << "The word is a palindrome" << endl;
		else
			cout << "The word is not a palindrome" << endl;
	}

	cout << "Thank you for playing" << endl;

	return 0;
}

/*
	@brief determines if the word is palindrome or not
	@param - string& s
		avoiding creating the local string and using passing by reference instead
		this leads to efficiency improvement
	@returns - true or false;
*/
bool isPalindrome(string& s)
{
	int i;
	int length = s.length();
	string left_to_right, right_to_left;

	for(i = 0; i < length; i++)
	{
		//going through the string from left to right
		//and including into new string
		left_to_right += s[i];
	}

	for(i = length - 1; i >= 0; i--)
	{
		//going through the string from right to left
		//and including into new string
		right_to_left += s[i];
	}
	
	//if string from "right to left" is equal to "left to right"
	// then return true. Otherwise false
	if (right_to_left == left_to_right)
		return true;
	else
		return false;
}