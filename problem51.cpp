// Problem Name: Print "Fail" if Grade < 50
#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace

int main()
{                 // Main function where program execution begins
    int grade;    // Declare an integer variable to store the grade
    cin >> grade; // Read the grade value from user input
    if (grade < 50)
    {                   // Check if the grade is less than 50
        cout << "Fail"; // If true, print "Fail"
    }
    return 0;
}
