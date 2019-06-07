/*
CH08-320142
Shapes.h
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

/*
	Classic shape examples: an inheritance tree in a geometric context
*/

#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	protected:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name
};

class CenteredShape : public Shape {  // inherits from Shape
	protected:
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	protected:
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	protected:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
};

class Hexagon: public RegularPolygon {
	protected:
		double side;
		std::string color;
	public:
		//constructor
		Hexagon(const std::string&, double, double, int,
			const double, const std::string&);
		//copy constructor
		Hexagon(const Hexagon&);
		//destructor
		~Hexagon();

		//setter methods
		void setSide(const double side);
		void setColor(const std::string& color);
		//getter methods
		double getSide();
		std::string getColor();

		//service methods
		double perimeter();
		double area();
};

#endif
