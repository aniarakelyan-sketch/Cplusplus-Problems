// Problem: Calculate the average of three numbers entered by the user
#include <iostream>
using namespace std;

int main()
{
    double a, b, c, average; // Declare three input numbers and one for the average

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number:";
    cin >> b;

    cout << " Enter third number: ";
    cin >> c;

    average = (a + b + c) / 3; // calculate the average
    cout << " Average is: " << average << endl;
    return 0; // end the program successfully
}