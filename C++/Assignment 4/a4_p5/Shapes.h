/*
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

using namespace std;

class Shape {			// base class
	protected:   				// private access modifier: could also be protected
		string name;   // every shape will have a name
	public:
		Shape(const string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name

		//setter method
		void setName(const string& newname);
		//getter method
		string getName();
};

class CenteredShape : public Shape {  // inherits from Shape
	protected:
		double x,y;  // the center of the shape
	public:
		CenteredShape(const string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center

		//setter methods
		void setX(const double newx);
		void setY(const double newy);

		//getter methods
		double getX();
		double getY();
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	protected:
		int EdgesNumber;
	public:
		RegularPolygon(const string&, double, double, int);
		RegularPolygon(); //default constructor
		RegularPolygon(const RegularPolygon&);

		//setter method
		void setEdgesNumber(const int newEdgesNumber);
		//getter method
		int getEdgesNumber();
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
protected:
		double Radius;
	public:
		Circle(const string&, double, double, double);
		Circle(); //default constructor
		Circle(const Circle&);

		//setter
		void setRadius(const double newRadius);
		//getter
		double getRadius();
};

class Rectangle: public RegularPolygon {
	protected:
		double height;
		double width;
	public:
		Rectangle(); //default constructor
		Rectangle(const string&, double, double, double, double);
		Rectangle(const Rectangle&);

		//setter
		void setHeight(const double newheight);
		void setWidth(const double newwidth);

		//getter
		double getHeight();
		double getWidth();
};

class Square: public Rectangle {
	protected:
		double length;
	public:
		Square(const string&, double, double, double);
		Square(); //default constructor
		Square(const Square&);

		//setter
		void setLength(const double newlength);
		//getter
		double getLength();
};

#endif
