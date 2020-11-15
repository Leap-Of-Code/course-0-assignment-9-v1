#include <iostream>
#include <string>
using namespace std;

int main() {
  int a = 0;
  for (int i = 0; i < 12; i++) {
    cout << "Learning to code is fun." << endl;
    a = i;
  }
  cout << "I used loops to print out (Learning code is fun) " << a << " times.";
  return 0;
}
