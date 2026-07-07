// Problem: Calculate Perimeter of Circle
// This program reads the radius of a circle,
// calculates the perimeter using the formula P = 2 * π * r,
// and prints the result.

#include <iostream>  // Include input-output stream library
#include <cmath>     // Include math library for M_PI constant
using namespace std; // Use standard namespace

// Function to calculate perimeter of circle
double perimeterOfCircle(double radius)
{
    // Formula: P = 2 * π * r
    double perimeter = 2 * M_PI * radius;
    return perimeter; // Return the calculated perimeter
}

int main()
{
    double r; // Declare variable to store radius

    cout << "Enter radius of circle: "; // Ask user for input
    cin >> r;                           // Read input from user

    // Call the function and print the result
    cout << "Perimeter of circle with radius " << r
         << " = " << perimeterOfCircle(r) << endl;

    return 0; // End of program
}
