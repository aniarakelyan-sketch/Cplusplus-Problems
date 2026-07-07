// Problem: Calculate the area of a rectangle

#include <iostream>
using namespace std;

int main()
{
    // Declare integer variables
    int length, width, area; // length and width of the rectangle, and area
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;
    area = length * width;
    cout << "Area of rectangle is: " << area << endl;
}