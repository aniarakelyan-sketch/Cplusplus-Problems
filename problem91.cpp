// Problem: Write a program that reads a lowercase character, converts it to uppercase, and prints the result.
#include <iostream>
#include <cctype>
using namespace std;
int main()
/* {
    char ch{};
    cout << "Enter a lowercase letter: ";
    cin >> ch;
    if (islower(ch))
    {
        cout << "Uppercase: " << char(toupper(ch)) << endl;
    }
    else
    {
        cout << "Not a lowercase letter." << endl;
    }
    return 0;
}
*/
{
    char ch{};
    cout << " Enter a lowercase letter: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        char upper = ch - 32;
        cout << "Uppercase: " << upper << endl;
    }
    else
    {
        cout << " Not a lowercase letter." << endl;
    }
    return 0;
}
