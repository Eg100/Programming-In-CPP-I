/*
CH08-320142
testvector.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include "Vector.h"
#include <iostream>

using namespace std;

int main()
{
    //creating three instances of the Vector class
    Vector v1, v2, v3;

    double arr[3] = {1, 2, 3};

    //using constructor
    v1 = Vector(3, arr);
    //using copy constructor (the copy of the first one)
    v2 = Vector(v1);
    //using default constructor
    v3 = Vector();

    cout << "The norm of the first vector: ";
    cout << v1.norm() << endl;

   cout << "The scalar product of the first and the third vector: " << endl;
    (v1.scalar_product(v3)).print();

    cout << "The sum of the first and the third vector: " << endl;
    (v1.sum(v3)).print();

    cout << "The difference of the first vector and the third vector: " << endl;
    (v1.difference(v3)).print();

    return 0;
}
