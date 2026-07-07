// Problem Title: Print sport type based on user choice"
/* Problem Description:
The program asks the user to enter a number.
Based on the number, it prints the corresponding sport type.
This demonstrates the use of switch-case branching in C++.
*/
#include <iostream>
using namespace std;
int main()
{
    int choice; // Variable to store user choice
    // Display menu options
    cout << "Choose a sport by entering a number:\n";
    cout << "1 - Football\n";
    cout << "2 - Basketball\n";
    cout << "3 - Tennis\n";
    cout << "4 - Swimming\n";
    cout << "Enter your choice: ";
    cin >> choice;

    /* Key Concepts:
    - std::cin for input
    - std::cout for output
    - switch-case for multiple choice decisions
    - default case for handling invalid input
    */
    // Switch-case to decide which sport to print
    switch (choice)
    {
    case 1:
        cout << "You choose Football." << endl;
        break;
    case 2:
        cout << "You choose Basketball." << endl;
        break;
    case 3:
        cout << "You choose Tennis." << endl;
        break;
    case 4:
        cout << "You chose Swimming." << endl;
        break;
    default:
        cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        break;
    }
    return 0;
}