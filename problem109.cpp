// Problem Title: Print all uppercase letters from A to Z.
/* Problem Description:
  This program prints all uppercase letters from A to Z in ascending order.
  This demonstrates the use of a for loop with character variables */
#include <iostream>
#include <cctype> // for character handling functions
#include <string> // for string handling
using namespace std;
int main()
{

    for (char letter = 'A'; letter <= 'Z'; letter++)
    {
        cout << letter << endl; // Print the current letter followed by a newline
    }
    return 0;
}