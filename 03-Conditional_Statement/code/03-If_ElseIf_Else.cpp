#include<iostream>
using namespace std;

int main()
{
    int num = 15;
    
    if (num < 10) // 15 < 10 - false
    {
        cout << "Num is less than 10";
    } else if (num == 15) // 15 == 15 - true
    {
        cout << "Num is equal to 15";
    }
    else {
        cout << "Num is greater than 10";
    }
    
    return 0;
}