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
    hunger = 0;
    boredom = 0;
    height = 5;
    thirst = 0;
    cout << "Constructor one is being called" << endl;
}

//constructor #2
Critter::Critter(string& newname)
{
    name = newname;
    hunger = 0;
    boredom = 0;
    height = 5;
    thirst = 0;
    cout << "Constructor two is being called" << endl;
}

//constructor #3
Critter::Critter(string& newname, int newhunger, int newboredom, double newheight, double newthirst)
{
    name = newname;
    hunger = newhunger;
    boredom = newboredom;
    height = newheight;
    thirst = newthirst;
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

void Critter::setHeight(double newheight)
{
    height = newheight;
}

void Critter::setThirst(double newthirst)
{
    thirst = newthirst;
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

double Critter::getHeight()
{
    return height;
}

double Critter::getThrist()
{
    return thirst;
}
