// Problem: Convert number to character
// This program shows how to turn an integer into a char symbol.
#include <iostream>
using namespace std;

int main()
{
    int number = 65;
    char symbol = (char)number; // Convert integer to char
    cout << "Number: " << number << endl;
    cout << "Symbol: " << symbol << endl;

    return 0;
}