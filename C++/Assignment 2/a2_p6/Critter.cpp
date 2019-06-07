#include <iostream>
#include "Critter.h"

//Task a. Comment out the using namespace std
using namespace std;

//void setName(string& newname) {
void Critter::setName(string& newname)
{
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
}

int Critter::getHunger() {
	return hunger;
}

