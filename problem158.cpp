// Problem Title: Compute LCM of Two Numbers
#include <iostream>
using namespace std;

// Function to compute GCD using Euclidean Algorithm
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;

        b = a % b;
        a = temp;
    }
    return a;
}

// Function to compute LCM using relation: LCM(a, b) = (a * b) / GCD(a, b)
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    // Test cases
    cout << "LCM of 4 and 6 is: " << lcm(4, 6) << endl;     // expected 12
    cout << "LCM of 10 and 15 is: " << lcm(10, 15) << endl; // expected 30
    cout << "LCM of 7 and 13 is: " << lcm(7, 13) << endl;   // expected 91 (prime numbers)
    cout << "LCM of 12 and 18 is: " << lcm(12, 18) << endl; // expected 36

    return 0;
}