// Problem: Print all numbers from 1 up to N
#include <iostream>
using namespace std;

int main()
{
    int N; // Declare a variable to store the entered number

    cout << "Enter a number: ";
    cin >> N;
    // Loop through numbers from 1 to N and print them
    for (int i = 1; i <= N; i++)
    {
        cout << i << " " << endl;
    }
    return 0;
}
