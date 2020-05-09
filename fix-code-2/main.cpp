#include <iostream>
#include <string>
using namespace std;

int main() {
  int number;
  cout << "Enter a number: ";
  cin >> number;
  for (int i = 0; i < number; i++) {
    cout << "Learning to code is fun." << endl;
  }
  cout << "I used loops to print out (Learning code is fun) " << number << " times." << endl;
  return 0;
}
