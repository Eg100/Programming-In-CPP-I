/*
CH08-320142
testTournamentMember.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    //testing the functionality of the class
    char first_name[] = "Taiyr";
    char last_name[] = "Begeyev";
    char date_of_birth[] = "2001-02-08";
    char email[] = "t.begeyev@jacobs-university.de";
    char phone_number[] = "+77089361029";

    //creating instances of class
    TournamentMember tournamentmember_1;
    TournamentMember tournamentmember_2(first_name, last_name, date_of_birth, email, phone_number);
    TournamentMember tournamentmember_3(tournamentmember_2);

    //location change
    TournamentMember::set_location("Kazakhstan");

    //printing
    tournamentmember_1.print();
    tournamentmember_2.print();
    tournamentmember_3.print();

    return 0;
}
