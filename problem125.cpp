// Problem Title: Print the letter 'L' using asterisks.
#include <iostream>
using namespace std;
int main()
{
    int rows = 7;
    for (int i = 0; i < rows; ++i)
    {
        switch (i)
        {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "*\n";
            break;
        case 6:
            cout << "*****\n";
            break;
        default:
            break;
        }
    }
    return 0;
}