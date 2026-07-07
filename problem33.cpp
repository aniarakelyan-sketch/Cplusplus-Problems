// Problem: Check if the entered number is within the range 1-100.
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is within the range 1-100
    if (number >= 1 && number <= 100)
    {
        cout << "The number is within the range 1-100." << endl;
    }
    else
    {
        cout << "The number is outside the range 1-100." << endl;
    }
    return 0;
}
