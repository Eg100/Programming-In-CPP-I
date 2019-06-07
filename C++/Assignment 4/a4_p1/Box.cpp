/*
CH08-320142
Box.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include "Box.h"
using namespace std;

//empty constructor
Box::Box()
{
    m_height = 0;
    m_width = 0;
    m_depth = 0;
}

//constructor
Box::Box(const double height, const double width, const double depth)
{
    m_height = height;
    m_width = width;
    m_height = height;
}

//copy constructor
Box::Box(const Box& taiyr)
{
    m_height = taiyr.m_height;
    m_width = taiyr.m_width;
    m_depth = taiyr.m_depth;
}

//destructor
Box::~Box()
{
}

//setting methods
void Box::setHeight(const double height)
{
    m_height = height;
}

void Box::setWidth(const double width)
{
    m_width = width;
}

void Box::setDepth(const double depth)
{
    m_depth = depth;
}

//getting methods
double Box::getHeight()
{
    return m_height;
}

double Box::getWidth()
{
    return m_width;
}

double Box::getDepth()
{
    return m_depth;
}

//service methods
void Box::print()
{
}
