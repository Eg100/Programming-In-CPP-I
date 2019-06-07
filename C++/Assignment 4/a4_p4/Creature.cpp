/*
CH08-320142
Creature.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include "Creature.h"
#include <iostream>

using namespace std;

//default constructor
Creature::Creature(): distance(10) {
	//cout << "Default constructor of Base Class being called" << endl;
}

//destructor
Creature::~Creature() {
	//cout << "Destructor of Base Class being called" << endl;
}

//service method
void Creature::run() const {
    cout << "Running " << distance << " meters!" << endl;
}

//default constructor
Wizard::Wizard() : distFactor(3)
{
	//cout << "Default constructor of Class Wizard derived from Creature being called" << endl;
}

//destructor
Wizard::~Wizard()
{
	//cout << "Destructor of Class Wizard derived from Creature being called" << endl;
}

//service method
void Wizard::hover() const
{
    cout << "Hovering " << (distFactor * distance) << " meters!" << endl;
}

//default constructor
Ogre::Ogre() : distMove(2)
{
	//cout << "Default constructor of Class Ogre derived from Creature being called" << endl;
}

//destructor
Ogre::~Ogre()
{
	//cout << "Destructor of Class Ogre derived from Creature being called" << endl;
}

//service method
void Ogre::move() const
{
    cout << "Walking " << (distMove * distance) << " meters!" << endl;
}

//default constructor
Prince::Prince() : distWalk(4)
{
	//cout << "Default constructor of Class Prince derived from Creature being called" << endl;
}

//destructor
Prince::~Prince()
{
	//cout << "Destructor of Class Prince derived from Creature being called" << endl;
}

//service method
void Prince::walk() const
{
    cout << "Walking " << (distWalk * distance) << " meters!" << endl;
}
