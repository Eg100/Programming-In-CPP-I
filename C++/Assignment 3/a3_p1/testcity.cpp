/*
CH08-320142
testcity.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/
#include <iostream>
#include <string>
#include "City.h"

using namespace std;

int main()
{
    City Bremen, Paris, London;
    int number_of_inhabitants;
    string mayor, city_1 = "Bremen", city_2 = "London", city_3 = "Paris";
    double area;

    //Bremen
    //setting data
    Bremen.setName(city_1);
    cout << "Bremen: " << endl;

    //number of inhabitants
    cout << "Enter the number of inhabitants: ";
    cin >> number_of_inhabitants;
    getchar();
    Bremen.setNumber_of_inhabitants(number_of_inhabitants);

    //the name of mayor
    cout << "Enter Mayor: ";
    getline(cin, mayor);
    Bremen.setMayor(mayor);

    //the area
    cout << "Enter the area: ";
    cin >> area;
    Bremen.setArea(area);

    //Paris
    //setting data
    Paris.setName(city_2);
    cout << "Paris: " << endl;

    //number of inhabitants
    cout << "Enter the number of inhabitants: ";
    cin >> number_of_inhabitants;
    getchar();
    Paris.setNumber_of_inhabitants(number_of_inhabitants);

    //the name of mayor
    cout << "Enter Mayor: ";
    getline(cin, mayor);
    Paris.setMayor(mayor);

    //the area
    cout << "Enter the area: ";
    cin >> area;
    Paris.setArea(area);

    //London
    //setting data
    London.setName(city_3);
    cout << "London: " << endl;

    //the number_of_inhabitants
    cout << "Enter the number of inhabitants: ";
    cin >> number_of_inhabitants;
    getchar();
    London.setNumber_of_inhabitants(number_of_inhabitants);

    //the name of mayor
    cout << "Enter Mayor: ";
    getline(cin, mayor);
    London.setMayor(mayor);

    //the area
    cout << "Enter the area: ";
    cin >> area;
    London.setArea(area);

    //using getter methods
    //printing on the screen
    cout << endl;
    cout << "You entered: " << endl;
    cout << Bremen.getName() << endl;
    cout << Bremen.getNumber_of_inhabitants() << endl;
    cout << Bremen.getMayor() << endl;
    cout << Bremen.getArea() << endl;

    cout << endl;
    cout << "You entered: " << endl;
    cout << Paris.getName() << endl;
    cout << Paris.getNumber_of_inhabitants() << endl;
    cout << Paris.getMayor() << endl;
    cout << Paris.getArea() << endl;

    cout << endl;
    cout << "You entered: " << endl;
    cout << London.getName() << endl;
    cout << London.getNumber_of_inhabitants() << endl;
    cout << London.getMayor() << endl;
    cout << London.getArea() << endl;

    return 0;
}
