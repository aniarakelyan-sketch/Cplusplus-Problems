// Problem: Calculate Absolute Value
// This program reads a number from the user,
// calls a function that returns its absolute value,
// and prints the result.

#include <iostream>  // Include input-output stream library
using namespace std; // Use standard namespace

// Function to calculate absolute value
double absoluteValue(double x)
{
    // If x is negative, return -x; otherwise return x
    if (x < 0)
        return -x;
    else
        return x;
}

int main()
{
    double num; // Declare variable to store input number

    cout << "Enter a number: ";
    cin >> num; // Read input from user

    // Call the function and print the result
    cout << "Absolute value of " << num
         << " = " << absoluteValue(num) << endl;

    return 0; // End of program
}
