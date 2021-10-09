#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name = "Dhruv";
    cout << name << "\n";

    // user-input of string
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName); // getline function takes cin - 1st input variable name - 2nd input
    cout << "Full name: " << fullName;
    return 0;
}