/*
CH08-320142
a6_p1.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;
//prototype declaration
string choose_one_color(int random);


int main()
{
    int count = 0;
    int randomNumber;

    // init random number generator

    srand(static_cast<unsigned int>(time(0)));
    while (count < 15)
    {
        //choosing random number from 0 to 3
        randomNumber = rand() % 4;
        cout << choose_one_color(randomNumber) << endl;
        count++;
    }

    return 0;
}

/*
    @brief select randon word from the array of the colors
    @param random - randon number
    @returns - random word
*/

string choose_one_color(int random)
{
    string colors[4] = {"RED", "BLACK", "VIOLET", "BLUE"};
    string color = colors[random];

    return color;
}
