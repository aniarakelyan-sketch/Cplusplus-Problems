// Problem: Calculate Area of Rectangle
// This program reads the length and width of a rectangle,
// calculates the area using the formula A = length * width,
// and prints the result.

#include <iostream>  // Include input-output stream library
using namespace std; // Use standard namespace

// Function to calculate area of rectangle
double areaOfRectangle(double length, double width)
{
    // Formula: A = length * width
    double area = length * width;
    return area; // Return the calculated area
}

int main()
{
    double l, w; // Declare variables to store length and width

    cout << "Enter length of rectangle: "; // Ask user for length
    cin >> l;                              // Read length input

    cout << "Enter width of rectangle: "; // Ask user for width
    cin >> w;                             // Read width input

    // Call the function and print the result
    cout << "Area of rectangle with length " << l
         << " and width " << w
         << " = " << areaOfRectangle(l, w) << endl;

    return 0; // End of program
}
