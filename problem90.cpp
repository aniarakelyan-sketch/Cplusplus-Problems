// Problem: Input a character from the user and check if it is an lowercase.
#include <iostream>
using namespace std;
int main()
{
    char ch{};
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "The character is lowercase. " << endl;
    }
    else
    {
        cout << " The character is not lowercase. " << endl;
    }
    return 0;
}
