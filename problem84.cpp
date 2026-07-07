// Problem: Print multiplication table of 3 .
// This program prints the multiplication table of 3 using a simple for loop.
#include <iostream>
using namespace std;
int main()
{
    int n = 20;
    for (int i = 1; i <= n; i++)
    {
        cout << "3 x " << i << " = " << 3 * i << endl;
    }
    return 0;
}