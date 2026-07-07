// Problem: Print the multiplication table of 12.
#include <iostream>
using namespace std;
int main()
{
    int num = 12;
    for (int i = 1; i <= 10; i++)
    {

        cout << "12 x " << i << " = " << num * i << endl;
    }
    return 0;
}