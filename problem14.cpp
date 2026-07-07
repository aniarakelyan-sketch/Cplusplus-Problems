// Problem: Print ACSII value of a character

#include <iostream>
using namespace std;

int main()
{
    char ch; // declare a char variable to hold the character input

    cout << " Enter a character: "; // prompt user for a character
    cin >> ch;
    int asciiValue = static_cast<int>(ch);                              // convert char to its ASCII integer value
    cout << "ASCII value of '" << ch << "' is: " << asciiValue << endl; // print the ASCII value
    return 0;                                                           // end the program successfully
}