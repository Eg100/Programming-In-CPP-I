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
    cout << "default constructor being called" << endl;
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
    cout << "constructor being called" << endl;

    strcpy(this->first_name, first_name);
    strcpy(this->last_name, last_name);
    strcpy(this->date_of_birth, date_of_birth);
    strcpy(this->email, email);
    strcpy(this->phone_number, phone_number);
}

//copy constructor
TournamentMember::TournamentMember(const TournamentMember& src)
{
    cout << "copy constructor being called" << endl;
    strcpy(first_name, src.first_name);
    strcpy(last_name, src.last_name);
    strcpy(date_of_birth, src.date_of_birth);
    strcpy(email, src.email);
    strcpy(phone_number, src.phone_number);
}

//destructor
TournamentMember::~TournamentMember()
{
    cout << "destructor being called" << endl;
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
