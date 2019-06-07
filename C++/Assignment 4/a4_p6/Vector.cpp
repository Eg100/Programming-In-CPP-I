/*
CH08-320142
Vector.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include "Vector.h"
#include <iostream>
#include <cmath>

using namespace std;

//default constructor
Vector::Vector()
{
    size = 0;
    vector = 0;
}

//constructor
Vector::Vector(const int newsize, const double* newvector)
{
    size = newsize;
    //dynamically allocate memory for a vector
    vector = new double[size];
    for (int i = 0; i < size; i++)
        vector[i] = newvector[i];
}

//copy constructor
Vector::Vector(const Vector& src)
{
    size = src.size;
    //dynamically allocate memory for a vector
    vector = new double[size];
    for(int i = 0; i < size; i++)
        vector[i] = src.vector[i];
}

//destructor
Vector::~Vector()
{
    cout << "destructor being called" << endl;
    //releasing the memory
    delete[] vector;
}

//setter methods
void Vector::setSize(const int newsize)
{
    size = newsize;
    vector = new double[size];
}

void Vector::setVector(const double* newvector)
{
    for (int i = 0; i < size; i++)
        vector[i] = newvector[i];
}

//getter methods
int Vector::getSize()
{
    return size;
}

double* Vector::getVector()
{
    return vector;
}

//printing method
void Vector::print() const
{
    cout << "vector = [";
    for (int i = 0; i < size; i++)
    {
        cout << vector[i] << " ";
    }
    cout << "]" << endl;
}

//calculating the norm of the vector
double Vector::norm()
{
    double norm, sum = 0;

    //finding the sum of coordinates of vector
    for (int i = 0; i < size; i++)
        sum += (vector[i] * vector[i]);

    //using function from cmath library
    norm = sqrt(sum);

    return norm;
}


//adding two vectors
Vector Vector::sum(const Vector newvector) const
{
    //creating new object in order to return it
    Vector vector_temp;
    vector_temp.setSize(this->size);
    //till the end of the array adding two vectors
    for (int i = 0; i < this->size; i++)
        vector_temp.vector[i] = this->vector[i] + newvector.vector[i];

    //since Vector constructor has two arguments, we need to include
    //the size of the vector as well
    vector_temp = Vector(this -> size, vector_temp.vector);
    return vector_temp;
}

//subtracting two vectors
Vector Vector::difference(const Vector newvector) const
{
    //creating new object in order to return it
    Vector vector_temp;
    vector_temp.setSize(this->size);

    //till the end of the array substracting two vectors
    for (int i = 0; i < this->size; i++)
        vector_temp.vector[i] = this->vector[i] - newvector.vector[i];

    //since Vector constructor has two arguments, we need to include
    //the size of the vector as well
    vector_temp = Vector(this -> size, vector_temp.vector);
    return vector_temp;
}


//finfing the scalar_product of two vectors
Vector Vector::scalar_product(const Vector newvector) const
{
    //creating new object in order to return it
    Vector vector_temp;
    vector_temp.setSize(this->size);
    //till the end of the array * two vectors
    for (int i = 0; i < this -> size; i++)
        vector_temp.vector[i] = this -> vector[i] * newvector.vector[i];

    //since Vector constructor has two arguments, we need to include
    //the size of the vector as well
    vector_temp = Vector(this -> size, vector_temp.vector);
    return vector_temp;
}
