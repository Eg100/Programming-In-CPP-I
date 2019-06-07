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
        float height;
    public:
        //empty constructor
        Critter();
        //supplying a name as parameter, setting 5 to height and 0 to rest
        Critter(string&);
        //supplying name, hunger, boredom and height all as parameters.
        Critter(string&, int, int, float = 10);

        //setter methods
        void setName(string& newname);
        void setHunger(int newhunger);
        void setBoredom(int newboredom);
        void setHeight(float newheight);

        //getter methods
        string getName();
        int getHunger();
        int getBoredom();
        float getHeight();
};
