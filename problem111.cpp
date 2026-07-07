// Problem Title: Print the sum of numbers from 1 to 5
/* Problem Description":
This program calculates the sum of integers from 1 to 5.
This demonstrates the use of a for loop and accumulation in C++. */
#include <iostream>
using namespace std;
int main()
{
    int sum{}; // Variable to store the sum, initialized to 0
    // Loop from 1  to 5 and accumulate the sum
    for (int i = 1; i <= 5; ++i)
    {
        sum += i; // Add the current value of i to sum
    }
    cout << "The sum of numbers from 1 to 5 is: " << sum << endl;
    return 0;
}