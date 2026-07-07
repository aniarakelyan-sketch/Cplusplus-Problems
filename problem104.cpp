// Problem Title: "Print numbers from 200 down to 101"
/* Problem Description:
The program prints all integers starting from 200 and ending at 101 in descending order.
This demonstrates the use of a for loop that counts backwards. */
#include <iostream>
using namespace std;
int main()
{
    for (int i = 200; i >= 101; i--)
    {
        cout << i << endl;
    }
    cout << endl;
    return 0;
}