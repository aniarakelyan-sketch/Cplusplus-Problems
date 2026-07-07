// Problem: Print the smaller of two numbers.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Check which number is smaller and print the result.
    if (num1 < num2)
    {
        cout << "The smaller number is:" << num1 << endl;
    }
    else if (num1 > num2)
    {
        cout << "The smaller number is: " << num2 << endl;
    }
    else
    {
        cout << "The numbers are equal." << endl;
    }
    return 0;
}
