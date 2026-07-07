// ProblemTitle: "Count Digits in a Number"
#include <iostream>
using namespace std;

// Recursive function to count digits in a number
int countDigits(int n)
{
    // Base case: if number is 0, it has 1 digit
    if (n == 0)
    {
        return 1;
    }

    // Recursive case: keep dividing by 10 until number becomes 0
    if (n / 10 == 0)
    {
        return 1; // Last digit reached
    }
    else
    {
        return 1 + countDigits(n / 10);
        // Add 1 for current digit and recurse on the rest
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num; // User input

    // Handle negative numbers by converting to positive
    if (num < 0)
    {
        num = -num;
    }

    int result = countDigits(num); // Call recursive function
    cout << "Number of digits = " << result << endl;

    return 0;
}
