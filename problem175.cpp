// Problem Title: "Reverse a String"
#include <iostream>
#include <string> // For using string type
using namespace std;

// Function to reverse a string
string reverseString(const string &text)
{
    string reversed = ""; // Variable to store reversed string

    // Loop through the string from end to beginning
    for (int i = text.length() - 1; i >= 0; i--)
    {
        reversed += text[i]; // Add each character in reverse order
    }

    return reversed; // Return the reversed string
}

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // Read full line from user

    // Call the function to reverse the string
    string result = reverseString(input);

    // Print the result
    cout << "Reversed string = " << result << endl;

    return 0;
}
