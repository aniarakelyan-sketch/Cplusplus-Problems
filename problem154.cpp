// 🌟 Problem Title: Palindrome Number Checker 🌟
// This program allows the user to input a number,
// then checks if the number is a palindrome using a function.

#include <iostream>
using namespace std;

// Function to reverse the digits of a number
int reverseNumber(int num)
{
    int reversed = 0;
    int temp = abs(num); // Work with absolute value

    while (temp > 0)
    {
        int digit = temp % 10;            // Get the last digit
        reversed = reversed * 10 + digit; // Append digit to reversed number
        temp /= 10;                       // Remove the last digit
    }

    // If the original number was negative, keep it negative
    if (num < 0)
    {
        reversed = -reversed;
    }

    return reversed;
}

// Function to check if a number is palindrome
// Parameter:
//   num - the integer number to check
// Returns:
//   true if the number is palindrome, false otherwise
bool isPalindrome(int num)
{
    // A number is palindrome if it equals its reversed form
    return num == reverseNumber(num);
}

int main()
{
    int number; // Variable to store user input

    // Ask the user to enter a number
    cout << "Enter an integer: ";
    cin >> number;

    // Call the function and display the result
    if (isPalindrome(number))
    {
        cout << number << " is a palindrome." << endl;
    }
    else
    {
        cout << number << " is not a palindrome." << endl;
    }

    return 0; // End of program
}