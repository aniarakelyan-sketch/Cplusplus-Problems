// Problem Title: Even Number Checker
/* This program allows the user to input a number, then checks if the number is even using a function. */
#include <iostream>
using namespace std;

// Function to check if a number is even
// Parameter:
//   num - the integer number to check
// Returns:
//   true if the number is even, false otherwise
bool isEven(int num)
{
    // A number is even if it is divisible by 2
    // We use the modulus operator (%) to check the remainder
    if (num % 2 == 0)
    {
        return true; // If remainder is 0, it's even
    }
    else
    {
        return false; // Otherwise, it's odd
    }
}

int main()
{
    int number; // Variable to store user input

    // Ask the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Call the function and display the result
    if (isEven(number))
    {
        cout << number << " is even." << endl;
    }
    else
    {
        cout << number << " is odd." << endl;
    }

    return 0; // End of program
}