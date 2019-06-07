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

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setPlace(string& newplace) {
	place = newplace;
}

void Critter::setFood(string& newfood) {
	food = newfood;
}

int Critter::getHunger() {
	return hunger;
}

string Critter::getPlace() {
	return place;
} 

string Critter::getFood() {
	return food;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
	cout << "I want to eat "<< food << " at " << place << endl; 
}


