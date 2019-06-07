/*
CH08-320142
testcreature.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include "Creature.h"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    cout << "Inheritance and pointers" << endl;

    while(1) {
        //endless loop

        //object c
        Creature c;

        string object;
        cin >> object;

        //if input is equal to quit the program stops the execution
        if (object == "quit")
            break;
        else if (object == "wizard") {
            //dynamically creating object #1
            Wizard* wizard;
            wizard = new Wizard;

            cout << "Creating a Wizard" << endl;
            wizard->hover();

            //destroying object
            delete wizard;
            cout << endl;
        }
        else if (object == "ogre") {
            //dynamically creating object #2
            Ogre* ogre;
            ogre = new Ogre;

            cout << "Creating a Ogre" << endl;
            ogre->move();

            //destroying object
            delete ogre;
            cout << endl;
        }
        else if (object == "prince") {
            //dynamically creating object #3
            Prince* prince;
            prince = new Prince;

            cout << "Creating a Prince" << endl;
            prince->walk();

            //destroying object
            delete prince;
            cout << endl;
        }
    }

    return 0;
}
