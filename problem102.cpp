// Problem Title: "Enter a character and check it".
/*Problem description:
The program asks the user to input a value.
We want to check whether the input is:
- a number (all digits),
- a word (all letters),
- or something else (symbols or mixed content).
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input; // Variable to store the user input

    /* Why string instead of char?
    If we use 'char', only the first character is read.
    For example, entering "1000" would only capture '1'.
    By using 'string', we can analyze the entire input.
    */
    cout << "Enter a character or word: "; // Prompt the user for input
    cin >> input;                          // Read the input from user

    bool isDigit = true; // Assume all characters are digits
    bool isAlpha = true; // Assume all characters are letters
                         /* Key Concepts:
                         - std::cin for input
                         - std::cout for output
                         - string type  to store multiple characters
                         - for loop to check each character
                         - logical operators (&&, ||) for conditions
                         - if-else branching for decision making
                         */
    // Check each character in the input string
    for (char ch : input)
    {
        if (!(ch >= '0' && ch <= '9'))
        {
            isDigit = false; // if any digit is not a digit, it's not a number.
        }
        if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')))
        {
            isAlpha = false; // if any character is not a letter, it's not a word.
        }
    }
    // Output the result based on the checks
    if (isDigit)
    {
        cout << "You entered a number." << endl;
    }
    else if (isAlpha)
    {
        cout << " You enterted a word." << endl;
    }
    else
    {
        cout << "You entered symbols or mixed content." << endl;
    }
    return 0;
}
