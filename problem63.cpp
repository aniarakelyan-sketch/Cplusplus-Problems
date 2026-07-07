// Problem: Calculate the sum of numbers from 1 to 10
// Tis program uses a loop to add numbers from 1 to 10 and prints the result.
#include <iostream>
using namespace std; // Allows using cout without std::

int main()
{
    int sum = 0; // variable to store the total sum, starts at 0

    // Loop from 1 to 10
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    cout << "Sum of numbers from 1 to 10 is: " << sum << endl;
    // Prints the final result with a message
    return 0;
}
