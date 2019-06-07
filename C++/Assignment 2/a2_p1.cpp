/*
CH08-320142
a2_p1.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include <iostream>
#include <string>
using namespace std;

//Prototype Declaration
int myFirst(int a[], int n);
double myFirst(double a[], int n);
char myFirst(char a[], int n);

int main()
{
	int i, size_1, size_2, size_3;

	//Task 1
	cout << "Enter the number of elements for the first array: ";
	cin >> size_1;

	int* arr_1 = new int[size_1]; // dynamically allocating the array of integers
	for(i = 0; i < size_1; i++)
		cin >> arr_1[i];

	cout << "Calling the first function" << endl;
	cout << "The result = " << myFirst(arr_1, size_1) << endl;

	//Task 2
	cout << "Enter the number of elements for the second array: ";
	cin >> size_2;

	double* arr_2 = new double[size_2]; // dynamically allocating the array of integers
	for(i = 0; i < size_2; i++)
		cin >> arr_2[i];

	cout << "Calling the second function" << endl;
	cout << "The result = " << myFirst(arr_2, size_2) << endl;		

	//Task 3
	cout << "Enter the number of elements for the third array: ";
	cin >> size_3;

	char* arr_3 = new char[size_3]; // dynamically allocating the array of integers
	for(i = 0; i < size_3; i++)
		cin >> arr_3[i];

	cout << "Calling the third function" << endl;
	cout << "The result = " << myFirst(arr_3, size_3) << endl;

	//delete array pointed to by arr
	delete[] arr_1; 
	delete[] arr_2;
	delete[] arr_3;
	return 0;
}

/*
	@brief determines and returns the first positive and even value from the array
	@param a[] - array of integers
	@param n - size of the array
	@return number - our result
			-1 if there doesn't exist
*/

int myFirst(int a[], int n)
{
	int number;
	bool isPositiveEven = false;

	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0 && a[i] % 2 == 0)
		{
			number = a[i];
			isPositiveEven = true;
			break;
		}
	}

	if (isPositiveEven == true)
		return number;
	else 
		return -1;
}

/*
	@brief - etermines and returns the first negative element which
			 does not have a fractional part
	@param a[] - array of doubles
	@param n - size of the array
	@return number - our result
			-1.1 if there doesn't exist
*/

double myFirst(double a[], int n)
{
	double number;
	bool isNegative_without_fraction = false;

	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0 && a[i] == (int)a[i])
		{
			number = a[i];
			isNegative_without_fraction = true;
			break;
		}
	}

	if(isNegative_without_fraction == true)
		return number;
	else
		return -1.1;
}

/*
	@brief - determines and returns the first element which is a consonant
	@param a[] - array of chars
	@param n - size of the array
	@return number - our result
			'0' if there doesn't exist
*/

char myFirst(char a[], int n)
{
	char consonant;
	char not_consonats[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
	bool isconsonant = false;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (a[i] != not_consonats[j])
			{
				consonant = a[i];
				isconsonant = true;
				break;
			}
		}
	}

	if(isconsonant == true)
		return consonant;
	else
		return '0';	
}