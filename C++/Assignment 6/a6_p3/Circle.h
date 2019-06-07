/*
CH08-320142
Circle.h
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "Area.h"

class Circle : public Area {
	public:
		//constructor
		Circle(const char *n, double a);
		//destructor
		~Circle();
		
		//methods
		double calcArea() const;
		double calcPerimeter() const;
	private:
		double radius;
};

#endif
