#include<iostream>
#include<string>
using namespace std;

// single parameter
void myFunc(string name) {
    cout << "Hello World! I am " << name << "\n";
}

// multiple parameters
void myFunc2(string name, int age) {
    cout << "Name: " << name << " | " << "Age: " << age;
}

int main()
{
    string name = "Dhruv";
    myFunc(name);
    myFunc2(name, 21);
    return 0;
}