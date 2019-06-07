/*
CH08-320142
Ring.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Ring.h"

//constructor
Ring::Ring(const char *n, double outer, double inner)
					: Circle(n, outer) {
	innerradius = inner;
}

//destructor
Ring::~Ring() {
}

//methods
double Ring::calcArea() const {
	std::cout << "calcArea of Ring...";
	return (Circle::calcArea()-
		(innerradius * innerradius * M_PI));
}

double Ring::calcPerimeter() const {
	std::cout << "calcPerimeter of Ring...";
	return Circle::calcPerimeter();
}
