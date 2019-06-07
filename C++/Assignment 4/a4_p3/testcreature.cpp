/*
CH08-320142
testcreature.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include "Creature.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "Creating an Creature" << endl;
    Creature c;
    c.run();

    cout << endl;
    cout << "Creating a Wizard" << endl;
    Wizard w;
    w.run();
    w.hover();

    cout << endl;
    cout << "Creating a Ogre" << endl;
    Ogre ogre;
    ogre.run();
    ogre.move();

    cout << endl;
    cout << "Creating a Prince" << endl;
    Prince prince;
    prince.run();
    prince.walk();
    cout << endl;

    return 0;
}
