#include<iostream>
#include <string>
using namespace std;

int main()
{
    string name = "Dhruv";
    string* ptr = &name;

    cout << name << "\n"; // variable name
    cout << &name << "\n"; // memory address of variable name
    cout << ptr << "\n"; // pointer variable
    cout << *ptr << "\n"; // value of the referenced variable
    cout << &ptr << "\n"; // address of the pointer variable
    return 0;
}