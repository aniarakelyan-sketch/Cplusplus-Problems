// Problem: Print a square using asterisks.
// This program prints a square of size n x n with '*'.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of square: ";
    cin >> n; // Input the size of the square
    // Outer loop for rows
    for (int i = 0; i < n; i++)
    {
        // Inner loop controls the number of columns in each row.
        for (int j = 0; j < n; j++)
        {
            cout << " * "; // Print an asterisk followd by space
        }
        cout << endl; // Move to the next line after finishing one row
    }
    return 0;
}