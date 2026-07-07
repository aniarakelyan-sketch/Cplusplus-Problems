// Problem: Print a double number as an integer
#include <iostream>
using namespace std;
int main()
{
    double number;
    cout << "Enter a double number:";
    cin >> number;

    int converted = static_cast<int>(number);
    // print the converted integer
    cout << "The number as integer is:" << converted << endl;
    return 0;
}