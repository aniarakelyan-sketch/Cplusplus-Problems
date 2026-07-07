// ProblemTitle: "Count the Number of Vowels in a String"

#include <iostream>
#include <string> // For using string type
using namespace std;

// Function to count vowels in a string
int countVowels(const string &text)
{
    int count = 0; // Variable to store number of vowels

    // Loop through each character in the string
    for (char ch : text)
    {
        // Convert character to lowercase for easy comparison
        char lower = tolower(ch);

        // Check if character is a vowel
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
        {
            count++; // Increase count if vowel found
        }
    }

    return count; // Return total number of vowels
}

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // Read full line from user

    int result = countVowels(input); // Call the function
    cout << "Number of vowels = " << result << endl;

    return 0;
}
