// Check if a number is divisible by 7?
#include <iostream>
using namespace std;
int main()
{

    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is divisible by 7
    if (number % 7 == 0)
    {
        cout << "The number is divisible by 7." << endl;
    }
    else
    {
        cout << "The number is not divisible by 7." << endl;
    }
    return 0;
}
