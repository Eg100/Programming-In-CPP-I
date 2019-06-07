/*
CH08-320142
Rectangle.h
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Area.h"

class Rectangle : public Area {
	public:
		//constructor
		Rectangle(const char *n, double a, double b);
		//destructor
		~Rectangle();

		//methods
		double calcArea() const;
		double calcPerimeter() const;
	private:
		double length;
		double width;
};

#endif
