// Problem: Print "Leap Year" if Year is Divisible by 4
#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;

    if (year % 4 == 0)
    {
        cout << "Leap Year";
    }
    return 0;
}