#include<iostream>
using namespace std;

int add(int num) {
    return 5 + num;
}

int main()
{
    int result = add(10);
    cout << result;
    return 0;
}