/*
CH08-320142
Square.h
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle
{
private:
    double side;
public:
    //constructor
    Square(const char* n, double s);
    //destructor
    ~Square();

    //methods
    double calcArea() const;
    double calcPerimeter() const;
};

#endif
