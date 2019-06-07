/*
CH08-320142
testcritter.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "Critter.h"
using namespace std;

int main()
{
    string name = "Taiyr";
    //create Critter objects
    Critter critter_1 = Critter();
    Critter critter_2 = Critter(name);
    Critter critter_3 = Critter(name, 10, 2, 180.6);
    Critter critter_4 = Critter(name, 3, 100);
    Critter critter_5 = Critter(name, 9, 3, 100.5, 20.1);

    //getting properties for critter_1
    cout << "Properties for critter_1: " << endl;
    cout << "name = " << critter_1.getName() << endl;
    cout << "hunger = "  << critter_1.getHunger() << endl;
    cout << "boredom = "<< critter_1.getBoredom() << endl;
    cout << "height = " << critter_1.getHeight() << endl;
    cout << "thirst = " << critter_1.getThrist() << endl;

    //getting properties for critter_2
    cout << "Properties for critter_2: " << endl;
    cout << "name = " << critter_2.getName() << endl;
    cout << "hunger = " << critter_2.getHunger() << endl;
    cout << "boredom = " << critter_2.getBoredom() << endl;
    cout << "height = " << critter_2.getHeight() << endl;
    cout << "thirst = " << critter_2.getThrist() << endl;

    //getting properties for critter_3
    cout << "Properties for critter_3: " << endl;
    cout << "name = " << critter_3.getName() << endl;
    cout << "hunger = " << critter_3.getHunger() << endl;
    cout << "boredom = " << critter_3.getBoredom() << endl;
    cout << "height = " << critter_3.getHeight() << endl;
    cout << "thirst = " << critter_3.getThrist() << endl;

    //getting properties for critter_4
    cout << "Properties for critter_4: " << endl;
    cout << "name = " << critter_4.getName() << endl;
    cout << "hunger = " << critter_4.getHunger() << endl;
    cout << "boredom = " << critter_4.getBoredom() << endl;
    cout << "height = " << critter_4.getHeight() << endl;
    cout << "thirst = " << critter_4.getThrist() << endl;

    //getting properties for critter_5
    cout << "Properties for critter_5: " << endl;
    cout << "name = " << critter_5.getName() << endl;
    cout << "hunger = " << critter_5.getHunger() << endl;
    cout << "boredom = " << critter_5.getBoredom() << endl;
    cout << "height = " << critter_5.getHeight() << endl;
    cout << "thirst = " << critter_5.getThrist() << endl;

    return 0;
}
