// Problem Title: Print the letter 'Z' using asterisks.
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
            cout << "  *****  " << endl;
            break;
        case 1:
            cout << "      *  " << endl;
            break;
        case 2:
            cout << "     *   " << endl;
            break;
        case 3:
            cout << "    *    " << endl;
            break;
        case 4:
            cout << "   *     " << endl;
            break;
        case 5:
            cout << "  *      " << endl;
            break;
        case 6:
            cout << " *****   " << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}