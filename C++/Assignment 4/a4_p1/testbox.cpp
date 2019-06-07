/*
CH08-320142
testbox.cpp
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;

int main()
{
    //number of boxes that will be entered
    int n;
    cout << "Enter the number of boxes that will be entered: ";
    cin >> n;

    //creating dynamically an array of 2n boxes
    Box* box;
    box = new Box[2*n];

    cout << "--------------------------------------" << endl;

    //task c
    int i;
    double height, width, depth;

    for (i = 0; i < n; i++)
    {
        cout << "Properties for box #" << i + 1 << ": " << endl;
        cout << "height = ";
        cin >> height;
        box[i].setHeight(height);

        cout << "width = ";
        cin >> width;
        box[i].setWidth(width);

        cout << "depth = ";
        cin >> depth;
        box[i].setDepth(depth);
    }

    cout << "--------------------------------------" << endl;
    cout << "Adding copies on remainder n positions: " << endl;

    for (i = n; i < 2 * n; i++)
    {
        box[i] = Box(box[i-n]);
    }

    cout << "--------------------------------------" << endl;
    cout << "Calculating volume: " << endl;

    //calculating volume
    double volume;
    for (i = 0; i < 2 * n; i++)
    {
        cout << "Volume for box#" << i + 1 << " = ";
        //using getter methods
        height = box[i].getHeight();
        width = box[i].getWidth();
        depth = box[i].getDepth();
        volume = height * width * depth;
        cout << volume << endl;
    }

    delete[] box;
    return 0;
}
