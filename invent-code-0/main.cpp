#include <iostream>
#include <string>
using namespace std;

void FibonacciNumber(int length) {
  int first_add = 0;
  int second_add = 1;
  int total_sum;
  cout << "0 1";
  for (int i = 2; i < length; i++) {
    total_sum = first_add + second_add;
    cout << " " << total_sum;
    first_add = second_add;
    second_add = total_sum;
  }
  cout << endl;
}

int main() {
  unsigned int length;
  cout << "Enter how many numbers of the Fibonacci sequence you would like to print out: ";
  cin >> length;

  // Write code here.
  // Hint check for special cases when length < 2

  if (length == 0) {
    cout << "0" << endl;
  } else if (length == 1) {
    cout << "0 1" << endl;
  } else {
    FibonacciNumber(length);
  }
  return 0;
}
