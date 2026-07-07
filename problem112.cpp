// Problem Title: Print  day of week by number.
/* Problem Description:
This program prints the day of week based on a number input.  */
#include <iostream>
using namespace std;
int main()
{
    int day{}; // Enter a number representing the day of the week.
    cout << "Enter a number (1-7) to get the corresponding day of the week:" << endl;
    cin >> day; // Read the input number from the user.
    // Use a switch statement to determine the day of the week based on the input number.
    switch (day)
    { // Switch statement to handle different cases for each day of the week.
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday\n";
        break;
    case 4:
        cout << "Thursday\n";
        break;
    case 5:
        cout << "Friday\n";
        break;
    case 6:
        cout << "Saturday\n";
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid number!\n";
        break; // Handle invalid input by printing an error message.
    }
    return 0;
}