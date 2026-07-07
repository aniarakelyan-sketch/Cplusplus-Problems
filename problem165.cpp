// Problem: Calculate Area of Triangle
// This program reads the base and height of a triangle,
// calculates the area using the formula A = (1/2) * base * height,
// and prints the result.

#include <iostream>  // Include input-output stream library
using namespace std; // Use standard namespace

// Function to calculate area of triangle
double areaOfTriangle(double base, double height)
{
    // Formula: A = (1/2) * base * height
    double area = 0.5 * base * height;
    return area; // Return the calculated area
}

int main()
{
    double b, h; // Declare variables to store base and height

    cout << "Enter base of triangle: "; // Ask user for base
    cin >> b;                           // Read base input

    cout << "Enter height of triangle: "; // Ask user for height
    cin >> h;                             // Read height input

    // Call the function and print the result
    cout << "Area of triangle with base " << b
         << " and height " << h
         << " = " << areaOfTriangle(b, h) << endl;

    return 0; // End of program
}
