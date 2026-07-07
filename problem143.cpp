
// 🌟 Problem Title: Interactive Average Calculator 🌟
// This program allows the user to input numbers,
// then calculates their average using a function.

#include <iostream>
using namespace std;

// Function to calculate the average of an array
// Parameters:
//   numbers[] - the array of values
//   size      - the number of elements in the array
// Returns:
//   the average value as a double
double findAverage(double numbers[], int size)
{
    double sum = 0.0; // Variable to store the total sum

    // Loop through each element of the array
    // and add it to the sum
    for (int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }

    // Divide the sum by the number of elements
    // to get the average
    return sum / size;
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
    cout << "The average value is: " << findAverage(data, n) << endl;

    return 0; // End of program
}
