// Problem: Check if two numbers are equal

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the first number:";
    cin >> num1;
    cout << "Enter the second number:";
    cin >> num2;
    // check if the two numbers are equal
    if (num1 == num2)
    {
        cout << "The numbers are equal." << endl;
    }
    else
    {
        cout << "The numbers are not equal." << endl;
    }
    return 0;
}
