// Calculate circle area

#include <iostream>
using namespace std;

int main()
{
    double radius, area; // declare variables for radius and area

    cout << " Enter radius of the circle: "; // prompt user for radius
    cin >> radius;                           // read radius from user

    area = 3.14159 * radius * radius;                 // calculate area using the formula πr²
    cout << "Area of the circle is:" << area << endl; // print the area
    return 0;                                         // end the program successfully
}