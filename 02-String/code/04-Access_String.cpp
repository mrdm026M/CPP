#include<iostream>
#include <string>
using namespace std;

int main()
{
    string name="Dhruv Maheshwari";

    // accessing particular character in string
    cout << name[0] << "\n"; // output - D
    cout << name[10] << "\n"; // output - s

    // accessing all characters in string using for loop
    for (int i = 0; i < name.length(); i++)
    {
        cout << "Character at index " << i << " : " <<name[i] << "\n";
    }
    
    return 0;
}