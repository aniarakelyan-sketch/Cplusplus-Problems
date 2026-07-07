// Problem 16: Print the first character of the entered word

#include <iostream>  // input/output library
#include <string>    // for using string type and its functions
using namespace std; // to avoid writing std:: before cin, cout, string, etc.

int main()
{
    string text;             // declare a string value to hold user input
    cout << "Enter a word:"; // prompt user for a word input
    cin >> text;             // read the word input from user

    // check if the string is not empty to avoid accessing out of bounds
    if (!text.empty())
    {
        cout << "The first character is: " << text[0] << endl; // prompt the first character of the string to the user
    }
    else
    {
        cout << "You did not enter a word." << endl; // handle the case when the user does not enter anything
    }
    return 0; // end the program successfully
}