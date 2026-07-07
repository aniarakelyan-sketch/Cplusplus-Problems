// Problem: Print numbers from 100 dawn to 1
// This program uses a for loop that starts at 100 and decreases by 1 each step.
// It prints all numbers from 100 to 1 in descending order.
#include <iostream>
using namespace std;

int main()
{
    for (int i = 100; i >= 1; i--)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}