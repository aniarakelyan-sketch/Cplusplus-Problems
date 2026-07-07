// Problem:  Print the last character of the entered word

#include <iostream>  // input/output library
#include <string>    // for using string type and its functions
using namespace std; // to avoid writing std:: before cin, cout, string, etc.

int main()
{                            // declare a string value to hold user input
    string text;             // prompt user for a word input
    cout << "Enter a word:"; // read the word input from user
    cin >> text;
    // check if the string is not empty to avoid accessing out of bounds
    // text.size() gives the lenght of the string, so the last character is at index text.size() - 1
    if (!text.empty())
    {
        cout << "The last character is:" << text[text.size() - 1] << endl; // prompt the last character of the string to the user
    }
    else
    {
        cout << "You did not enter a word." << endl; // handle the case when the user does not enter anything
    }

    return 0;
}