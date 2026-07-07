// Problem Title:Fibonacci Function Example
#include <iostream>
// Function to print the first n Fibonacci numbers void printFibonacci(int n)
void printFibonacci(int n)
{
    int a = 0, b = 1; // start with the first two Fibonacci numbers: 0 and 1
    for (int i = 0; i < n; ++i)
    {                          // loop n times to print n numbers
        std::cout << a << " "; // print the current number followed by a space
        int next = a + b;      // calculate the next Fibonacci number
        a = b;                 // move forward: current becomes the previous next
        b = next;              // update next number
    }
    std::cout << '\n'; // after the loop, print a newline for clean output
}

int main()
{
    // print a message to explain what will be shown
    std::cout << "Testing Fibonacci function (first 12 numbers):\n";
    // call the function to print the first 12 Fibonacci numbers
    printFibonacci(12);

    return 0; // return 0 means the program ended successfully
}