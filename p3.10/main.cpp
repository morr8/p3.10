/*
 • P3.10
 Write a program that reads in the x- and y-coordinates of two corner points of a rectangle and then prints out whether the rectangle is a square, or is in “portrait” or “landscape” orientation.
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Enter first cordinates: ";
    float x1, x2, y1, y2;
    cin >> x1 >> y1;
    cout << "Enter second cordinates: ";
    cin >> x2 >> y2;
    float height = abs(y1 + y2);
    float length = abs(x1 + x2);
    
    if (height > length)
    {
        cout << "portrait";
    }
    else if (length > height)
    {
        cout << "landscape";
    }
    else
    {
        cout << "square";
    }
    cout << endl;
}
