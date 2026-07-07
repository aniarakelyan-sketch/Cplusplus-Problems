// Problem Title: Print numbers from 100 down to 9
/* Problem Description:
This program prints numbers from 100  dawn to 9 in descending order.
This demonstrates the use of a for loop that counts backwards. */
#include <iostream>
using namespace std;
int main()
{
    int i{};
    for (i = 100; i >= 9; i--)
    {

        cout << i << endl;
    }
    return 0;
}