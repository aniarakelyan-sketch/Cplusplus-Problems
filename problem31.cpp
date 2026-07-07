// Check if a number is divisible by both 2 and 3
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is divisible by both 2 and 3
    if (number % 2 == 0 && number % 3 == 0)
    {
        cout << "The number is divisible by both 2 and 3: " << endl;
    }
    else
    {
        cout << "The number is not divisible  by both 2 and 3." << endl;
    }
    return 0;
}