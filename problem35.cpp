// Problem: Print Hello!, if the entered number is equal to 10.
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a nunber: ";
    cin >> number;
    // Check if the number is equal to 10
    if (number == 10)
    {
        cout << "Hello!" << endl;
    }
    else
    {
        cout << "The number is not 10." << endl;
    }
    return 0;
}