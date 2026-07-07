// Problem Title: Division of two numbers
// Description: This function takes two integers as input and returns their devision. Demonstrates basic function definition in C++.
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (b != 0)
    {
        cout << "Division: " << a / b << endl;
    }
    else
    {
        cout << " Error: Division by zero is not allowed." << endl;
    }
    return 0;
}