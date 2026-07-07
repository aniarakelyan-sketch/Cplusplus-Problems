// Problem: Print a letter D usinng asterisks.
#include <iostream>
using namespace std;
int main()
{
    int rows = 6;
    int cols = 7;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == 0 || i == rows - 1)
            {
                if (j < cols - 1)
                    cout << "*";
                else
                    cout << " ";
            }
            else if (j == 0 || j == cols - 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}