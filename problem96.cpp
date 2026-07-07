// Problem: Print the letter C using asterisks
#include <iostream>  // Include the iostream library to use input/output functions
using namespace std; // Use the standard namespace to avoid writting std:: before cout
int main()
{
    int rows = 6; // Define the number of rows for the letter C
    int cols = 7; // Define the number of columns (width of the letter)

    // Outer loop: goes through each row one by one
    for (int i = 0; i < rows; i++)
    {
        // Inner loop: goes through each column in the current row
        for (int j = 0; j < cols; j++)
        {
            // Condition 1: If we are on the first row or the last row
            // print stars across the entire width to form the top and botom of C
            if (i == 0 || i == rows - 1)
            {
                cout << "*";
            }
            else if (j == 0)
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