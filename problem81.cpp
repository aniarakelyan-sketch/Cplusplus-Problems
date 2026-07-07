// Problem: Print the multiplication table of 1.
// This program prints the multipication table of 1 using a simple for loop.
#include <iostream>
using namespace std;
int main()
{
    int n = 10; // print up to 1 x 10
    // Loop through numbers 1 to n
    for (int i = 1; i <= n; i++)
    {
        cout << "1 x " << i << " = " << 1 * i << endl;
    }
    return 0;
}