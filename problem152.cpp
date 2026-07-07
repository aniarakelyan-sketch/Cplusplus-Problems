// 🌟 Problem Title: Sum of Digits Calculator 🌟
// This program allows the user to input a number,
// then calculates the sum of its digits using a function.
#include <iostream>
using namespace std;

// Function to calculate the sum of digits of a number
// Parameter:
//   num - the integer number to process
// Returns:
//   the sum of its digits as an integer
int sumOfDigits(int num)
{
    int sum = 0; // Variable to store the sum

    // Work with the absolute value to handle negative numbers
    num = abs(num);

    // Extract digits one by one using modulus and division
    while (num > 0)
    {
        int digit = num % 10; // Get the last digit
        sum += digit;         // Add it to the sum
        num /= 10;            // Remove the last digit
    }

    return sum; // Return the final sum
}

int main()
{
    int number; // Variable to store user input

    // Ask the user to enter a number
    cout << "Enter an integer: ";
    cin >> number;

    // Call the function and display the result
    cout << "The sum of digits of " << number << " is: "
         << sumOfDigits(number) << endl;

    return 0; // End of program
}