/*
CH08-320142
testReferee.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>

using namespace std;

int main()
{
    char first_name_1[] = "Lionel";
    char last_name_1[] = "Messi";
    char date_of_birth_1[] = "1987-06-24";
    char email_1[] = "messi@barcelona.org";
    char phone_number_1[] = "+123456789";
    int number_1 = 10;
    string position_1 = "Forward";
    int goals_1 = 12;
    string foot_1 = "left-footed";

    char first_name_2[] = "Luis";
    char last_name_2[] = "Suarez";
    char date_of_birth_2[] = "1987-01-24";
    char email_2[] = "suarez@barcelona.org";
    char phone_number_2[] = "+123456780";
    int number_2 = 9;
    string position_2 = "Forward";
    int goals_2 = 8;
    string foot_2 = "rigth-footed";

    char first_name_3[] = "Philippe";
    char last_name_3[] = "Coutinho";
    char date_of_birth_3[] = "1992-06-12";
    char email_3[] = "coutinho@barcelona.org";
    char phone_number_3[] = "+123456781";
    int number_3 = 14;
    string position_3 = "Forward";
    int goals_3 = 6;
    string foot_3 = "rigth-footed";

    //creating instances of Player class
    Player tournamentmember_1(first_name_1, last_name_1, date_of_birth_1,
                                        email_1, phone_number_1, number_1, position_1,
                                        goals_1,foot_1);
    Player tournamentmember_2(first_name_2, last_name_2, date_of_birth_2,
                                        email_2, phone_number_2, number_2, position_2,
                                        goals_2, foot_2);
    Player tournamentmember_3(first_name_3, last_name_3, date_of_birth_3,
                                        email_3, phone_number_3, number_3, position_3,
                                        goals_3, foot_3);

    //creating instances of Referee class
    Referee referee;

    //checking methods
    cout << referee.addToYellowCardList(&tournamentmember_1) << endl;
    cout << referee.addToYellowCardList(&tournamentmember_1) << endl;

    cout << referee.addToRedCardList(&tournamentmember_2) << endl;
    cout << referee.addToRedCardList(&tournamentmember_2) << endl;

    cout << referee.addToYellowCardList(&tournamentmember_3) << endl;
    cout << referee.addToRedCardList(&tournamentmember_3) << endl;

    return 0;
}
