// Problem: Print two strings together
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string firstText;  // declare a string value to hold the first input
    string secondText; // declare a string value to hold the second input

    cout << "Enter the first word: "; // prompt user for the first word input
    cin >> firstText;                 // read the first word input from user

    cout << "Enter the second word:"; // prompt user for the second word input
    cin >> secondText;                // read the second word input from user
                                      // print both strings together
    cout << "Combined strings: " << firstText + secondText << endl;
    return 0; // end the program successfully
}