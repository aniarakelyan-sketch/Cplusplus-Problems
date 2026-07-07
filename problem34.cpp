// Problem: Check if the entered number is within the range 1-10.
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is within the range 1-10.
    if (number >= 1 && number <= 10)
    {
        cout << "The number is within the ®ange of 1-10. ";
    }
    else
    {
        cout << "The number is outside the range of 1-10.";
    }
    return 0;
}
