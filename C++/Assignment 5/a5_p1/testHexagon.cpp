/*
CH08-320142
testHexagon.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include "Shapes.h"
#include <iostream>

using namespace std;

int main()
{

    //creating a blue Hexagon that has the side 9
    Hexagon hexagon_1("", 0, 0, 0, 9, "blue");
    //creating a green Hexagon that has the side 15
    Hexagon hexagon_2("", 0, 0, 0, 15, "green");
    //creating a copy for the second hexagon using the copy constructor
    Hexagon hexagon_3(hexagon_2);

    //computing the perimeter and area of all three hexagons
    //and prints the results on the screen

    //for the first hexagon
    cout << "First hexagon" << endl;
    cout << "Perimeter = " << hexagon_1.perimeter() << endl;
    cout << "Area = " << hexagon_1.area() << endl;

    //for the second hexagon
    cout << "Second hexagon" << endl;
    cout << "Perimeter = " << hexagon_2.perimeter() << endl;
    cout << "Area = " << hexagon_2.area() << endl;

    //for the third hexagon
    cout << "Third hexagon" << endl;
    cout << "Perimeter = " << hexagon_3.perimeter() << endl;
    cout << "Area = " << hexagon_3.area() << endl;

    return 0;
}
