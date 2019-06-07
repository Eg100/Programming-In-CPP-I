/*
CH08-320142
City.h
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/
#include <string>
using namespace std;

class City
{
    private:
        string name;
        int number_of_inhabitants;
        string mayor;
        double area;
    public:
        //setter methods
        void setName(string& newname);
        void setNumber_of_inhabitants(int new_number_of_inhabitants);
        void setMayor(string& new_mayor);
        void setArea(double new_area);

        //getter methods
        string getName();
        int getNumber_of_inhabitants();
        string getMayor();
        double getArea();
};
