// Problem Title: Print the letter 'G' using asterisks.
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
            cout << " ***** \n";
            break;
        case 1:
            cout << "*     *\n";
            break;
        case 2:
            cout << "*      \n";
            break;
        case 3:
            cout << "*    ** \n";
            break;
        case 4:
        case 5:
            cout << "*     * \n";
            break;
        case 6:
            cout << " ***** \n";
            break;
        default:
            break;
        }
    }
    return 0;
}