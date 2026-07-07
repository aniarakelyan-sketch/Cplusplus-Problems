// Problem Title: Print the season by number.
/* Problem Description:
This program prints the season based on a number input.  */
#include <iostream>
using namespace std;
int main()
{
    int season{}; // Enter a number representing the season.
    cout << "Enter a number (1-4) to get the corresponding season:" << endl;
    cin >> season; // Read the input number from the user.
    // Use a switch statement to determine the season based on the input number.
    switch (season)
    { // Switch statement to handle different cases for each season.
    case 1:
        cout << "Spring" << endl;
        break;
    case 2:
        cout << "Summer" << endl;
        break;
    case 3:
        cout << "Autumn\n";
        break;
    case 4:
        cout << "Winter\n";
        break;
    default:
        cout << "Invalid number!\n";
        break; // Handle invalid input by printing an error message.
    }
    return 0;
}