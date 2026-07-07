// Problem: Convert Celsius to Fahrenheit
// This program reads a Celsius temperature from the user,
// converts it to Fahrenheit using the formula F = (C * 9/5) + 32,
// and prints the result.

#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius)
{
    return (celsius * 9.0 / 5.0) + 32;
}

int main()
{
    cout << celsiusToFahrenheit(37) << endl;
    return 0;
}
