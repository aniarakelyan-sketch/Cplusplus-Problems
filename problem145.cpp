// Problem Title: Minimum Value Finder
// This program allows the user to input numbers, then finds the smallest (minimum) value among them using a separate function.
#include <iostream>
using namespace std;

// Function to find the minimum value in an array
// Parameters:
//   numbers[] - the array of values
//   size      - the number of elements in the array
// Returns:
//   the smallest value as a double
double findMinimum(double numbers[], int size)
{
    // Assume the first element is the minimum initially
    double minValue = numbers[0];

    // Loop through the rest of the elements
    for (int i = 1; i < size; i++)
    {
        // If we find a smaller number, update minValue
        if (numbers[i] < minValue)
        {
            minValue = numbers[i];
        }
    }

    // Return the smallest value found
    return minValue;
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
    cout << "The minimum value is: " << findMinimum(data, n) << endl;

    return 0; // End of program
}
