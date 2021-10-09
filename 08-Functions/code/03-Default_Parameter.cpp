#include<iostream>
#include<string>
using namespace std;

void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
  myFunction("Sweden"); // output - Sweden
  myFunction("India"); // output - India
  myFunction(); // output - Norway
  myFunction("USA"); // output - USA
  return 0;
}