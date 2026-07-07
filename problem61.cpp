// Problem: Print all odd numbers from 1 to 50
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 50; i += 2)
    {
        if (1 % 2 != 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}