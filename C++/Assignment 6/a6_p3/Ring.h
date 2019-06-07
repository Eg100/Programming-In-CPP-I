/*
CH08-320142
Ring.h
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#ifndef _RING_H
#define _RING_H
#include "Circle.h"

class Ring : public Circle {
	public:
		//constructor
		Ring(const char *n, double outer, double inner);
		//destructor
		~Ring();

		//methods
		double calcArea() const;
		double calcPerimeter() const;
	private:
		double innerradius;
};

#endif
