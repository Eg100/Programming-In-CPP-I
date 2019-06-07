// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"

using namespace std;

Shape::Shape(const string& n) : name(n) {
}

//default constructor
Shape::Shape() {
	name = "default_name";
}

//copy constructor
Shape::Shape(const Shape& src) {
	name = src.name;
}

void Shape::printName() const {
	cout << name << endl;
}

//setter method
void Shape::setName(const string& newname) {
	name = newname;
}

//getter method
string Shape::getName() {
	return name;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

//default constructor
CenteredShape::CenteredShape() : Shape("default_name"){
	x = 0;
	y = 0;
}

//copy constructor
CenteredShape::CenteredShape(const CenteredShape& src): {
	Shape name = src.newname;
	x = 0;
	y = 0;

//setter methods
void CenteredShape::setX(const double newx) {
	x = newx;
}

void CenteredShape::setY(const double newy) {
	y = newy;
}

//getter methods
double CenteredShape::getX() {
	return x;
}

double CenteredShape::getY() {
	return y;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n, nx, ny)
{
	EdgesNumber = nl;
}

//default constructor
RegularPolygon::RegularPolygon() : CenteredShape("default_name", 0, 0) {
	EdgesNumber = 0;
}

//setter
void RegularPolygon::setEdgesNumber(const int newEdgesNumber) {
	EdgesNumber = newEdgesNumber;
}

//getter
int RegularPolygon::getEdgesNumber() {
	return EdgesNumber;
}


Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny)
{
	Radius = r;
}

//default constructor
Circle::Circle() : CenteredShape("default_name", 0, 0) {
	Radius = 0;
}

//setter
void Circle::setRadius(const double newRadius) {
	Radius = newRadius;
}

//getter
double Circle::getRadius() {
	return Radius;
}

Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, double nheight)
 			: RegularPolygon (n, nx, ny, 0) {
	width = nwidth;
	height = nheight;
}

//default constructor
Rectangle::Rectangle() : RegularPolygon("default_name", 0, 0, 4) {
	width = 0;
	height = 0;
}

//setter
void Rectangle::setHeight(const double newheight) {
	height = newheight;
}

void Rectangle::setWidth(const double newwidth) {
	width = newwidth;
}

//getter
double Rectangle::getHeight() {
	return height;
}

double Rectangle::getWidth() {
	return width;
}

Square::Square(const string& n, double nx, double ny, double nside) : RegularPolygon(n, nx, ny, 0) {
	length = nside;
}

//setter
void Square::setLength(const double newlength) {
	length = newlength;
}

//getter
double Square::getLength() {
	return length;
}
