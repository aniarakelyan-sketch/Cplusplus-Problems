// Problem: Check if a number is even or odd
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number:";
    cin >> number;

    // check if the number is even or odd using modulus operator (%)
    if (number % 2 == 0)
    {
        cout << "The number is even." << endl;
    }
    else
    {
        cout << "The number is odd:" << endl;
    }

    return 0; // end the program successfully
}