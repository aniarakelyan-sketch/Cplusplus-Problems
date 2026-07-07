// Problem: Print "Adult" if age is 18 or above, otherwise print "Child"
#include <iostream>
using namespace std;

int main()
{
    int age; // Declare a variable to store the entered age

    cout << "Enter your age: ";
    cin >> age;
    // Check if the age is 18 or above
    if (age >= 18)
    {
        cout << "Adult" << endl;
    }
    else
    {
        cout << "Child" << endl;
    }
    return 0;
}