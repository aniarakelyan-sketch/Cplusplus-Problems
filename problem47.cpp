// Problem: Calculate the sum of all odd numbers from 1 to 100
#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {             // Check if the number is odd.
            sum += i; // Add the odd number to the sum.
        }
    }
    cout << "Sum of odd numbers from 1 to 100 is: " << sum << endl;
    return 0;
}