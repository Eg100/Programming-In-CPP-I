#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors
	should be handled. See also charbuffer.cpp
*/

class NaiveString {
private:
	char *str;
public:
	//constructor #1
	NaiveString(const char*);
	//copy constructor
	NaiveString(const NaiveString&);
	//destructor
	~NaiveString();

	//settor methods
	void update(char, char);
	void print();
};

//destructor
NaiveString::~NaiveString()
{
	cout << "destructor being called" << endl;
	//memory occupied by the objects will be released
	delete[] str;
}

//constructor #1
NaiveString::NaiveString(const char* t) {
	str = new char[strlen(t) + 1];
	strcpy(str, t);
	cout << "The first constructor being called" << endl;
}

/*
	Copy constructor: creates a new instance of
	naive string starting from an existing one
*/


NaiveString::NaiveString(const NaiveString& src) {
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	// please note that we can access src.str even if it is private
	// as we are inside the NaiveString class
	cout << "Copy constructor being called" << endl;
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++)
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}

//our implemented method
void funcByref(NaiveString& s) {
	cout << "funcByref() being called" << endl;
	s.update('B', 'C');
	s.print();
}

void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}

int main(int argc, char** argv)
{
	NaiveString a("aBcBdB");
	a.print();
	cout << "About to call funcbyval()" << endl;
	funcByVal(a);
	a.print();

	cout << endl;

	NaiveString b("aBcBdB");
	b.print();
	cout << "About to call funcByref()" << endl;
	funcByref(b);
	b.print();
	return 0;
}
