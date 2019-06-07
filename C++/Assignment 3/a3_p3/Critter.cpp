/*
CH08-320142
Critter.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "Critter.h"
using namespace std;

//constructor #1
Critter::Critter()
{
    name = "default_critter";
    hunger = 0.2;
    //hunger_in_percentage = static_cast<double>(hunger) / 10.0;
    boredom = 0;
    height = 5;
    cout << "Constructor one is being called" << endl;
}

//constructor #2
Critter::Critter(string& newname)
{
    name = newname;
    hunger = 0.2;
    boredom = 0;
    height = 5;

    //hunger_in_percentage = static_cast<double>(hunger) / 10.0;
    cout << "Constructor two is being called" << endl;
}

//constructor #3
Critter::Critter(string& newname, int newhunger, int newboredom, int newheight)
{
    name = newname;
    hunger = newhunger / 10.0;
    //hunger_in_percentage = static_cast<double>(hunger) / 10.0;
    boredom = newboredom;
    height = newheight;
    cout << "Constructor three is being called" << endl;
}

//destructor
Critter::~Critter()
{}

//setter methods
void Critter::setName(string& newname)
{
    name = newname;
}

void Critter::setHunger(int newhunger)
{
    hunger = newhunger;
}

void Critter::setBoredom(int newboredom)
{
    boredom = newboredom;
}

void Critter::setHeight(int newheight)
{
    height = newheight;
}

//getter methods
string Critter::getName()
{
    return name;
}

double Critter::getHunger()
{
    return hunger;
}

int Critter::getBoredom()
{
    return boredom;
}

int Critter::getHeight()
{
    return height;
}
