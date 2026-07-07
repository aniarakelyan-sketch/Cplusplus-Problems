// Problem Title: Reverse Number Calculator
/* This program allows the user to input a number, then calculates its reverse using a function. */
#include <iostream>
using namespace std;
// Function to reverse the digits of a number
// Parameter:
//   num - the integer number to reverse
// Returns:
//   the reversed number as an integer
int reverseNumber(int num)
{
    int reversed = 0; // Variable to store the reversed number

    // Work with the absolute value to handle negative numbers
    int temp = abs(num);
    // Extract digits one by one using modulus and division
    while (temp > 0)
    {
        int digit = temp % 10;            // Get the last digit
        reversed = reversed * 10 + digit; // Append digit to reversed number
        temp /= 10;                       // Remove the last digit
    }

    // If the original number was negative, make the result negative
    if (num < 0)
    {
        reversed = -reversed;
    }
    return reversed; // Return the final reversed number
}

int main()
{
    int number; // Variable to store user input

    // Ask the user to enter a number
    cout << "Enter an integer: ";
    cin >> number;

    // Call the function and display the result
    cout << "The reverse of " << number << " is: "
         << reverseNumber(number) << endl;

    return 0; // End of program
}