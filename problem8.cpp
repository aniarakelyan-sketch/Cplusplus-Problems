// Problem: Take two numbers from user and print their sum.
#include <iostream>  // include the input/output library so we can use cin and cout
using namespace std; // allow us to use names like cout and cin without writing std::cout or std::cin

int main()
{ // declare three integer variables: a,b for input, and sum for the result
    int a, b, sum;
    cout << "Enter first number: "; // display a message asking the user for the first number
    cin >> a;                       // read the first number from the user and store it in variable a

    cout << "Enter second number:"; // display a message asking the user for the second number
    cin >>
        b; // read the second number from the user and store it in variable b

    sum = a + b; // calculate the sum of a and b, store the result in variable sum

    cout << "Sum is: " << sum << endl; // print the result to the screen, followed by a new line

    return 0; // end the program succesfully
}