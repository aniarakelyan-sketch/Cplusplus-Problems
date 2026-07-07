// Problem: Print "Poor" if Grade < 50
#include <iostream>
using namespace std;

int main()
{
    int grade;
    cin >> grade;
    if (grade < 50)
    {
        cout << "Poor";
    }
    return 0;
}