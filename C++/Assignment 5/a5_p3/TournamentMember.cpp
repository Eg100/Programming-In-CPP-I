/*
CH08-320142
TournamentMember.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>
#include <cstring>

using namespace std;

string TournamentMember::location = "Germany";
//default constructor
TournamentMember::TournamentMember()
{
    cout << "default constructor of TournamentMember class being called" << endl;
    strcpy(first_name, "Admin");
    strcpy(last_name, "Password");
    strcpy(date_of_birth, "1970-01-01");
    strcpy(email, "google@gmail.com");
    strcpy(phone_number, "+66666666666");
}

//constructor
TournamentMember::TournamentMember(char* first_name, char* last_name,
     char* date_of_birth, char* email, char* phone_number)
{
    cout << "constructor of TournamentMember class being called" << endl;

    strcpy(this->first_name, first_name);
    strcpy(this->last_name, last_name);
    strcpy(this->date_of_birth, date_of_birth);
    strcpy(this->email, email);
    strcpy(this->phone_number, phone_number);
}

//copy constructor
TournamentMember::TournamentMember(const TournamentMember& src)
{
    cout << "copy constructor of TournamentMember class being called" << endl;
    strcpy(first_name, src.first_name);
    strcpy(last_name, src.last_name);
    strcpy(date_of_birth, src.date_of_birth);
    strcpy(email, src.email);
    strcpy(phone_number, src.phone_number);
}

//destructor
TournamentMember::~TournamentMember()
{
    cout << "destructor of TournamentMember class being called" << endl;
}


//service method
void TournamentMember::print()
{
    cout << "First name: " << first_name << endl;
    cout << "Last name: " << last_name << endl;
    cout << "Date of birth: " << date_of_birth << endl;
    cout << "Location: " << location << endl;
    cout << "Email: " << email << endl;
    cout << "Phone number: " << phone_number << endl;
}

//method for changing Location
void TournamentMember::set_location(string newlocation)
{
    location = newlocation;
}

/*
    Player
*/
//constructor
Player::Player(char* first_name, char* last_name, char* date_of_birth,
               char* email, char* phone_number, int number,
               string position, int goals, string _footed)
               : TournamentMember(first_name, last_name, date_of_birth,
                                  email, phone_number)
{
    cout << "constructor of Player class being called" << endl;
    this->number = number;
    this->position = position;
    this->goals = goals;
    this->_footed = _footed;
}

//copy constructor
Player::Player(const Player& src): TournamentMember(src)
{
    cout << "copy constructor of Player class being called" << endl;
    number = src.number;
    position = src.position;
    goals = src.goals;
    _footed = src._footed;
}

//destructor
Player::~Player()
{
    cout << "destructor of Player class being called" << endl;
}

//service methods
void Player::print()
{
    TournamentMember::print();
    cout << "Number: " << number << endl;
    cout << "Position: " << position << endl;
    cout << "Goals: " << goals << endl;
    cout << "Foot: " << _footed << endl;
    cout << endl;
}

void Player::increment_goals(int add_goals)
{
    goals = goals + add_goals;
}
