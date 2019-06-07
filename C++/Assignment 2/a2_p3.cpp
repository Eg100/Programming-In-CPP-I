/*
CH08-320142
a2_p3.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include <iostream>
using namespace std;

//Prototype Declaration
void substract_max(int a[], int n);
void deallocate(int a[]);

int main()
{
	int i, size;

	cout << "Enter the number of elements for the array: ";
	cin >> size;

	int* arr = new int[size]; // dynamically allocating the array of integers
	for(i = 0; i < size; i++)
		cin >> arr[i];

	substract_max(arr, size);
	deallocate(arr); //calling the function
}

/*
	@brief deallocates memory 
*/

void deallocate(int a[])
{
	delete[] a;
}

/*
	@brief determines  the  maximum  value  in  the  array  and  subtracting 
		   this  maximum  from  all  elements  of  the  array
	@param a[] - array of integers
	@param n - size of the array
*/

void substract_max(int a[], int n)
{
	int i;
	int max = a[0];

	for (i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];

	cout << "New array: " << endl;
	for (i = 0; i < n; i++)
	{
			a[i] -= max;
			cout << a[i] << " ";
	}	
	cout << endl;
}