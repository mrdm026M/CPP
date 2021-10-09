#include<iostream>
#include <string>
using namespace std;

int main()
{
    // concatenation of two strings using "+" operator
    string firstName = "Dhruv";
    string lastName = "Maheshwari";
    string fullName = firstName + lastName;

    // add space between strings
    string fullNameWithSpace = firstName + " " + lastName;

    // using append method
    string fullNameUsingAppend = firstName.append(lastName);
    cout << fullName << "\n";
    cout << fullNameWithSpace << "\n";
    cout << fullNameUsingAppend;
    return 0;
}