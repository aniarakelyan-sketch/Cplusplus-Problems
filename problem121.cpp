// Problem Title: Print the letter 'H' using asterisks.
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; ++i)
    {
        if (i == 2)
        {
            cout << "*****\n"; // Print the horizonal line of the 'H'at the middle row.
        }
        else
        {
            cout << "*   *\n";
        }
    }
    return 0;
}
