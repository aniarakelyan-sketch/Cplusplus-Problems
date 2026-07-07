// Problem: Check if age indicates adulthood (18 or older)

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // Check if the person is an adult  (18 or older)
    if (age >= 18)
    {
        cout << "you are an adult." << endl;
    }
    else if (age > 0 && age < 18)
    {
        cout << " You are not an adult. " << endl;
    }
    else
    {
        cout << "Invalid age entered." << endl;
    }
    return 0;
}
