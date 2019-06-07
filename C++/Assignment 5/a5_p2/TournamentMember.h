/*
CH08-320142
TournamentMember.h
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#ifndef TOURNAMENTMEMBER_H
#define TOURNAMENTMEMBER_H

class TournamentMember
{
private:
    char first_name[36];
    char last_name[36];
    char date_of_birth[11];
    char email[50];
    char phone_number[50];
    static std::string location;
public:
    //empty constructor
    TournamentMember();
    //parametric constructor
    TournamentMember(char*, char*, char*, char*, char*);
    //copy constructor
    TournamentMember(const TournamentMember&);
    //destructor
    ~TournamentMember();

    //setter methods
    void set_first_name(char*);
    void set_last_name(char*);
    void set_date_of_birth(char*);
    void set_email(char*);
    void set_phone_number(char*);

    //getter methods
    char* get_first_name();
    char* get_last_name();
    char* get_date_of_birth();
    std::string get_location();
    char* get_email();
    char* get_phone_number();

    //service methods
    void print();
    //method for changing location
    static void set_location(std::string);
};

//Charbuffer& operator = (const Charbuffer&)

//inline setter methods
inline void TournamentMember::set_first_name(char* first_name)
{
    strcpy(this->first_name, first_name);
}

inline void TournamentMember::set_last_name(char* last_name)
{
    strcpy(this->last_name, last_name);
}

inline void TournamentMember::set_date_of_birth(char* date_of_birth)
{
    strcpy(this->date_of_birth, date_of_birth);
}

inline void TournamentMember::set_email(char* email)
{
    strcpy(this->email, email);
}

inline void TournamentMember::set_phone_number(char* phone_number)
{
    strcpy(this->phone_number, phone_number);
}

//inline getter methods
inline char* TournamentMember::get_first_name()
{
    return first_name;
}

inline char* TournamentMember::get_last_name()
{
    return last_name;
}

inline char* TournamentMember::get_date_of_birth()
{
    return date_of_birth;
}

inline std::string TournamentMember::get_location()
{
    return location;
}

inline char* TournamentMember::get_email()
{
    return email;
}

inline char* TournamentMember::get_phone_number()
{
    return phone_number;
}

#endif
