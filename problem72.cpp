// Problem: Convert uppercase letter to lowercase
// This program reads an uppercase character and prints its lowercase version.
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char upper;
    cout << "Enter an uppercase letter: ";
    cin >> upper;

    cout << "Lowercase version: " << (char)tolower(upper) << endl;
    return 0;
}