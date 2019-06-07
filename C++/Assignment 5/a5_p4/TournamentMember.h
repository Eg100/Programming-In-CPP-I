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
public:
    static std::string location;
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


class Player : public TournamentMember
{
private:
    int number;
    std::string position;
    std::string _footed;
    int goals;
public:
    //constructor
    Player(char*, char*, char*, char*, char*, int, std::string, int, std::string);
    //copy constructor
    Player(const Player&);
    //destructor
    ~Player();

    //setter methods
    void set_number(int);
    void set_position(std::string);
    void set_footed(std::string);

    //getter methods
    int get_number();
    std::string get_position();
    std::string get_footed();
    int get_goals();

    //service method
    void print();
    void increment_goals(int);
};

class Referee: public TournamentMember
{
private:
    int yellowCardCount;
    Player *yellowCardList[40];
    int redCardCount;
    Player *redCardList[40];
public:
    //constructor
    Referee();
    //destructor
    ~Referee();

    //methods
    bool addToYellowCardList(Player *p);
    bool addToRedCardList(Player *p);
};


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


/*
    Player class
*/

//setter methods
inline void Player::set_number(int number)
{
    this->number = number;
}

inline void Player::set_position(std::string position)
{
    this->position = position;
}

inline void Player::set_footed(std::string _footed)
{
    this->_footed = _footed;
}

//getter methods
inline int Player::get_number()
{
    return number;
}

inline std::string Player::get_position()
{
    return position;
}

inline std::string Player::get_footed()
{
    return _footed;
}

inline int Player::get_goals()
{
    return goals;
}


#endif
