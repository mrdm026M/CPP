#include<iostream>
#include<string>
using namespace std;

int main()
{
    int num = 5;

    string result = (num < 15) ? "Num is less than 15" : "Num is greater than 15";

    cout << result;
    
    // if -else statement
    // if (num < 10) // 15 < 10 - false
    // {
    //     cout << "Num is less than 10";
    // } else { // hence this statement will be executed
    //     cout << "Num is greater than 10";
    // }
    
    return 0;
}