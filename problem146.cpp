// 🌟 Problem Title: Odd Number Checker 🌟
// This program allows the user to input a number,
// then checks if the number is odd using a function.

#include <iostream>
using namespace std;

// Function to check if a number is odd
// Parameter:
//   num - the integer number to check
// Returns:
//   true if the number is odd, false otherwise
bool isOdd(int num)
{
    // A number is odd if it is NOT divisible by 2
    // We use the modulus operator (%) to check the remainder
    if (num % 2 != 0)
    {
        return true; // If remainder is not 0, it's odd
    }
    else
    {
        return false; // Otherwise, it's even
    }
}

int main()
{
    int number; // Variable to store user input

    // Ask the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Call the function and display the result
    if (isOdd(number))
    {
        cout << number << " is odd." << endl;
    }
    else
    {
        cout << number << " is even." << endl;
    }

    return 0; // End of program
}