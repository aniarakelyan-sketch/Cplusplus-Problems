// Problem: Print "Weekday" if if Monday to Friday.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string day;
    cin >> day;
    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == " Thursday" || day == "Friday")
    {
        cout << "Weekday";
    }
    return 0;
}