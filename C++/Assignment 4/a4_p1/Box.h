/*
CH08-320142
Box.h
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#ifndef _BOX_H
#define _BOX_H

using namespace std;

class Box
{
    private:
        double m_height;
        double m_width;
        double m_depth;
    public:
        //empty constructor
        Box();
        //constructor
        Box(const double, const double, const double);
        //copy constructor
        Box(const Box&);
        //destructor
        ~Box();
        //setting methods
        void setHeight(const double height);
        void setWidth(const double width);
        void setDepth(const double depth);
        //getting methods
        double getHeight();
        double getWidth();
        double getDepth();
        //service method
        void print();
};

#endif
