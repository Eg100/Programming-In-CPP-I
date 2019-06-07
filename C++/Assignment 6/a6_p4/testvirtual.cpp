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
#include <cstdlib>
#include <ctime>
#include <cstring>
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

//global
const int num_obj = 25; //25 objects
string colors[4] = {"RED", "BLACK", "VIOLET", "BLUE"};
string figures[4] = {"Circle", "Ring", "Rectangle", "Square"};

//prototype declarations
int random_figure();
string random_color();
double random_size();

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

    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < num_obj; i++)
    {
        //randon number from 0 to 3
        int figure = random_figure();
        string color = random_color();
        switch (figure)
        {
            case 0:
                //Circle
                list[i] = new Circle(random_color().c_str(), random_size());
                break;
            case 1:
                //Ring
                list[i] = new Ring(random_color().c_str(), random_size(),
                                   random_size());
                break;
            case 2:
                //Rectangle
                list[i] = new Rectangle(random_color().c_str(), random_size(),
                              random_size());
                break;
            case 3:
                //Square
                list[i] = new Square(random_color().c_str(), random_size());
                break;
        }
    }

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

/*
    @brief - selects one of the 4 figures (Circle, ring, Rectangle, Square)
    @returns - random figure
*/
int random_figure()
{
    //assign random number from 0 to 3
    int random_number = rand() % 4;
    return random_number;
}

/*
    @brief - Select one of the 4 colors (RED, BLACK, VIOLET, BLUE)
    @returns - random color
*/
string random_color()
{
    //assign random number from 0 to 3
    int random_number = rand() % 4;
    return colors[random_number];
}

/*
    @brief - selects random number between 5 and 100
    @returns - randon number
*/
double random_size()
{
    return ((rand() % 96) + 5);
}
