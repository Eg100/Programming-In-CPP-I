/*
CH08-320142
Shapes.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include <cmath>
#include "Shapes.h"

using namespace std;

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny)
{
	EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny)
{
	Radius = r;
}

//constructor
Hexagon::Hexagon(const string& n, double nx, double ny, int nl,
	const double side, const string& color) : RegularPolygon(n, nx, ny, nl) {
	this->side = side;
	this->color = color;
}

//copy constructor
Hexagon::Hexagon(const Hexagon& src) : RegularPolygon(src.name, src.x, src.y, src.EdgesNumber) {
	side = src.side;
	color = src.color;
}

//destructor
Hexagon::~Hexagon() {}

//setter methods
void Hexagon::setSide(const double side) {
	this->side = side;
}

void Hexagon::setColor(const string& color) {
	this->color = color;
}

//getter methods
double Hexagon::getSide() {
	return side;
}

string Hexagon::getColor() {
	return color;
}

//service methods
double Hexagon::perimeter() {
	double perimeter;
	perimeter = 6 * side;

	return perimeter;
}

double Hexagon::area() {
	double area;
	area = ((3 * sqrt(3)) / 2) * side * side;

	return area;
}
