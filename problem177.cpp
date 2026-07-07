// Problem Title: Check Armstrong Number
#include <iostream>
#include <cmath> // For pow() function
using namespace std;

// Function to check if a number is Armstrong
bool isArmstrong(int n)
{
    int original = n; // Store the original number
    int digits = 0;   // Count of digits

    // Count digits in the number
    int temp = n;
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    int sum = 0; // Variable to store sum of powered digits
    temp = n;

    // Calculate sum of each digit raised to 'digits' power
    while (temp > 0)
    {
        int digit = temp % 10;     // Extract last digit
        sum += pow(digit, digits); // Add digit^digits to sum
        temp /= 10;                // Remove last digit
    }

    // Compare sum with original number
    return (sum == original);
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num; // User input

    // Call the function and print result
    if (isArmstrong(num))
    {
        cout << num << " is an Armstrong number." << endl;
    }
    else
    {
        cout << num << " is NOT an Armstrong number." << endl;
    }

    return 0;
}
