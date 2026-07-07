// 🌟 Problem Title: Power Calculator 🌟
// This program allows the user to input a base number
// and an exponent, then calculates the result (base^exponent)
// using a function.

#include <iostream>
using namespace std;

// Function to calculate power (base^exponent)
// Parameters:
//   base     - the number to be raised
//   exponent - the power to raise the base to
// Returns:
//   the result as a double
double power(double base, int exponent)
{
    double result = 1.0; // Start with 1 because multiplying by 1 changes nothing

    // Multiply base by itself exponent times
    for (int i = 0; i < exponent; i++)
    {
        result *= base; // result = result * base
    }

    return result; // Return the final result
}

int main()
{
    double base;  // Variable to store the base number
    int exponent; // Variable to store the exponent

    // Ask the user to enter base and exponent
    cout << "Enter the base number: ";
    cin >> base;
    cout << "Enter the exponent (non-negative integer): ";
    cin >> exponent;

    // Check if exponent is valid
    if (exponent < 0)
    {
        cout << "This simple function does not handle negative exponents." << endl;
    }
    else
    {
        // Call the function and display the result
        cout << base << "^" << exponent << " = " << power(base, exponent) << endl;
    }

    return 0; // End of program
}