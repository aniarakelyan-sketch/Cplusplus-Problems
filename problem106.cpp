// Problem Title: Print the grade based on number
/* Problem Description:
   The program asks the user to enter a number (0-100).
   Based on the number, it prints the corresponding grade.
   This demonstrates the use of if-else branching in C++. */
#include <iostream>
using namespace std;
int main()
{
    int score; // Variable to store user input (the score)

    // Ask the user to enter a score
    cout << "Enter your score (0-100): ";
    cin >> score;
    /* Key Concepts:
    - std::cin for input
    - std::cout for output
    - if-else branching for decision making
    - logical conditions to check ranges */

    // Check the score and print the grade
    if (score >= 90 && score <= 100)
    {
        cout << "Grade: A" << endl;
    }
    else if (score >= 80 && score < 90)
    {
        cout << "Grade: B" << endl;
    }
    else if (score >= 70 && score < 80)
    {
        cout << "Grade: C" << endl;
    }
    else if (score >= 60 && score < 70)
    {
        cout << "Grade: D" << endl;
    }
    else if (score >= 50 && score < 60)
    {
        cout << "Grade: E" << endl;
    }
    else if (score >= 40 && score < 50)
    {
        cout << " Grade: F" << endl;
    }
    else if (score >= 30 && score < 40)
    {
        cout << "Grade: G" << endl;
    }
    else if (score >= 20 && score < 30)
    {
        cout << "Grade: H" << endl;
    }
    else if (score >= 10 && score < 20)
    {

        cout << "Grade: I" << endl;
    }
    else if (score > 0 && score < 10)
    {

        cout << "Grade: J" << endl;
    }
    else
    {
        cout << " Invalid score. Please enter a number between 0 and 100." << endl;
    }

    return 0;
}
