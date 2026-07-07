// Problem Title: Input two characters and check if both are digits.
/* Problem Description: The program asks the user to enter two characters.
   Based on the input, it checks whether both characters are digits (0-9).
   This demonstrates the use of the character checking functions in C++. */

#include <iostream>
#include <cctype> // for character handling functions
using namespace std;
int main()
{

    char ch1, ch2; // Variables to store user input characters
    // Ask the user to enter two characters
    cout << "Enter first character: ";
    cin >> ch1;
    cout << "Enter second character: ";
    cin >> ch2;
    /*
    Key Concepts:
    - std::cin for input
    - std::cout for output
    - <cctype> library function isdigit() to check if a character is a digit
    - logical AND (&&) to check both conditions */

    // Check if both characters are digits
    if (isdigit(ch1) && isdigit(ch2))
    {
        cout << "Both characters are digit." << endl;
    }
    else
    {
        cout << "At least one character is not a digit." << endl;
    }
    return 0;
}