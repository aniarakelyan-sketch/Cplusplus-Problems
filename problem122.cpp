// Problem Title: Print the letter 'I' using asterisks.
#include <iostream>
using namespace std;
int main()
{
    int rows = 5; // Number of rows for the letter 'I'.
    for (int i = 0; i < rows; ++i)
    {
        switch (i)
        {
        case 0:
            cout << "*****\n";
            break;
        case 4:
            cout << "*****\n";
            break;
        default:
            cout << "  *  \n";
            break;
        }
    }
    return 0;
}