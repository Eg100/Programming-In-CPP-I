/*
CH08-320142
Area.h
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#ifndef _AREA_H
#define _AREA_H

class Area {
	public:
		//constructor
		Area(const char *n);
		//virtual destructor
		virtual ~Area();

		//methods
		void getColor() const;
		virtual double calcArea() const = 0;
		virtual double calcPerimeter() const = 0;
	private:
		char color[11];
};
#endif
