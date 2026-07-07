// Problem: Declare a multiple variables and print them together.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age = 20;        // integer variable
    double pi = 3.14159; // double variable
    char letter = 'A';   // char variable
    string name = "Ani"; // string variable

    // Print them all together
    cout << "Name: " << name << endl
         << " Age: " << age << endl
         << " Pi: " << pi << endl
         << " Letter: " << letter << endl
         << endl;

    return 0;
}