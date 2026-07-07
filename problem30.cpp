// Check if a number is multiple of 3.

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    // Check if the number is multiple of 3 using modulus operator (%)
    if (number % 3 == 0)
    {
        cout << "The number is a multiple of 3." << endl;
    }
    else
    {
        cout << "The number is not a multiple of 3." << endl;
    }

    return 0;
}