// Problem: Print "Pass" if Grade >= 50

#include <iostream>
using namespace std;

int main()
{                 // Main function where program execution begins
    int grade;    // Declare an integer variable to store the grade
    cin >> grade; // Read the grade value from user input

    if (grade >= 50)
    {
        cout << "Pass";
    }
    else
    {
        cout << "Fail";
    }
    return 0;
}