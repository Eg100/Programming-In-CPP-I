/*
CH08-320142
City.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/
#include <string>
#include "City.h"

using namespace std;

//setter methods
void City::setName(string& newname)
{
    name = newname;
}

void City::setNumber_of_inhabitants(int new_number_of_inhabitants)
{
    number_of_inhabitants = new_number_of_inhabitants;
}

void City::setMayor(string& new_mayor)
{
    mayor = new_mayor;
}

void City::setArea(double new_area)
{
    area = new_area;
}

//getter methods
string City::getName()
{
    return name;
}

int City::getNumber_of_inhabitants()
{
    return number_of_inhabitants;
}

string City::getMayor()
{
    return mayor;
}

double City::getArea()
{
    return area;
}
