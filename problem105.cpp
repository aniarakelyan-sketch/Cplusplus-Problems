// Problem Title: Print month name based on user choice
/* Problem Description:
   The program asks the user to enter a number (1-12).
    Based on the number, it prints the corresponding month name.
     This demonstrates the use of switch-case branching in C++.*/
#include <iostream>
using namespace std;
int main()
{
    int choice; // Variable to store user choice
    // Display menu options
    cout << "Choose a month by entering a number (1-12): ";
    cin >> choice;
    switch (choice)
    { // Switch-case to decide which month to print
    case 1:
        cout << "January" << endl;
        break;
    case 2:
        cout << "February" << endl;
        break;
    case 3:
        cout << "March" << endl;
        break;
    case 4:
        cout << "April" << endl;
        break;
    case 5:
        cout << "May" << endl;
        break;
    case 6:
        cout << "June" << endl;
        break;
    case 7:
        cout << "July" << endl;
        break;
    case 8:
        cout << "August" << endl;
        break;
    case 9:
        cout << "September" << endl;
        break;
    case 10:
        cout << "October" << endl;
        break;
    case 11:
        cout << "November" << endl;
        break;
    case 12:
        cout << " December" << endl;
        break; // Default case for handling invalid input
    default:   // Invalid choice
        cout << "Invalid choice. Please enter a number between 1 and 12." << endl;
        break;
    }
    return 0;
}