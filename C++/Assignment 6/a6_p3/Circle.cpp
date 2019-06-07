/*
CH08-320142
Circle.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Circle.h"

//constructor
Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

//destructor
Circle::~Circle() {
}

//methods
double Circle::calcArea() const {
	std::cout << "calcArea of Circle...";
	return radius * radius * M_PI;
}

double Circle::calcPerimeter() const {
	std::cout << "calcPerimeter of Circle...";
	return 2 * M_PI * radius;
}
