// 🌟 Problem Title: Prime Number Checker 🌟
// This program reads an integer from the user and checks
// whether it is a prime number using a clearly explained function.

#include <iostream>
#include <cmath> // for sqrt
using namespace std;

// Function to check if a number is prime
// Parameter:
//   n - the integer to check
// Returns:
//   true  -> if n is prime
//   false -> otherwise
bool isPrime(int n)
{
    // Handle numbers less than 2: 0 and 1 are not prime, negatives are not prime
    if (n < 2)
    {
        return false;
    }

    // 2 is the only even prime
    if (n == 2)
    {
        return true;
    }

    // Exclude other even numbers quickly
    if (n % 2 == 0)
    {
        return false;
    }

    // Check odd divisors from 3 up to sqrt(n)
    // If any divisor divides n evenly, n is not prime
    int limit = static_cast<int>(sqrt(n));
    for (int d = 3; d <= limit; d += 2)
    {
        if (n % d == 0)
        {
            return false; // found a divisor -> not prime
        }
    }

    // No divisors found -> n is prime
    return true;
}

int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (isPrime(number))
    {
        cout << number << " is prime." << endl;
    }
    else
    {
        cout << number << " is not prime." << endl;
    }

    return 0;
}