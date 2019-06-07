/*
CH08-320142
Creature.h
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

using namespace std;

//base class
class Creature {
protected:
    int distance;
public:
    //default constructor
    Creature();
    //destructor
    ~Creature();
    //service method
    void run() const;
};

//first derived class from Creature
class Wizard : public Creature {
private:
	int distFactor;
public:
	//defaut constructor
	Wizard();
	//destructor
	~Wizard();
	//service method
	void hover() const;
};

//second derived class from Creature
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

//third derived class from Creature
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
