// Problem: Calculate the product of numbers from 1 to 10
// This program multiplies numbers from 1 to 10 and prints the result.

#include <iostream>
using namespace std;

int main()
{
    long long product = 1; // Variable to store the product, starts at 1

    // Loop from 1 to 10
    for (int i = 1; i <= 10; i++)
    {
        product *= i; // Multiply product by the current number i
    }
    cout << "Poduct of numbers from 1 to 10 is: " << product << endl;
    return 0;
}