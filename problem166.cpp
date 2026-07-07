// Problem: Find Maximum of Two Numbers
// This program reads two numbers from the user,
// calls a function that returns the maximum,
// and prints the result.

#include <iostream>  // Include input-output stream library
using namespace std; // Use standard namespace

// Function to find maximum of two numbers
double maximumOfTwo(double a, double b)
{
    // If a is greater than b, return a; otherwise return b
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    double x, y; // Declare variables to store two numbers

    cout << "Enter first number: ";
    cin >> x; // Read first number

    cout << "Enter second number: ";
    cin >> y; // Read second number

    // Call the function and print the result
    cout << "Maximum of " << x << " and " << y
         << " = " << maximumOfTwo(x, y) << endl;

    return 0; // End of program
}
