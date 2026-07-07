// Problem: Pront "Positive", if the entered number is greater than 0,otherwise print "Negative" if the number is less than 0
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    // Check if the number is positive or negative
    if (number > 0)
    {
        cout << "Positive" << endl;
    }
    else if (number < 0)
    {
        cout << "Negative" << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }
    return 0;
}