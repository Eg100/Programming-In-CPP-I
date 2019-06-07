/*
CH08-320142
testvirtual.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/


//Draw a diagram how these classes relate to each other
/*
          ____________________________________________________
         /                                                    \
        |    _____________________________________________     |
        |   |                                             |    |
        |   |  C:\> _           Area                      |    |
        |   |                    ||                       |    |
        |   |               _____||______                 |    |
        |   |              |             |                |    |
        |   |            Circle       Rectangle           |    |
        |   |              |             |                |    |
        |   |              |             |                |    |
        |   |              |             |                |    |
        |   |             Ring         Square             |    |
        |   |                                             |    |
        |   |                                             |    |
        |   |                                             |    |
        |   |_____________________________________________|    |
        |                                                      |
         \_____________________________________________________/
                \_______________________________________/
             _______________________________________________
          _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_
       _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_
    _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_
 _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_
_-'.-.-.-.-.-. .---.-. .-----------------------------. .-.---. .---.-.-.-.`-_
:-----------------------------------------------------------------------------:
`---._.-----------------------------------------------------------------._.---'


*/

/*                      Area
                         ||
                         ||
                    _____||______
                    |            |
                  Circle      Rectangle
                    |            |
                    |            |
                    |            |
                   Ring        Square

*/

#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

//increased by one because of Square
const int num_obj = 7;

int main()
{
    /* #1
        creating the array, which stores the areas of figures
        and points to the Area class
    */
    Area *list[num_obj];						// (1)

    /* #2
        make index variable equal to zero. We use it
        in while loop. In other words, it is counter
    */
    int index = 0;								// (2)

    /* #3
        It is overall variable for computer all areas
    */
    double sum_area = 0.0;						// (3)
    double sum_perimeter = 0.0;

    //Interface
	cout << "Creating Ring: ";

    /* #4
        creating Ring class object with different properties
        calling constructor
    */
    Ring blue_ring("BLUE", 5, 2);				// (4)

    cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);

	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);

	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);

	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);

	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);

    cout << "Creating Square: ";
    Square purple_square("PURPLE", 10);

    /* #5
        assigning to each element of the array
        objects of different classes
        The blue ring is on position 0
    */

	list[0] = &blue_ring;						// (5)
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
    list[6] = &purple_square;

    /* #7
        creating while loop from 0 to 7
        While loop stops when the "num_obj" is not not more that index
        "index" increases by one with each iteration
    */
	while (index < num_obj) {					// (7)
		(list[index])->getColor();

        //calculating perimeters of all figures
        double perimeter = list[index]->calcPerimeter();
        sum_perimeter += perimeter;

        /* #8
            We use -> in order to point to the method that calculates the area
        */
		double area = list[index++]->calcArea();// (8)
		sum_area += area;
	}

    /* #9
        Printing the total sum of all figures' areas
    */
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9)

    cout << "The total perimeter is " << sum_perimeter << endl;

	return 0;
}
