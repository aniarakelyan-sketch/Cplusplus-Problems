// Problem: Print multiplication table of 2
// This preogram prints the multiplication table of 2 using a simple for loop.
#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        cout << "2 x " << i << " = " << 2 * i << endl;
    }
    return 0;
}