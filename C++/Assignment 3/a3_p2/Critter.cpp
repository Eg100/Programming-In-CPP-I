/*
CH08-320142
City.cpp
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
    height = 5;
    hunger = 0;
    boredom = 0;
    cout << "Constructor one is being called" << endl;
}

//constructor #2
Critter::Critter(string& newname)
{
    name = newname;
    height = 5;
    hunger = 0;
    boredom = 0;
    cout << "Constructor two is being called" << endl;
}

//constructor #3
Critter::Critter(string& newname, int newhunger, int newboredom, float newheight)
{
    name = newname;
    hunger = newhunger;
    boredom = newboredom;
    height = newheight;
    cout << "Constructor three is being called" << endl;
}

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

void Critter::setHeight(float newheight)
{
    height = newheight;
}

//getter methods
string Critter::getName()
{
    return name;
}

int Critter::getHunger()
{
    return hunger;
}

int Critter::getBoredom()
{
    return boredom;
}

float Critter::getHeight()
{
    return height;
}
