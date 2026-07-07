// Problem Title: "Calculate the Average of a List"
#include <iostream>
#include <vector> // For dynamic list (vector)
using namespace std;

// Function to calculate the average of a list
double averageOfList(const vector<int> &numbers)
{
    // Check if the list is empty to avoid division by zero
    if (numbers.empty())
    {
        return 0.0; // Return 0 if no elements
    }

    double sum = 0.0; // Variable to store the sum

    // Loop through each element in the list
    for (int num : numbers)
    {
        sum += num; // Add each element to the sum
    }

    // Calculate average = sum / number of elements
    return sum / numbers.size();
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n; // User inputs how many numbers they want to enter

    vector<int> myList; // Dynamic list to store user input
    int value;

    // Read n numbers from user
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> value;            // Take input from user
        myList.push_back(value); // Add to the list
    }

    // Call the function to calculate average
    double result = averageOfList(myList);

    // Print the result
    cout << "Average of list = " << result << endl;

    return 0;
}
