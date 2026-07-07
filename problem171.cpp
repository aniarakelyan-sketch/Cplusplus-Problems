// ProblemTitile:
#include <iostream>
using namespace std;

// Recursive function to calculate factorial of a number
int factorial(int n)
{
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // Recursive case: n! = n * (n-1)!
    return n * factorial(n - 1);
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num; // User input

    // Check for negative input
    if (num < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        int result = factorial(num); // Call recursive function
        cout << "Factorial of " << num << " = " << result << endl;
    }

    return 0;
}
