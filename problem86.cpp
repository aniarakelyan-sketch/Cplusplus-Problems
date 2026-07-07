// Problem: Print multiplication table of 5
//  This program prints the multiplication table of 5 using a simple for loop.
#include <iostream>
using namespace std;
int main()
{
    int n = 100;
    for (int i = 1; i <= n; i++)
    {
        cout << " 5 x " << i << " = " << 5 * i << endl;
    }
    return 0;
}