// Problem: Calculate the sum of numbers from 1 to 100.
// This program uses the formula n*(n+1)/2 to find the sum directly.
#include <iostream>  // Allows input/output operations (cout,cin)
using namespace std; // Lets us use cout directly without std::

int main()
{
    int sum = 0; // Variable to store the total sum, starts at 0

    // Loop from 1 to 100
    for (int i = 1; i <= 100; i++)
    {
        sum += i; // Add the current number (i) to sum
    }
    cout << "Sum of numbers from 1 to 100 is: " << sum << endl;
    // Prints the final result with a message
    return 0;
}