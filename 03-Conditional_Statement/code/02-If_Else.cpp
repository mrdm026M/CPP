#include<iostream>
using namespace std;

int main()
{
    int num = 15;
    
    if (num < 10) // 15 < 10 - false
    {
        cout << "Num is less than 10";
    } else { // hence this statement will be executed
        cout << "Num is greater than 10";
    }
    
    return 0;
}