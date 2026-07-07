// Problem: Print "Even"if the number is even, otherwise print "Odd".
#include <iostream>  // include input/output library to use cin and cout
using namespace std; // allow as to use names like cout and cin without writing std::cout or std::cin

int main()
{
    int number;                 // declare an integer variable to hold the user input
    cout << "Enter a number: "; // prompt user to enter a number
    cin >> number;              // read the number from user input and store it in variable number
    // Check if the number is even or odd using modulus operator
    if (number % 2 == 0)
    {
        cout << "Even" << endl; // if the number is even, print "Even"
    }
    else
    {
        cout << "Odd" << endl;
    }
    return 0;
}
