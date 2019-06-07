/*
CH08-320142
Critter.h
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include <string>
using namespace std;

class Critter
{
    //internal information is hidden
    private:
        string name;
        int hunger;
        int boredom;
        double height;
        double thirst;
    public:
        //empty constructor
        Critter();
        //supplying a name as parameter, setting 5 to height and 0 to rest
        Critter(string&);
        //supplying name, hunger, boredom, height and thirst as parameters
        //if either height or thirst is not entered then make equal to 10
        Critter(string&, int, int, double = 10, double = 10);
        //destructor
        ~Critter();

        //setter methods
        void setName(string& newname);
        void setHunger(int newhunger);
        void setBoredom(int newboredom);
        void setHeight(double newheight);
        void setThirst(double newthirst);

        //getter methods
        string getName();
        int getHunger();
        int getBoredom();
        double getHeight();
        double getThrist();
};
