// 🌟 Problem Title: Negative Number Checker 🌟
// This program allows the user to input a number,
// then checks if the number is negative using a function.

#include <iostream>
using namespace std;

// Function to check if a number is negative
// Parameter:
//   num - the integer number to check
// Returns:
//   true if the number is negative, false otherwise
bool isNegative(int num)
{
    // A number is negative if it is less than 0
    if (num < 0)
    {
        return true; // If less than 0, it's negative
    }
    else
    {
        return false; // Otherwise, it's not negative
    }
}

int main()
{
    int number; // Variable to store user input

    // Ask the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Call the function and display the result
    if (isNegative(number))
    {
        cout << number << " is negative." << endl;
    }
    else
    {
        cout << number << " is not negative." << endl;
    }

    return 0; // End of program
}