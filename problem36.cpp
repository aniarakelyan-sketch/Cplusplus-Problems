// Problem: Print Bye!, if the entered number is equal to 20.
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    // Check if the number is equal to 20.
    if (number == 20)
    {
        cout << "Bye!" << endl;
    }
    else
    {
        cout << "The number is not equal to 20." << endl;
    }
    return 0;
}