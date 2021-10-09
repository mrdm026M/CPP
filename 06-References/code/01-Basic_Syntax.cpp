#include<iostream>
#include <string>
using namespace std;

int main()
{
    string food = "Pizza";
    string &meal = food;

    cout << food << "\n"; // output - food
    cout << meal << "\n"; // output - food

    cout << &food << "\n"; // memory address of food (hexadecimal value)
    cout << &meal; // memory address of meal which is reference variable of food and has the same address (hexadecimal value)
    return 0;
}