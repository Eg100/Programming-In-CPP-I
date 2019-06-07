/*
CH08-320142
Rectangle.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include <iostream>
#include "Rectangle.h"

//constructor
Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

//destructor
Rectangle::~Rectangle() {
}

//methods
double Rectangle::calcArea() const {
	std::cout << "calcArea of Rectangle...";
	return length * width;
}

double Rectangle::calcPerimeter() const {
    std::cout << "calcPerimeter of Rectangle...";
    return 2 * (length + width);
}
