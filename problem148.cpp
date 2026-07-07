// Problem Title: Positive Number Checker
/* This program allows the user to input a number, then checks if the number is positive using a function.*/
#include <iostream>
using namespace std;

// Function to check if a number is positive
// Parameter:
//   num - the integer number to check
// Returns:
//   true if the number is positive, false otherwise
bool isPositive(int num)
{
    // A number is positive if it is greater than 0
    if (num > 0)
    {
        return true; // If the number is greater than 0, it's positive
    }
    else
    {
        return false; // Otherwise, it's not positive
    }
}

int main()
{
    int number; // Variable to store user input

    // Ask the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Call the function and display the result
    if (isPositive(number))
    {
        cout << number << " is positive." << endl;
    }
    else
    {
        cout << number << " is not positive." << endl;
    }

    return 0; // End of program
}