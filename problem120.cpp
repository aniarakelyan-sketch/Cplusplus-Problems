// Problem Title: Print the letter 'J' using asterisks.
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; ++i)
    {
        if (i == 0)
        {

            cout << "*****\n";
        }
        else if (i < 3)
        {
            cout << "    *\n";
        }
        else if (i == 3)
        {
            cout << "    *\n";
        }
        else
        {
            cout << " ***\n";
        }
    }
    return 0;
}
