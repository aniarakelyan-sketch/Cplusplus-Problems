// Problem: Find Minimum of Two Numbers
// This program reads two numbers from the user,
// calls a function that returns the minimum,
// and prints the result.

#include <iostream>  // Include input-output stream library
using namespace std; // Use standard namespace

// Function to find minimum of two numbers
double minimumOfTwo(double a, double b)
{
    // If a is smaller than b, return a; otherwise return b
    if (a < b)
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
    cout << "Minimum of " << x << " and " << y
         << " = " << minimumOfTwo(x, y) << endl;

    return 0; // End of program
}
