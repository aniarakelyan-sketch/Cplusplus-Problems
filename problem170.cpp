// Problem Title: "
#include <iostream>
#include <vector> // For dynamic list (vector)
using namespace std;

// Function to calculate the sum of list elements
int sumOfList(const vector<int> &numbers)
{
    // Variable to store the sum
    int sum = 0;

    // Loop through each element in the list
    for (int num : numbers)
    {
        sum += num; // Add each element to the sum
    }

    return sum; // Return the total sum
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

    // Call the function to calculate sum
    int result = sumOfList(myList);

    // Print the result
    cout << "Sum of list elements = " << result << endl;

    return 0;
}
