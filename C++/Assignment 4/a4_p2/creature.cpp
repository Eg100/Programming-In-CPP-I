/*
CH08-320142
creatute.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include <iostream>

using namespace std;

//base class
class Creature {
	public:
		//default constructor
		Creature();
		//destructor
		~Creature();
		//service method
		void run() const;
	protected:
		int distance;
};

//default constructor
Creature::Creature(): distance(10) {
	cout << "Default constructor of Base Class being called" << endl;
}

//destructor
Creature::~Creature() {
	cout << "Destructor of Base Class being called" << endl;
}

void Creature::run() const {
    cout << "Running " << distance << " meters!" << endl;
}

class Wizard : public Creature {
	public:
		//defaut constructor
		Wizard();
		//destructor
		~Wizard();
		//service method
		void hover() const;
	private:
		int distFactor;
};

//default constructor
Wizard::Wizard() : distFactor(3)
{
	cout << "Default constructor of Class Wizard derived from Creature being called" << endl;
}

//destructor
Wizard::~Wizard()
{
	cout << "Destructor of Class Wizard derived from Creature being called" << endl;
}

void Wizard::hover() const
{
    cout << "Hovering " << (distFactor * distance) << " meters!" << endl;
}

//my first class derived from Creature
class Ogre: public Creature {
	private:
		int distMove;
	public:
		//default constructor
		Ogre();
		//destructor
		~Ogre();
		//service methods
		void move() const;
};

//default constructor
Ogre::Ogre() : distMove(2)
{
	cout << "Default constructor of Class Ogre derived from Creature being called" << endl;
}

//destructor
Ogre::~Ogre()
{
	cout << "Destructor of Class Ogre derived from Creature being called" << endl;
}

void Ogre::move() const
{
    cout << "Walking " << (distMove * distance) << " meters!" << endl;
}

//my second class derived from Creature
class Prince: public Creature {
	private:
		int distWalk;
	public:
		//default constructor
		Prince();
		//destructor
		~Prince();
		//service methods
		void walk() const;
};

//default constructor
Prince::Prince() : distWalk(4)
{
	cout << "Default constructor of Class Prince derived from Creature being called" << endl;
}

//destructor
Prince::~Prince()
{
	cout << "Destructor of Class Prince derived from Creature being called" << endl;
}

void Prince::walk() const
{
    cout << "Walking " << (distWalk * distance) << " meters!" << endl;
}

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
