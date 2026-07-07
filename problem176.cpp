// Problem Title: Check anagrams
#include <iostream>
#include <string>
#include <algorithm> // For sort and transform
using namespace std;

// Function to check if two strings are anagrams
bool checkAnagram(string str1, string str2)
{
    // Convert both strings to lowercase for case-insensitive comparison
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    // Remove spaces (optional, if you want to ignore them)
    str1.erase(remove(str1.begin(), str1.end(), ' '), str1.end());
    str2.erase(remove(str2.begin(), str2.end(), ' '), str2.end());

    // If lengths are different, they cannot be anagrams
    if (str1.length() != str2.length())
    {
        return false;
    }

    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Compare sorted strings
    return str1 == str2;
}

int main()
{
    string word1, word2;
    cout << "Enter first word: ";
    getline(cin, word1);
    cout << "Enter second word: ";
    getline(cin, word2);

    if (checkAnagram(word1, word2))
    {
        cout << "The words are anagrams." << endl;
    }
    else
    {
        cout << "The words are NOT anagrams." << endl;
    }

    return 0;
}
