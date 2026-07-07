// Problem: Print Equal if two entered numbers are the same.
#include <iostream>
using namespace std;

int main()
{
    int a, b; // declare two variables to store the entered numbers
    cout << "Enter first number: ";
    cin >> a; // read the first number from user input and store it in variable a
    cout << "Enter second number: ";
    cin >> b; // read the second number from user input and store it in variable b
    // Check if the two numbers are equal
    if (a == b)
    {
        cout << "Equal" << endl; // if the numbers are equal, print "Equal"
    }
    else
    {
        cout << "Not Equal" << endl; // if the two numbers are not equal, print "Not Equal"
    }
    return 0;
}
