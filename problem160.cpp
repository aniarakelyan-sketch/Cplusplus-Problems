// Problem: Calculate Area of Circle
// This program reads the radius of a circle from the user,
// calculates the area using the formula A = π * r^2,
// and prints the result.

#include <iostream>  // Include input-output stream library
#include <cmath>     // Include math library for M_PI constant
using namespace std; // Use standard namespace

// Function to calculate area of circle
double areaOfCircle(double radius)
{
    // Formula: A = π * r^2
    double area = M_PI * radius * radius;
    return area; // Return the calculated area
}

int main()
{
    double r; // Declare variable to store radius

    cout << "Enter radius of circle: "; // Ask user for input
    cin >> r;                           // Read input from user

    // Call the function and print the result
    cout << "Area of circle with radius " << r << " = " << areaOfCircle(r) << endl;

    return 0; // End of program
}
