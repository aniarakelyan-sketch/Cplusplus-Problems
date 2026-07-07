// Problem: Convert temperature from Celsius to  from Celsius to Farenheit

#include <iostream>
using namespace std;

int main()
{
    double celsius, fahrenheit; // declare two variables

    cout << "Enter temperature in Celsius: ";
    cin >> celsius; // read input from user

    fahrenheit = (celsius * 9.0 / 5.0) + 32; // conversion formula

    cout << "Temperature in Fahrenheit is: " << fahrenheit << endl;
    return 0; // end the program successfully
}
