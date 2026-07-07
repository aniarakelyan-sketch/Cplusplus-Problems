// Problem19: Print a number as double
#include <iostream>
using namespace std; // allow us to use names like cout and cin without writing std::cout or std::cin
int main()
{
    double number;             // declare a double variable to hold the input number
    cout << "Enter a number:"; // prompt user for input number
    cin >> number;             // read the input number from user and store it in variable number
    // print the number as double (it will automatically be prin)
    cout << "The number as double is: " << number << endl;
    return 0;
}
