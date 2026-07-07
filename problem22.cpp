// Check if a number is positive or negative
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number";
    cin >> number;

    // check if the numbert is positive, negative, or zero
    if (number > 0)
    {
        cout << "The number is positive." << endl;
    }
    else if (number < 0)
    {
        cout << "The number is negative." << endl;
    }
    else
    {
        cout << "The number is zero." << endl;
    }
    return 0;
}
