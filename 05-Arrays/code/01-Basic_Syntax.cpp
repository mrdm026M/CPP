#include<iostream>
#include <String>
using namespace std;

int main()
{
    string names[4] = {"Dhruv", "Kartik", "Kid", "Cat"};
    cout << names[0] << "\n";

    for (size_t i = 0; i < 4; i++)
    {
        cout << names[i] << "\n";
    }
    
    return 0;
}