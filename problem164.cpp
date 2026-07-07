// Problem: Calculate Perimeter of Rectangle
// This program reads the length and width of a rectangle,
// calculates the perimeter using the formula P = 2 * (length + width),
// and prints the result.

#include <iostream>  // Include input-output stream library
using namespace std; // Use standard namespace

// Function to calculate perimeter of rectangle
double perimeterOfRectangle(double length, double width)
{
    // Formula: P = 2 * (length + width)
    double perimeter = 2 * (length + width);
    return perimeter; // Return the calculated perimeter
}

int main()
{
    double l, w; // Declare variables to store length and width

    cout << "Enter length of rectangle: "; // Ask user for length
    cin >> l;                              // Read length input

    cout << "Enter width of rectangle: "; // Ask user for width
    cin >> w;                             // Read width input

    // Call the function and print the result
    cout << "Perimeter of rectangle with length " << l
         << " and width " << w
         << " = " << perimeterOfRectangle(l, w) << endl;

    return 0; // End of program
}
