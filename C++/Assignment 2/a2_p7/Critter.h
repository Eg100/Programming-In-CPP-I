/*
CH08-320142
Critter.h
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
	std::string place;
	std::string food; 

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setPlace(std::string& newplace);
	void setFood(std::string& newfood);
	// getter method
	int getHunger();
	std::string getPlace();
	std::string getFood();
	// service method
	void print();
};
