// Problem: Check if Character is Uppercase
// Description: This program takes a character input from the user and chacks if it is an uppercase.
#include <iostream>
using namespace std;
int main()
{
    char ch{};
    cout << "Enter a character: ";
    cin >> ch;

    // Check if character is uppercase
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "The character is uppercase." << endl;
    }
    else
    {
        cout << " The character is not uppercase. " << endl;
    }
    return 0;
}
