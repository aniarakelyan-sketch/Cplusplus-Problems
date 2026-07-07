// Calculate the sum of all even numbers from 1 to 100.
#include <iostream>
using namespace std;

int main()
{
    int sum = 0;

    // Loop through numbers from 1 to 100
    for (int i = 1; i <= 100; i++)
    {
        // Check if the number is even
        if (i % 2 == 0)
        {
            sum += i; // Add the even number to the sum
        }
    }
    cout << "The sum of even numbers from 1 to 100 is: " << sum << endl;
    return 0;
}