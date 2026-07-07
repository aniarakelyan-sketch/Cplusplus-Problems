// Problem: Print the alphabet in reversse order
// This program prints English alphabet letters from Z to A.

#include <iostream>
using namespace std;

int main()
{
    // Loop from 'Z' down to 'A'
    for (char c = 'Z'; c >= 'A'; c--)
    {
        cout << c << " ";
    }
    cout << endl;
    return 0;
}
