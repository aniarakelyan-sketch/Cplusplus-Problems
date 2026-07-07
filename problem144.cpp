// 🌟 Problem Title: Maximum Value Finder 🌟
// This program allows the user to input numbers,
// then finds the largest (maximum) value among them
// using a separate function. Each step is explained
// clearly so that beginners can follow along.

#include <iostream>
using namespace std;

// Function to find the maximum value in an array
// Parameters:
//   numbers[] - the array of values
//   size      - the number of elements in the array
// Returns:
//   the largest value as a double
double findMaximum(double numbers[], int size)
{
    // Assume the first element is the maximum initially
    double maxValue = numbers[0];

    // Loop through the rest of the elements
    for (int i = 1; i < size; i++)
    {
        // If we find a bigger number, update maxValue
        if (numbers[i] > maxValue)
        {
            maxValue = numbers[i];
        }
    }

    // Return the largest value found
    return maxValue;
}

int main()
{
    int n; // Number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    double data[n]; // Array to store user input

    // Prompt the user to enter each number
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }

    // Call the function and display the result
    cout << "The maximum value is: " << findMaximum(data, n) << endl;

    return 0; // End of program
}