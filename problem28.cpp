// Check the lenght of a word

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cout << "Enter a word: ";
    cin >> word;

    // Print the lenght of the word.

    cout << "The lenght of  the word: " << word.size() << endl;
    return 0;
}