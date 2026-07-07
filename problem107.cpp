// Problem Title: Print numbers from 900 down to 10
/* Problem Description:
   The program prints all integers starting from 900 and ending at 10 in descending order.
   This demonstrates the use of a for loop that counts backwards. */

#include <iostream>
using namespace std;
int main()
{
    int i{};
    for (i = 900; i >= 10; i--)
    {
        cout << i << endl;
    }
    return 0;
}