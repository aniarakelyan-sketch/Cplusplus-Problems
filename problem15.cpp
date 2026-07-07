// Problem: Print string length
#include <iostream>
#include <string> // include string library to use string type and its functions
using namespace std;

int main()
{
    string text;                                                  // declare a string variable to hold user input
    cout << "Enter a string: ";                                   // prompt user for a string input
    getline(cin, text);                                           // read the entire line including spaces
    cout << "Length of the string is: " << text.length() << endl; // print the length of the string
    return 0;                                                     // end the program successfully
}