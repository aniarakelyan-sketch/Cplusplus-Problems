// Problem Title: Factorial Calculator 🌟
//  This program allows the user to input a number,
//  then calculates its factorial using a function.
#include <iostream>
using namespace std;

// Function to calculate factorial of a number
// Parameter:
//   n - the integer number to calculate factorial for
// Returns:
//   the factorial value as an unsigned long long
unsigned long long factorial(int n)
{
    // Factorial of 0 is defined as 1
    if (n == 0)
    {
        return 1;
    }

    unsigned long long result = 1; // Variable to store the result

    // Multiply numbers from 1 up to n
    for (int i = 1; i <= n; i++)
    {
        result *= i; // result = result * i
    }

    return result; // Return the final factorial value
}

int main()
{
    int number; // Variable to store user input
                // Ask the user to enter a number
    cout << "Enter a non-negative integer: ";
    cin >> number;

    // Check if the number is valid (non-negative)
    if (number < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        // Call the function and display the result
        cout << number << "! = " << factorial(number) << endl;
    }

    return 0; // End of program
}