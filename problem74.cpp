// Problem: Print letter 'B' with Asterisks
// Description: This program prints th letter 'B' using asterisks (*) in a fixed-size pattern. The output resembles the uppercase letter B
#include <iostream>
using namespace std;
int main()
{
    int n = 7; // Height of the leter B

    // Loop through each row
    for (int i = 0; i < n; i++)
    {
        // First row, middle row, and last row are full
        if (i == 0 || i == n / 2 || i == n - 1)
        {
            cout << "****" << endl; // Print full row of stars
        }
        else
        {
            cout << "*  *" << endl;
        }
    }
    return 0;
}