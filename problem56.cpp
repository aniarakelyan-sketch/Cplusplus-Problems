// Problem: Print "Weekend" if day is Saturday or Sunday.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string day;
    cin >> day;
    if (day == "Saturday" || day == "Sunday")
    {
        cout << "Weekend";
    }
    return 0;
}