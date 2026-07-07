// Problem: Input two characters and find the smaller one
// This program reads two characters from the user input and prints the smaller one.
#include <iostream>
using namespace std;
int main()
{

    char a, b; // Variables to store the two characters

    cout << " Enter first character: ";
    cin >> a; // Input first character

    cout << "Enter second character: ";
    cin >> b; // Input first character

    // Compare the two characters
    if (a < b)
    {
        cout << "Smaller charavter is: " << a << endl;
    }
    else if (b < a)
    {
        cout << "Smaller character is: " << b << endl;
    }
    else
    {
        cout << "Both characters are equal: " << a << endl;
    }
    return 0;
}
