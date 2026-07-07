// Check if a number is a multiple of 5

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is a multiple of 5 using modulus operator (%)
    if (number % 5 == 0)
    {
        cout << "The number is a multiple of 5." << endl;
    }
    else
    {
        cout << "The number is not a multiple of 5." << endl;
    }
    return 0;
}