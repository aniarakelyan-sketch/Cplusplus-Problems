// ProblemTitle: "Calculate the Product of a List"
#include <iostream>
#include <vector> // For dynamic list (vector)
using namespace std;

// Function to calculate the product of list elements
long long productOfList(const vector<int> &numbers)
{
    // If the list is empty, return 1 (neutral element for multiplication)
    if (numbers.empty())
    {
        return 1;
    }

    long long product = 1; // Variable to store the product

    // Loop through each element in the list
    for (int num : numbers)
    {
        product *= num; // Multiply each element with the product
    }

    return product; // Return the total product
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

    // Call the function to calculate product
    long long result = productOfList(myList);

    // Print the result
    cout << "Product of list elements = " << result << endl;

    return 0;
}
