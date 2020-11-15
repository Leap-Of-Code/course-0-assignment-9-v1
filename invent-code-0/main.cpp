#include <iostream>
#include <string>
using namespace std;

int main() {
  int length;
  cout << "Enter how many numbers of the Fibonacci sequence you would like to print out: ";
  cin >> length;
  int number_1 = 0;
  int number_2 = 1;
  for (int i = 0; i < length; i++) {
    if (i == 0) {
      cout << number_1 << " ";
    } else if (i == 1) {
      cout << number_2 << " ";
    } else {
      int nextTerm = number_1 + number_2;
      number_1 = number_2;
      number_2 = nextTerm;
      cout << nextTerm << " ";
    }
  }
  return 0;
}
