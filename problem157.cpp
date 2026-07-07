// Problem Title: Compute GCD of Two Numbers
#include <iostream>
using namespace std;

// Function to compute GCD using Euclidean Algorithm
// Euclidean Algorithm works by repeatedly replacing
// the larger number with the remainder of dividing
// the larger number by the smaller one, until remainder becomes 0.
// The last non-zero divisor is the GCD.
int gcd(int a, int b)
{
    // While b is not zero, keep iterating
    while (b != 0)
    {
        int temp = b; // store current b
        b = a % b;    // remainder when a is divided by b
        a = temp;     // update a to previous b
    }
    return a; // when b becomes 0, a is the GCD
}

int main()
{
    // Test cases
    cout << "GCD of 12 and 18 is: " << gcd(12, 18) << endl;   // expected 6
    cout << "GCD of 20 and 28 is: " << gcd(20, 28) << endl;   // expected 4
    cout << "GCD of 7 and 13 is: " << gcd(7, 13) << endl;     // expected 1 (prime numbers)
    cout << "GCD of 48 and 180 is: " << gcd(48, 180) << endl; // expected 12

    return 0;
}